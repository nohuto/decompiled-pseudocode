/*
 * XREFs of SdbpGetPathSystem @ 0x140807540
 * Callers:
 *     <none>
 * Callees:
 *     SdbpGetProcessHostGuestArchitectures @ 0x140807600 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x14080C56C (AslEnvGetSystem32DirPathBuf.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetPathSystem(NTSTRSAFE_PWSTR pszDest, size_t cchDest, __int64 a3, __int64 a4)
{
  int ProcessHostGuestArchitectures; // ebx
  const char *v7; // r9
  int v8; // r8d
  _WORD v10[2]; // [rsp+30h] [rbp-18h] BYREF
  __int16 v11; // [rsp+34h] [rbp-14h] BYREF

  v11 = 0;
  v10[0] = 0;
  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v11, v10, a4);
  if ( ProcessHostGuestArchitectures < 0 )
  {
    v7 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
    v8 = 1054;
LABEL_5:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetPathSystem", v8, (_DWORD)v7);
    return (unsigned int)ProcessHostGuestArchitectures;
  }
  ProcessHostGuestArchitectures = AslEnvGetSystem32DirPathBuf(pszDest, cchDest, (__int64)v10);
  if ( ProcessHostGuestArchitectures < 0 )
  {
    v7 = "AslEnvGetSystem32DirPathBuf failed [%x]";
    v8 = 1060;
    goto LABEL_5;
  }
  return (unsigned int)ProcessHostGuestArchitectures;
}
