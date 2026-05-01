/*
 * XREFs of SdbpGetPathAppraiser @ 0x180096290
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x180096830 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslPathCombine @ 0x1800A3EA8 (AslPathCombine.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1800A6698 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall SdbpGetPathAppraiser(_WORD *a1, unsigned __int64 a2, const wchar_t *a3, __int64 a4)
{
  const wchar_t *v5; // r10
  int v6; // esi
  int v7; // edi
  int ProcessHostGuestArchitectures; // ebx
  _WORD v10[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v11; // [rsp+34h] [rbp-CCh] BYREF
  __int128 v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+48h] [rbp-B8h]
  wchar_t v14; // [rsp+4Ch] [rbp-B4h]
  _WORD v15[264]; // [rsp+50h] [rbp-B0h] BYREF

  v13 = *(_DWORD *)L"er";
  v5 = a3;
  v6 = a2;
  v14 = aAppraiser[10];
  v7 = (int)a1;
  v12 = *(_OWORD *)L"\\appraiser";
  if ( a2 < 0xB )
    return 3221225507LL;
  *a1 = 0;
  v11 = -1;
  v10[0] = -1;
  v15[0] = 0;
  if ( !a3 )
    v5 = &word_1800C10AC;
  ProcessHostGuestArchitectures = AslPathCombine(&v12, v5, v15, 260LL);
  if ( ProcessHostGuestArchitectures < 0
    || (ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v11, v10, a4),
        ProcessHostGuestArchitectures < 0) )
  {
    AslLogCallPrintf(1LL);
  }
  else
  {
    return (unsigned int)AslEnvGetSysNativeDirPathForGuestBuf(v7, v6, (unsigned int)v15, v11, (__int64)v10);
  }
  return (unsigned int)ProcessHostGuestArchitectures;
}
