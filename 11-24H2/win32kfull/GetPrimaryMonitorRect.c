/*
 * XREFs of GetPrimaryMonitorRect @ 0x1402129EC
 * Callers:
 *     xxxSoundSentry @ 0x14010312C (xxxSoundSentry.c)
 * Callees:
 *     GetMonitorRect @ 0x140026800 (GetMonitorRect.c)
 */

__int64 __fastcall GetPrimaryMonitorRect(__int64 a1, __int64 a2)
{
  __int64 DispInfo; // rax

  DispInfo = GetDispInfo(a1, a2);
  GetMonitorRect(a1, *(_QWORD *)(DispInfo + 104));
  return a1;
}
