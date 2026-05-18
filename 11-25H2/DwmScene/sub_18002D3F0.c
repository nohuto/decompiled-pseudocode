/*
 * XREFs of sub_18002D3F0 @ 0x18002D3F0
 * Callers:
 *     sub_18002CDF4 @ 0x18002CDF4 (sub_18002CDF4.c)
 *     sub_18002E084 @ 0x18002E084 (sub_18002E084.c)
 *     sub_18002E178 @ 0x18002E178 (sub_18002E178.c)
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 *     sub_180052A58 @ 0x180052A58 (sub_180052A58.c)
 *     sub_180053528 @ 0x180053528 (sub_180053528.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18002D3F0(__int64 *a1, _QWORD *a2, __int64 a3)
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
    if ( (unsigned __int64)v4[5] >= *(_QWORD *)(a3 + 8) )
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
