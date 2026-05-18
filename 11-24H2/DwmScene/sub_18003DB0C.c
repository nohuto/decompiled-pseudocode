/*
 * XREFs of sub_18003DB0C @ 0x18003DB0C
 * Callers:
 *     sub_1800400B0 @ 0x1800400B0 (sub_1800400B0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18003DB0C(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 88) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
    sub_18001060C(v3);
  return sub_180013228(a1);
}
