/*
 * XREFs of sub_18003DA84 @ 0x18003DA84
 * Callers:
 *     sub_18003DC24 @ 0x18003DC24 (sub_18003DC24.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_1800247B0 @ 0x1800247B0 (sub_1800247B0.c)
 *     sub_18003D8B0 @ 0x18003D8B0 (sub_18003D8B0.c)
 *     sub_18003D958 @ 0x18003D958 (sub_18003D958.c)
 *     sub_18003D988 @ 0x18003D988 (sub_18003D988.c)
 *     sub_1800D2724 @ 0x1800D2724 (sub_1800D2724.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003DA84(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx

  sub_18003D988((void **)(a1 + 200));
  sub_1800D2724(a1 + 184);
  sub_18003D8B0((__int64 *)(a1 + 120));
  sub_18003D958((void **)(a1 + 88));
  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  result = sub_1800247B0(a1 + 16);
  v4 = *(volatile signed __int32 **)(a1 + 8);
  if ( v4 )
    return sub_180010644(v4);
  return result;
}
