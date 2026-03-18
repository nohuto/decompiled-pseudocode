/*
 * XREFs of MiSetPageZeroInProgress @ 0x1404328F0
 * Callers:
 *     MiGetBestPageToZero @ 0x140432590 (MiGetBestPageToZero.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140220DD0 (MiGetPfnPageSizeIndex.c)
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     MiIsDecayPfn @ 0x140241130 (MiIsDecayPfn.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiTryLockPageAtDpcInline @ 0x14042E9B0 (MiTryLockPageAtDpcInline.c)
 *     MiBeginPageAccessor @ 0x14043DDD0 (MiBeginPageAccessor.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiSetPageZeroInProgress(__int64 *a1)
{
  unsigned __int64 v1; // r9
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // r15
  ULONG_PTR v7; // rsi
  __int64 v8; // r8
  __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // bl
  int v11; // esi

  v1 = *((unsigned int *)a1 + 7);
  v3 = *a1;
  v4 = HIWORD(*((_DWORD *)a1 + 7)) & 3;
  if ( (unsigned __int8)MmNumberOfChannels <= 1u )
    v5 = 0LL;
  else
    v5 = ((unsigned int)v1 >> 8) & 1;
  v6 = *(_QWORD *)(v3 + 8 * (((v1 >> 18) & 3) + 4 * (v5 + 4 * (((*((_DWORD *)a1 + 7) >> 15) & 1) + 10 * v4))) + 1056)
     + 88LL * (unsigned __int8)v1;
  v7 = *(_QWORD *)(v6 + 16);
  if ( v7 == 0x3FFFFFFFFFLL )
    return 0LL;
  v8 = 0xFFFFDE0000000000uLL;
  while ( 1 )
  {
    if ( v7 > qword_140E2D9A0 && !MiIsDecayPfn(v7) )
      goto LABEL_29;
    v9 = v8 + 48 * v7;
    if ( (*(_DWORD *)(v9 + 32) & 0x80000) != 0 )
      return 0LL;
    if ( (a1[4] & 0x400) != 0 )
    {
      CurrentIrql = MiSafeLockPage(v7, 2LL, v8);
    }
    else
    {
      if ( *(__int64 *)(v9 + 24) < 0 )
        return 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
      if ( (*(_QWORD *)(v9 + 40) & 0x40000000000000LL) == 0 && !MiIsDecayPfn(v7) )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        goto LABEL_28;
      }
      if ( !MiTryLockPageAtDpcInline(v9) )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        *((_DWORD *)a1 + 8) |= 2u;
        return 0LL;
      }
    }
    if ( CurrentIrql != 17 )
      break;
LABEL_28:
    v8 = 0xFFFFDE0000000000uLL;
LABEL_29:
    v7 = *(_QWORD *)(v6 + 16);
    if ( v7 == 0x3FFFFFFFFFLL )
      return 0LL;
  }
  v11 = HIWORD(*(_DWORD *)(v9 + 32));
  if ( (HIWORD(*(_DWORD *)(v9 + 32)) & 7) != 1
    || (unsigned int)MiGetPfnPageSizeIndex(v9) != (_DWORD)v4
    || *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) != *(_QWORD *)(v3 + 14984) )
  {
    MiUnlockPage(v9, CurrentIrql);
    goto LABEL_28;
  }
  if ( (v11 & 8) == 0 )
  {
    MiBeginPageAccessor(a1[5], (unsigned int)v4, v9, 0LL);
    MiUnlockPage(v9, CurrentIrql);
    return v9;
  }
  MiUnlockPage(v9, CurrentIrql);
  return 0LL;
}
