/*
 * XREFs of RtlpRemoveArchDisallowedXStateFeatures @ 0x14045B69C
 * Callers:
 *     RtlGetEnabledExtendedFeatures @ 0x1404E71D0 (RtlGetEnabledExtendedFeatures.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1409E0A10 (RtlWow64GetCpuAreaInfo.c)
 *     RtlWow64GetCpuAreaEnabledFeatures @ 0x1409E0BB8 (RtlWow64GetCpuAreaEnabledFeatures.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpRemoveArchDisallowedXStateFeatures(int a1, _QWORD *a2)
{
  __int64 v2; // rax

  if ( (a1 & 0x10000) != 0 )
  {
    v2 = 0x40000000000009FFLL;
LABEL_3:
    *a2 &= v2;
    return;
  }
  if ( (a1 & 0x100000) != 0 )
  {
    v2 = 0x4000000000060DFFLL;
    goto LABEL_3;
  }
  if ( (a1 & 0x400000) != 0 )
    *a2 &= 4uLL;
  else
    *a2 = 0LL;
}
