/*
 * XREFs of SdbpGetPathCustomSdbPreRS3 @ 0x180096940
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbpGetPathAppPatch @ 0x180096460 (SdbpGetPathAppPatch.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x180096C90 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslPathCombine @ 0x1800A4198 (AslPathCombine.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall SdbpGetPathCustomSdbPreRS3(_WORD *a1, unsigned __int64 a2, const wchar_t *a3, __int64 a4)
{
  __int64 *v8; // rsi
  int ProcessHostGuestArchitectures; // ebx
  __int16 v10[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v11; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+40h] [rbp-C0h]
  wchar_t v14; // [rsp+44h] [rbp-BCh]
  _OWORD v15[2]; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t v16[264]; // [rsp+70h] [rbp-90h] BYREF

  v12 = *(_QWORD *)L"Custom";
  v13 = *(_DWORD *)L"om";
  v14 = aCustom[6];
  v15[0] = *(_OWORD *)L"Custom\\Custom64";
  v15[1] = *(_OWORD *)L"ustom64";
  if ( a2 < 7 )
    return 3221225507LL;
  v11 = -1;
  *a1 = 0;
  v8 = &v12;
  v16[0] = 0;
  v10[0] = -1;
  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v11, v10, a4);
  if ( ProcessHostGuestArchitectures < 0 )
    goto LABEL_4;
  if ( v10[0] == 9 || v10[0] == 12 )
    v8 = (__int64 *)v15;
  if ( !a3 )
    a3 = &word_1800C1FFC;
  ProcessHostGuestArchitectures = AslPathCombine(v8, a3, v16, 260LL);
  if ( ProcessHostGuestArchitectures < 0 )
LABEL_4:
    AslLogCallPrintf(1LL);
  else
    return (unsigned int)SdbpGetPathAppPatch(a1, a2, v16);
  return (unsigned int)ProcessHostGuestArchitectures;
}
