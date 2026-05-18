/*
 * XREFs of sub_1800459D0 @ 0x1800459D0
 * Callers:
 *     sub_180045180 @ 0x180045180 (sub_180045180.c)
 * Callees:
 *     sub_180027530 @ 0x180027530 (sub_180027530.c)
 *     sub_180027EDC @ 0x180027EDC (sub_180027EDC.c)
 *     sub_180045A5C @ 0x180045A5C (sub_180045A5C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800459D0(__int64 a1, unsigned int a2)
{
  char *v4; // rbx
  _BYTE v6[72]; // [rsp+20h] [rbp-58h] BYREF
  char v7; // [rsp+68h] [rbp-10h] BYREF
  unsigned int v8; // [rsp+88h] [rbp+10h] BYREF

  v8 = a2;
  sub_180027530((__int64 *)(a1 + 128), &v8);
  sub_180045A5C(a1, v6);
  v4 = v6;
  do
  {
    if ( *(_QWORD *)v4 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v4 + 24LL))(*(_QWORD *)v4, a2);
    v4 += 8;
  }
  while ( v4 != &v7 );
  v8 = a2;
  return sub_180027EDC((__int64 *)(a1 + 80), &v8);
}
