/*
 * XREFs of ??$?0$00X@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x140099960
 * Callers:
 *     ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x14006E6A0 (--0_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     NdisLWMRegisterMiniportDriver @ 0x14009CE60 (NdisLWMRegisterMiniportDriver.c)
 *     CreateKModule @ 0x140155974 (CreateKModule.c)
 *     ??0KModule@@QEAA@AEBU_GUID@@$$QEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x140156560 (--0KModule@@QEAA@AEBU_GUID@@$$QEAV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 *     ?Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312@Z3@Z @ 0x14016E0A0 (-Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312.c)
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1401706C0 (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x140181730 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     ??$?0PEAU_NDIS_PM_WOL_PATTERN@@$00@?$__compressed_pair@PEAU_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@QEAA@$$QEAPEAU_NDIS_PM_WOL_PATTERN@@@Z @ 0x14006E440 (--$-0PEAU_NDIS_PM_WOL_PATTERN@@$00@-$__compressed_pair@PEAU_NDIS_PM_WOL_PATTERN@@U-$KFreePool@U_.c)
 */

__int64 __fastcall wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::unique_ptr<KnobCollection,KFreePool<KnobCollection>>(
        _QWORD *a1)
{
  __int64 v1; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  wistd::__compressed_pair<_NDIS_PM_WOL_PATTERN *,KFreePool<_NDIS_PM_WOL_PATTERN>>::__compressed_pair<_NDIS_PM_WOL_PATTERN *,KFreePool<_NDIS_PM_WOL_PATTERN>>(
    a1,
    &v3);
  return v1;
}
