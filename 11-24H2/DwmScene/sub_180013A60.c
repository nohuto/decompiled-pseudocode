/*
 * XREFs of sub_180013A60 @ 0x180013A60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800139DC @ 0x1800139DC (sub_1800139DC.c)
 *     sub_180045668 @ 0x180045668 (sub_180045668.c)
 *     sub_1800462C4 @ 0x1800462C4 (sub_1800462C4.c)
 *     sub_1800463F0 @ 0x1800463F0 (sub_1800463F0.c)
 *     sub_180046404 @ 0x180046404 (sub_180046404.c)
 *     sub_1800464DC @ 0x1800464DC (sub_1800464DC.c)
 *     sub_1800467DC @ 0x1800467DC (sub_1800467DC.c)
 *     sub_180046914 @ 0x180046914 (sub_180046914.c)
 *     sub_180046A3C @ 0x180046A3C (sub_180046A3C.c)
 *     sub_180046B74 @ 0x180046B74 (sub_180046B74.c)
 *     sub_180046C08 @ 0x180046C08 (sub_180046C08.c)
 *     sub_180046D30 @ 0x180046D30 (sub_180046D30.c)
 *     sub_180046E58 @ 0x180046E58 (sub_180046E58.c)
 */

__int64 __fastcall sub_180013A60(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  sub_180046E58(*(_QWORD *)(a1 + 16), *a2);
  sub_1800463F0(*(_QWORD *)(a1 + 16), a2[14]);
  try
  {
    if ( *a2 )
    {
      if ( *((_QWORD *)a2 + 1) )
        sub_180046914(*(_QWORD *)(a1 + 16));
      v4 = *((_QWORD *)a2 + 2);
      if ( v4 )
        sub_1800467DC(*(_QWORD *)(a1 + 16), v4, 0LL);
      v5 = *((_QWORD *)a2 + 3);
      if ( v5 )
        sub_180046A3C(*(_QWORD *)(a1 + 16), v5, 0LL);
      if ( *((_QWORD *)a2 + 4) )
        sub_1800462C4(*(_QWORD *)(a1 + 16));
      if ( *((_QWORD *)a2 + 5) )
        sub_180046C08(*(_QWORD *)(a1 + 16));
      if ( *((_QWORD *)a2 + 6) )
        sub_180046D30(*(_QWORD *)(a1 + 16));
      if ( a2[14] )
      {
        if ( *((_QWORD *)a2 + 8) )
        {
          sub_180046404(*(_QWORD *)(a1 + 16));
        }
        else if ( *((_QWORD *)a2 + 9) )
        {
          sub_1800464DC(*(_QWORD *)(a1 + 16));
        }
      }
      switch ( a2[20] )
      {
        case 1u:
          sub_180046B74(*(_QWORD *)(a1 + 16), 2LL);
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
          sub_180045668(*(_QWORD *)(a1 + 16), 3LL);
          sub_1800139DC(a1 + 32, *a2, *((unsigned __int64 **)a2 + 1));
          return 0LL;
      }
      sub_180046B74(*(_QWORD *)(a1 + 16), v6);
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
    sub_18000F1E4(
      retaddr,
      115LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectremesh.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return 0LL;
}
