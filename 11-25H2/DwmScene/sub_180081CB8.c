/*
 * XREFs of sub_180081CB8 @ 0x180081CB8
 * Callers:
 *     sub_180082044 @ 0x180082044 (sub_180082044.c)
 * Callees:
 *     memcmp @ 0x18000CD55 (memcmp.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 */

char __fastcall sub_180081CB8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  char v6; // si
  __int64 v7; // rdx
  const void *v8; // rax
  size_t v9; // r8
  const void *v10; // r9

  v3 = a3 + 32;
  v4 = a1 - a3;
  v6 = 0;
  while ( v3 + v4 - 32 != a2 )
  {
    sub_1800137F8(v3 - 32);
    if ( *(_QWORD *)(v4 + v3 - 16) != *(_QWORD *)(v3 - 16) )
      return v6;
    v8 = (const void *)sub_1800137F8(v7);
    if ( memcmp(v8, v10, v9)
      || *(_DWORD *)(v3 + v4) != *(_DWORD *)v3
      || *(_DWORD *)(v4 + v3 + 4) != *(_DWORD *)(v3 + 4)
      || *(_BYTE *)(v4 + v3 + 8) != *(_BYTE *)(v3 + 8)
      || *(_DWORD *)(v4 + v3 + 12) != *(_DWORD *)(v3 + 12) )
    {
      return v6;
    }
    v3 += 48LL;
  }
  return 1;
}
