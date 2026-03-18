/*
 * XREFs of NtUserDoUninitMessagePumpHook @ 0x140202580
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentProcessUserGlobals@@YAPEAU_tagWIN32KUSERSESSIONSTATE@@XZ @ 0x140202624 (-GetCurrentProcessUserGlobals@@YAPEAU_tagWIN32KUSERSESSIONSTATE@@XZ.c)
 */

__int64 NtUserDoUninitMessagePumpHook()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  __int64 v2; // rdx
  int v3; // eax

  EnterCrit(0LL, 0LL);
  v0 = 0LL;
  v1 = *((_QWORD *)GetCurrentProcessUserGlobals() + 3);
  v2 = *(_QWORD *)(v1 + 488);
  v3 = *(_DWORD *)(v2 + 28);
  if ( v3 > 0 )
  {
    v0 = 1LL;
    *(_DWORD *)(v2 + 28) = v3 - 1;
  }
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
