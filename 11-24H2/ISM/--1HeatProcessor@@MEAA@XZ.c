/*
 * XREFs of ??1HeatProcessor@@MEAA@XZ @ 0x1801B8EE0
 * Callers:
 *     ??_EHeatProcessor@@MEAAPEAXI@Z @ 0x1801B8FE0 (--_EHeatProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x18000C34C (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoInputSpacePayloadPrincipal@@@Z @ 0x1800647E8 (--0-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoIn.c)
 *     ?HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ @ 0x18006A4D8 (-HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ.c)
 *     ?StopProcess@InputProcessManager@@QEAAXXZ @ 0x18019C190 (-StopProcess@InputProcessManager@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall HeatProcessor::~HeatProcessor(HeatProcessor *this, __int64 a2, __int64 a3, const char *a4)
{
  HMODULE v5; // rcx
  struct InputSystemInternalServerConnection *InputSystemInternalServerConnection; // rax
  void (__fastcall ***v7)(_QWORD); // rax
  InputProcessManager *v8; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &HeatProcessor::`vftable';
  *((_QWORD *)this + 1) = &HeatProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 2) = &HeatProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &HeatProcessor::`vftable'{for `RefCountedObject'};
  if ( HeatProcessor::HeatCoreProcessingEnabled(this, a2, a3, a4) )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 12);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 11);
    v5 = (HMODULE)*((_QWORD *)this + 10);
    if ( v5 )
    {
      FreeLibrary(v5);
      *((_QWORD *)this + 10) = 0LL;
    }
  }
  else
  {
    InputSystemInternalServerConnection = ISMStatics::GetInputSystemInternalServerConnection();
    v7 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)InputSystemInternalServerConnection
                                                                                         + 31)
                                                                                       + 8LL)
                                                                           + 24LL))(*((_QWORD *)InputSystemInternalServerConnection
                                                                                    + 31) + 8LL);
    wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
      &v8,
      v7);
    InputProcessManager::StopProcess(v8);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v8);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 11);
  NonPointerProcessor::~NonPointerProcessor((HeatProcessor *)((char *)this + 8));
}
