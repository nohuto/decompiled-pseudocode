/*
 * XREFs of sub_18008D6D4 @ 0x18008D6D4
 * Callers:
 *     sub_18008D8EC @ 0x18008D8EC (sub_18008D8EC.c)
 *     sub_180090AFC @ 0x180090AFC (sub_180090AFC.c)
 * Callees:
 *     memcmp @ 0x18000CE3D (memcmp.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 */

char __fastcall sub_18008D6D4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  const void *v5; // rax
  size_t v6; // r9
  const void *v7; // r10
  int v8; // eax
  char v9; // cl

  sub_1800138F8(a3);
  if ( *(_QWORD *)(v3 + 16) != *(_QWORD *)(v4 + 16) )
    return 1;
  v5 = (const void *)sub_1800138F8(v3);
  v8 = memcmp(v5, v7, v6);
  v9 = 0;
  if ( v8 )
    return 1;
  return v9;
}
