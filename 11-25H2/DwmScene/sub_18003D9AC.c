/*
 * XREFs of sub_18003D9AC @ 0x18003D9AC
 * Callers:
 *     sub_18003FF50 @ 0x18003FF50 (sub_18003FF50.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18003D9AC(__int64 a1)
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
    sub_18001050C(v3);
  return sub_180013128(a1);
}
