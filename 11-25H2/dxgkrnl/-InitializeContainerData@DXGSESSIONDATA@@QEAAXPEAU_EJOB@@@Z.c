/*
 * XREFs of ?InitializeContainerData@DXGSESSIONDATA@@QEAAXPEAU_EJOB@@@Z @ 0x1401F4824
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1403E1D40 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     ?DxgkpQueryHostDriverStoreAvailability@@YA_NXZ @ 0x1401F4190 (-DxgkpQueryHostDriverStoreAvailability@@YA_NXZ.c)
 */

void __fastcall DXGSESSIONDATA::InitializeContainerData(DXGSESSIONDATA *this, struct _EJOB *a2)
{
  *((_BYTE *)this + 18504) = DxgkpQueryHostDriverStoreAvailability();
}
