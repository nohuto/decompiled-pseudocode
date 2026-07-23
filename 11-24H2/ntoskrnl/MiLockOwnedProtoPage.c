/*
 * XREFs of MiLockOwnedProtoPage @ 0x1403354A0
 * Callers:
 *     MiLockProtoPoolPageForce @ 0x140333E20 (MiLockProtoPoolPageForce.c)
 *     MiResolveProtoPteFault @ 0x140334760 (MiResolveProtoPteFault.c)
 *     MiRelockProtoPoolPage @ 0x140345A40 (MiRelockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x140345BB0 (MiCheckProtoPtePageState.c)
 * Callees:
 *     MiWriteValidPteVolatile @ 0x140203330 (MiWriteValidPteVolatile.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSpinForProtoPoolLock @ 0x14041F210 (MiSpinForProtoPoolLock.c)
 *     MiGetLeafPfnBuddy @ 0x14042D1D0 (MiGetLeafPfnBuddy.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

signed __int64 __fastcall MiLockOwnedProtoPage(__int64 a1)
{
  _DWORD *v1; // rbp
  __int64 v3; // r8
  __int64 v4; // r9
  volatile signed __int64 *v5; // rdi
  int v6; // eax
  signed __int64 result; // rax
  unsigned int v8; // esi
  __int64 LeafPfnBuddy; // rax
  _QWORD *v10; // rcx
  _DWORD v11[16]; // [rsp+60h] [rbp+0h] BYREF

  v1 = (_DWORD *)((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL);
  memset_0((void *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL) + 64), 0, 0x40uLL);
  v5 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  if ( (*(_BYTE *)(a1 + 34) & 0x20) != 0 )
  {
    v8 = 0;
    *(_DWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0;
    LeafPfnBuddy = MiGetLeafPfnBuddy(a1, 1LL, v3, v4);
    if ( LeafPfnBuddy )
    {
      v10 = *(_QWORD **)(LeafPfnBuddy + 8);
      if ( *v10 != LeafPfnBuddy )
        __fastfail(3u);
      *(_QWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v10;
      *(_QWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = LeafPfnBuddy;
      *v10 = v1 + 16;
      *(_QWORD *)(LeafPfnBuddy + 8) = v1 + 16;
    }
    else
    {
      *(_QWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 64;
      *(_QWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 64;
      *(_QWORD *)a1 = ((unsigned __int64)(v1 + 16) >> 3) ^ (*(_QWORD *)a1 ^ ((unsigned __int64)(v1 + 16) >> 3)) & 0xFFFFF00000000001uLL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiSpinForProtoPoolLock(v1 + 16);
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v8);
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
    v6 = *(_DWORD *)(a1 + 32);
    *v1 = v6;
    *(_BYTE *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL) + 2) = BYTE2(v6) | 0x20;
    *(_DWORD *)(a1 + 32) = *v1;
  }
  result = *(_QWORD *)(a1 + 24);
  if ( (result & 0x4000000000000000LL) == 0 )
  {
    result = *v5;
    if ( (*v5 & 0x20) == 0 )
      result = MiWriteValidPteVolatile(v5, 1, 0);
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
