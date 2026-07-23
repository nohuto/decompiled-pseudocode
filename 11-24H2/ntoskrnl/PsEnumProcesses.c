/*
 * XREFs of PsEnumProcesses @ 0x14085F924
 * Callers:
 *     PsRefreshUserPresencePpmPolicies @ 0x1405E28F8 (PsRefreshUserPresencePpmPolicies.c)
 *     PfTStart @ 0x140744DFC (PfTStart.c)
 *     PopEtEnergyTrackerCreate @ 0x14075CC00 (PopEtEnergyTrackerCreate.c)
 *     PsShutdownSystem @ 0x140778A44 (PsShutdownSystem.c)
 *     EtwpDisablePerProcessTracing @ 0x1407AA688 (EtwpDisablePerProcessTracing.c)
 *     EtwpPsProvCaptureState @ 0x1407B1A14 (EtwpPsProvCaptureState.c)
 *     EtwpCoverageSamplerStart @ 0x1407B3198 (EtwpCoverageSamplerStart.c)
 *     EtwpProcessThreadImageRundown @ 0x140A0F50C (EtwpProcessThreadImageRundown.c)
 *     PopEtEnergyTrackerQuery @ 0x140AC7690 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PsGetNextProcess @ 0x1408603A0 (PsGetNextProcess.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x140860740 (PopEtProcessEnumSnapshotCallback.c)
 */

__int64 __fastcall PsEnumProcesses(__int64 (__fastcall *a1)(_QWORD, _QWORD), __int64 a2)
{
  void *v4; // rcx
  __int64 result; // rax
  void *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi

  v4 = 0LL;
  while ( 1 )
  {
    result = PsGetNextProcess(v4);
    v6 = (void *)result;
    if ( !result )
      break;
    if ( a1 == PopEtProcessEnumSnapshotCallback )
      v7 = PopEtProcessEnumSnapshotCallback(result, a2);
    else
      v7 = guard_dispatch_icall_no_overrides(result, a2);
    v8 = v7;
    v4 = v6;
    if ( v7 < 0 )
    {
      ObfDereferenceObjectWithTag(v6, 0x6E457350u);
      return v8;
    }
  }
  return result;
}
