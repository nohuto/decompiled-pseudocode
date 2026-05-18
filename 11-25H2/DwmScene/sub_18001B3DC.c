/*
 * XREFs of sub_18001B3DC @ 0x18001B3DC
 * Callers:
 *     sub_180056CE0 @ 0x180056CE0 (sub_180056CE0.c)
 *     sub_1800783D0 @ 0x1800783D0 (sub_1800783D0.c)
 * Callees:
 *     memcmp @ 0x18000CD55 (memcmp.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 */

char __fastcall sub_18001B3DC(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rdx
  const void *v4; // rax
  size_t v5; // r8
  const void *v6; // r10
  int v7; // eax
  char v8; // cl

  sub_1800137F8(a2);
  if ( *(_QWORD *)(v2 + 16) != *(_QWORD *)(v3 + 16) )
    return 1;
  v4 = (const void *)sub_1800137F8(v2);
  v7 = memcmp(v4, v6, v5);
  v8 = 0;
  if ( v7 )
    return 1;
  return v8;
}
