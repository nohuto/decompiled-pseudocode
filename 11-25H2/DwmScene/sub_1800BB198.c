/*
 * XREFs of sub_1800BB198 @ 0x1800BB198
 * Callers:
 *     sub_1800BDB30 @ 0x1800BDB30 (sub_1800BDB30.c)
 *     sub_1800BE290 @ 0x1800BE290 (sub_1800BE290.c)
 *     sub_1800BE640 @ 0x1800BE640 (sub_1800BE640.c)
 *     sub_1800BEF30 @ 0x1800BEF30 (sub_1800BEF30.c)
 *     sub_1800BF168 @ 0x1800BF168 (sub_1800BF168.c)
 *     sub_1800C0438 @ 0x1800C0438 (sub_1800C0438.c)
 *     sub_1800C0A74 @ 0x1800C0A74 (sub_1800C0A74.c)
 *     sub_1800C0E3C @ 0x1800C0E3C (sub_1800C0E3C.c)
 *     sub_1800C1068 @ 0x1800C1068 (sub_1800C1068.c)
 *     sub_1800C1330 @ 0x1800C1330 (sub_1800C1330.c)
 *     sub_1800C1DB0 @ 0x1800C1DB0 (sub_1800C1DB0.c)
 *     sub_1800C2A60 @ 0x1800C2A60 (sub_1800C2A60.c)
 *     sub_1800C2D00 @ 0x1800C2D00 (sub_1800C2D00.c)
 *     sub_1800C30E4 @ 0x1800C30E4 (sub_1800C30E4.c)
 *     sub_1800C3B90 @ 0x1800C3B90 (sub_1800C3B90.c)
 *     sub_1800C53F0 @ 0x1800C53F0 (sub_1800C53F0.c)
 *     sub_1800C5900 @ 0x1800C5900 (sub_1800C5900.c)
 *     sub_1800C5F38 @ 0x1800C5F38 (sub_1800C5F38.c)
 *     sub_1800C6430 @ 0x1800C6430 (sub_1800C6430.c)
 *     sub_1800C6E70 @ 0x1800C6E70 (sub_1800C6E70.c)
 *     sub_1800C70D0 @ 0x1800C70D0 (sub_1800C70D0.c)
 *     sub_1800C7480 @ 0x1800C7480 (sub_1800C7480.c)
 *     sub_1800C7C60 @ 0x1800C7C60 (sub_1800C7C60.c)
 *     sub_1800C84D0 @ 0x1800C84D0 (sub_1800C84D0.c)
 *     sub_1800C8968 @ 0x1800C8968 (sub_1800C8968.c)
 *     sub_1800C8C18 @ 0x1800C8C18 (sub_1800C8C18.c)
 *     sub_1800C9700 @ 0x1800C9700 (sub_1800C9700.c)
 *     sub_1800C9950 @ 0x1800C9950 (sub_1800C9950.c)
 *     sub_1800C9BB0 @ 0x1800C9BB0 (sub_1800C9BB0.c)
 *     sub_1800C9E10 @ 0x1800C9E10 (sub_1800C9E10.c)
 *     sub_1800CA160 @ 0x1800CA160 (sub_1800CA160.c)
 *     sub_1800CA350 @ 0x1800CA350 (sub_1800CA350.c)
 *     sub_1800CA550 @ 0x1800CA550 (sub_1800CA550.c)
 *     sub_1800CA91C @ 0x1800CA91C (sub_1800CA91C.c)
 *     sub_1800CAA88 @ 0x1800CAA88 (sub_1800CAA88.c)
 * Callees:
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_1800B9C0C @ 0x1800B9C0C (sub_1800B9C0C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800BB198(__int64 a1, int a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h]

  if ( *(_DWORD *)(a1 + 3864) )
    return;
  *(_DWORD *)(a1 + 3868) = a2;
  if ( !a2 )
  {
    *(_DWORD *)(a1 + 3864) = 0;
    goto LABEL_25;
  }
  if ( a2 == -2005270523 )
  {
    v3 = *(_QWORD *)(a1 + 3872);
    if ( v3 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 312LL))(v3);
      switch ( v4 )
      {
        case -2005270527:
          *(_DWORD *)(a1 + 3864) = 5;
          break;
        case -2005270523:
          *(_DWORD *)(a1 + 3864) = 2;
          break;
        case -2005270522:
          *(_DWORD *)(a1 + 3864) = 1;
          break;
        case -2005270521:
          *(_DWORD *)(a1 + 3864) = 3;
          break;
        case -2005270496:
          *(_DWORD *)(a1 + 3864) = 4;
          break;
        default:
          if ( v4 )
          {
            *(_DWORD *)(a1 + 3864) = 2;
            goto LABEL_25;
          }
          *(_DWORD *)(a1 + 3864) = 0;
          break;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 3864) = 2;
    }
  }
  else
  {
    if ( a2 != -2005270521 )
    {
      if ( a2 == -2147024882 )
      {
        sub_18001C99C(&stru_1801B84C8, 3);
        sub_1800B9C0C(a1);
      }
      goto LABEL_25;
    }
    *(_DWORD *)(a1 + 3864) = 3;
  }
  sub_18001C99C(&stru_1801B84C8, 3);
LABEL_25:
  if ( *(_DWORD *)(a1 + 3864) )
  {
    sub_18001C99C(&stru_1801B84C8, 3);
    v7 = a1 + 3832;
    sub_180011B30(a1 + 3832);
    v5 = **(_QWORD **)(a1 + 3816);
    v6 = v5;
    while ( !*(_BYTE *)(v5 + 25) )
    {
      (***(void (__fastcall ****)(_QWORD, _QWORD))(v5 + 32))(*(_QWORD *)(v5 + 32), *(unsigned int *)(a1 + 3864));
      sub_18001C2C0(&v6);
      v5 = v6;
    }
    Mtx_unlock((_Mtx_t)(a1 + 3832));
  }
}
