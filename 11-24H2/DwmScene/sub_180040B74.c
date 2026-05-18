/*
 * XREFs of sub_180040B74 @ 0x180040B74
 * Callers:
 *     sub_180040AFC @ 0x180040AFC (sub_180040AFC.c)
 *     sub_1800502A0 @ 0x1800502A0 (sub_1800502A0.c)
 *     sub_18007CD98 @ 0x18007CD98 (sub_18007CD98.c)
 *     sub_1800BC3C8 @ 0x1800BC3C8 (sub_1800BC3C8.c)
 *     sub_1800BC4C0 @ 0x1800BC4C0 (sub_1800BC4C0.c)
 *     sub_1800BD9EC @ 0x1800BD9EC (sub_1800BD9EC.c)
 *     sub_1800BDF0C @ 0x1800BDF0C (sub_1800BDF0C.c)
 *     sub_1800BEBE0 @ 0x1800BEBE0 (sub_1800BEBE0.c)
 *     sub_1800BEC30 @ 0x1800BEC30 (sub_1800BEC30.c)
 *     sub_1800CBAD4 @ 0x1800CBAD4 (sub_1800CBAD4.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180040B74(__int64 *a1, _QWORD *a2, _DWORD *a3)
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
