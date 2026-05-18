/*
 * XREFs of sub_18003884C @ 0x18003884C
 * Callers:
 *     sub_1800387B4 @ 0x1800387B4 (sub_1800387B4.c)
 * Callees:
 *     sub_1800380FC @ 0x1800380FC (sub_1800380FC.c)
 *     sub_1800388E4 @ 0x1800388E4 (sub_1800388E4.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003884C(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        unsigned __int8 (__fastcall *a5)(_QWORD *, _QWORD *))
{
  _QWORD *v8; // rdi
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h]

  v12 = a4;
  v13 = a4;
  v8 = a2;
  do
  {
    while ( a5(v8, a1) )
    {
      sub_1800380FC((__int64)&v12, v8);
      v8 += 2;
      if ( v8 == a3 )
      {
        v9 = a2;
        v10 = a1;
        return sub_1800388E4(v10, v9, v13);
      }
    }
    sub_1800380FC((__int64)&v12, a1);
    a1 += 2;
  }
  while ( a1 != a2 );
  v9 = a3;
  v10 = v8;
  return sub_1800388E4(v10, v9, v13);
}
