/*
 * XREFs of _lambda_2ab4781663b1c98e73026fa5a544de84_::operator() @ 0x1804F97F4
 * Callers:
 *     _lambda_2ab4781663b1c98e73026fa5a544de84_::_lambda_invoker_cdecl_ @ 0x1804F3960 (_lambda_2ab4781663b1c98e73026fa5a544de84_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x18003C668 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18007D438 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800994CC (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D25C0 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     _lambda_3c37406fbe4e864ebad81fdb99069246_::__lambda_3c37406fbe4e864ebad81fdb99069246_ @ 0x1804EBD08 (_lambda_3c37406fbe4e864ebad81fdb99069246_--__lambda_3c37406fbe4e864ebad81fdb99069246_.c)
 *     ??$?0VGamingPosturePositioner@@@?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVGamingPosturePositioner@@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1804F3BC4 (--$-0VGamingPosturePositioner@@@-$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEA.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2da0fdd928bb8739d55ef3a748cd9a60___ @ 0x1804F6444 (Windows--Internal--ComTaskPool--QueueTask__lambda_2da0fdd928bb8739d55ef3a748cd9a60___.c)
 *     ?WatchCurrentThread@GamingPosturePositionerTelemetryProvider@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x180507228 (-WatchCurrentThread@GamingPosturePositionerTelemetryProvider@@SA-AVActivityThreadWatcher@wil@@PE.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_2ab4781663b1c98e73026fa5a544de84_::operator()(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  volatile int *v5; // rdx
  __int64 v6; // rax
  volatile int *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // ebx
  __int64 v11[2]; // [rsp+28h] [rbp-39h] BYREF
  __int64 v12[2]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v13[2]; // [rsp+48h] [rbp-19h] BYREF
  __int64 v14; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v15[80]; // [rsp+68h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  __int64 v17; // [rsp+C8h] [rbp+67h] BYREF

  v17 = a1;
  GamingPosturePositionerTelemetryProvider::WatchCurrentThread(v15, "GamingFullScreenExperienceChangeNotification");
  wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(
    &v17,
    (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2);
  v3 = v17;
  v17 = 0LL;
  v12[0] = v3;
  v12[1] = a2;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
  v4 = *(_QWORD *)(a2 + 880);
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    v11,
    v12);
  v11[1] = a2;
  v17 = v4;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v17, v5);
  v6 = v11[0];
  v11[0] = 0LL;
  v13[0] = v6;
  v13[1] = a2;
  v14 = v4;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v14, v7);
  v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_2da0fdd928bb8739d55ef3a748cd9a60___(v8, 0, v9, v13);
  lambda_3c37406fbe4e864ebad81fdb99069246_::__lambda_3c37406fbe4e864ebad81fdb99069246_(v13);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v17);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v11);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1FC,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v10);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v12);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v15);
}
