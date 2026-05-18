/*
 * XREFs of sub_180010BFC @ 0x180010BFC
 * Callers:
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 *     sub_18002DE9C @ 0x18002DE9C (sub_18002DE9C.c)
 *     sub_18004A714 @ 0x18004A714 (sub_18004A714.c)
 *     sub_18004F02C @ 0x18004F02C (sub_18004F02C.c)
 *     sub_18005B9E8 @ 0x18005B9E8 (sub_18005B9E8.c)
 *     sub_18009536C @ 0x18009536C (sub_18009536C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180010BFC(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx

  *a2 = *(_QWORD *)(*a1 + 8);
  a2[1] = 0LL;
  v3 = *a1;
  v4 = (__int64 *)*a2;
  a2[2] = v3;
  while ( !*((_BYTE *)v4 + 25) )
  {
    *a2 = v4;
    if ( (unsigned __int64)v4[4] >= *a3 )
    {
      *((_DWORD *)a2 + 2) = 1;
      a2[2] = v4;
      v4 = (__int64 *)*v4;
    }
    else
    {
      *((_DWORD *)a2 + 2) = 0;
      v4 = (__int64 *)v4[2];
    }
  }
  return a2;
}
