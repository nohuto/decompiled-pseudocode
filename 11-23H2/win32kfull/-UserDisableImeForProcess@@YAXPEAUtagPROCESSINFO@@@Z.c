/*
 * XREFs of ?UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0080DFC
 * Callers:
 *     ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C0080B2C (-SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     NtUserDisableThreadIme @ 0x1C0080D60 (NtUserDisableThreadIme.c)
 * Callees:
 *     ?UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z @ 0x1C0080E34 (-UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z.c)
 */

void __fastcall UserDisableImeForProcess(struct tagPROCESSINFO *a1)
{
  struct tagTHREADINFO *i; // rbx

  *((_DWORD *)a1 + 3) |= 0x800000u;
  for ( i = (struct tagTHREADINFO *)*((_QWORD *)a1 + 41); i; i = (struct tagTHREADINFO *)*((_QWORD *)i + 83) )
    UserDisableImeForThread(i, 0);
}
