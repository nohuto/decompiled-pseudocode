/*
 * XREFs of sub_18006A964 @ 0x18006A964
 * Callers:
 *     sub_18006A704 @ 0x18006A704 (sub_18006A704.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18006A964(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        unsigned __int8 (__fastcall *a4)(__int64 *, __int64 *))
{
  __int64 *v5; // rbx
  __int64 *v6; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx

  v5 = a2 + 1;
  v6 = a1 + 1;
  if ( a4(a2, a1) )
  {
    v10 = *a2;
    *a2 = *a1;
    *a1 = v10;
    v11 = *v5;
    *v5 = *v6;
    *v6 = v11;
  }
  result = ((__int64 (__fastcall *)(__int64 *, __int64 *))a4)(a3, a2);
  if ( (_BYTE)result )
  {
    v13 = *a3;
    *a3 = *a2;
    *a2 = v13;
    v14 = a3[1];
    a3[1] = *v5;
    *v5 = v14;
    result = ((__int64 (__fastcall *)(__int64 *, __int64 *))a4)(a2, a1);
    if ( (_BYTE)result )
    {
      v15 = *a2;
      *a2 = *a1;
      *a1 = v15;
      result = *v6;
      v16 = *v5;
      *v5 = *v6;
      *v6 = v16;
    }
  }
  return result;
}
