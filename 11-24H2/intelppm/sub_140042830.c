/*
 * XREFs of sub_140042830 @ 0x140042830
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003EE0 @ 0x140003EE0 (sub_140003EE0.c)
 *     sub_140004B88 @ 0x140004B88 (sub_140004B88.c)
 *     sub_1400053CC @ 0x1400053CC (sub_1400053CC.c)
 *     sub_1400054D4 @ 0x1400054D4 (sub_1400054D4.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_14002867C @ 0x14002867C (sub_14002867C.c)
 *     sub_140028730 @ 0x140028730 (sub_140028730.c)
 *     sub_14002BFD8 @ 0x14002BFD8 (sub_14002BFD8.c)
 *     sub_14002C058 @ 0x14002C058 (sub_14002C058.c)
 *     sub_14002C084 @ 0x14002C084 (sub_14002C084.c)
 *     sub_14002C2AC @ 0x14002C2AC (sub_14002C2AC.c)
 *     sub_14002C2D8 @ 0x14002C2D8 (sub_14002C2D8.c)
 *     sub_1400410AC @ 0x1400410AC (sub_1400410AC.c)
 *     sub_1400411BC @ 0x1400411BC (sub_1400411BC.c)
 *     sub_1400412A8 @ 0x1400412A8 (sub_1400412A8.c)
 *     sub_14004152C @ 0x14004152C (sub_14004152C.c)
 *     sub_140042AE4 @ 0x140042AE4 (sub_140042AE4.c)
 *     sub_140042D4C @ 0x140042D4C (sub_140042D4C.c)
 *     sub_140042EB4 @ 0x140042EB4 (sub_140042EB4.c)
 *     sub_14004314C @ 0x14004314C (sub_14004314C.c)
 *     sub_140043404 @ 0x140043404 (sub_140043404.c)
 *     sub_140043650 @ 0x140043650 (sub_140043650.c)
 *     sub_1400437C4 @ 0x1400437C4 (sub_1400437C4.c)
 *     sub_140043AF8 @ 0x140043AF8 (sub_140043AF8.c)
 *     sub_140043F48 @ 0x140043F48 (sub_140043F48.c)
 *     sub_140044260 @ 0x140044260 (sub_140044260.c)
 *     sub_14004446C @ 0x14004446C (sub_14004446C.c)
 *     sub_140044700 @ 0x140044700 (sub_140044700.c)
 *     sub_1400447B8 @ 0x1400447B8 (sub_1400447B8.c)
 *     sub_140044858 @ 0x140044858 (sub_140044858.c)
 *     sub_140045E4C @ 0x140045E4C (sub_140045E4C.c)
 */

void __fastcall sub_140042830(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  __int64 *i; // rbx
  unsigned __int8 *j; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  bool v13; // zf
  void (__fastcall *v14)(__int64, __int64); // rax
  char **v15; // rsi
  __int64 v16; // rbp
  char *v17; // rdi
  char *k; // rbx
  __int64 v19; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20[6]; // [rsp+28h] [rbp-30h] BYREF

  if ( ControlCode == 2 )
  {
    v19 = 0LL;
    memset(v20, 0, 32);
    (*(void (__fastcall **)(__int64, __int64, _QWORD, ULONGLONG))(qword_140019120 + 2504))(
      qword_140019128,
      qword_140019158,
      0LL,
      MatchAnyKeyword);
    sub_1400411BC();
    for ( i = (__int64 *)qword_1400191C8; i != &qword_1400191C8; i = (__int64 *)*i )
      sub_14002867C((__int64)i);
    for ( j = (unsigned __int8 *)qword_1400191A8; j != (unsigned __int8 *)&qword_1400191A8; j = *(unsigned __int8 **)j )
    {
      sub_140044700(j);
      if ( j[48] )
        sub_14002C084(j, 1);
    }
    if ( (dword_1400196F4 & 0x7F077) != 0 )
      sub_14002BFD8(1);
    if ( (dword_1400196F4 & 0x70000000) != 0 )
      sub_14002C2AC(1);
    if ( (dword_1400196F4 & 0x3300000) != 0 )
      sub_14002C2D8(1);
    if ( dword_1400196F4 < 0 )
      sub_14002C058(1);
    sub_1400054D4((__int64)&qword_140019198, 32, (__int64)v20);
    LOBYTE(v6) = 1;
    sub_1400447B8(v6);
    sub_1400412A8(1);
    LOBYTE(v7) = 1;
    sub_140044858(v7);
    sub_14004152C();
    if ( _bittest64(qword_140019140, 0x25u) )
      sub_140045E4C();
    sub_1400053CC(v20);
    while ( 1 )
    {
      v13 = (unsigned int)sub_140004B88(v20, &v19) == 0;
      v14 = *(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512);
      if ( !v13 )
        break;
      v14(qword_140019128, qword_140019158);
      v8 = v19;
      sub_140042AE4(v19);
      sub_1400437C4(v8);
      LOBYTE(v9) = 1;
      sub_140043AF8(v8, v9);
      sub_140043650(v8);
      sub_14004314C(v8);
      sub_140043404(v8);
      sub_140042EB4(v8);
      sub_14004446C(v8);
      LOBYTE(v10) = 1;
      sub_140042D4C(v8, v10);
      LOBYTE(v11) = 1;
      sub_140044260(v8, v11);
      LOBYTE(v12) = 1;
      sub_140043F48(v8, v12);
      if ( *(_DWORD *)(v8 + 80) == 1 )
        sub_140028730(v8);
      else
        sub_1400410AC(v8);
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
    }
    v14(qword_140019128, qword_140019158);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019170, 0LL);
    v15 = (char **)&unk_140019178;
    v16 = 2LL;
    v17 = (char *)&unk_140019178;
    do
    {
      for ( k = *v15; k != v17; k = *(char **)k )
        sub_140003EE0((__int64)k, 2u);
      v17 += 16;
      v15 += 2;
      --v16;
    }
    while ( v16 );
    (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019170);
  }
}
