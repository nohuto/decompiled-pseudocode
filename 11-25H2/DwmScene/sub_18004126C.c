/*
 * XREFs of sub_18004126C @ 0x18004126C
 * Callers:
 *     sub_180049230 @ 0x180049230 (sub_180049230.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_180037634 @ 0x180037634 (sub_180037634.c)
 *     sub_1800415B8 @ 0x1800415B8 (sub_1800415B8.c)
 *     sub_180041718 @ 0x180041718 (sub_180041718.c)
 *     sub_18005B9E8 @ 0x18005B9E8 (sub_18005B9E8.c)
 *     sub_18007B39C @ 0x18007B39C (sub_18007B39C.c)
 *     sub_18007D76C @ 0x18007D76C (sub_18007D76C.c)
 *     sub_18007D894 @ 0x18007D894 (sub_18007D894.c)
 *     sub_18007E078 @ 0x18007E078 (sub_18007E078.c)
 *     sub_18007ED40 @ 0x18007ED40 (sub_18007ED40.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004126C(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, char a5)
{
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // r13
  unsigned int i; // edi
  __int64 v11; // r12
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v15; // [rsp+38h] [rbp-28h] BYREF
  __int64 v16; // [rsp+40h] [rbp-20h]
  _QWORD v17[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v20; // [rsp+B0h] [rbp+50h]

  v19 = a2;
  v7 = *a4;
  v20 = *(_DWORD *)(v7 + 88);
  v8 = 0;
  sub_18005B9E8(
    *(_QWORD *)(a1 + 136),
    v17,
    a3 | *(_QWORD *)(a1 + 152) | *(_QWORD *)(*(_QWORD *)(a1 + 136) + 72LL),
    *(unsigned int *)(v7 + 104));
  v9 = v17[0];
  if ( v17[0] )
  {
    sub_180011B04(*a4 + 72, &v15);
    sub_18007D894(v9, &v15);
    if ( !(unsigned __int8)sub_180041718(v9 + 128) )
    {
      sub_180011B04(*a4 + 72, &v15);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 192LL))(v15, &v19);
      if ( v16 )
        sub_18001050C(v16);
      for ( i = 0; i < 6; ++i )
      {
        if ( ((1 << i) & (unsigned int)v19) != 0 )
        {
          v11 = *(_QWORD *)sub_18007E078(v9, &v15, i);
          if ( v16 )
            sub_18001050C(v16);
          if ( v11 )
            v8 |= 1 << i;
        }
      }
      v12 = *(unsigned __int16 *)(a1 + 112);
      LOWORD(v12) = ~(_WORD)v12;
      sub_18007D76C(v9, (_DWORD)a4, (v12 >> 6) & 1, v8, a5);
      sub_18007B39C(*(_QWORD *)(a1 + 120), a4, v8);
      v13 = *(_QWORD *)(a1 + 168);
      if ( v13 )
      {
        if ( !(unsigned __int8)sub_1800415B8(v13, v20) )
        {
          sub_180011B04(*a4 + 72, &v15);
          sub_18007ED40(*(_QWORD *)(a1 + 168), &v15);
          if ( v16 )
            sub_18001050C(v16);
        }
        sub_180037634(*a4, (_QWORD *)(a1 + 168));
      }
    }
  }
  *(_QWORD *)a2 = v9;
  *(_QWORD *)(a2 + 8) = v17[1];
  *(_DWORD *)(a2 + 16) = v8;
  return a2;
}
