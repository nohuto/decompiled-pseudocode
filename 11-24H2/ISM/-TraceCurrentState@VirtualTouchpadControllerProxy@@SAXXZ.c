/*
 * XREFs of ?TraceCurrentState@VirtualTouchpadControllerProxy@@SAXXZ @ 0x180136CF4
 * Callers:
 *     ?Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x180113660 (-Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1800252DC (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x180025454 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180073124 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800741C4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?GetData@BamoAnimationTargetClientProxy@@UEAAAEBUGestureAnimationData@Input@Internal@UI@Windows@@XZ @ 0x18009C280 (-GetData@BamoAnimationTargetClientProxy@@UEAAAEBUGestureAnimationData@Input@Internal@UI@Windows@.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?GetPrimaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Internal@UI@Windows@@XZ @ 0x1801354A0 (-GetPrimaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Interna.c)
 *     ?GetSecondaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Internal@UI@Windows@@XZ @ 0x1801354D0 (-GetSecondaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Inter.c)
 *     ?VirtualTouchpadController@VirtualTouchpad@InputTraceLogging@@SAXUVPTP_ID@@AEBUtagRECT@@AEBUtagVIRTUAL_PTP_CONFIG@@AEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@AEBUPhysicalClickZone@789Windows@@4@Z @ 0x18013758C (-VirtualTouchpadController@VirtualTouchpad@InputTraceLogging@@SAXUVPTP_ID@@AEBUtagRECT@@AEBUtagV.c)
 */

// Hidden C++ exception states: #wind=2
void VirtualTouchpadControllerProxy::TraceCurrentState(void)
{
  __int64 v0; // rdi
  __int64 *i; // rbx
  __int64 v2; // rcx
  struct Microsoft::Bamo::BaseBamoConnection *v3; // rdx
  const struct Windows::UI::Internal::Input::PhysicalClickZone *SecondaryClickZone; // rsi
  const struct Windows::UI::Internal::Input::PhysicalClickZone *PrimaryClickZone; // rbp
  const struct Windows::UI::Internal::Input::GestureAnimationData *Data; // rax
  __int64 v7; // rcx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp-48h] BYREF
  Microsoft::BamoImpl::BamoImplObject *v9[3]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v10; // [rsp+50h] [rbp-28h] BYREF

  wil::EnterCriticalSection(&v8, &VirtualTouchpadControllerProxy::s_lock);
  v0 = qword_180250EB8;
  for ( i = *(__int64 **)qword_180250EB8; i != (__int64 *)v0; i = (__int64 *)*i )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(i[2] + 32) + 24LL) + 32LL);
    if ( *(int *)(v2 + 8) <= 0 )
      v3 = 0LL;
    else
      v3 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v2 + 16);
    Microsoft::Bamo::Lock::Lock(v9, v3);
    SecondaryClickZone = BamoVirtualTouchpadControllerProxy::GetSecondaryClickZone((BamoVirtualTouchpadControllerProxy *)(i[2] + 8));
    PrimaryClickZone = BamoVirtualTouchpadControllerProxy::GetPrimaryClickZone((BamoVirtualTouchpadControllerProxy *)(i[2] + 8));
    Data = BamoAnimationTargetClientProxy::GetData((BamoAnimationTargetClientProxy *)(i[2] + 8));
    v7 = i[2];
    if ( *(_BYTE *)(v7 + 228) )
      v10 = *(_OWORD *)(v7 + 212);
    else
      v10 = 0LL;
    InputTraceLogging::VirtualTouchpad::VirtualTouchpadController(
      *((unsigned int *)i + 6),
      &v10,
      v7 + 252,
      Data,
      PrimaryClickZone,
      SecondaryClickZone,
      v8);
    Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v9);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v8);
}
