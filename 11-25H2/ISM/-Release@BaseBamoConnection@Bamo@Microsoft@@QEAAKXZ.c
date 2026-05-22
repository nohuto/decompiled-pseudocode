/*
 * XREFs of ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18008D760
 * Callers:
 *     ?RuntimeClassInitialize@ForegroundManager@@QEAAJXZ @ 0x18000B13C (-RuntimeClassInitialize@ForegroundManager@@QEAAJXZ.c)
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x18000BBF0 (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ?InternalRelease@?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C7A4 (-InternalRelease@-$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x18000D0B0 (--$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSessio.c)
 *     _lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator() @ 0x18000D4BC (_lambda_d12edc8f4df206c0d98be8a6673aacf9_--operator().c)
 *     ?CreateTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBUHitTestResult@@@Z @ 0x180017F48 (-CreateTargetFromHitTestResult@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AE.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180018CC0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002404C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002582C (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?OnDisconnected@InputSiteElementProxy@@MEAAJXZ @ 0x18005AA90 (-OnDisconnected@InputSiteElementProxy@@MEAAJXZ.c)
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x18008D3FC (--0DeviceInputHost@@AEAA@XZ.c)
 *     ??1?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18008D560 (--1-$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAnimationDataProviderConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x180097698 (-InternalRelease@-$ComPtr@VAnimationDataProviderConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?attach@?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVBaseBamoConnection@Bamo@Microsoft@@@Z @ 0x18009BC98 (-attach@-$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAXP.c)
 *     std::_Func_impl_no_alloc__lambda_2a263001a26d7ccb0e01a80a789391e1__void_::_Do_call @ 0x18012BE50 (std--_Func_impl_no_alloc__lambda_2a263001a26d7ccb0e01a80a789391e1__void_--_Do_call.c)
 *     ?RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ @ 0x180165240 (-RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::Release(Microsoft::Bamo::BaseBamoConnection *this)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 56LL))(this);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
}
