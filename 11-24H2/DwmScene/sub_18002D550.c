/*
 * XREFs of sub_18002D550 @ 0x18002D550
 * Callers:
 *     sub_18002CF54 @ 0x18002CF54 (sub_18002CF54.c)
 *     sub_18002E1E4 @ 0x18002E1E4 (sub_18002E1E4.c)
 *     sub_18002E2D8 @ 0x18002E2D8 (sub_18002E2D8.c)
 *     sub_1800318EC @ 0x1800318EC (sub_1800318EC.c)
 *     sub_180052BB8 @ 0x180052BB8 (sub_180052BB8.c)
 *     sub_180053688 @ 0x180053688 (sub_180053688.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18002D550(__int64 *a1, _QWORD *a2, __int64 a3)
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
