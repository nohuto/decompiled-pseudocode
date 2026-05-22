/*
 * XREFs of ?GetInfo@TwoFingerDragRecognizer@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z @ 0x1801AEED0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDragInfo@TwoFingerDragRecognizer@@QEAA_NPEAUGestureData@@@Z @ 0x1801AEE80 (-GetDragInfo@TwoFingerDragRecognizer@@QEAA_NPEAUGestureData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TwoFingerDragRecognizer::GetInfo(TwoFingerDragRecognizer *a1, int a2, struct GestureData *a3)
{
  bool DragInfo; // bl
  __int64 v4; // r10

  DragInfo = 0;
  if ( (unsigned int)(a2 - 11) <= 1 )
  {
    DragInfo = TwoFingerDragRecognizer::GetDragInfo(a1, a3);
    if ( DragInfo )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, 0xFFFFFFFFLL);
  }
  return !DragInfo ? 0x80070057 : 0;
}
