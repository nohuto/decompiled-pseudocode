/*
 * XREFs of _lambda_7e2780c5544860c2230bb0766c4bf63e_::operator() @ 0x18043DD58
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7e2780c5544860c2230bb0766c4bf63e___::Run @ 0x180442160 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_7e2780c5544860c2230bb0766c4bf63e___--.c)
 * Callees:
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180019118 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x18001EE7C (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 *     ?PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z @ 0x1800AA140 (-PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z.c)
 *     ??$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__@@AEBKAEAK@Z @ 0x1801B529C (--$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1804433A4 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_7e2780c5544860c2230bb0766c4bf63e_::operator()(__int64 *a1)
{
  __int64 v2; // rbx
  unsigned int *v3; // r14
  HWND v4; // rdi
  _DWORD *v5; // rsi
  HWND Ancestor; // rax
  int v8; // [rsp+20h] [rbp-48h] BYREF
  DWORD dwProcessId; // [rsp+24h] [rbp-44h] BYREF
  DWORD WindowThreadProcessId; // [rsp+28h] [rbp-40h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-38h] BYREF
  struct tagPOINT Points[2]; // [rsp+40h] [rbp-28h] BYREF

  v2 = *a1;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)(*a1 + 128),
    *(_QWORD *)a1[1]);
  v3 = (unsigned int *)a1[2];
  if ( *(_DWORD *)(v2 + 296) != *v3 )
  {
    v4 = (HWND)(int)*v3;
    *(_QWORD *)&Rect.left = v4;
    if ( ViewManagerInteropTraceLogging::IsEnabled() )
    {
      dwProcessId = 0;
      WindowThreadProcessId = GetWindowThreadProcessId(v4, &dwProcessId);
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 + 16) + 288LL))(v2 + 16);
      ViewManagerInteropTraceLogging::WindowCreated<unsigned int,HWND__ * const &,unsigned long const &,unsigned long &>(
        &v8,
        (__int64 *)&Rect.left,
        (int *)&WindowThreadProcessId,
        (int *)&dwProcessId);
    }
    v5 = (_DWORD *)a1[3];
    if ( *v5 == 1 )
    {
      GetWindowBand(v4, v2 + 492);
      Rect = 0LL;
      GetWindowRect(v4, &Rect);
      *(float *)(v2 + 472) = (float)Rect.left;
      *(float *)(v2 + 476) = (float)Rect.top;
      *(float *)(v2 + 480) = (float)(Rect.right - Rect.left);
      *(float *)(v2 + 484) = (float)(Rect.bottom - Rect.top);
      Ancestor = GetAncestor(v4, 1u);
      if ( Ancestor )
      {
        *(struct tagRECT *)&Points[0].x = Rect;
        if ( MapWindowPoints(0LL, Ancestor, Points, 2u) )
        {
          *(float *)(v2 + 472) = (float)Points[0].x;
          *(float *)(v2 + 476) = (float)Points[0].y;
          *(float *)(v2 + 480) = (float)(Points[1].x - Points[0].x);
          *(float *)(v2 + 484) = (float)(Points[1].y - Points[0].y);
        }
      }
      *(_BYTE *)(v2 + 488) = 1;
      EnumPropsExW(v4, (PROPENUMPROCEXW)LightweightPropertySet::s_PropEnumCallback, v2 + 200);
    }
    else
    {
      LightweightPropertySet::PushLightweightPropertiesToWindow((LightweightPropertySet *)(v2 + 200), v4);
    }
    if ( IsWindowVisible(v4) )
      WindowWrapperBase::SetWindowId(v2, *v3, (unsigned int)*v5);
  }
  return 0LL;
}
