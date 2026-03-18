/*
 * XREFs of MiLockOwnedProtoPage @ 0x1402158F0
 * Callers:
 *     MiResolveProtoPteFault @ 0x140214BB0 (MiResolveProtoPteFault.c)
 *     MiLockProtoPoolPageForce @ 0x140215A80 (MiLockProtoPoolPageForce.c)
 *     MiRelockProtoPoolPage @ 0x14023BCDC (MiRelockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x14023BE50 (MiCheckProtoPtePageState.c)
 * Callees:
 *     MiWriteValidPteVolatile @ 0x140232800 (MiWriteValidPteVolatile.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSpinForProtoPoolLock @ 0x14042C460 (MiSpinForProtoPoolLock.c)
 *     MiGetLeafPfnBuddy @ 0x14043A990 (MiGetLeafPfnBuddy.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiLockOwnedProtoPage(__int64 a1)
{
  _DWORD *v1; // rbp
  __int64 *v3; // rdi
  int v4; // eax
  __int64 result; // rax
  unsigned int v6; // esi
  __int64 LeafPfnBuddy; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  _DWORD v10[16]; // [rsp+60h] [rbp+0h] BYREF

  v1 = (_DWORD *)((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL);
  memset_0((void *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL) + 64), 0, 0x40uLL);
  v3 = (__int64 *)(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  if ( (*(_BYTE *)(a1 + 34) & 0x20) != 0 )
  {
    v6 = 0;
    *(_DWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0;
    LeafPfnBuddy = MiGetLeafPfnBuddy(a1, 1LL);
    if ( LeafPfnBuddy )
    {
      v9 = *(_QWORD **)(LeafPfnBuddy + 8);
      if ( *v9 != LeafPfnBuddy )
        __fastfail(3u);
      *(_QWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v9;
      *(_QWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = LeafPfnBuddy;
      *v9 = v1 + 16;
      *(_QWORD *)(LeafPfnBuddy + 8) = v1 + 16;
    }
    else
    {
      *(_QWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 64;
      *(_QWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 64;
      *(_QWORD *)a1 = ((unsigned __int64)(v1 + 16) >> 3) ^ (*(_QWORD *)a1 ^ ((unsigned __int64)(v1 + 16) >> 3)) & 0xFFFFF00000000001uLL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiSpinForProtoPoolLock(v1 + 16);
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8) )
        {
          HvlNotifyLongSpinWait(v6);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 32);
    *v1 = v4;
    *(_BYTE *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL) + 2) = BYTE2(v4) | 0x20;
    *(_DWORD *)(a1 + 32) = *v1;
  }
  result = *(_QWORD *)(a1 + 24);
  if ( (result & 0x4000000000000000LL) == 0 )
  {
    result = *v3;
    if ( (*v3 & 0x20) == 0 )
      result = MiWriteValidPteVolatile((ULONG_PTR)v3);
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
