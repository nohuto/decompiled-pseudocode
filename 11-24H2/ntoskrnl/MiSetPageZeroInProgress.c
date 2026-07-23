/*
 * XREFs of MiSetPageZeroInProgress @ 0x140414240
 * Callers:
 *     MiGetBestPageToZero @ 0x140413ED0 (MiGetBestPageToZero.c)
 * Callees:
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiIsDecayPfn @ 0x1403028E0 (MiIsDecayPfn.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiTryLockPageAtDpcInline @ 0x140419060 (MiTryLockPageAtDpcInline.c)
 *     MiBeginPageAccessor @ 0x140425C90 (MiBeginPageAccessor.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiSetPageZeroInProgress(__int64 *a1)
{
  unsigned __int64 v1; // r9
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // r15
  ULONG_PTR v7; // rsi
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // bl
  int v12; // esi

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
    v9 = 2LL;
    if ( v7 <= qword_140E2DD20 )
      break;
    if ( MiIsDecayPfn(v7) )
    {
      v9 = 2LL;
      break;
    }
LABEL_30:
    v7 = *(_QWORD *)(v6 + 16);
    if ( v7 == 0x3FFFFFFFFFLL )
      return 0LL;
  }
  v10 = v8 + 48 * v7;
  if ( (*(_DWORD *)(v10 + 32) & 0x80000) != 0 )
    return 0LL;
  if ( (a1[4] & 0x400) != 0 )
  {
    CurrentIrql = MiSafeLockPage(v7);
  }
  else
  {
    if ( *(__int64 *)(v10 + 24) < 0 )
      return 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v9) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v9);
    }
    if ( (*(_QWORD *)(v10 + 40) & 0x40000000000000LL) == 0 && !MiIsDecayPfn(v7) )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      goto LABEL_29;
    }
    if ( !(unsigned int)MiTryLockPageAtDpcInline(v10, v9) )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      *((_DWORD *)a1 + 8) |= 2u;
      return 0LL;
    }
  }
  if ( CurrentIrql == 17 )
  {
LABEL_29:
    v8 = 0xFFFFDE0000000000uLL;
    goto LABEL_30;
  }
  v12 = HIWORD(*(_DWORD *)(v10 + 32));
  if ( (HIWORD(*(_DWORD *)(v10 + 32)) & 7) != 1
    || (unsigned int)MiGetPfnPageSizeIndex(v10) != (_DWORD)v4
    || *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) != *(_QWORD *)(v3 + 14984) )
  {
    MiUnlockPage(v10, CurrentIrql);
    goto LABEL_29;
  }
  if ( (v12 & 8) == 0 )
  {
    MiBeginPageAccessor(a1[5], (unsigned int)v4, v10, 0LL);
    MiUnlockPage(v10, CurrentIrql);
    return v10;
  }
  MiUnlockPage(v10, CurrentIrql);
  return 0LL;
}
