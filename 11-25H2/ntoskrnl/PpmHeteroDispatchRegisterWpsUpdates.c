/*
 * XREFs of PpmHeteroDispatchRegisterWpsUpdates @ 0x14074CB10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmHeteroDispatchRegisterWpsUpdates(__int64 a1)
{
  unsigned int v1; // r8d
  char v3; // cl

  v1 = 0;
  if ( a1 )
  {
    *(_OWORD *)a1 = 0LL;
    v3 = PpmHeteroHgsEnabled;
    *(_DWORD *)a1 = (unsigned __int8)PpmHeteroHgsEnabled;
    *(_DWORD *)(a1 + 4) = PpmHeteroWorkloadClasses;
    if ( v3 )
    {
      *(_QWORD *)(a1 + 8) = PpmHeteroDispatchHgsInterrupt;
      if ( PpmHeteroRegisterWpsUpdates )
        return (unsigned int)guard_dispatch_icall_no_overrides(a1);
      else
        return (unsigned int)-1073741661;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
