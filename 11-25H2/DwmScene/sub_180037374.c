/*
 * XREFs of sub_180037374 @ 0x180037374
 * Callers:
 *     sub_18008CEF8 @ 0x18008CEF8 (sub_18008CEF8.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_1800932D4 @ 0x1800932D4 (sub_1800932D4.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180037374(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // ebx
  unsigned int i; // edi
  unsigned int v10; // eax
  __int64 *result; // rax
  __int64 v12[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+20h] BYREF

  sub_180011B04(a1 + 72, v12);
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12[0] + 200LL))(v12[0], &v13);
  v8 = 0;
  if ( v12[1] )
    sub_18001050C(v12[1]);
  *(_OWORD *)v12 = 0LL;
  sub_18001244C((__int64 *)(*(_QWORD *)(a1 + 96) + 9264LL), v12);
  for ( i = 0; i < 6; ++i )
  {
    v10 = v13;
    if ( _bittest((const int *)&v10, i) )
    {
      *(_OWORD *)v12 = 0LL;
      ((void (__fastcall *)(__int64, _QWORD, __int64 *, _QWORD))sub_1800932D4)(
        *(_QWORD *)(a1 + 96) + 4632LL,
        i,
        v12,
        0LL);
    }
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 96) + 8LL))(*(_QWORD *)(a1 + 96), a1);
  result = sub_18001244C((__int64 *)(*(_QWORD *)(a1 + 96) + 9264LL), a2);
  if ( a4 != -1 )
  {
    do
    {
      result = (__int64 *)v13;
      if ( _bittest((const int *)&result, v8) )
        result = (__int64 *)sub_1800932D4(*(_QWORD *)(a1 + 96) + 4632LL, v8, a3, a4, v12[0], v12[1]);
      ++v8;
    }
    while ( v8 < 6 );
  }
  return result;
}
