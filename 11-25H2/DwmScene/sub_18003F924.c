/*
 * XREFs of sub_18003F924 @ 0x18003F924
 * Callers:
 *     sub_18003F924 @ 0x18003F924 (sub_18003F924.c)
 *     sub_18003F9D8 @ 0x18003F9D8 (sub_18003F9D8.c)
 * Callees:
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 *     sub_18003BD1C @ 0x18003BD1C (sub_18003BD1C.c)
 *     sub_18003F924 @ 0x18003F924 (sub_18003F924.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_18003F924(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbx
  _QWORD *v7; // rsi
  _QWORD *i; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 j; // rbx

  v3 = *a3;
  if ( *a3 )
  {
    sub_18003BD1C(*a3);
    v7 = *(_QWORD **)(v3 + 384);
    for ( i = *(_QWORD **)(v3 + 376); i != v7; i += 2 )
    {
      if ( *(_BYTE *)(*i + 72LL) )
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*i + 40LL))(*i, a2);
    }
    v9 = *a3;
    sub_18003BCDC(*a3);
    v10 = *(_QWORD *)(v9 + 40);
    for ( j = *(_QWORD *)(v9 + 32); j != v10; j += 16LL )
      sub_18003F924(a1, a2, j);
  }
}
