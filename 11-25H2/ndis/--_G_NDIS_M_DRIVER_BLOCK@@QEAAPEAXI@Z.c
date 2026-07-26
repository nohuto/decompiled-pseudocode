/*
 * XREFs of ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x14009C66C
 * Callers:
 *     NdisLWMRegisterMiniportDriver @ 0x14009CE60 (NdisLWMRegisterMiniportDriver.c)
 *     ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x140141BCC (-ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x140095ED0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 */

_NDIS_M_DRIVER_BLOCK *__fastcall _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'(_NDIS_M_DRIVER_BLOCK *this)
{
  wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset(
    (void **)&this->UnhookedCharacteristics.__ptr_.__value_,
    0LL);
  return this;
}
