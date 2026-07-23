/*
 * XREFs of PsSetProcessHandleTracingInformation @ 0x1407747D8
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     ViSettingsEnableKernelHandleChecking @ 0x140B9D370 (ViSettingsEnableKernelHandleChecking.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExDisableHandleTracing @ 0x14065246C (ExDisableHandleTracing.c)
 *     ObReferenceProcessHandleTable @ 0x140894BB0 (ObReferenceProcessHandleTable.c)
 *     ExEnableHandleTracing @ 0x140AB4D44 (ExEnableHandleTracing.c)
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
