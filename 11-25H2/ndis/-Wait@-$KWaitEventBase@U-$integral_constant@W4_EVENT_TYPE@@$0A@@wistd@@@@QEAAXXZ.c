/*
 * XREFs of ?Wait@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ @ 0x1401412E0
 * Callers:
 *     ?ndisStackExpansionAddProcessor@@YAXK@Z @ 0x1400CBAE4 (-ndisStackExpansionAddProcessor@@YAXK@Z.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x140151A14 (-ReferenceWdi@@YA_NXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x14015D9B0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x14015E040 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ??1BindEngine@Ndis@@QEAA@XZ @ 0x140172830 (--1BindEngine@Ndis@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::Wait(void *a1)
{
  return KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
}
