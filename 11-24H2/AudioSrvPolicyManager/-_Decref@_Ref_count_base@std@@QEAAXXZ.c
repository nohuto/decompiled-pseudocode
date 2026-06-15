/*
 * XREFs of ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180012ED0
 * Callers:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180002BC4 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 *     ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x1800042D0 (-SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z.c)
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z @ 0x18001C73C (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z.c)
 *     std::_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_::_Delete_this @ 0x18001E460 (std--_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_--_Delete_this.c)
 *     _lambda_bc5d681da67d9384ebd56f302790ab0c_::__lambda_bc5d681da67d9384ebd56f302790ab0c_ @ 0x18001F9B8 (_lambda_bc5d681da67d9384ebd56f302790ab0c_--__lambda_bc5d681da67d9384ebd56f302790ab0c_.c)
 *     ??1CDuckingManager@@UEAA@XZ @ 0x1800285CC (--1CDuckingManager@@UEAA@XZ.c)
 *     ??$?4VDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@$0A@@?$shared_ptr@VDuckingDescriptor@@@std@@QEAAAEAV01@$$QEAV?$unique_ptr@VDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@@1@@Z @ 0x18002B548 (--$-4VDuckingDescriptor@@U-$default_delete@VDuckingDescriptor@@@std@@$0A@@-$shared_ptr@VDuckingD.c)
 *     ??1CPBMStreamClassVolumeGainStage@@UEAA@XZ @ 0x18002C310 (--1CPBMStreamClassVolumeGainStage@@UEAA@XZ.c)
 *     ??1DeactivatableDuckingDescriptor@@UEAA@XZ @ 0x18002C348 (--1DeactivatableDuckingDescriptor@@UEAA@XZ.c)
 *     _lambda_5f73260db21cd4e80ff2f87aa86ff472_::operator() @ 0x18002C714 (_lambda_5f73260db21cd4e80ff2f87aa86ff472_--operator().c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x18002CE84 (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18002E348 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?RuntimeClassInitialize@CDuckingManager@@QEAAJXZ @ 0x18002E5CC (-RuntimeClassInitialize@CDuckingManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CPBMStreamClassVolumeGainStage@@QEAAJPEBU_GUID@@V?$shared_ptr@UIDuckingDescriptor@@@std@@@Z @ 0x18002E69C (-RuntimeClassInitialize@CPBMStreamClassVolumeGainStage@@QEAAJPEBU_GUID@@V-$shared_ptr@UIDuckingD.c)
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z @ 0x18003A6BC (-OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z.c)
 *     PbmAllowMediaPlaybackForApp @ 0x18003B070 (PbmAllowMediaPlaybackForApp.c)
 *     PbmReportApplicationState @ 0x18003B6D0 (PbmReportApplicationState.c)
 *     ??1DuckingDescriptorAndId@@QEAA@XZ @ 0x18003D5E4 (--1DuckingDescriptorAndId@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::_Ref_count_base::_Decref(std::_Ref_count_base *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(std::_Ref_count_base *))this)(this);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this + 8LL))(this);
  }
}
