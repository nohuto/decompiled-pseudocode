/*
 * XREFs of sub_1800407EC @ 0x1800407EC
 * Callers:
 *     sub_18004C220 @ 0x18004C220 (sub_18004C220.c)
 *     sub_18004C268 @ 0x18004C268 (sub_18004C268.c)
 *     sub_180058C4C @ 0x180058C4C (sub_180058C4C.c)
 *     sub_18005B17C @ 0x18005B17C (sub_18005B17C.c)
 *     sub_1800759D0 @ 0x1800759D0 (sub_1800759D0.c)
 *     sub_1800764D0 @ 0x1800764D0 (sub_1800764D0.c)
 *     sub_180076860 @ 0x180076860 (sub_180076860.c)
 *     sub_180077900 @ 0x180077900 (sub_180077900.c)
 *     sub_180079B50 @ 0x180079B50 (sub_180079B50.c)
 *     sub_18007D76C @ 0x18007D76C (sub_18007D76C.c)
 *     sub_18007F930 @ 0x18007F930 (sub_18007F930.c)
 *     sub_18008796C @ 0x18008796C (sub_18008796C.c)
 *     sub_180088710 @ 0x180088710 (sub_180088710.c)
 *     sub_18008CD40 @ 0x18008CD40 (sub_18008CD40.c)
 *     sub_18008FC10 @ 0x18008FC10 (sub_18008FC10.c)
 * Callees:
 *     sub_18001197C @ 0x18001197C (sub_18001197C.c)
 *     sub_180011A2C @ 0x180011A2C (sub_180011A2C.c)
 */

_QWORD *__fastcall sub_1800407EC(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  _QWORD *v4; // r9

  v2 = *(_QWORD *)(a1 + 8);
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( !v2 || !sub_18001197C(v2) )
    sub_180011A2C();
  *v3 = *v4;
  v3[1] = v4[1];
  return v3;
}
