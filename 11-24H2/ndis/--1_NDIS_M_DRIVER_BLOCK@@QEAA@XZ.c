/*
 * XREFs of ??1_NDIS_M_DRIVER_BLOCK@@QEAA@XZ @ 0x140091330
 * Callers:
 *     NdisLWMRegisterMiniportDriver @ 0x140093240 (NdisLWMRegisterMiniportDriver.c)
 *     ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x140136BAC (-ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x14008ACB0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 *     ?reset@?$unique_ptr@VTriageData@@U?$KFreePoolNP@VTriageData@@@@@wistd@@QEAAXPEAVTriageData@@@Z @ 0x140092E1C (-reset@-$unique_ptr@VTriageData@@U-$KFreePoolNP@VTriageData@@@@@wistd@@QEAAXPEAVTriageData@@@Z.c)
 */

void __fastcall _NDIS_M_DRIVER_BLOCK::~_NDIS_M_DRIVER_BLOCK(_NDIS_M_DRIVER_BLOCK *this)
{
  wistd::unique_ptr<TriageData,KFreePoolNP<TriageData>>::reset(&this->Triage, 0LL);
  wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset(
    (void **)&this->UnhookedCharacteristics.__ptr_.__value_,
    0LL);
}
