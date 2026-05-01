/*
 * XREFs of _lambda_e1e333736bfc613a027e396b29f06629_::operator() @ 0x1801F8DB0
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e1e333736bfc613a027e396b29f06629___::Run @ 0x1801F9B20 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_e1e333736bfc613a027e396b29f06629___--.c)
 * Callees:
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18009FAF0 (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ??4?$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800A18F0 (--4-$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_polic.c)
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x1800C355C (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 *     ??$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__@@AEBKAEAK@Z @ 0x18018745C (--$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__.c)
 *     ?PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z @ 0x18019C118 (-PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_e1e333736bfc613a027e396b29f06629_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  const char *v4; // r9
  int *v5; // r14
  HWND v6; // rdi
  int *v7; // rax
  int *v8; // rsi
  HWND Ancestor; // rax
  __int64 result; // rax
  DWORD WindowThreadProcessId; // [rsp+20h] [rbp-48h] BYREF
  DWORD dwProcessId; // [rsp+24h] [rbp-44h] BYREF
  _BYTE v13[8]; // [rsp+28h] [rbp-40h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-38h] BYREF
  struct tagPOINT Points[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = *(_QWORD *)a1;
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindow,wil::err_exception_policy>::operator=(
    (__int64 *)(*(_QWORD *)a1 + 128LL),
    **(_QWORD **)(a1 + 8));
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 192LL))(v2);
    v5 = *(int **)(a1 + 16);
    if ( *(_DWORD *)(v2 + 296) != *v5 )
    {
      v6 = (HWND)*v5;
      *(_QWORD *)&Rect.left = v6;
      if ( ViewManagerInteropTraceLogging::IsEnabled(v3) )
      {
        WindowThreadProcessId = GetWindowThreadProcessId(v6, &dwProcessId);
        v7 = (int *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v2 + 16) + 288LL))(v2 + 16, v13);
        ViewManagerInteropTraceLogging::WindowCreated<unsigned int,HWND__ * const &,unsigned long const &,unsigned long &>(
          v7,
          (__int64 *)&Rect.left,
          (int *)&WindowThreadProcessId,
          (int *)&dwProcessId);
      }
      v8 = *(int **)(a1 + 24);
      if ( *v8 == 1 )
      {
        GetWindowBand(v6, v2 + 508);
        GetWindowRect(v6, &Rect);
        *(float *)(v2 + 488) = (float)Rect.left;
        *(float *)(v2 + 492) = (float)Rect.top;
        *(float *)(v2 + 496) = (float)(Rect.right - Rect.left);
        *(float *)(v2 + 500) = (float)(Rect.bottom - Rect.top);
        Ancestor = GetAncestor(v6, 1u);
        if ( Ancestor )
        {
          *(struct tagRECT *)&Points[0].x = Rect;
          if ( MapWindowPoints(0LL, Ancestor, Points, 2u) )
          {
            *(float *)(v2 + 488) = (float)Points[0].x;
            *(float *)(v2 + 492) = (float)Points[0].y;
            *(float *)(v2 + 496) = (float)(Points[1].x - Points[0].x);
            *(float *)(v2 + 500) = (float)(Points[1].y - Points[0].y);
          }
        }
        *(_BYTE *)(v2 + 504) = 1;
        EnumPropsExW(v6, (PROPENUMPROCEXW)LightweightPropertySet::s_PropEnumCallback, v2 + 200);
      }
      else
      {
        LightweightPropertySet::PushLightweightPropertiesToWindow((LightweightPropertySet *)(v2 + 200), v6);
      }
      if ( IsWindowVisible(v6) )
        UwpWindowWrapperBase::SetWindowId(v2, *v5, *v8);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x65E,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v4);
  }
  return result;
}
