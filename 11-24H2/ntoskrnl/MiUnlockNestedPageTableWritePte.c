/*
 * XREFs of MiUnlockNestedPageTableWritePte @ 0x1402023A0
 * Callers:
 *     MiWsleFlush @ 0x140201004 (MiWsleFlush.c)
 *     MiTerminateWsle @ 0x140201850 (MiTerminateWsle.c)
 *     MiEvictPageTableLock @ 0x14020EE7C (MiEvictPageTableLock.c)
 *     MiClearPteAccessed @ 0x140304BA0 (MiClearPteAccessed.c)
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiShouldLockPteDirectly @ 0x140203630 (MiShouldLockPteDirectly.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReplicatePteChange @ 0x1404F4EFC (MiReplicatePteChange.c)
 */

void __fastcall MiUnlockNestedPageTableWritePte(__int64 a1, unsigned __int64 a2, ULONG_PTR a3, int a4)
{
  volatile __int64 *v6; // rdi
  unsigned __int64 v8; // rsi
  int v9; // r15d
  int v10; // ebp
  bool v11; // zf
  int v12; // esi
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  ULONG_PTR v16; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR v17; // [rsp+58h] [rbp+10h] BYREF

  v6 = (volatile __int64 *)a2;
  v8 = 0LL;
  v9 = 0;
  if ( a2 < 0xFFFFF6FB7DBED000uLL || a2 > 0xFFFFF6FB7DBEDFFFuLL )
  {
    v10 = 0;
  }
  else
  {
    v10 = 1;
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    {
      v9 = 1;
      if ( !a4 )
        ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
    }
    else
    {
      v8 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7];
    }
  }
  if ( v6 == (volatile __int64 *)0xFFFFF6FB7DBEDF68LL )
  {
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    if ( _bittest64(&MiFlags, 0x24u) && (a3 & 1) != 0 && (a3 & 0x20) == 0 )
      MiCheckLinearProtectedPteAccessedBit(0xFFFFF6FB7DBEDF68uLL, a3);
    _InterlockedExchange64((volatile __int64 *)0xFFFFF6FB7DBEDF68LL, a3);
    v11 = (unsigned int)MiPteInShadowRange(0xFFFFF6FB7DBEDF68uLL) == 0;
    goto LABEL_19;
  }
  if ( v8 )
  {
    if ( (a3 & 1) != 0 )
      goto LABEL_12;
    v16 = a3;
    v12 = 0;
    if ( !(unsigned int)MiPteInShadowRange(v6) )
      goto LABEL_45;
    v14 = MiSanitizeShadowPxe(v13, &v16);
    a3 = v16;
  }
  else
  {
    if ( (unsigned int)MiShouldLockPteDirectly(a1, v6) )
    {
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      if ( _bittest64(&MiFlags, 0x24u)
        && (a3 & 1) != 0
        && (a3 & 0x20) == 0
        && (unsigned __int64)v6 >= 0xFFFFF6C000000000uLL )
      {
        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v6, a3);
      }
      _InterlockedExchange64(v6, a3);
      if ( (unsigned int)MiPteInShadowRange(v6) )
        MiWritePteShadow(v6, a3);
      v6 = 0LL;
      goto LABEL_12;
    }
    if ( (a3 & 1) != 0 )
    {
      MiWriteValidPteNewProtection((ULONG_PTR)v6);
      goto LABEL_12;
    }
    v17 = a3;
    v12 = 0;
    if ( !(unsigned int)MiPteInShadowRange(v6) )
      goto LABEL_45;
    v14 = MiSanitizeShadowPxe(v15, &v17);
    a3 = v17;
  }
  v12 = v14;
LABEL_45:
  v11 = v12 == 0;
  *v6 = a3;
LABEL_19:
  if ( !v11 )
    MiWritePteShadow(v6, a3);
LABEL_12:
  if ( v10 )
  {
    if ( v9 )
    {
      MiReplicatePteChange(v6, 1LL);
      if ( !a4 )
        ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
    }
  }
  if ( v6 )
    MiUnlockPageTableInternal(a1, v6);
}
