/*
 * XREFs of MiInsertVadEvent @ 0x1404EF5E8
 * Callers:
 *     MiWaitForVadDeletion @ 0x140345500 (MiWaitForVadDeletion.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F1EEC (MiApplyImageHotPatchRequest.c)
 *     MiAddSecureEntry @ 0x1408DC0A0 (MiAddSecureEntry.c)
 *     MiCreatePlaceholderStorage @ 0x1408DC630 (MiCreatePlaceholderStorage.c)
 *     MiCreateVadEventBitmap @ 0x1408DC8AC (MiCreateVadEventBitmap.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiSecureVad @ 0x1409E51EC (MiSecureVad.c)
 *     MiCreateRotateView @ 0x140A615A8 (MiCreateRotateView.c)
 *     MiCreateLargePageVad @ 0x140A7D970 (MiCreateLargePageVad.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 *     MiCreateUserPhysicalView @ 0x140AEA2A8 (MiCreateUserPhysicalView.c)
 * Callees:
 *     MiLockVadCore @ 0x1403DAE20 (MiLockVadCore.c)
 *     MiUnlockVadCore @ 0x14041D7C0 (MiUnlockVadCore.c)
 */

__int64 __fastcall MiInsertVadEvent(__int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int8 v5; // dl
  __int64 result; // rax

  if ( a3 )
    v5 = MiLockVadCore(a1, 0);
  else
    v5 = 17;
  *a2 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
  result = (unsigned __int64)a2 | *(_QWORD *)(a1 + 56) & 0xFLL;
  *(_QWORD *)(a1 + 56) = result;
  if ( v5 != 17 )
    return MiUnlockVadCore(a1, v5);
  return result;
}
