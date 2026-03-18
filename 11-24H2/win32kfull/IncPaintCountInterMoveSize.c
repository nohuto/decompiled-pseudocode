/*
 * XREFs of IncPaintCountInterMoveSize @ 0x1402D21A0
 * Callers:
 *     InternalInvalidate3 @ 0x140044BB8 (InternalInvalidate3.c)
 * Callees:
 *     ??BINTERLOCKEDINT@@QEBAHXZ @ 0x140272AEC (--BINTERLOCKEDINT@@QEBAHXZ.c)
 */

LONG __fastcall IncPaintCountInterMoveSize(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // edx
  LONG result; // eax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(v1 + 640);
  result = v2 + 1;
  *(_DWORD *)(v1 + 640) = v2 + 1;
  if ( !v2 )
  {
    EtwTraceWakePump(v1, a1, 15LL);
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v1 + 488) + 8LL), 0x20u);
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v1 + 488) + 4LL), 0x20u);
    result = INTERLOCKEDINT::operator int((unsigned int *)(*(_QWORD *)(v1 + 488) + 16LL));
    if ( (result & 0x20) != 0 )
      return KeSetEvent(*(PRKEVENT *)(v1 + 768), 6, 0);
  }
  return result;
}
