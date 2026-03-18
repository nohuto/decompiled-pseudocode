/*
 * XREFs of CmpAcceptBoot @ 0x1407CF594
 * Callers:
 *     NtInitializeRegistry @ 0x1407CFCB0 (NtInitializeRegistry.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 *     KeCommitSmtState @ 0x1405BD3A8 (KeCommitSmtState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpSaveBootControlSet @ 0x1407CC764 (CmpSaveBootControlSet.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407DA8F4 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpGetNextActiveHive @ 0x14090B0EC (CmpGetNextActiveHive.c)
 *     CmpTrimHive @ 0x140A422BC (CmpTrimHive.c)
 *     CmpAcquireShutdownRundown @ 0x140BB9400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BB9880 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall CmpAcceptBoot(__int16 a1)
{
  unsigned int v2; // ebx
  unsigned __int16 v3; // bx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 i; // rcx
  __int64 NextActiveHive; // rax
  __int64 v10; // rdi

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
      guard_dispatch_icall_no_overrides(v5, v4, v6, v7);
      if ( CmpAccessBitForPhase != 2 )
      {
        CmpAccessBitForPhase = 2;
        if ( (unsigned __int8)CmpAcquireShutdownRundown() )
        {
          for ( i = 0LL; ; i = v10 )
          {
            NextActiveHive = CmpGetNextActiveHive(i);
            v10 = NextActiveHive;
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
