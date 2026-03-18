/*
 * XREFs of MonitorFromHdev @ 0x1C005B370
 * Callers:
 *     UserGetMonitorDC @ 0x1C005B2C0 (UserGetMonitorDC.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0060D08 (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorFromHdev(__int64 a1)
{
  __int64 result; // rax

  for ( result = *((_QWORD *)gpDispInfo + 13); result && *(_QWORD *)(result + 80) != a1; result = *(_QWORD *)(result + 56) )
    ;
  return result;
}
