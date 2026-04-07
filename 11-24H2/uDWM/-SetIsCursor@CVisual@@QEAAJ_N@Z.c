/*
 * XREFs of ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x18007B028
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18001D19C (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800F0840 (-IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PartitionSetCursor@CVisualProxy@@QEAAJ_N@Z @ 0x18007B06C (-PartitionSetCursor@CVisualProxy@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CVisual::SetIsCursor(CVisualProxy **this, bool a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CVisualProxy::PartitionSetCursor(this[2], a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x16Fu, 0LL);
  return v3;
}
