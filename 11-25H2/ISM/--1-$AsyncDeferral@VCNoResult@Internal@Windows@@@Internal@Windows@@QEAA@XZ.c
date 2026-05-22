/*
 * XREFs of ??1?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x180057B78
 * Callers:
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$4 @ 0x1801C8A3C (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$4.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$5 @ 0x1801C8D50 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$5.c)
 *     _ContextualProcessorBuffer::TryAddProcessorAndContact_::_1_::dtor$0 @ 0x1801C9960 (_ContextualProcessorBuffer--TryAddProcessorAndContact_--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::AddProcessor_::_1_::dtor$0 @ 0x1801C9BF8 (_ContextualProcessorBuffer--AddProcessor_--_1_--dtor$0.c)
 *     _InputSite::AttachObject_BamoWindowsMessageDeliveryProxy__::_1_::dtor$2 @ 0x1801CA7FE (_InputSite--AttachObject_BamoWindowsMessageDeliveryProxy__--_1_--dtor$2.c)
 *     _InputSite::AttachObject_BamoEdgyNotificationSourceClientProxy__::_1_::dtor$2 @ 0x1801CB756 (_InputSite--AttachObject_BamoEdgyNotificationSourceClientProxy__--_1_--dtor$2.c)
 *     _MPCConstantManagerClient::CreateHRPrincipal_::_1_::dtor$0 @ 0x1801D086E (_MPCConstantManagerClient--CreateHRPrincipal_--_1_--dtor$0.c)
 *     _MPCConstantManagerClient::CreatePVPrincipal_::_1_::dtor$0 @ 0x1801D08D4 (_MPCConstantManagerClient--CreatePVPrincipal_--_1_--dtor$0.c)
 *     _MPCConstantManagerClient::CreateStringVectorPrincipal_::_1_::dtor$0 @ 0x1801D093A (_MPCConstantManagerClient--CreateStringVectorPrincipal_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
