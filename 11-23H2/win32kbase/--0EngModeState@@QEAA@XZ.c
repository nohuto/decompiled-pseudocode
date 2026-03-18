/*
 * XREFs of ??0EngModeState@@QEAA@XZ @ 0x1C008A354
 * Callers:
 *     EngGetRgnData @ 0x1C000EEB0 (EngGetRgnData.c)
 *     EngDeleteRgn @ 0x1C008A130 (EngDeleteRgn.c)
 *     EngCombineRgn @ 0x1C008A1B0 (EngCombineRgn.c)
 *     EngCreateRectRgn @ 0x1C008A250 (EngCreateRectRgn.c)
 *     EngSetRectRgn @ 0x1C008A2D0 (EngSetRectRgn.c)
 *     EngCopyRgn @ 0x1C016A870 (EngCopyRgn.c)
 *     EngEqualRgn @ 0x1C016A8F0 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C016A9B0 (EngGetRgnBox.c)
 *     EngIntersectRgn @ 0x1C016AA10 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C016AAB0 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C016AB20 (EngRectInRgn.c)
 *     EngSubtractRgn @ 0x1C016AB80 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C016AC20 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C016ACC0 (EngXorRgn.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0044340 (IsThreadCrossSessionAttached.c)
 */

EngModeState *__fastcall EngModeState::EngModeState(EngModeState *this)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbx
  __int64 *ThreadWin32Thread; // rax

  *(_QWORD *)this = 0LL;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  *(_QWORD *)this = v3;
  if ( v3 )
    *(_DWORD *)(v3 + 328) |= 0x10u;
  return this;
}
