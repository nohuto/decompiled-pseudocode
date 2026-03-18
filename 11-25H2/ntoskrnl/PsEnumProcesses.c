/*
 * XREFs of PsEnumProcesses @ 0x1408DECE4
 * Callers:
 *     PfTStart @ 0x14073AAEC (PfTStart.c)
 *     PopEtEnergyTrackerCreate @ 0x140751240 (PopEtEnergyTrackerCreate.c)
 *     PsShutdownSystem @ 0x140768C94 (PsShutdownSystem.c)
 *     EtwpDisablePerProcessTracing @ 0x14079B178 (EtwpDisablePerProcessTracing.c)
 *     EtwpPsProvCaptureState @ 0x1407A21F4 (EtwpPsProvCaptureState.c)
 *     EtwpCoverageSamplerStart @ 0x1407A3978 (EtwpCoverageSamplerStart.c)
 *     PopEtEnergyTrackerQuery @ 0x140960110 (PopEtEnergyTrackerQuery.c)
 *     EtwpProcessThreadImageRundown @ 0x140A11F50 (EtwpProcessThreadImageRundown.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PsGetNextProcess @ 0x1408DF760 (PsGetNextProcess.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x1408DFB00 (PopEtProcessEnumSnapshotCallback.c)
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
      v7 = guard_dispatch_icall_no_overrides(result);
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
