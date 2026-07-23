/*
 * XREFs of VfFaultsSetParameters @ 0x140B987F4
 * Callers:
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     PsSetCreateProcessNotifyRoutine @ 0x14077A310 (PsSetCreateProcessNotifyRoutine.c)
 *     VfFaultsAddAllApps @ 0x140B981E0 (VfFaultsAddAllApps.c)
 *     VfFaultsAddAllTags @ 0x140B9828C (VfFaultsAddAllTags.c)
 *     VfFaultsRemoveAllApps @ 0x140B986BC (VfFaultsRemoveAllApps.c)
 *     VfFaultsRemoveAllTags @ 0x140B98754 (VfFaultsRemoveAllTags.c)
 *     VfSetVerifierInformation @ 0x140B9E4FC (VfSetVerifierInformation.c)
 */

__int64 __fastcall VfFaultsSetParameters(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  int v9; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(a3) = 1;
  v9 = MmVerifierData | 4;
  v4 = VfSetVerifierInformation(&v9, 4LL, a3);
  if ( v4 >= 0 )
  {
    if ( !ViFaultsProcessNotifyRoutineSet )
    {
      PsSetCreateProcessNotifyRoutine((PCREATE_PROCESS_NOTIFY_ROUTINE)VfCreateProcessCallback, 0);
      ViFaultsProcessNotifyRoutineSet = 1;
    }
    if ( *(_DWORD *)(a1 + 4) )
      VfFaultInjectionMaxProbability = *(_DWORD *)(a1 + 4);
    v5 = *(_DWORD *)a1;
    if ( !*(_DWORD *)a1 )
    {
      VfFaultInjectionMaxProbability = 10000;
      v5 = 600;
    }
    VfFaultInjectionProbability = v5;
    VfFaultsRemoveAllTags();
    VfFaultsRemoveAllApps();
    v6 = *(unsigned __int16 *)(a1 + 24);
    if ( !(_WORD)v6 || (v4 = VfFaultsAddAllApps(*(unsigned __int16 **)(a1 + 32), v6 >> 1), v4 >= 0) )
    {
      v7 = *(unsigned __int16 *)(a1 + 8);
      if ( (_WORD)v7 )
        return (unsigned int)VfFaultsAddAllTags(*(unsigned __int16 **)(a1 + 16), v7 >> 1);
    }
  }
  return (unsigned int)v4;
}
