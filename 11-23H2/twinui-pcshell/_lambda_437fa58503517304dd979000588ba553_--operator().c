/*
 * XREFs of _lambda_437fa58503517304dd979000588ba553_::operator() @ 0x18054CE6C
 * Callers:
 *     ?TryStartGlobalOperation@MultitaskingViewGestureHandler@@AEAA_NW4GestureState@@W4GestureAction@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x1805504F4 (-TryStartGlobalOperation@MultitaskingViewGestureHandler@@AEAA_NW4GestureState@@W4GestureAction@M.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180060D40 (--0Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Micr.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180060D70 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMon.c)
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180060DF8 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_437fa58503517304dd979000588ba553_::operator()(_QWORD *a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  IUnknown *v6; // rbx
  HRESULT v7; // eax
  __int64 v8; // rdx
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  int v11; // [rsp+28h] [rbp-38h]
  unsigned int v12; // [rsp+30h] [rbp-30h] BYREF
  IUnknown *punk[2]; // [rsp+38h] [rbp-28h] BYREF
  int v14; // [rsp+48h] [rbp-18h] BYREF
  __int64 v15[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  void *ppvOut; // [rsp+80h] [rbp+20h] BYREF
  IUnknown *v18; // [rsp+88h] [rbp+28h] BYREF
  __int64 v19; // [rsp+90h] [rbp+30h] BYREF

  v19 = 0LL;
  v2 = *(__int64 **)(*a1 + 40LL);
  v3 = *v2;
  v19 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 112))(v2, &v19);
  v5 = v4;
  if ( v4 >= 0 )
  {
    details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
      (__int64)&v10,
      v19);
    details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
      (__int64)&v12,
      (__int64)&v10,
      0);
    details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
      (__int64)&v14,
      (__int64)&v10,
      v11);
    while ( 1 )
    {
      if ( v12 == v14 && punk[1] == (IUnknown *)v15[1] )
        goto LABEL_11;
      v6 = punk[0];
      v18 = punk[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
      ppvOut = 0LL;
      v7 = IUnknown_QueryService(
             v6,
             &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
             &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
             &ppvOut);
      v5 = v7;
      if ( v7 < 0 )
        break;
      v7 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 72LL))(ppvOut, a1[1]);
      v5 = v7;
      if ( v7 < 0 )
      {
        v8 = 901LL;
        goto LABEL_14;
      }
      if ( *(_DWORD *)a1[1] )
      {
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppvOut);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
LABEL_11:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v15);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)punk);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
        v5 = 0;
        goto LABEL_15;
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppvOut);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
      ++v12;
      details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::GetCurrentObject(&v12);
    }
    v8 = 900LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)v7);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppvOut);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v15);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)punk);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x380,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)v4);
  }
LABEL_15:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
  return v5;
}
