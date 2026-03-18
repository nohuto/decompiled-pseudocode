/*
 * XREFs of BmlIsLowResAnalogTvOutput @ 0x1402C97D4
 * Callers:
 *     BmlGetMonitorModePreference @ 0x1402C9A54 (BmlGetMonitorModePreference.c)
 *     BmlFillPreferredMonitorMode @ 0x1402C9BA0 (BmlFillPreferredMonitorMode.c)
 * Callees:
 *     <none>
 */

bool __fastcall BmlIsLowResAnalogTvOutput(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 80);
  return v1 == -1 || v1 == 1 || v1 == 2 || v1 == 3 || v1 == 14;
}
