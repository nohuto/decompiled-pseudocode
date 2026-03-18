/*
 * XREFs of ?GetNewDelayZoneListIndex@DelayZonePalmRejection@@AEAAKXZ @ 0x140096334
 * Callers:
 *     ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x140096178 (-AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x140210F84 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DelayZonePalmRejection::GetNewDelayZoneListIndex(DelayZonePalmRejection *this)
{
  __int64 result; // rax

  result = *((unsigned int *)this + 22);
  *((_DWORD *)this + 22) = result + 1;
  if ( (_DWORD)result == -1 )
    *((_DWORD *)this + 22) = 1;
  return result;
}
