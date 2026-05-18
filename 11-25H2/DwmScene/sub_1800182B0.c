/*
 * XREFs of sub_1800182B0 @ 0x1800182B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_1800284DC @ 0x1800284DC (sub_1800284DC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800182B0(__int64 a1)
{
  __int64 v1; // rbx
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  sub_1800284DC(v1 + 8, v3);
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v1 + 8LL))(v1, v3);
  return sub_180010F44((__int64)v3);
}
