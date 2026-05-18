/*
 * XREFs of sub_18003D924 @ 0x18003D924
 * Callers:
 *     sub_18003DAC4 @ 0x18003DAC4 (sub_18003DAC4.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180024650 @ 0x180024650 (sub_180024650.c)
 *     sub_18003D750 @ 0x18003D750 (sub_18003D750.c)
 *     sub_18003D7F8 @ 0x18003D7F8 (sub_18003D7F8.c)
 *     sub_18003D828 @ 0x18003D828 (sub_18003D828.c)
 *     sub_1800D25C4 @ 0x1800D25C4 (sub_1800D25C4.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003D924(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx

  sub_18003D828((void **)(a1 + 200));
  sub_1800D25C4(a1 + 184);
  sub_18003D750((__int64 *)(a1 + 120));
  sub_18003D7F8((void **)(a1 + 88));
  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  result = sub_180024650(a1 + 16);
  v4 = *(volatile signed __int32 **)(a1 + 8);
  if ( v4 )
    return sub_180010544(v4);
  return result;
}
