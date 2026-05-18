/*
 * XREFs of sub_1800C82B4 @ 0x1800C82B4
 * Callers:
 *     sub_1800C849C @ 0x1800C849C (sub_1800C849C.c)
 *     sub_1800CBE90 @ 0x1800CBE90 (sub_1800CBE90.c)
 *     sub_1800CD140 @ 0x1800CD140 (sub_1800CD140.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800C82B4(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(*a2);
    v5 = *a1;
    *a1 = v3;
    sub_18000E954(&v5);
  }
  return a1;
}
