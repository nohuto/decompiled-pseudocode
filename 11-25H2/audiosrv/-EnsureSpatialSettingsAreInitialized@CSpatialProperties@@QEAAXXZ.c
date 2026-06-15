/*
 * XREFs of ?EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXXZ @ 0x180132680
 * Callers:
 *     ?GetEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteristics@@@Z @ 0x180014FC0 (-GetEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteri.c)
 *     ?PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18006DC10 (-PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANC.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x180006724 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U3@@-$_tlgWrite.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800AB328 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSpatialProperties::EnsureSpatialSettingsAreInitialized(LPCRITICAL_SECTION lpCriticalSection)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  const WCHAR *v3; // rsi
  bool v4; // bl
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // rcx
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+58h] [rbp+7h] BYREF
  int v12; // [rsp+5Ch] [rbp+Bh] BYREF
  int v13; // [rsp+60h] [rbp+Fh] BYREF
  int v14; // [rsp+64h] [rbp+13h] BYREF
  int v15; // [rsp+68h] [rbp+17h] BYREF
  GUID *v16; // [rsp+70h] [rbp+1Fh] BYREF
  const WCHAR *v17; // [rsp+78h] [rbp+27h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+80h] [rbp+2Fh] BYREF
  GUID v19; // [rsp+88h] [rbp+37h] BYREF

  v11 = 0;
  v19 = GUID_00000000_0000_0000_0000_000000000000;
  v12 = 0;
  if ( !LOBYTE(lpCriticalSection[2].LockCount) )
  {
    DebugInfo = lpCriticalSection[1].DebugInfo;
    if ( DebugInfo )
    {
      if ( lpCriticalSection[1].LockSemaphore )
      {
        v3 = *(const WCHAR **)&DebugInfo[1].Type;
        v4 = IsGetDefaultSpatialRenderingModePresent()
          && (int)GetDefaultSpatialSettingsForEndpoint(v3, &v11, &v19, &v12) >= 0;
        EnterCriticalSection(lpCriticalSection);
        v18 = lpCriticalSection;
        if ( v4
          && !LOBYTE(lpCriticalSection[2].LockCount)
          && (*(int (__fastcall **)(ULONG_PTR, int *))(*(_QWORD *)lpCriticalSection[1].SpinCount + 112LL))(
               lpCriticalSection[1].SpinCount,
               &v11) < 0 )
        {
          BYTE6(lpCriticalSection[191].SpinCount) = 1;
          memset_0(&lpCriticalSection[2].OwningThread, 0, 0x48uLL);
          memset_0(&lpCriticalSection[4].RecursionCount, 0, 0x1D52uLL);
          lpCriticalSection[4].LockCount = 0;
          v5 = v11;
          LODWORD(lpCriticalSection[2].OwningThread) = v11;
          HIDWORD(lpCriticalSection[3].SpinCount) = v5;
          *(GUID *)((char *)&lpCriticalSection[2].LockSemaphore + 4) = v19;
          v6 = v12;
          HIDWORD(lpCriticalSection[4].DebugInfo) = v12 != 0;
          LODWORD(lpCriticalSection[2].LockSemaphore) = v6;
          (*(void (__fastcall **)(HANDLE, HANDLE *, _QWORD, _QWORD))(*(_QWORD *)lpCriticalSection[1].LockSemaphore + 48LL))(
            lpCriticalSection[1].LockSemaphore,
            &lpCriticalSection[2].OwningThread,
            0LL,
            0LL);
          v7 = *(_DWORD **)&lpCriticalSection[1].LockCount;
          if ( *v7 > 4u && tlgKeywordOn((__int64)v7, 16LL) )
          {
            v13 = v9;
            v14 = v12;
            v15 = v11;
            v16 = &v19;
            v17 = v3;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v8,
              (int)&unk_1801A7157,
              v9,
              v10,
              &v17,
              (__int64 *)&v16,
              (__int64)&v15,
              (__int64)&v14,
              (__int64)&v13);
          }
        }
        LOBYTE(lpCriticalSection[2].LockCount) = 1;
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
      }
    }
  }
}
