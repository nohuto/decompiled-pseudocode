/*
 * XREFs of CmpAcceptBoot @ 0x1407BFEA8
 * Callers:
 *     NtInitializeRegistry @ 0x1407C05B0 (NtInitializeRegistry.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     KeCommitSmtState @ 0x1405B955C (KeCommitSmtState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CmpSaveBootControlSet @ 0x1407BCF4C (CmpSaveBootControlSet.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407CB130 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpGetNextActiveHive @ 0x140848344 (CmpGetNextActiveHive.c)
 *     CmpTrimHive @ 0x140A3D624 (CmpTrimHive.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall CmpAcceptBoot(__int16 a1)
{
  unsigned int v2; // ebx
  unsigned __int16 v3; // bx
  __int64 v4; // rcx
  __int64 i; // rcx
  __int64 NextActiveHive; // rax
  __int64 v7; // rdi

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
      guard_dispatch_icall_no_overrides(v4);
      if ( CmpAccessBitForPhase != 2 )
      {
        CmpAccessBitForPhase = 2;
        if ( (unsigned __int8)CmpAcquireShutdownRundown() )
        {
          for ( i = 0LL; ; i = v7 )
          {
            NextActiveHive = CmpGetNextActiveHive(i);
            v7 = NextActiveHive;
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
