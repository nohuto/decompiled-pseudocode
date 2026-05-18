/*
 * XREFs of sub_180032548 @ 0x180032548
 * Callers:
 *     sub_1800320F0 @ 0x1800320F0 (sub_1800320F0.c)
 *     sub_180033810 @ 0x180033810 (sub_180033810.c)
 *     sub_1800339BC @ 0x1800339BC (sub_1800339BC.c)
 *     sub_180034044 @ 0x180034044 (sub_180034044.c)
 *     sub_180034224 @ 0x180034224 (sub_180034224.c)
 *     sub_1800346A8 @ 0x1800346A8 (sub_1800346A8.c)
 *     sub_180035258 @ 0x180035258 (sub_180035258.c)
 *     sub_18003573C @ 0x18003573C (sub_18003573C.c)
 *     sub_18003582C @ 0x18003582C (sub_18003582C.c)
 *     sub_180035C90 @ 0x180035C90 (sub_180035C90.c)
 *     sub_180053688 @ 0x180053688 (sub_180053688.c)
 *     sub_180061AF0 @ 0x180061AF0 (sub_180061AF0.c)
 *     sub_180061EC0 @ 0x180061EC0 (sub_180061EC0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180032548(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 976);
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a2 = *(_QWORD *)(a1 + 968);
  a2[1] = *(_QWORD *)(a1 + 976);
  return a2;
}
