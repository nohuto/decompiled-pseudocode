/*
 * XREFs of MiInsertVadEvent @ 0x1402A33D8
 * Callers:
 *     MiWaitForVadDeletion @ 0x1402A668C (MiWaitForVadDeletion.c)
 *     MiApplyImageHotPatchRequest @ 0x1407E1A7C (MiApplyImageHotPatchRequest.c)
 *     MiAddSecureEntry @ 0x1408F8CA0 (MiAddSecureEntry.c)
 *     MiCreatePlaceholderStorage @ 0x1408F9230 (MiCreatePlaceholderStorage.c)
 *     MiCreateVadEventBitmap @ 0x1408F94AC (MiCreateVadEventBitmap.c)
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 *     MiSecureVad @ 0x1409F01EC (MiSecureVad.c)
 *     MiCreateRotateView @ 0x140A65608 (MiCreateRotateView.c)
 *     MiCreateLargePageVad @ 0x140A7F47C (MiCreateLargePageVad.c)
 *     MiCreateUserPhysicalView @ 0x140ABCAD0 (MiCreateUserPhysicalView.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockVadCore @ 0x1402A3820 (MiUnlockVadCore.c)
 *     MiLockVadCore @ 0x1402A3860 (MiLockVadCore.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 */

__int64 __fastcall MiInsertVadEvent(__int64 a1, unsigned __int64 *a2, int a3)
{
  struct _LIST_ENTRY **p_Blink; // rbx
  unsigned __int64 *v4; // rsi
  __int64 result; // rax

  p_Blink = 0LL;
  v4 = a2;
  if ( MmVadEventBlockFixEnabled )
  {
    if ( a3 )
      LOBYTE(a2) = MiLockVadCore(a1, 0LL);
    else
      LOBYTE(a2) = 17;
    *v4 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
    result = (unsigned __int64)v4 | *(_QWORD *)(a1 + 56) & 0xFLL;
    *(_QWORD *)(a1 + 56) = result;
    if ( (_BYTE)a2 != 17 )
      return MiUnlockVadCore(a1, a2);
  }
  else
  {
    if ( a3 )
    {
      p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
      LOBYTE(a2) = MiLockWorkingSetExclusive((__int64)p_Blink);
    }
    else
    {
      LOBYTE(a2) = 17;
    }
    *v4 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
    result = (unsigned __int64)v4 | *(_QWORD *)(a1 + 56) & 0xFLL;
    *(_QWORD *)(a1 + 56) = result;
    if ( (_BYTE)a2 != 17 )
      return MiUnlockWorkingSetExclusive(p_Blink, a2);
  }
  return result;
}
