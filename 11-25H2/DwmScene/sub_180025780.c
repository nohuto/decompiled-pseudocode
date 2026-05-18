/*
 * XREFs of sub_180025780 @ 0x180025780
 * Callers:
 *     sub_1800BAAC0 @ 0x1800BAAC0 (sub_1800BAAC0.c)
 * Callees:
 *     sub_180011B8C @ 0x180011B8C (sub_180011B8C.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_18002378C @ 0x18002378C (sub_18002378C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_180025780(__int64 a1)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 48LL))(*(_QWORD *)(a1 + 272));
  sub_180011B8C(&v5);
  v2 = v5;
  v3 = *(_DWORD *)(a1 + 3548) == 1;
  *(_QWORD *)(a1 + 488) = v5 - *(_QWORD *)(a1 + 464);
  *(_QWORD *)(a1 + 464) = v2;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 456) = v2;
    v4 = v2 - *(_QWORD *)(a1 + 424);
    *(_QWORD *)(a1 + 472) = v4;
    sub_18002378C(v4);
    sub_18001C99C(&stru_1801B8228, 3);
  }
}
