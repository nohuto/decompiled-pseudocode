/*
 * XREFs of PopInitializeHibernateGlobals @ 0x14075291C
 * Callers:
 *     PoInitHiberServices @ 0x140748B24 (PoInitHiberServices.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x1406A6AD0 (ZwQuerySystemInformation.c)
 *     PoDisableSleepStates @ 0x14074CC70 (PoDisableSleepStates.c)
 *     PopInitHiberPersistedRegValues @ 0x14075282C (PopInitHiberPersistedRegValues.c)
 *     PopValidateWinresume @ 0x140752EA8 (PopValidateWinresume.c)
 *     PoShutdownBugCheck @ 0x140753440 (PoShutdownBugCheck.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void PopInitializeHibernateGlobals()
{
  _DWORD *v0; // rbx
  __int64 Pool2; // rax
  unsigned int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rcx
  char v5; // [rsp+60h] [rbp+30h] BYREF
  unsigned int v6; // [rsp+68h] [rbp+38h]
  __int64 v7; // [rsp+70h] [rbp+40h] BYREF

  v6 = 0;
  v0 = 0LL;
  v5 = 0;
  PopInitHiberPersistedRegValues();
  if ( (unsigned int)ZwQuerySystemInformation(112LL, 0LL) == -1073741789 )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v0 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      if ( (int)ZwQuerySystemInformation(112LL, Pool2) >= 0 )
      {
        v6 -= 2;
        if ( *(_BYTE *)v0 )
        {
          if ( v0[1] <= v6 )
          {
            PopBootFromVHD = 1;
            PoDisableSleepStates(2, 8, &v7);
          }
        }
      }
    }
  }
  PopValidateWinresume(&v5);
  if ( v5 )
    PoDisableSleepStates(4, 8, &v7);
  v2 = 0;
  v3 = 0LL;
  do
  {
    if ( *(_DWORD *)((char *)&PopHiberForceDisabledReg + v3)
      && (int)PoDisableSleepStates(*(_DWORD *)((char *)PopHiberForceDisabledReasonMap + v3), 8, &v7) < 0 )
    {
      LOBYTE(v4) = 1;
      PoShutdownBugCheck(v4, 160LL, 272LL, 0LL, 0LL, 0LL);
    }
    ++v2;
    v3 += 4LL;
  }
  while ( v2 < 2 );
  if ( v0 )
    ExFreePoolWithTag(v0, 0x72626968u);
}
