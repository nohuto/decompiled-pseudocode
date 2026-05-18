/*
 * XREFs of sub_180024B60 @ 0x180024B60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011B8C @ 0x180011B8C (sub_180011B8C.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_18002378C @ 0x18002378C (sub_18002378C.c)
 */

void __fastcall sub_180024B60(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( ++*(_DWORD *)(a1 + 3548) == 1 )
  {
    sub_180011B8C(&v4);
    v2 = v4;
    *(_QWORD *)(a1 + 448) = v4;
    v3 = v2 - *(_QWORD *)(a1 + 424);
    *(_QWORD *)(a1 + 480) = v3;
    sub_18002378C(v3);
    sub_18001C99C(&stru_1801B8228, 3);
  }
}
