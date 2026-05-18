/*
 * XREFs of sub_180021890 @ 0x180021890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180021890(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a2 = *(_QWORD *)(a1 + 32);
  a2[1] = *(_QWORD *)(a1 + 40);
  return a2;
}
