/*
 * XREFs of sub_18002F414 @ 0x18002F414
 * Callers:
 *     sub_1800320F0 @ 0x1800320F0 (sub_1800320F0.c)
 *     sub_180033810 @ 0x180033810 (sub_180033810.c)
 *     sub_1800339BC @ 0x1800339BC (sub_1800339BC.c)
 *     sub_180034044 @ 0x180034044 (sub_180034044.c)
 *     sub_180034224 @ 0x180034224 (sub_180034224.c)
 *     sub_1800346A8 @ 0x1800346A8 (sub_1800346A8.c)
 *     sub_180035258 @ 0x180035258 (sub_180035258.c)
 *     sub_18003582C @ 0x18003582C (sub_18003582C.c)
 *     sub_180035C90 @ 0x180035C90 (sub_180035C90.c)
 *     sub_180057928 @ 0x180057928 (sub_180057928.c)
 *     sub_180057C10 @ 0x180057C10 (sub_180057C10.c)
 *     sub_180061AF0 @ 0x180061AF0 (sub_180061AF0.c)
 *     sub_180061EC0 @ 0x180061EC0 (sub_180061EC0.c)
 *     sub_18008CEA0 @ 0x18008CEA0 (sub_18008CEA0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180028A98 @ 0x180028A98 (sub_180028A98.c)
 *     sub_180036AF4 @ 0x180036AF4 (sub_180036AF4.c)
 *     sub_1800951E4 @ 0x1800951E4 (sub_1800951E4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_18002F414(__int64 *a1, __int64 a2)
{
  __int64 v3; // r10
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  sub_180036AF4(a2, &v5);
  if ( v5 )
  {
    a1[2] = sub_1800951E4(v5, v3);
    sub_180028A98(a1, &v5);
  }
  if ( v6 )
    sub_18001060C(v6);
  return a1;
}
