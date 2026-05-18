/*
 * XREFs of sub_18001BF90 @ 0x18001BF90
 * Callers:
 *     sub_18001BFFC @ 0x18001BFFC (sub_18001BFFC.c)
 *     sub_180023C58 @ 0x180023C58 (sub_180023C58.c)
 *     sub_180086ED0 @ 0x180086ED0 (sub_180086ED0.c)
 *     sub_1800874EC @ 0x1800874EC (sub_1800874EC.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001BF90(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v3 )
    *(_QWORD *)(a1 + 56) = (**v3)(v3, a1);
  return a1;
}
