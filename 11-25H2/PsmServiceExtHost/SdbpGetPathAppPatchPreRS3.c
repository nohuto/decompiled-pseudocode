/*
 * XREFs of SdbpGetPathAppPatchPreRS3 @ 0x180096100
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyW @ 0x180063728 (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbpGetPathAppPatch @ 0x180096000 (SdbpGetPathAppPatch.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x180096830 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslPathCombine @ 0x1800A3EA8 (AslPathCombine.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall SdbpGetPathAppPatchPreRS3(_WORD *a1, unsigned __int64 a2, const wchar_t *a3, __int64 a4)
{
  int ProcessHostGuestArchitectures; // ebx
  __int16 v9[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v10; // [rsp+34h] [rbp-CCh] BYREF
  __int128 v11; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+48h] [rbp-B8h]
  wchar_t v13; // [rsp+4Ch] [rbp-B4h]
  wchar_t v14[264]; // [rsp+50h] [rbp-B0h] BYREF

  v12 = *(_DWORD *)L"64";
  v13 = aApppatch64[10];
  v11 = *(_OWORD *)L"AppPatch64";
  if ( a2 < 0xB )
    return 3221225507LL;
  v10 = -1;
  v14[0] = 0;
  v9[0] = -1;
  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v10, v9, a4);
  if ( ProcessHostGuestArchitectures < 0 )
    goto LABEL_4;
  if ( v9[0] == 9 || v9[0] == 12 )
  {
    if ( !a3 )
      a3 = &word_1800C10AC;
    ProcessHostGuestArchitectures = AslPathCombine(&v11, a3, v14, 260LL);
    if ( ProcessHostGuestArchitectures < 0 )
      goto LABEL_4;
    return (unsigned int)SdbpGetPathAppPatch(a1, a2, v14);
  }
  if ( !a3 )
    a3 = &word_1800C10AC;
  ProcessHostGuestArchitectures = RtlStringCchCopyW(v14, 260LL, (__int64)a3);
  if ( ProcessHostGuestArchitectures >= 0 )
    return (unsigned int)SdbpGetPathAppPatch(a1, a2, v14);
LABEL_4:
  AslLogCallPrintf(1LL);
  return (unsigned int)ProcessHostGuestArchitectures;
}
