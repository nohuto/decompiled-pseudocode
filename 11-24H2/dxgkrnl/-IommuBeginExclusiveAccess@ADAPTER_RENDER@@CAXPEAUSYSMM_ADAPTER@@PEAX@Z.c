/*
 * XREFs of ?IommuBeginExclusiveAccess@ADAPTER_RENDER@@CAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x14019F580
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiBeginExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ @ 0x1401A1060 (-DdiBeginExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x1402CACD4 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 */

void __fastcall ADAPTER_RENDER::IommuBeginExclusiveAccess(struct SYSMM_ADAPTER *a1, ADAPTER_RENDER *a2)
{
  DXGADAPTER::AcquireCoreResourceExclusive(*((_QWORD *)a2 + 2), 3LL, 0LL);
  ADAPTER_RENDER::DdiBeginExclusiveAccess(a2);
}
