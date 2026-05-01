/*
 * XREFs of ?_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@_N@Z @ 0x18040CD58
 * Callers:
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18006FB20 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@PEAUIWin32ApplicationView@@_N@Z @ 0x180105A6C (-TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA-AV-$com_ptr_t@UIProperty.c)
 *     _LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(&)[20]_ @ 0x180407420 (_LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(-)[20]_.c)
 *     _LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(&)[21]_ @ 0x1804074C8 (_LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(-)[21]_.c)
 *     ?_IsInputContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x18040D764 (-_IsInputContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::_EvaluateTakingControlOfWin32Slate(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct IWin32ApplicationView *a3,
        char a4)
{
  __int64 result; // rax
  HWND ForegroundWindow; // rax
  HWND v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  LONG WindowLongW; // eax
  LONG v14; // ebx
  __int64 v15; // rbx
  void (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rcx
  void *v17; // rdx
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rcx
  int v21; // eax
  void *v22; // rdx
  int v23; // eax
  __int64 v24; // [rsp+20h] [rbp-20h] BYREF
  HWND hWnd; // [rsp+28h] [rbp-18h] BYREF
  __int64 v26[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v28; // [rsp+70h] [rbp+30h] BYREF

  hWnd = 0LL;
  result = (*(__int64 (__fastcall **)(struct IWin32ApplicationView *, HWND *))(*(_QWORD *)a3 + 24LL))(a3, &hWnd);
  if ( (int)result >= 0 )
  {
    if ( !hWnd )
      return 2147943568LL;
    if ( GetWindow(hWnd, 4u) )
      return 0LL;
    if ( !HolographicPositioner::_IsInputContextHolographic(this) )
    {
      ForegroundWindow = GetForegroundWindow();
      v10 = hWnd;
      if ( hWnd == ForegroundWindow )
      {
LABEL_13:
        WindowLongW = GetWindowLongW(v10, -16);
        v14 = WindowLongW;
        if ( (WindowLongW & 0x40000000) != 0
          || (WindowLongW & 0x10000) == 0
          || (GetWindowLongW(hWnd, -20) & 0x40000) == 0 && WindowLongW < 0 && (v14 & 0x80880000) != 0x80880000 )
        {
          return 0LL;
        }
        Win32ApplicationViewHelpers::TryGetViewPropertySetFromHintsForWin32(v26, (__int64)a3);
        v15 = v26[0];
        if ( v26[0] )
        {
          v16 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 34);
          v24 = 0LL;
          (**v16)(v16, &GUID_1179f45a_7e9a_4bf8_b4a3_fc9b01db08c1, &v24);
          if ( v24 )
          {
            v28 = (int)hWnd;
            LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_____20__((__int64)a2, v17, &v28);
            v18 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, __int64))(*(_QWORD *)v24 + 40LL))(
                    v24,
                    a2,
                    v15);
            v19 = v18;
            if ( v18 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x9A1,
                (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
                (const char *)(unsigned int)v18);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
LABEL_33:
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v26);
              return v19;
            }
          }
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
        }
        else if ( a4 )
        {
          v20 = *((_QWORD *)this + 32);
          if ( v20 )
          {
            if ( *((_BYTE *)this + 312) )
            {
              v28 = 0;
              v21 = (*(__int64 (__fastcall **)(__int64, struct IWin32ApplicationView *, int *))(*(_QWORD *)v20 + 32LL))(
                      v20,
                      a3,
                      &v28);
              if ( v21 >= 0 )
              {
                if ( v28 )
                {
                  LODWORD(v24) = (_DWORD)hWnd;
                  LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_____21__(
                    (__int64)a2,
                    v22,
                    (int *)&v24);
                  v23 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**((_QWORD **)this + 34)
                                                                                              + 24LL))(
                          *((_QWORD *)this + 34),
                          a2,
                          6LL);
                  v19 = v23;
                  if ( v23 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x9AA,
                      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
                      (const char *)(unsigned int)v23);
                    goto LABEL_33;
                  }
                }
              }
              else
              {
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x9A7,
                  (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
                  (const char *)(unsigned int)v21);
              }
            }
          }
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v26);
        return 0LL;
      }
      if ( !a4 )
        return 0LL;
      v11 = *((_QWORD *)this + 32);
      if ( !v11 )
        return 0LL;
      v28 = 0;
      v12 = (*(__int64 (__fastcall **)(__int64, struct IWin32ApplicationView *, int *))(*(_QWORD *)v11 + 32LL))(
              v11,
              a3,
              &v28);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x973,
          (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v12);
        return 0LL;
      }
      if ( !v28 )
        return 0LL;
    }
    v10 = hWnd;
    goto LABEL_13;
  }
  return result;
}
