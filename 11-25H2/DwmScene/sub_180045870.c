/*
 * XREFs of sub_180045870 @ 0x180045870
 * Callers:
 *     sub_180045020 @ 0x180045020 (sub_180045020.c)
 * Callees:
 *     sub_1800273D0 @ 0x1800273D0 (sub_1800273D0.c)
 *     sub_180027D7C @ 0x180027D7C (sub_180027D7C.c)
 *     sub_1800458FC @ 0x1800458FC (sub_1800458FC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180045870(__int64 a1, unsigned int a2)
{
  char *v4; // rbx
  _BYTE v6[72]; // [rsp+20h] [rbp-58h] BYREF
  char v7; // [rsp+68h] [rbp-10h] BYREF
  unsigned int v8; // [rsp+88h] [rbp+10h] BYREF

  v8 = a2;
  sub_1800273D0((__int64 *)(a1 + 128), &v8);
  sub_1800458FC(a1, v6);
  v4 = v6;
  do
  {
    if ( *(_QWORD *)v4 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v4 + 24LL))(*(_QWORD *)v4, a2);
    v4 += 8;
  }
  while ( v4 != &v7 );
  v8 = a2;
  return sub_180027D7C((__int64 *)(a1 + 80), &v8);
}
