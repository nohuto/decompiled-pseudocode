/*
 * XREFs of sub_18002A590 @ 0x18002A590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18002A590(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 )
  {
    *a2 = *(_QWORD *)(a1 + 80);
    a2[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
  }
  return a2;
}
