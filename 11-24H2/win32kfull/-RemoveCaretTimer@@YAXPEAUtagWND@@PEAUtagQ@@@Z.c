/*
 * XREFs of ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1400946B8
 * Callers:
 *     zzzInternalHideCaret @ 0x1400357EC (zzzInternalHideCaret.c)
 *     _SetCaretBlinkTime @ 0x1400925C0 (_SetCaretBlinkTime.c)
 *     zzzSetCaretPos @ 0x1400950F8 (zzzSetCaretPos.c)
 *     CaretBlinkProc @ 0x1401D36A0 (CaretBlinkProc.c)
 * Callees:
 *     FindTimer @ 0x14005FED0 (FindTimer.c)
 */

void __fastcall RemoveCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  if ( *((_QWORD *)a2 + 49) )
  {
    FindTimer((__int64)a1, 0xFFFFLL, 2u, 1, 0LL);
    *((_QWORD *)a2 + 49) = 0LL;
  }
}
