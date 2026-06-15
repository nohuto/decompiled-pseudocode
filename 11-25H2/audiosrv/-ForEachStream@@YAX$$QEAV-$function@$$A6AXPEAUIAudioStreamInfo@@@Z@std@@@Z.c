/*
 * XREFs of ?ForEachStream@@YAX$$QEAV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x180105FDC
 * Callers:
 *     ?ReevaluateStreamsOnStreamGroup@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIStreamGroupProxy@@@Z @ 0x180089200 (-ReevaluateStreamsOnStreamGroup@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescripto.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002307C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??R?$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z @ 0x180023334 (--R-$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x180061210 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ForEachStream(__int64 a1)
{
  __int64 v2; // rcx
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 v4; // rdx
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v7; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+68h] [rbp+20h] BYREF

  EnterCriticalSection(&g_csVadList);
  v5 = &g_csVadList;
  v7 = (_QWORD *)g_VADServerList;
  if ( g_VADServerList )
  {
    do
    {
      v3 = (struct _RTL_CRITICAL_SECTION *)*ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(
                                              v2,
                                              &v7);
      v6 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v3[14].DebugInfo, &v6) >= 0 && v6 )
      {
        EnterCriticalSection(v3 + 5);
        v8 = v3 + 5;
        v4 = ((__int64)v3[4].OwningThread + 8) & -(__int64)(v3[4].OwningThread != 0LL);
        if ( v4 )
          std::_Func_class<void,IAudioStreamInfo *>::operator()(a1, v4);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v8);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v6);
    }
    while ( v7 );
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v5);
}
