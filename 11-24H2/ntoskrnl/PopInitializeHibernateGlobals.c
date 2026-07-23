/*
 * XREFs of PopInitializeHibernateGlobals @ 0x140750C3C
 * Callers:
 *     PoInitHiberServices @ 0x140746E14 (PoInitHiberServices.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x1406A7A70 (ZwQuerySystemInformation.c)
 *     PoDisableSleepStates @ 0x14074AFA0 (PoDisableSleepStates.c)
 *     PopInitHiberPersistedRegValues @ 0x140750B4C (PopInitHiberPersistedRegValues.c)
 *     PopValidateWinresume @ 0x1407511C8 (PopValidateWinresume.c)
 *     PoShutdownBugCheck @ 0x140751760 (PoShutdownBugCheck.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void PopInitializeHibernateGlobals()
{
  _DWORD *v0; // rbx
  _DWORD *Pool2; // rax
  unsigned int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rcx
  char v5; // [rsp+60h] [rbp+30h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp+38h] BYREF
  __int64 v7; // [rsp+70h] [rbp+40h] BYREF

  ReturnLength = 0;
  v0 = 0LL;
  v5 = 0;
  PopInitHiberPersistedRegValues();
  if ( ZwQuerySystemInformation(SystemVhdBootInformation, 0LL, 0, &ReturnLength) == -1073741789 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL, ReturnLength, 0x72626968u);
    v0 = Pool2;
    if ( Pool2 )
    {
      if ( ZwQuerySystemInformation(SystemVhdBootInformation, Pool2, ReturnLength, &ReturnLength) >= 0 )
      {
        ReturnLength -= 2;
        if ( *(_BYTE *)v0 )
        {
          if ( v0[1] <= ReturnLength )
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
