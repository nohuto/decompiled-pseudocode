/*
 * XREFs of sub_180013960 @ 0x180013960
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800138DC @ 0x1800138DC (sub_1800138DC.c)
 *     sub_180045508 @ 0x180045508 (sub_180045508.c)
 *     sub_180046164 @ 0x180046164 (sub_180046164.c)
 *     sub_180046290 @ 0x180046290 (sub_180046290.c)
 *     sub_1800462A4 @ 0x1800462A4 (sub_1800462A4.c)
 *     sub_18004637C @ 0x18004637C (sub_18004637C.c)
 *     sub_18004667C @ 0x18004667C (sub_18004667C.c)
 *     sub_1800467B4 @ 0x1800467B4 (sub_1800467B4.c)
 *     sub_1800468DC @ 0x1800468DC (sub_1800468DC.c)
 *     sub_180046A14 @ 0x180046A14 (sub_180046A14.c)
 *     sub_180046AA8 @ 0x180046AA8 (sub_180046AA8.c)
 *     sub_180046BD0 @ 0x180046BD0 (sub_180046BD0.c)
 *     sub_180046CF8 @ 0x180046CF8 (sub_180046CF8.c)
 */

__int64 __fastcall sub_180013960(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  sub_180046CF8(*(_QWORD *)(a1 + 16), *a2);
  sub_180046290(*(_QWORD *)(a1 + 16), a2[14]);
  try
  {
    if ( *a2 )
    {
      if ( *((_QWORD *)a2 + 1) )
        sub_1800467B4(*(_QWORD *)(a1 + 16));
      v4 = *((_QWORD *)a2 + 2);
      if ( v4 )
        sub_18004667C(*(_QWORD *)(a1 + 16), v4, 0LL);
      v5 = *((_QWORD *)a2 + 3);
      if ( v5 )
        sub_1800468DC(*(_QWORD *)(a1 + 16), v5, 0LL);
      if ( *((_QWORD *)a2 + 4) )
        sub_180046164(*(_QWORD *)(a1 + 16));
      if ( *((_QWORD *)a2 + 5) )
        sub_180046AA8(*(_QWORD *)(a1 + 16));
      if ( *((_QWORD *)a2 + 6) )
        sub_180046BD0(*(_QWORD *)(a1 + 16));
      if ( a2[14] )
      {
        if ( *((_QWORD *)a2 + 8) )
        {
          sub_1800462A4(*(_QWORD *)(a1 + 16));
        }
        else if ( *((_QWORD *)a2 + 9) )
        {
          sub_18004637C(*(_QWORD *)(a1 + 16));
        }
      }
      switch ( a2[20] )
      {
        case 1u:
          sub_180046A14(*(_QWORD *)(a1 + 16), 2LL);
          goto LABEL_31;
        case 2u:
          v6 = 1LL;
          break;
        case 3u:
          v6 = 4LL;
          break;
        case 4u:
          v6 = 0LL;
          break;
        case 5u:
          v6 = 3LL;
          break;
        default:
LABEL_31:
          sub_180045508(*(_QWORD *)(a1 + 16), 3LL);
          sub_1800138DC(a1 + 32, *a2, *((unsigned __int64 **)a2 + 1));
          return 0LL;
      }
      sub_180046A14(*(_QWORD *)(a1 + 16), v6);
      goto LABEL_31;
    }
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 36) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 48) = 0;
    *(_DWORD *)(a1 + 52) = 0;
  }
  catch ( ... )
  {
    sub_18000F0E4(
      retaddr,
      115LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectremesh.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return 0LL;
}
