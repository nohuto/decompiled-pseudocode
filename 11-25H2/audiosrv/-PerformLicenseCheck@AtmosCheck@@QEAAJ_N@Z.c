/*
 * XREFs of ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x1800627E4
 * Callers:
 *     ?StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18007CC60 (-StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call @ 0x180101B80 (std--_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_--_Do_call.c)
 *     _lambda_7ee6381ccef9550c878152fb933ee002_::operator() @ 0x1801474BC (_lambda_7ee6381ccef9550c878152fb933ee002_--operator().c)
 *     _lambda_c0f79c7db2a352ac037a8b0fb781f475_::operator() @ 0x180147668 (_lambda_c0f79c7db2a352ac037a8b0fb781f475_--operator().c)
 *     _lambda_ddf72429dfe7e6f051e146c766b7831c_::operator() @ 0x1801477A0 (_lambda_ddf72429dfe7e6f051e146c766b7831c_--operator().c)
 *     _lambda_ed93c361bb151993c0858b3e67bfc06f_::operator() @ 0x1801478EC (_lambda_ed93c361bb151993c0858b3e67bfc06f_--operator().c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18014804C (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     ?StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z @ 0x1801561C0 (-StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z.c)
 *     ?StaticGracePeriodExpiredFired@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180156200 (-StaticGracePeriodExpiredFired@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x1800629B4 (-TraceResult@AtmosCheck@@AEAAXJ_N@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180062D54 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0b797c3ec2b40741812a9b93d57ea05e___ @ 0x180062DEC (Windows--Internal--ComTaskPool--QueueTask__lambda_0b797c3ec2b40741812a9b93d57ea05e___.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180062F48 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18007CCAC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EV_ea_18007CCAC.c)
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x1800A1B1C (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::PerformLicenseCheck(AtmosCheck *this, char a2)
{
  HRESULT ApartmentType; // eax
  DWORD CurrentThreadId; // eax
  __int64 v6; // rcx
  AtmosCheck *v7; // rcx
  unsigned int v8; // edi
  int v9; // eax
  APTTYPEQUALIFIER pAptQualifier; // [rsp+20h] [rbp-50h] BYREF
  __m128i si128; // [rsp+28h] [rbp-48h] BYREF
  int v13; // [rsp+38h] [rbp-38h]
  int v14; // [rsp+3Ch] [rbp-34h]
  int v15; // [rsp+40h] [rbp-30h]
  __int64 v16[4]; // [rsp+48h] [rbp-28h] BYREF
  char v17; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  bool v19; // [rsp+90h] [rbp+20h] BYREF
  int v20; // [rsp+A0h] [rbp+30h] BYREF
  APTTYPE pAptType; // [rsp+A8h] [rbp+38h] BYREF

  v20 = 0;
  pAptType = APTTYPE_MTA;
  pAptQualifier = APTTYPEQUALIFIER_NONE;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v13 = -2147023728;
  v14 = -2147023728;
  v15 = -2147023728;
  v19 = 0;
  if ( !*((_BYTE *)this + 96) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x535,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  if ( *((_BYTE *)this + 696) )
  {
    if ( (unsigned int)CallbackContext > 5 )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        this,
        &unk_1801A7E90);
    return 0LL;
  }
  if ( !AtmosCheck::IsLicenseEvaluationRequired(this) )
    return 0LL;
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  if ( ApartmentType < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x566,
      (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)ApartmentType,
      pAptQualifier);
  (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)this + 8LL))(this);
  wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
    v16,
    this);
  v16[1] = (__int64)&si128;
  v16[2] = (__int64)&v20;
  v16[3] = (__int64)&v19;
  v17 = a2;
  CurrentThreadId = GetCurrentThreadId();
  v6 = 0LL;
  if ( pAptType == APTTYPE_MTA )
    v6 = 4LL;
  Windows::Internal::ComTaskPool::QueueTask__lambda_0b797c3ec2b40741812a9b93d57ea05e___(v6, 4LL, CurrentThreadId, v16);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v16);
  (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)this + 16LL))(this);
  v8 = v20;
  if ( v20 >= 0 )
  {
    if ( a2 )
    {
      if ( v19 || (v9 = *((_DWORD *)this + 46), v9 == 8) || v9 == 3 )
      {
        if ( *((_QWORD *)this + 5) )
        {
          AtmosCheck::Trace(v7, "Calling AtmosCodecsStatusChanged callback", 0);
          (***((void (__fastcall ****)(_QWORD))this + 5))(*((_QWORD *)this + 5));
          v8 = v20;
        }
      }
    }
  }
  AtmosCheck::TraceResult(this, v8, v19);
  *((_DWORD *)this + 46) = 7;
  return v8;
}
