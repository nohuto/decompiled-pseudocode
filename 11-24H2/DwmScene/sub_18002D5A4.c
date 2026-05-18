/*
 * XREFs of sub_18002D5A4 @ 0x18002D5A4
 * Callers:
 *     sub_18002CF90 @ 0x18002CF90 (sub_18002CF90.c)
 *     sub_18002DDF4 @ 0x18002DDF4 (sub_18002DDF4.c)
 *     sub_18003696C @ 0x18003696C (sub_18003696C.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall sub_18002D5A4(__int64 a1, __int64 **a2, _QWORD *a3)
{
  __int64 *v5; // r9
  __int64 *v6; // rbx

  v5 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  *((_DWORD *)a2 + 2) = 0;
  *a2 = v5;
  *((_DWORD *)a2 + 3) = 0;
  v6 = *a2;
  a2[2] = *(__int64 **)a1;
  while ( !*((_BYTE *)v6 + 25) )
  {
    *a2 = v6;
    if ( (int)_std_type_info_compare(v6[4] + 8, *a3 + 8LL) >= 0 )
    {
      *((_DWORD *)a2 + 2) = 1;
      a2[2] = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      *((_DWORD *)a2 + 2) = 0;
      v6 = (__int64 *)v6[2];
    }
  }
  return a2;
}
