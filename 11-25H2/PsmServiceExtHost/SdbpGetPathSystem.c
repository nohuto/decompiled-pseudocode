/*
 * XREFs of SdbpGetPathSystem @ 0x180096770
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x180096830 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1800A67D0 (AslEnvGetSystem32DirPathBuf.c)
 */

__int64 __fastcall SdbpGetPathSystem(int a1, int a2, int a3, __int64 a4)
{
  int ProcessHostGuestArchitectures; // ebx
  _WORD v9[2]; // [rsp+30h] [rbp-18h] BYREF
  _WORD v10[10]; // [rsp+34h] [rbp-14h] BYREF

  v10[0] = 0;
  v9[0] = 0;
  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(v10, v9, a4);
  if ( ProcessHostGuestArchitectures < 0
    || (ProcessHostGuestArchitectures = AslEnvGetSystem32DirPathBuf(a1, a2, a3, v10[0], (__int64)v9),
        ProcessHostGuestArchitectures < 0) )
  {
    AslLogCallPrintf(1LL);
  }
  return (unsigned int)ProcessHostGuestArchitectures;
}
