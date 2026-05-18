/*
 * XREFs of sub_18008D574 @ 0x18008D574
 * Callers:
 *     sub_18008D78C @ 0x18008D78C (sub_18008D78C.c)
 *     sub_18009099C @ 0x18009099C (sub_18009099C.c)
 * Callees:
 *     memcmp @ 0x18000CD55 (memcmp.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 */

char __fastcall sub_18008D574(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  const void *v5; // rax
  size_t v6; // r9
  const void *v7; // r10
  int v8; // eax
  char v9; // cl

  sub_1800137F8(a3);
  if ( *(_QWORD *)(v3 + 16) != *(_QWORD *)(v4 + 16) )
    return 1;
  v5 = (const void *)sub_1800137F8(v3);
  v8 = memcmp(v5, v7, v6);
  v9 = 0;
  if ( v8 )
    return 1;
  return v9;
}
