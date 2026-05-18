/*
 * XREFs of sub_1800BB2F8 @ 0x1800BB2F8
 * Callers:
 *     sub_1800BDC90 @ 0x1800BDC90 (sub_1800BDC90.c)
 *     sub_1800BE3F0 @ 0x1800BE3F0 (sub_1800BE3F0.c)
 *     sub_1800BE7A0 @ 0x1800BE7A0 (sub_1800BE7A0.c)
 *     sub_1800BF090 @ 0x1800BF090 (sub_1800BF090.c)
 *     sub_1800BF2C8 @ 0x1800BF2C8 (sub_1800BF2C8.c)
 *     sub_1800C0598 @ 0x1800C0598 (sub_1800C0598.c)
 *     sub_1800C0BD4 @ 0x1800C0BD4 (sub_1800C0BD4.c)
 *     sub_1800C0F9C @ 0x1800C0F9C (sub_1800C0F9C.c)
 *     sub_1800C11C8 @ 0x1800C11C8 (sub_1800C11C8.c)
 *     sub_1800C1490 @ 0x1800C1490 (sub_1800C1490.c)
 *     sub_1800C1F10 @ 0x1800C1F10 (sub_1800C1F10.c)
 *     sub_1800C2BC0 @ 0x1800C2BC0 (sub_1800C2BC0.c)
 *     sub_1800C2E60 @ 0x1800C2E60 (sub_1800C2E60.c)
 *     sub_1800C3244 @ 0x1800C3244 (sub_1800C3244.c)
 *     sub_1800C3CF0 @ 0x1800C3CF0 (sub_1800C3CF0.c)
 *     sub_1800C5550 @ 0x1800C5550 (sub_1800C5550.c)
 *     sub_1800C5A60 @ 0x1800C5A60 (sub_1800C5A60.c)
 *     sub_1800C6098 @ 0x1800C6098 (sub_1800C6098.c)
 *     sub_1800C6590 @ 0x1800C6590 (sub_1800C6590.c)
 *     sub_1800C6FD0 @ 0x1800C6FD0 (sub_1800C6FD0.c)
 *     sub_1800C7230 @ 0x1800C7230 (sub_1800C7230.c)
 *     sub_1800C75E0 @ 0x1800C75E0 (sub_1800C75E0.c)
 *     sub_1800C7DC0 @ 0x1800C7DC0 (sub_1800C7DC0.c)
 *     sub_1800C8630 @ 0x1800C8630 (sub_1800C8630.c)
 *     sub_1800C8AC8 @ 0x1800C8AC8 (sub_1800C8AC8.c)
 *     sub_1800C8D78 @ 0x1800C8D78 (sub_1800C8D78.c)
 *     sub_1800C9860 @ 0x1800C9860 (sub_1800C9860.c)
 *     sub_1800C9AB0 @ 0x1800C9AB0 (sub_1800C9AB0.c)
 *     sub_1800C9D10 @ 0x1800C9D10 (sub_1800C9D10.c)
 *     sub_1800C9F70 @ 0x1800C9F70 (sub_1800C9F70.c)
 *     sub_1800CA2C0 @ 0x1800CA2C0 (sub_1800CA2C0.c)
 *     sub_1800CA4B0 @ 0x1800CA4B0 (sub_1800CA4B0.c)
 *     sub_1800CA6B0 @ 0x1800CA6B0 (sub_1800CA6B0.c)
 *     sub_1800CAA7C @ 0x1800CAA7C (sub_1800CAA7C.c)
 *     sub_1800CABE8 @ 0x1800CABE8 (sub_1800CABE8.c)
 * Callees:
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 *     sub_1800B9D6C @ 0x1800B9D6C (sub_1800B9D6C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800BB2F8(__int64 a1, int a2)
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
        sub_18001CAFC(&stru_1801B94C8, 3);
        sub_1800B9D6C(a1);
      }
      goto LABEL_25;
    }
    *(_DWORD *)(a1 + 3864) = 3;
  }
  sub_18001CAFC(&stru_1801B94C8, 3);
LABEL_25:
  if ( *(_DWORD *)(a1 + 3864) )
  {
    sub_18001CAFC(&stru_1801B94C8, 3);
    v7 = a1 + 3832;
    sub_180011C30(a1 + 3832);
    v5 = **(_QWORD **)(a1 + 3816);
    v6 = v5;
    while ( !*(_BYTE *)(v5 + 25) )
    {
      (***(void (__fastcall ****)(_QWORD, _QWORD))(v5 + 32))(*(_QWORD *)(v5 + 32), *(unsigned int *)(a1 + 3864));
      sub_18001C420(&v6);
      v5 = v6;
    }
    Mtx_unlock((_Mtx_t)(a1 + 3832));
  }
}
