/*
 * XREFs of PsEnumProcesses @ 0x1408EE0F4
 * Callers:
 *     PsRefreshUserPresencePpmPolicies @ 0x1405E53C0 (PsRefreshUserPresencePpmPolicies.c)
 *     PfTStart @ 0x140746B0C (PfTStart.c)
 *     PopEtEnergyTrackerCreate @ 0x14075DC60 (PopEtEnergyTrackerCreate.c)
 *     PsShutdownSystem @ 0x140778944 (PsShutdownSystem.c)
 *     EtwpDisablePerProcessTracing @ 0x1407AA548 (EtwpDisablePerProcessTracing.c)
 *     EtwpPsProvCaptureState @ 0x1407B15C4 (EtwpPsProvCaptureState.c)
 *     EtwpCoverageSamplerStart @ 0x1407B2D48 (EtwpCoverageSamplerStart.c)
 *     EtwpProcessThreadImageRundown @ 0x140A1632C (EtwpProcessThreadImageRundown.c)
 *     PopEtEnergyTrackerQuery @ 0x140AC9770 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PsGetNextProcess @ 0x1408EEB70 (PsGetNextProcess.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x1408EEF10 (PopEtProcessEnumSnapshotCallback.c)
 */

__int64 __fastcall PsEnumProcesses(__int64 (__fastcall *a1)(_QWORD, _QWORD), __int64 a2)
{
  void *v4; // rcx
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi

  v4 = 0LL;
  while ( 1 )
  {
    result = PsGetNextProcess(v4);
    v8 = (void *)result;
    if ( !result )
      break;
    if ( a1 == PopEtProcessEnumSnapshotCallback )
      v9 = PopEtProcessEnumSnapshotCallback(result, a2);
    else
      v9 = guard_dispatch_icall_no_overrides(result, a2, v6, v7);
    v10 = v9;
    v4 = v8;
    if ( v9 < 0 )
    {
      ObfDereferenceObjectWithTag(v8, 0x6E457350u);
      return v10;
    }
  }
  return result;
}
