/*
 * XREFs of MiUnlockNestedPageTableWritePte @ 0x140285DE4
 * Callers:
 *     MiRewritePteWithLockBit @ 0x14020CBCC (MiRewritePteWithLockBit.c)
 *     MiClearPteAccessed @ 0x1402307A0 (MiClearPteAccessed.c)
 *     MiEvictPageTableLock @ 0x140234EEC (MiEvictPageTableLock.c)
 *     MiTerminateWsle @ 0x1402856F0 (MiTerminateWsle.c)
 *     MiWsleFlush @ 0x140286410 (MiWsleFlush.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiShouldLockPteDirectly @ 0x140406BA0 (MiShouldLockPteDirectly.c)
 *     MiReplicatePteChange @ 0x1404F761C (MiReplicatePteChange.c)
 */

void __fastcall MiUnlockNestedPageTableWritePte(__int64 a1, unsigned __int64 a2, ULONG_PTR a3, int a4)
{
  volatile __int64 *v6; // rdi
  unsigned __int64 v8; // rsi
  int v9; // r15d
  int v10; // ebp
  bool v11; // zf
  int v12; // esi

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
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E373C0);
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
      MiCheckLinearProtectedPteAccessedBit(0xFFFFF6FB7DBEDF68uLL, a3, 128);
    _InterlockedExchange64((volatile __int64 *)0xFFFFF6FB7DBEDF68LL, a3);
    v11 = (unsigned int)MiPteInShadowRange(0xFFFFF6FB7DBEDF68uLL) == 0;
    goto LABEL_19;
  }
  if ( v8 )
  {
    if ( (a3 & 1) != 0 )
      goto LABEL_12;
    v12 = 0;
    if ( !(unsigned int)MiPteInShadowRange(v6) )
      goto LABEL_44;
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
        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v6, a3, 128);
      }
      _InterlockedExchange64(v6, a3);
      if ( (unsigned int)MiPteInShadowRange(v6) )
        MiWritePteShadow();
      v6 = 0LL;
      goto LABEL_12;
    }
    if ( (a3 & 1) != 0 )
    {
      MiWriteValidPteNewProtection((ULONG_PTR)v6, a3);
      goto LABEL_12;
    }
    v12 = 0;
    if ( !(unsigned int)MiPteInShadowRange(v6) )
      goto LABEL_44;
  }
  v12 = MiSanitizeShadowPxe();
LABEL_44:
  v11 = v12 == 0;
  *v6 = a3;
LABEL_19:
  if ( !v11 )
    MiWritePteShadow();
LABEL_12:
  if ( v10 )
  {
    if ( v9 )
    {
      MiReplicatePteChange(v6, 1LL);
      if ( !a4 )
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E373C0);
    }
  }
  if ( v6 )
    MiUnlockPageTableInternal(a1, v6);
}
