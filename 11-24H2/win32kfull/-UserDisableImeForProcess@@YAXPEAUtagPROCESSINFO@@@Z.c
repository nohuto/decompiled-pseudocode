/*
 * XREFs of ?UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x14023843C
 * Callers:
 *     ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1401FA298 (-SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     NtUserDisableThreadIme @ 0x1401FC340 (NtUserDisableThreadIme.c)
 *     DisableImeForProcess @ 0x140280880 (DisableImeForProcess.c)
 * Callees:
 *     ?UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z @ 0x1401FE2A4 (-UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1402808EC (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall UserDisableImeForProcess(struct tagPROCESSINFO *a1)
{
  struct tagTHREADINFO *i; // rbx

  if ( !(unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline()
    || (*((_DWORD *)a1 + 3) & 0x800000) == 0 )
  {
    *((_DWORD *)a1 + 3) |= 0x800000u;
    for ( i = (struct tagTHREADINFO *)*((_QWORD *)a1 + 41); i; i = (struct tagTHREADINFO *)*((_QWORD *)i + 88) )
      UserDisableImeForThread(i, 0LL);
  }
}
