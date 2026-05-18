/*
 * XREFs of sub_1800258E0 @ 0x1800258E0
 * Callers:
 *     sub_1800BAC20 @ 0x1800BAC20 (sub_1800BAC20.c)
 * Callees:
 *     sub_180011C8C @ 0x180011C8C (sub_180011C8C.c)
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 *     sub_1800238EC @ 0x1800238EC (sub_1800238EC.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_1800258E0(__int64 a1)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 48LL))(*(_QWORD *)(a1 + 272));
  sub_180011C8C(&v5);
  v2 = v5;
  v3 = *(_DWORD *)(a1 + 3548) == 1;
  *(_QWORD *)(a1 + 488) = v5 - *(_QWORD *)(a1 + 464);
  *(_QWORD *)(a1 + 464) = v2;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 456) = v2;
    v4 = v2 - *(_QWORD *)(a1 + 424);
    *(_QWORD *)(a1 + 472) = v4;
    sub_1800238EC(v4);
    sub_18001CAFC(&stru_1801B9228, 3);
  }
}
