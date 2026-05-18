/*
 * XREFs of sub_18001C0F0 @ 0x18001C0F0
 * Callers:
 *     sub_18001C15C @ 0x18001C15C (sub_18001C15C.c)
 *     sub_180023DB8 @ 0x180023DB8 (sub_180023DB8.c)
 *     sub_180087030 @ 0x180087030 (sub_180087030.c)
 *     sub_18008764C @ 0x18008764C (sub_18008764C.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001C0F0(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v3 )
    *(_QWORD *)(a1 + 56) = (**v3)(v3, a1);
  return a1;
}
