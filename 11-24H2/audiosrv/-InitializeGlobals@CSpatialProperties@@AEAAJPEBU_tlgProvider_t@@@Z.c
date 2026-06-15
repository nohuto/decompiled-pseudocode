/*
 * XREFs of ?InitializeGlobals@CSpatialProperties@@AEAAJPEBU_tlgProvider_t@@@Z @ 0x18013DC74
 * Callers:
 *     ?Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18013D744 (-Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18000178C (--$Write@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ @ 0x180074B7C (-FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ.c)
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x18008D57C (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800A7618 (IsGetDefaultSpatialRenderingModePresent.c)
 *     ??$MakeAndInitialize@VCExclusiveModeListener@@V1@AEAPEBU_tlgProvider_t@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVCExclusiveModeListener@@AEAPEBU_tlgProvider_t@@AEA_N@Z @ 0x18013AF40 (--$MakeAndInitialize@VCExclusiveModeListener@@V1@AEAPEBU_tlgProvider_t@@AEA_N@Details@WRL@Micros.c)
 *     ?reset@?$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180140F7C (-reset@-$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSpatialProperties::InitializeGlobals(
        const struct _tlgProvider_t **this,
        const struct _tlgProvider_t *a2)
{
  unsigned int v4; // eax
  int v5; // eax
  HMODULE ModuleHandleW; // rax
  CSpatialAudioTechnologies *v7; // rcx
  int TopologyList; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  void *v12; // r8
  int v13; // eax
  CSpatialAudioTechnologies *v14; // rcx
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v18; // [rsp+60h] [rbp+18h] BYREF
  char v19; // [rsp+69h] [rbp+21h]

  EnterCriticalSection(&CSpatialProperties::s_globalsLock);
  v16 = &CSpatialProperties::s_globalsLock;
  v4 = CSpatialProperties::s_refCount;
  if ( CSpatialProperties::s_refCount )
    goto LABEL_12;
  if ( IsGetDefaultSpatialRenderingModePresent() )
    v5 = IsSpatialAllowedOnPlatform();
  else
    v5 = 1;
  CSpatialProperties::s_isSpatialAudioAllowedOnPlatform = v5 != 0;
  ModuleHandleW = GetModuleHandleW(L"AudioSrv.dll");
  TopologyList = CSpatialAudioTechnologies::CreateTopologyList(v7, ModuleHandleW);
  v11 = TopologyList;
  if ( TopologyList >= 0 )
  {
    v19 = 1;
    if ( *(_DWORD *)a2 > 4u )
    {
      LOBYTE(v18) = CSpatialProperties::s_isSpatialAudioAllowedOnPlatform;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>>(
        (int)a2,
        (int)&unk_1801B23E9,
        v9,
        v10,
        (__int64)&v18);
    }
    wil::com_ptr_t<CExclusiveModeListener,wil::err_returncode_policy>::reset();
    v13 = Microsoft::WRL::Details::MakeAndInitialize<CExclusiveModeListener,CExclusiveModeListener,_tlgProvider_t const * &,bool &>(
            (volatile signed __int64 **)&CSpatialProperties::s_exclusiveModeListener,
            this + 6,
            v12);
    v11 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11F,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialproperties.cpp",
        (const char *)(unsigned int)v13);
      wil::com_ptr_t<CExclusiveModeListener,wil::err_returncode_policy>::reset();
      CSpatialAudioTechnologies::FreeTopologyList(v14);
      goto LABEL_13;
    }
    *((_BYTE *)this + 89) = 1;
    v4 = CSpatialProperties::s_refCount;
LABEL_12:
    CSpatialProperties::s_refCount = v4 + 1;
    v11 = 0;
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x115,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialproperties.cpp",
    (const char *)(unsigned int)TopologyList);
LABEL_13:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v16);
  return v11;
}
