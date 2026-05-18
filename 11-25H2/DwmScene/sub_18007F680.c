/*
 * XREFs of sub_18007F680 @ 0x18007F680
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800130E0 @ 0x1800130E0 (sub_1800130E0.c)
 *     sub_180027D3C @ 0x180027D3C (sub_180027D3C.c)
 *     sub_1800346A8 @ 0x1800346A8 (sub_1800346A8.c)
 *     sub_180050B00 @ 0x180050B00 (sub_180050B00.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007F680(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 i; // rdi
  __int64 v6[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_180027D3C(a1 + 10);
  result = a1[14];
  if ( !result || *(_DWORD *)(result + 24) != 2 )
    result = sub_180050B00(a1 + 15);
  if ( (a1[5] & 1) != 0 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
    sub_1800346A8(v3, v6);
    v4 = v6[1];
    for ( i = v6[0]; i != v4; i += 16LL )
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 16LL))(a1, i);
    return sub_1800130E0((__int64)v6);
  }
  return result;
}
