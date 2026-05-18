/*
 * XREFs of sub_180023BBC @ 0x180023BBC
 * Callers:
 *     sub_180023C3C @ 0x180023C3C (sub_180023C3C.c)
 *     sub_18002DD04 @ 0x18002DD04 (sub_18002DD04.c)
 *     sub_180032500 @ 0x180032500 (sub_180032500.c)
 *     sub_18005DE90 @ 0x18005DE90 (sub_18005DE90.c)
 *     sub_1800D18D4 @ 0x1800D18D4 (sub_1800D18D4.c)
 *     sub_1800D1DC0 @ 0x1800D1DC0 (sub_1800D1DC0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180023BBC(__int64 *a1, _QWORD *a2, _DWORD *a3)
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
