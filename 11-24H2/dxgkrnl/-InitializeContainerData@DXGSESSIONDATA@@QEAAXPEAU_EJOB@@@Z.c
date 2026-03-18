/*
 * XREFs of ?InitializeContainerData@DXGSESSIONDATA@@QEAAXPEAU_EJOB@@@Z @ 0x1401FB0E4
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1403DA6C0 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     ?DxgkpQueryHostDriverStoreAvailability@@YA_NXZ @ 0x1401FA9D8 (-DxgkpQueryHostDriverStoreAvailability@@YA_NXZ.c)
 */

void __fastcall DXGSESSIONDATA::InitializeContainerData(DXGSESSIONDATA *this, struct _EJOB *a2)
{
  *((_BYTE *)this + 18504) = DxgkpQueryHostDriverStoreAvailability();
}
