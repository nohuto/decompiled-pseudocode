/*
 * XREFs of PopInitializeHibernateGlobals @ 0x14074684C
 * Callers:
 *     PoInitHiberServices @ 0x14073CB14 (PoInitHiberServices.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x14069B800 (ZwQuerySystemInformation.c)
 *     PoDisableSleepStates @ 0x140740BA0 (PoDisableSleepStates.c)
 *     PopInitHiberPersistedRegValues @ 0x14074675C (PopInitHiberPersistedRegValues.c)
 *     PopValidateWinresume @ 0x140746DC4 (PopValidateWinresume.c)
 *     PoShutdownBugCheck @ 0x140747350 (PoShutdownBugCheck.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
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
