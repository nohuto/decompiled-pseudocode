/*
 * XREFs of CmpAcceptBoot @ 0x1407CFA84
 * Callers:
 *     NtInitializeRegistry @ 0x1407D01A0 (NtInitializeRegistry.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     KeCommitSmtState @ 0x1405BA9D8 (KeCommitSmtState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     CmpSaveBootControlSet @ 0x1407CCC54 (CmpSaveBootControlSet.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407DAE44 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpGetNextActiveHive @ 0x1408E280C (CmpGetNextActiveHive.c)
 *     CmpTrimHive @ 0x140A37AF4 (CmpTrimHive.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall CmpAcceptBoot(__int16 a1)
{
  unsigned int v2; // ebx
  unsigned __int16 v3; // bx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 i; // rcx
  __int64 NextActiveHive; // rax
  __int64 v8; // rdi

  if ( PsIsCurrentThreadInServerSilo() )
  {
    return 0;
  }
  else if ( _InterlockedExchange(&CmBootAcceptFirstTime, 0) )
  {
    v3 = a1 - 4096;
    if ( v3 )
    {
      KeCommitSmtState();
      if ( CmpLKGEnabled )
        v2 = CmpSaveBootControlSet(v3);
      else
        v2 = 0;
      guard_dispatch_icall_no_overrides(v5, v4);
      if ( CmpAccessBitForPhase != 2 )
      {
        CmpAccessBitForPhase = 2;
        if ( (unsigned __int8)CmpAcquireShutdownRundown() )
        {
          for ( i = 0LL; ; i = v8 )
          {
            NextActiveHive = CmpGetNextActiveHive(i);
            v8 = NextActiveHive;
            if ( !NextActiveHive )
              break;
            if ( (*(_DWORD *)(NextActiveHive + 160) & 0x10) == 0 )
              CmpTrimHive(NextActiveHive);
          }
          CmpUpdateReorganizeRegistryValues();
          CmpReleaseShutdownRundown();
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v2;
}
