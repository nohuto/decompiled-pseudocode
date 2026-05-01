/*
 * XREFs of _lambda_498a005a5cf0d6ec0722f3aba4e990a2_::operator() @ 0x18064CAD0
 * Callers:
 *     ?ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ @ 0x18064D870 (-ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

bool lambda_498a005a5cf0d6ec0722f3aba4e990a2_::operator()()
{
  HWND ForegroundWindow; // rbx
  HWND LastActivePopup; // rax
  __int64 v2; // rcx
  bool v3; // bl
  bool v4; // al
  bool v5; // bl
  _DWORD *v6; // rcx
  bool v8; // [rsp+30h] [rbp-268h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+38h] [rbp-260h] BYREF
  bool *v10; // [rsp+58h] [rbp-240h]
  int v11; // [rsp+60h] [rbp-238h]
  int v12; // [rsp+64h] [rbp-234h]
  WCHAR ClassName[264]; // [rsp+70h] [rbp-228h] BYREF

  ForegroundWindow = GetForegroundWindow();
  memset_0(ClassName, 0, 0x208uLL);
  LastActivePopup = GetLastActivePopup(ForegroundWindow);
  v5 = 0;
  if ( GetClassNameW(LastActivePopup, ClassName, 260) > 0 )
  {
    v3 = CompareStringOrdinal(ClassName, -1, L"Shell_SystemDialog", -1, 1) == 2;
    v4 = CompareStringOrdinal(ClassName, -1, L"FSIAWebControlHostClass", -1, 1) == 2;
    if ( v3 || v4 )
      v5 = 1;
  }
  v6 = (_DWORD *)wil::details::static_lazy<TouchGestureLogging>::get(
                   v2,
                   (void (__cdecl *)())_lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_)[1];
  if ( *v6 > 5u )
  {
    v12 = 0;
    v10 = &v8;
    v8 = v5;
    v11 = 1;
    tlgWriteTransfer_EventWriteTransfer((__int64)v6, (unsigned __int8 *)dword_18087106F, 0LL, 0LL, 3u, &v9);
  }
  return v5;
}
