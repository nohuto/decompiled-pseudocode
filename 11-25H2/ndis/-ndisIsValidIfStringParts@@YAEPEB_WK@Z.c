/*
 * XREFs of ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x140099D10
 * Callers:
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x14004B680 (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     ?ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z @ 0x14008EC70 (-ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z.c)
 *     ndisIfCreateNetworkBlock @ 0x1400D45DC (ndisIfCreateNetworkBlock.c)
 *     ndisNsiChangeNetworkInfo @ 0x1400D4D1C (ndisNsiChangeNetworkInfo.c)
 *     ndisIfUpdateStringIfNeeded @ 0x140152960 (ndisIfUpdateStringIfNeeded.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1401996D8 (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsValidIfStringParts(const wchar_t *a1, unsigned int a2)
{
  return a2 <= 0x200 && (a2 & 1) == 0;
}
