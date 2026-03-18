/*
 * XREFs of ?GetCurrentProcessUserGlobals@@YAPEAU_tagWIN32KUSERSESSIONSTATE@@XZ @ 0x140202624
 * Callers:
 *     NtUserDoUninitMessagePumpHook @ 0x140202580 (NtUserDoUninitMessagePumpHook.c)
 *     NtUserDoInitMessagePumpHook @ 0x1402025E0 (NtUserDoInitMessagePumpHook.c)
 * Callees:
 *     <none>
 */

struct _tagWIN32KUSERSESSIONSTATE *__fastcall GetCurrentProcessUserGlobals(__int64 a1)
{
  return *(struct _tagWIN32KUSERSESSIONSTATE **)(PsGetCurrentProcessWin32Process(a1) + 1216);
}
