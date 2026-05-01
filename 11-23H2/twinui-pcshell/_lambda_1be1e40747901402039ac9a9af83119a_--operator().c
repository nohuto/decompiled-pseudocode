/*
 * XREFs of _lambda_1be1e40747901402039ac9a9af83119a_::operator() @ 0x1804E5CE0
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1be1e40747901402039ac9a9af83119a___::Run @ 0x1804EBA80 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_1be1e40747901402039ac9a9af83119a___--.c)
 * Callees:
 *     ??4?$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800A18F0 (--4-$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_polic.c)
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x1800C355C (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 *     ??$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__@@AEBKAEAK@Z @ 0x18018745C (--$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__.c)
 *     ?PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z @ 0x18019C118 (-PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1804ED04C (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 */

__int64 __fastcall lambda_1be1e40747901402039ac9a9af83119a_::operator()(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  unsigned int *v4; // r14
  HWND v5; // rdi
  _DWORD *v6; // rsi
  HWND Ancestor; // rax
  int v9; // [rsp+20h] [rbp-48h] BYREF
  DWORD dwProcessId; // [rsp+24h] [rbp-44h] BYREF
  DWORD WindowThreadProcessId; // [rsp+28h] [rbp-40h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-38h] BYREF
  struct tagPOINT Points[2]; // [rsp+40h] [rbp-28h] BYREF

  v2 = *a1;
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindow,wil::err_exception_policy>::operator=(
    (__int64 *)(*a1 + 128),
    *(_QWORD *)a1[1]);
  v4 = (unsigned int *)a1[2];
  if ( *(_DWORD *)(v2 + 296) != *v4 )
  {
    v5 = (HWND)(int)*v4;
    *(_QWORD *)&Rect.left = v5;
    if ( ViewManagerInteropTraceLogging::IsEnabled(v3) )
    {
      WindowThreadProcessId = GetWindowThreadProcessId(v5, &dwProcessId);
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 + 16) + 288LL))(v2 + 16);
      ViewManagerInteropTraceLogging::WindowCreated<unsigned int,HWND__ * const &,unsigned long const &,unsigned long &>(
        &v9,
        (__int64 *)&Rect.left,
        (int *)&WindowThreadProcessId,
        (int *)&dwProcessId);
    }
    v6 = (_DWORD *)a1[3];
    if ( *v6 == 1 )
    {
      GetWindowBand(v5, v2 + 508);
      GetWindowRect(v5, &Rect);
      *(float *)(v2 + 488) = (float)Rect.left;
      *(float *)(v2 + 492) = (float)Rect.top;
      *(float *)(v2 + 496) = (float)(Rect.right - Rect.left);
      *(float *)(v2 + 500) = (float)(Rect.bottom - Rect.top);
      Ancestor = GetAncestor(v5, 1u);
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
      EnumPropsExW(v5, (PROPENUMPROCEXW)LightweightPropertySet::s_PropEnumCallback, v2 + 200);
    }
    else
    {
      LightweightPropertySet::PushLightweightPropertiesToWindow((LightweightPropertySet *)(v2 + 200), v5);
    }
    if ( IsWindowVisible(v5) )
      WindowWrapperBase::SetWindowId(v2, *v4, (unsigned int)*v6);
  }
  return 0LL;
}
