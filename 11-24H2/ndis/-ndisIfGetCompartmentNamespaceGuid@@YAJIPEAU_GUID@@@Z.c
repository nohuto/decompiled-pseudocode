/*
 * XREFs of ?ndisIfGetCompartmentNamespaceGuid@@YAJIPEAU_GUID@@@Z @ 0x1400CB208
 * Callers:
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x140029B90 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 * Callees:
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1400483A0 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 */

__int64 __fastcall ndisIfGetCompartmentNamespaceGuid(unsigned int a1, struct _GUID *a2)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  KIRQL v5; // dl
  unsigned int v6; // ebx

  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  CompartmentBlock = ndisIfFindCompartmentBlock(a1);
  v6 = 0;
  if ( CompartmentBlock )
    *a2 = *(struct _GUID *)((char *)CompartmentBlock + 1684);
  else
    v6 = -1073741275;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v5);
  return v6;
}
