/*
 * XREFs of ?AddEffectPackConfigurationToList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x1800FBAA8
 * Callers:
 *     ?OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z @ 0x1800FBD50 (-OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z.c)
 *     ?ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ @ 0x1800FC164 (-ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1800039BC (--$Write@U-$_tlgWrapperByRef@$0BA@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ??$_Construct_in_place@V?$shared_ptr@VEffectPack@@@std@@AEAV12@@std@@YAXAEAV?$shared_ptr@VEffectPack@@@0@0@Z @ 0x1800FB688 (--$_Construct_in_place@V-$shared_ptr@VEffectPack@@@std@@AEAV12@@std@@YAXAEAV-$shared_ptr@VEffect.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@?$vector@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@1@QEAV21@AEBV21@@Z @ 0x1800FB694 (--$_Emplace_reallocate@AEBV-$shared_ptr@VCXvmPowerReferenceManager@@@std@@@-$vector@V-$shared_pt.c)
 *     ?CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x180144864 (-CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV-$shared_ptr@$$CBUE.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EffectPackConfigurationManager::AddEffectPackConfigurationToList(
        EffectPackConfigurationManager *this,
        struct _GUID *a2)
{
  int GlobalEffectPackConfiguration; // eax
  unsigned int v5; // ebx
  const char *v6; // r9
  __int64 result; // rax
  _QWORD *i; // rcx
  __int64 v9; // rax
  std::_Ref_count_base *v10; // rbx
  _DWORD *v11; // rcx
  int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rcx
  _DWORD *v16; // rcx
  int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _GUID *v20; // [rsp+30h] [rbp-38h] BYREF
  __int128 v21; // [rsp+38h] [rbp-30h] BYREF
  struct _GUID v22; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v21 = 0LL;
  v22 = *a2;
  try
  {
    GlobalEffectPackConfiguration = EffectPackConfiguration::CreateGlobalEffectPackConfiguration();
    v5 = GlobalEffectPackConfiguration;
    if ( GlobalEffectPackConfiguration >= 0 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
      *(_QWORD *)&v22.Data1 = (char *)this + 16;
      for ( i = (_QWORD *)*((_QWORD *)this + 8); i != *((_QWORD **)this + 9); i += 2 )
      {
        v9 = *(_QWORD *)*i - *(_QWORD *)&a2->Data1;
        if ( !v9 )
          v9 = *(_QWORD *)(*i + 8LL) - *(_QWORD *)a2->Data4;
        if ( !v9 )
        {
          *i = v21;
          v10 = (std::_Ref_count_base *)i[1];
          i[1] = *((_QWORD *)&v21 + 1);
          v11 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
          if ( *v11 > 4u && tlgKeywordOn((__int64)v11, 2048LL) )
          {
            v20 = a2;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>>(
              v12,
              (int)&unk_1801ACED2,
              v13,
              v14,
              (__int64 *)&v20);
          }
          goto LABEL_22;
        }
      }
      v15 = (_QWORD *)*((_QWORD *)this + 9);
      if ( v15 == *((_QWORD **)this + 10) )
      {
        std::vector<std::shared_ptr<CXvmPowerReferenceManager>>::_Emplace_reallocate<std::shared_ptr<CXvmPowerReferenceManager> const &>(
          (__int64 *)this + 8,
          *((_QWORD *)this + 9),
          (__int64)&v21);
      }
      else
      {
        std::_Construct_in_place<std::shared_ptr<EffectPack>,std::shared_ptr<EffectPack> &>(v15, &v21);
        *((_QWORD *)this + 9) += 16LL;
      }
      v16 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *v16 > 4u && tlgKeywordOn((__int64)v16, 2048LL) )
      {
        v20 = a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>>(
          v17,
          (int)&unk_1801ACF01,
          v18,
          v19,
          (__int64 *)&v20);
      }
      v10 = (std::_Ref_count_base *)*((_QWORD *)&v21 + 1);
LABEL_22:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v22);
      if ( v10 )
        std::_Ref_count_base::_Decref(v10);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x147,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
        (const char *)(unsigned int)GlobalEffectPackConfiguration);
      if ( *((_QWORD *)&v21 + 1) )
        std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v21 + 1));
      result = v5;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x16C,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
                           v6);
  }
  return result;
}
