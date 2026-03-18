/*
 * XREFs of PpmGetPerfPolicyClass @ 0x14042AA7C
 * Callers:
 *     PpmPerfApplyDomainState @ 0x1403B2CE0 (PpmPerfApplyDomainState.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x140429AF0 (PpmPerfCalculateQosClassPolicies.c)
 *     PpmPerfApplyLatencyHint @ 0x14042A41C (PpmPerfApplyLatencyHint.c)
 *     PpmPerfSelectProcessorState @ 0x14042A5A8 (PpmPerfSelectProcessorState.c)
 *     PpmPerfResizeHistory @ 0x140A97878 (PpmPerfResizeHistory.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmGetPerfPolicyClass(_BYTE *a1)
{
  char v1; // al
  char v3; // cl

  v1 = 0;
  if ( a1 && a1[68] )
  {
    v3 = 1;
    if ( (unsigned __int8)PpmMaxCoreClasses > 1u )
    {
      v1 = a1[88];
      goto LABEL_8;
    }
    if ( (unsigned __int8)PpmHeteroNominalPerformanceClasses > 1u && *(_QWORD *)a1 )
    {
      v1 = *(_BYTE *)(*(_QWORD *)a1 + 301LL);
LABEL_8:
      if ( v1 )
        return v3;
    }
  }
  return v1;
}
