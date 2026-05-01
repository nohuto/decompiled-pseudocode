/*
 * XREFs of ?SubscribeToServices@KioskPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1804F3330
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@SmartCookie@@QEAAJPEAUIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@Z @ 0x18021CC00 (--$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNot_ea_18021CC00.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@Z @ 0x1804F097C (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener_ea_1804F097C.c)
 *     ??$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@SmartCookie@@QEAAJPEAUIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@Z @ 0x1804F0A60 (--$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEv_ea_1804F0A60.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KioskPositioner::SubscribeToServices(KioskPositioner *this, struct IServiceProvider *a2)
{
  __int64 result; // rax
  __int64 (*QueryService)(void); // rdi
  int v6; // eax
  unsigned int v7; // ebx
  const char *v8; // r9
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v10; // eax
  __int64 v11; // r8
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // ebx
  struct IServiceProviderVtbl *lpVtbl; // rax
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ebx
  int v20; // eax
  unsigned int v21; // ebx
  HRESULT (__stdcall *v22)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v23; // eax
  __int64 v24; // r8
  unsigned int v25; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v27; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 592) )
    return 0LL;
  QueryService = (__int64 (*)(void))a2->lpVtbl->QueryService;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 21);
  try
  {
    v6 = QueryService();
    v7 = v6;
    if ( v6 >= 0 )
    {
      v9 = a2->lpVtbl->QueryService;
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 22);
      v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v9)(
              a2,
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              (char *)this + 176);
      v12 = v10;
      if ( v10 >= 0 )
      {
        v13 = SmartCookie::Register<IApplicationViewCollection,long (IApplicationViewCollection::*)(IApplicationViewChangeListener *,unsigned long *),long (IApplicationViewCollection::*)(unsigned long),KioskPositioner *>(
                (__int64)this + 208,
                *((_QWORD *)this + 22),
                v11);
        v14 = v13;
        if ( v13 >= 0 )
        {
          lpVtbl = a2->lpVtbl;
          v27 = 0LL;
          v16 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
                  a2,
                  &SID_IImmersiveMonitorService,
                  &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
                  &v27);
          v19 = v16;
          if ( v16 >= 0 )
          {
            v20 = SmartCookie::Register<IImmersiveMonitorNotificationService,long (IImmersiveMonitorNotificationService::*)(IImmersiveMonitorNotification *,unsigned long *),long (IImmersiveMonitorNotificationService::*)(unsigned long),KioskPositioner *>(
                    (__int64)this + 336,
                    v27,
                    v17,
                    v18,
                    (__int64)this - 40);
            v21 = v20;
            if ( v20 >= 0 )
            {
              v22 = a2->lpVtbl->QueryService;
              wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 23);
              v23 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v22)(
                      a2,
                      &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                      &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                      (char *)this + 184);
              v25 = v23;
              if ( v23 >= 0 )
              {
                SmartCookie::Register<IViewPresentationMediator,long (IViewPresentationMediator::*)(IWindowManagementShowMoveSizeEvents *,unsigned long *),long (IViewPresentationMediator::*)(unsigned long),KioskPositioner *>(
                  (__int64)this + 464,
                  *((_QWORD *)this + 23),
                  v24);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
                result = 0LL;
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x222,
                  (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                  (const char *)(unsigned int)v23);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
                result = v25;
              }
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x220,
                (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                (const char *)(unsigned int)v20);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
              result = v21;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x21C,
              (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
              (const char *)(unsigned int)v16);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
            result = v19;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x219,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
            (const char *)(unsigned int)v13);
          result = v14;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x215,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v10);
        result = v12;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x213,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v6);
      result = v7;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x22A,
                           (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v8);
  }
  return result;
}
