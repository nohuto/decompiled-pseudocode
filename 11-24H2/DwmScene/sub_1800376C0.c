/*
 * XREFs of sub_1800376C0 @ 0x1800376C0
 * Callers:
 *     sub_180057C10 @ 0x180057C10 (sub_180057C10.c)
 *     sub_18006B58C @ 0x18006B58C (sub_18006B58C.c)
 *     sub_18006C8F0 @ 0x18006C8F0 (sub_18006C8F0.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 */

volatile signed __int32 *__fastcall sub_1800376C0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  volatile signed __int32 *result; // rax
  volatile signed __int32 *v6; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 128) = v2;
  result = *(volatile signed __int32 **)(a1 + 136);
  *(_QWORD *)(a1 + 136) = v4;
  if ( result )
    result = (volatile signed __int32 *)sub_180010644(result);
  v6 = (volatile signed __int32 *)a2[1];
  if ( v6 )
    return (volatile signed __int32 *)sub_180010644(v6);
  return result;
}
