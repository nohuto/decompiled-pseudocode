/*
 * XREFs of sub_180024CC0 @ 0x180024CC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011C8C @ 0x180011C8C (sub_180011C8C.c)
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 *     sub_1800238EC @ 0x1800238EC (sub_1800238EC.c)
 */

void __fastcall sub_180024CC0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( ++*(_DWORD *)(a1 + 3548) == 1 )
  {
    sub_180011C8C(&v4);
    v2 = v4;
    *(_QWORD *)(a1 + 448) = v4;
    v3 = v2 - *(_QWORD *)(a1 + 424);
    *(_QWORD *)(a1 + 480) = v3;
    sub_1800238EC(v3);
    sub_18001CAFC(&stru_1801B9228, 3);
  }
}
