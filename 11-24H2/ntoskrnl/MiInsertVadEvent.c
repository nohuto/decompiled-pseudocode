/*
 * XREFs of MiInsertVadEvent @ 0x1404F1B48
 * Callers:
 *     MiWaitForVadDeletion @ 0x1402FBA58 (MiWaitForVadDeletion.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F191C (MiApplyImageHotPatchRequest.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MiCreatePlaceholderStorage @ 0x1408F8210 (MiCreatePlaceholderStorage.c)
 *     MiCreateVadEventBitmap @ 0x1409C3A04 (MiCreateVadEventBitmap.c)
 *     MiAddSecureEntry @ 0x1409C3F30 (MiAddSecureEntry.c)
 *     MiSecureVad @ 0x1409EA8FC (MiSecureVad.c)
 *     MiCreateRotateView @ 0x140A680A8 (MiCreateRotateView.c)
 *     MiCreateLargePageVad @ 0x140A82E50 (MiCreateLargePageVad.c)
 *     MiCreateUserPhysicalView @ 0x140AE76D8 (MiCreateUserPhysicalView.c)
 * Callees:
 *     MiLockVadCore @ 0x1403FD500 (MiLockVadCore.c)
 *     MiUnlockVadCore @ 0x140429670 (MiUnlockVadCore.c)
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
