/*
 * XREFs of GetPrimaryMonitorRect @ 0x1C00D8B54
 * Callers:
 *     _GetClientRect @ 0x1C00D8AE8 (_GetClientRect.c)
 *     xxxSoundSentry @ 0x1C01F5958 (xxxSoundSentry.c)
 * Callees:
 *     GetMonitorRect @ 0x1C00D8BCC (GetMonitorRect.c)
 */

__int64 __fastcall GetPrimaryMonitorRect(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 DispInfo; // rax

  DispInfo = GetDispInfo(a1, a2, a3);
  GetMonitorRect(a1, *(_QWORD *)(DispInfo + 96));
  return a1;
}
