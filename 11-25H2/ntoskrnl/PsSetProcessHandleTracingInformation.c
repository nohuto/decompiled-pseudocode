/*
 * XREFs of PsSetProcessHandleTracingInformation @ 0x140764BE8
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     ViSettingsEnableKernelHandleChecking @ 0x140B8B390 (ViSettingsEnableKernelHandleChecking.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExDisableHandleTracing @ 0x140647E0C (ExDisableHandleTracing.c)
 *     ObReferenceProcessHandleTable @ 0x1408ADC40 (ObReferenceProcessHandleTable.c)
 *     ExEnableHandleTracing @ 0x140AB59E8 (ExEnableHandleTracing.c)
 */

__int64 __fastcall PsSetProcessHandleTracingInformation(struct _EX_RUNDOWN_REF *a1, unsigned int *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx

  v4 = ObReferenceProcessHandleTable(a1);
  v5 = 0;
  if ( v4 )
  {
    if ( a2 )
      v5 = ExEnableHandleTracing(v4, a2[1], *a2);
    else
      ExDisableHandleTracing(v4);
    ExReleaseRundownProtection_0(a1 + 61);
  }
  else
  {
    return (unsigned int)-1073741558;
  }
  return v5;
}
