/*
 * XREFs of GetPenDoubleClickTime @ 0x1402681A4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x140212D1C (-LoadPointerDevicePenSettings@@YAHXZ.c)
 */

__int64 __fastcall GetPenDoubleClickTime(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( !*(_DWORD *)(UserSessionState + 18256) && !(unsigned int)LoadPointerDevicePenSettings(v3, v2) )
    return *(unsigned int *)(W32GetUserSessionState(v6, v5) + 14720);
  v8 = *(_QWORD *)(UserSessionState + 18264);
  result = *(unsigned int *)(v8 + 44);
  if ( (_DWORD)result == -1 )
    return *(unsigned int *)(v8 + 40);
  return result;
}
