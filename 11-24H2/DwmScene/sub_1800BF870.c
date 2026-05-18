/*
 * XREFs of sub_1800BF870 @ 0x1800BF870
 * Callers:
 *     sub_1800C1490 @ 0x1800C1490 (sub_1800C1490.c)
 * Callees:
 *     sub_1800115D0 @ 0x1800115D0 (sub_1800115D0.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800BF870(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = *a2;
  v3 = v6;
  sub_1800115D0(&v6);
  v4 = *a1;
  *a1 = v3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}
