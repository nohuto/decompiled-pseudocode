/*
 * XREFs of sub_18001B53C @ 0x18001B53C
 * Callers:
 *     sub_180056E40 @ 0x180056E40 (sub_180056E40.c)
 *     sub_180078530 @ 0x180078530 (sub_180078530.c)
 * Callees:
 *     memcmp @ 0x18000CE3D (memcmp.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 */

char __fastcall sub_18001B53C(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rdx
  const void *v4; // rax
  size_t v5; // r8
  const void *v6; // r10
  int v7; // eax
  char v8; // cl

  sub_1800138F8(a2);
  if ( *(_QWORD *)(v2 + 16) != *(_QWORD *)(v3 + 16) )
    return 1;
  v4 = (const void *)sub_1800138F8(v2);
  v7 = memcmp(v4, v6, v5);
  v8 = 0;
  if ( v7 )
    return 1;
  return v8;
}
