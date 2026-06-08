/*
 * XREFs of sub_140045D48 @ 0x140045D48
 * Callers:
 *     sub_14000DAA4 @ 0x14000DAA4 (sub_14000DAA4.c)
 *     sub_14002F738 @ 0x14002F738 (sub_14002F738.c)
 *     sub_1400359D0 @ 0x1400359D0 (sub_1400359D0.c)
 *     sub_140037080 @ 0x140037080 (sub_140037080.c)
 *     sub_1400373A8 @ 0x1400373A8 (sub_1400373A8.c)
 *     sub_1400385B0 @ 0x1400385B0 (sub_1400385B0.c)
 * Callees:
 *     sub_1400054D4 @ 0x1400054D4 (sub_1400054D4.c)
 *     sub_140008D0C @ 0x140008D0C (sub_140008D0C.c)
 */

__int64 __fastcall sub_140045D48(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // edx
  unsigned int v7; // r9d

  v4 = *(_QWORD *)(a1 + 560);
  if ( v4 )
  {
    *a3 = *(_DWORD *)(v4 + 40);
    v5 = a2;
    v6 = 568;
  }
  else
  {
    if ( !byte_1400196D8 || (v4 = *(_QWORD *)(a1 + 1080)) == 0 || *(_DWORD *)(v4 + 36) <= 1u )
    {
      *a3 = 0;
      sub_140008D0C(a1, a2);
      return v7;
    }
    *a3 = 1;
    v5 = a2;
    v6 = 1088;
  }
  sub_1400054D4(v4 + 16, v6, v5);
  return v7;
}
