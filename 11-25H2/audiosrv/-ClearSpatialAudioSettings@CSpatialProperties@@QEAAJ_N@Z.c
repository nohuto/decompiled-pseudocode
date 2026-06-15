/*
 * XREFs of ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAJ_N@Z @ 0x180132474
 * Callers:
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180087A70 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     wil::details::lambda_call__lambda_4a8c0646310564e4526b1ff656a8ae23___::_lambda_call__lambda_4a8c0646310564e4526b1ff656a8ae23___ @ 0x1801321A8 (wil--details--lambda_call__lambda_4a8c0646310564e4526b1ff656a8ae23___--_lambda_call__lambda_4a8c.c)
 *     ?Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x1801349D4 (-Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180136D7C (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@P.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@44@Z @ 0x1800068C4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     BlockSpatialAudioRegistryGates @ 0x180132350 (BlockSpatialAudioRegistryGates.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSpatialProperties::ClearSpatialAudioSettings(struct _RTL_CRITICAL_SECTION *this, char a2)
{
  unsigned int v4; // ebx
  bool v5; // si
  _DWORD *v6; // rcx
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  int v12[2]; // [rsp+40h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v15; // [rsp+80h] [rbp+30h] BYREF
  int v16; // [rsp+90h] [rbp+40h] BYREF
  int v17; // [rsp+98h] [rbp+48h] BYREF

  v4 = 0;
  v5 = 0;
  EnterCriticalSection(this);
  v13 = this;
  if ( this[1].DebugInfo && this[1].LockSemaphore )
  {
    if ( !a2 )
    {
      if ( BYTE6(this[191].SpinCount) )
      {
        if ( (*(int (__fastcall **)(ULONG_PTR))(*(_QWORD *)this[1].SpinCount + 24LL))(this[1].SpinCount) >= 0 )
        {
          v17 = 0;
          v16 = 0;
          v15 = 0;
          if ( (*(int (__fastcall **)(ULONG_PTR, int *))(*(_QWORD *)this[1].SpinCount + 112LL))(this[1].SpinCount, &v15) >= 0
            && !v15
            && (*(int (__fastcall **)(ULONG_PTR, int *))(*(_QWORD *)this[1].SpinCount + 128LL))(this[1].SpinCount, &v16) >= 0
            && !v16
            && (*(int (__fastcall **)(ULONG_PTR, int *))(*(_QWORD *)this[1].SpinCount + 184LL))(this[1].SpinCount, &v17) >= 0 )
          {
            v5 = v17 == 0;
          }
        }
      }
    }
    v6 = *(_DWORD **)&this[1].LockCount;
    if ( *v6 > 4u && tlgKeywordOn((__int64)v6, 16LL) )
    {
      LOBYTE(v15) = BYTE6(this[191].SpinCount);
      LOBYTE(v16) = a2;
      LOBYTE(v17) = v5;
      *(_QWORD *)v12 = *(_QWORD *)&this[1].DebugInfo[1].Type;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v7,
        (int)&unk_1801A70E9,
        v8,
        v9,
        (const WCHAR **)v12,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15);
    }
    if ( !v5 )
    {
      this[2].RecursionCount = 0;
      if ( a2 )
        memset_0(&this[2].OwningThread, 0, 0x48uLL);
      LODWORD(this[2].OwningThread) = 0;
      HIDWORD(this[4].DebugInfo) = 0;
      LODWORD(this[4].DebugInfo) = BlockSpatialAudioRegistryGates();
      this[4].LockCount = 0;
      memset_0(&this[4].RecursionCount, 0, 0x1D52uLL);
      v10 = (*(__int64 (__fastcall **)(HANDLE, HANDLE *, _QWORD, _QWORD))(*(_QWORD *)this[1].LockSemaphore + 48LL))(
              this[1].LockSemaphore,
              &this[2].OwningThread,
              0LL,
              0LL);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          974LL,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialproperties.cpp",
          (const char *)(unsigned int)v10);
      BYTE6(this[191].SpinCount) = 1;
    }
  }
  else
  {
    v4 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39B,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialproperties.cpp",
      (const char *)0x8000FFFFLL);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v13);
  return v4;
}
