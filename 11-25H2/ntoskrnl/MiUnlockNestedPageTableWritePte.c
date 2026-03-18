/*
 * XREFs of MiUnlockNestedPageTableWritePte @ 0x1402FBBD4
 * Callers:
 *     MiRewritePteWithLockBit @ 0x1402110AC (MiRewritePteWithLockBit.c)
 *     MiWsleFlush @ 0x1402479D4 (MiWsleFlush.c)
 *     MiClearPteAccessed @ 0x1402493D0 (MiClearPteAccessed.c)
 *     MiEvictPageTableLock @ 0x1402FB4A4 (MiEvictPageTableLock.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiShouldLockPteDirectly @ 0x1402FBE90 (MiShouldLockPteDirectly.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     MiReplicatePteChange @ 0x1404F4ED8 (MiReplicatePteChange.c)
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
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E37180);
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
    v11 = !MiPteInShadowRange(0xFFFFF6FB7DBEDF68uLL);
    goto LABEL_19;
  }
  if ( v8 )
  {
    if ( (a3 & 1) != 0 )
      goto LABEL_12;
    v16 = a3;
    v12 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)v6) )
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
      if ( MiPteInShadowRange((unsigned __int64)v6) )
        MiWritePteShadow(v6, a3);
      v6 = 0LL;
      goto LABEL_12;
    }
    if ( (a3 & 1) != 0 )
    {
      MiWriteValidPteNewProtection((ULONG_PTR)v6, a3);
      goto LABEL_12;
    }
    v17 = a3;
    v12 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)v6) )
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
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E37180);
    }
  }
  if ( v6 )
    MiUnlockPageTable(a1, (unsigned __int64)v6);
}
