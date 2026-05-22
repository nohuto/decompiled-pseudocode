/*
 * XREFs of ??1?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x180057988
 * Callers:
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$4 @ 0x1801CFECC (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$4.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$5 @ 0x1801D01E0 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$5.c)
 *     _ContextualProcessorBuffer::TryAddProcessorAndContact_::_1_::dtor$0 @ 0x1801D0E00 (_ContextualProcessorBuffer--TryAddProcessorAndContact_--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::AddProcessor_::_1_::dtor$0 @ 0x1801D1098 (_ContextualProcessorBuffer--AddProcessor_--_1_--dtor$0.c)
 *     _InputSite::AttachObject_BamoWindowsMessageDeliveryProxy__::_1_::dtor$2 @ 0x1801D1683 (_InputSite--AttachObject_BamoWindowsMessageDeliveryProxy__--_1_--dtor$2.c)
 *     _InputSite::AttachObject_BamoEdgyNotificationSourceClientProxy__::_1_::dtor$2 @ 0x1801D2BF6 (_InputSite--AttachObject_BamoEdgyNotificationSourceClientProxy__--_1_--dtor$2.c)
 *     _MPCConstantManagerClient::CreateHRPrincipal_::_1_::dtor$0 @ 0x1801D80AE (_MPCConstantManagerClient--CreateHRPrincipal_--_1_--dtor$0.c)
 *     _MPCConstantManagerClient::CreatePVPrincipal_::_1_::dtor$0 @ 0x1801D8114 (_MPCConstantManagerClient--CreatePVPrincipal_--_1_--dtor$0.c)
 *     _MPCConstantManagerClient::CreateStringVectorPrincipal_::_1_::dtor$0 @ 0x1801D817A (_MPCConstantManagerClient--CreateStringVectorPrincipal_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::AsyncDeferral<Windows::Internal::CNoResult>::~AsyncDeferral<Windows::Internal::CNoResult>(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(result + 8) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
