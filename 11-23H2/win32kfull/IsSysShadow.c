/*
 * XREFs of IsSysShadow @ 0x1C013C964
 * Callers:
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsSysShadow(__int64 a1)
{
  return **(_WORD **)(*(_QWORD *)(a1 + 136) + 8LL) == (unsigned __int16)gatomShadow;
}
