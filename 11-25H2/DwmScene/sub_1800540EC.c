/*
 * XREFs of sub_1800540EC @ 0x1800540EC
 * Callers:
 *     sub_180054718 @ 0x180054718 (sub_180054718.c)
 * Callees:
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001BB4C @ 0x18001BB4C (sub_18001BB4C.c)
 */

char __fastcall sub_1800540EC(_DWORD *a1, _DWORD *a2)
{
  char v2; // bl
  __int64 v3; // rdx
  const void *v4; // rax
  __int64 v5; // r9
  __int64 v6; // rdx
  const void *v7; // r8
  int v8; // eax

  if ( *a1 < *a2 )
    return 1;
  v2 = 0;
  if ( *a2 >= *a1 )
  {
    sub_1800137F8((__int64)(a2 + 2));
    v4 = (const void *)sub_1800137F8(v3);
    LOBYTE(v8) = sub_18001BB4C(v4, *(_QWORD *)(v6 + 16), v7, *(_QWORD *)(v5 + 16));
    if ( v8 < 0 )
      return 1;
  }
  return v2;
}
