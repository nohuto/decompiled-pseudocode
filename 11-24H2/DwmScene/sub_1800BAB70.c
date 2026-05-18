/*
 * XREFs of sub_1800BAB70 @ 0x1800BAB70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_1800B99E4 @ 0x1800B99E4 (sub_1800B99E4.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall sub_1800BAB70(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v4[2]; // [rsp+20h] [rbp-168h] BYREF
  _DWORD v5[80]; // [rsp+30h] [rbp-158h] BYREF

  memset(v5, 0, 0x138uLL);
  v2 = sub_1800B99E4(a1, v4);
  (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)*v2 + 80LL))(*v2, v5);
  sub_18000E954(v4);
  return (v5[76] & 2) == 0;
}
