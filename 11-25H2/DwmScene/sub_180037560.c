/*
 * XREFs of sub_180037560 @ 0x180037560
 * Callers:
 *     sub_180057AB0 @ 0x180057AB0 (sub_180057AB0.c)
 *     sub_18006B42C @ 0x18006B42C (sub_18006B42C.c)
 *     sub_18006C790 @ 0x18006C790 (sub_18006C790.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 */

volatile signed __int32 *__fastcall sub_180037560(__int64 a1, __int64 *a2)
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
    result = (volatile signed __int32 *)sub_180010544(result);
  v6 = (volatile signed __int32 *)a2[1];
  if ( v6 )
    return (volatile signed __int32 *)sub_180010544(v6);
  return result;
}
