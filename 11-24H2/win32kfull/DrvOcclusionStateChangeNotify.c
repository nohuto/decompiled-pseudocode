/*
 * XREFs of DrvOcclusionStateChangeNotify @ 0x1401FB940
 * Callers:
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 *     xxxRemoteReconnect @ 0x14024FFF8 (xxxRemoteReconnect.c)
 * Callees:
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvOcclusionStateChangeNotify(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 DxgkWin32kInterface; // rax
  __int64 result; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v6[1] = retaddr;
  v7 = 0LL;
  v6[0] = 1LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2, a3, a4);
  result = (*(__int64 (__fastcall **)(_QWORD *))(DxgkWin32kInterface + 416))(v6);
  if ( (int)result < 0 )
  {
    result = WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1105;
  }
  return result;
}
