/*
 * XREFs of sub_180023A5C @ 0x180023A5C
 * Callers:
 *     sub_180023ADC @ 0x180023ADC (sub_180023ADC.c)
 *     sub_18002DBA4 @ 0x18002DBA4 (sub_18002DBA4.c)
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     sub_18005DD30 @ 0x18005DD30 (sub_18005DD30.c)
 *     sub_1800D1774 @ 0x1800D1774 (sub_1800D1774.c)
 *     sub_1800D1C60 @ 0x1800D1C60 (sub_1800D1C60.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180023A5C(__int64 *a1, _QWORD *a2, _DWORD *a3)
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
    if ( *((_DWORD *)v4 + 8) >= *a3 )
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
