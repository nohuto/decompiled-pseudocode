/*
 * XREFs of ?OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ @ 0x18017B4D0
 * Callers:
 *     _lambda_9acb6a30c2b0d5ba7ab65b24b73eef63_::_lambda_invoker_cdecl_ @ 0x180178A30 (_lambda_9acb6a30c2b0d5ba7ab65b24b73eef63_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x18017A9C4 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x18017C124 (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?ApplyCursorAttraction@CursorAttraction@@QEAA?AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z @ 0x1801A3D8C (-ApplyCursorAttraction@CursorAttraction@@QEAA-AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ControllerProcessor::OnUpdateCursorMagnetismTimer(ControllerProcessor *this)
{
  _QWORD *CursorPosition; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  POINT v5; // rbx
  int v6; // eax
  POINT pt; // [rsp+30h] [rbp-38h] BYREF
  int v9[4]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  CursorPosition = (_QWORD *)ControllerProcessor::GetCursorPosition(this, &pt);
  v3 = *((_QWORD *)this + 939);
  v4 = *((unsigned int *)this + 710);
  *((_QWORD *)this + 45) = *CursorPosition;
  *(_OWORD *)v9 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 96LL))(v3, v4, 1LL) < 0 )
    *(_OWORD *)v9 = 0LL;
  CursorAttraction::ApplyCursorAttraction(
    (ControllerProcessor *)((char *)this + 7556),
    &pt,
    (const struct tagRECT *)((char *)this + 360));
  v5 = pt;
  if ( ((*((_BYTE *)this + 328) & 8) == 0 || PtInRect((const RECT *)((char *)this + 404), pt))
    && (*((_DWORD *)this + 90) != v5.x || *((_DWORD *)this + 91) != pt.y) )
  {
    v6 = ControllerProcessor::SetPointerPosition(this, v5, 0);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB6C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v6,
        (int)v9);
  }
  return 0LL;
}
