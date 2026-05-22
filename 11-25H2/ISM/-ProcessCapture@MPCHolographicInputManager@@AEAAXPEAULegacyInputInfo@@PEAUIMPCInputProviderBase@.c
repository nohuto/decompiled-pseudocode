/*
 * XREFs of ?ProcessCapture@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180011A64
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180011C00 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$MPCHolographicInputManager_CaptureEvent@KI_NPEAUIMPCTarget@@@ISMTracing@@SAX$$QEAK$$QEAI$$QEA_N$$QEAPEAUIMPCTarget@@@Z @ 0x1800BB5D8 (--$MPCHolographicInputManager_CaptureEvent@KI_NPEAUIMPCTarget@@@ISMTracing@@SAX$$QEAK$$QEAI$$QEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHolographicInputManager::ProcessCapture(
        MPCHolographicInputManager *this,
        struct LegacyInputInfo *a2,
        struct IMPCInputProviderBase *a3,
        struct IMPCTarget **a4)
{
  char v7; // al
  __int64 v8; // r8
  __int64 v9; // r8
  struct IMPCTarget *v10; // rbx
  int v11; // [rsp+20h] [rbp-20h] BYREF
  struct IMPCTarget *v12; // [rsp+28h] [rbp-18h] BYREF
  struct IMPCTarget *v13; // [rsp+30h] [rbp-10h] BYREF
  MPCHolographicInputManager *v14; // [rsp+60h] [rbp+20h] BYREF
  int v15; // [rsp+70h] [rbp+30h] BYREF

  v14 = this;
  v7 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 152LL))(a3);
  v8 = *(_QWORD *)a3;
  if ( v7 )
  {
    v10 = (struct IMPCTarget *)(*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(v8 + 176))(a3);
    v12 = v10;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v12);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v12);
    *a4 = v10;
    if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *, struct LegacyInputInfo *))(*(_QWORD *)a3 + 192LL))(
           a3,
           a2) )
    {
      (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD, _QWORD))(*(_QWORD *)a3 + 168LL))(a3, 0LL, 0LL);
      v13 = v10;
      LOBYTE(v14) = 0;
      v15 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 112LL))(a3);
      v11 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 88LL))(a3);
      ((void (__fastcall *)(int *, int *, MPCHolographicInputManager **, struct IMPCTarget **))ISMTracing::MPCHolographicInputManager_CaptureEvent<unsigned long,unsigned int,bool,IMPCTarget *>)(
        &v11,
        &v15,
        &v14,
        &v13);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *, struct LegacyInputInfo *))(v8 + 184))(
              a3,
              a2) )
  {
    if ( *a4 )
    {
      LOBYTE(v9) = *((_BYTE *)a2 + 240) != 0;
      (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD, __int64))(*(_QWORD *)a3 + 168LL))(a3, *a4, v9);
      v12 = (struct IMPCTarget *)(*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 176LL))(a3);
      LOBYTE(v14) = 1;
      v15 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 112LL))(a3);
      v11 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 88LL))(a3);
      ((void (__fastcall *)(int *, int *, MPCHolographicInputManager **, struct IMPCTarget **))ISMTracing::MPCHolographicInputManager_CaptureEvent<unsigned long,unsigned int,bool,IMPCTarget *>)(
        &v11,
        &v15,
        &v14,
        &v12);
    }
  }
}
