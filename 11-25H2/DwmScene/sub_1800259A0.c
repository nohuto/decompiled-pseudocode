/*
 * XREFs of sub_1800259A0 @ 0x1800259A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010AE8 @ 0x180010AE8 (sub_180010AE8.c)
 *     sub_1800169B8 @ 0x1800169B8 (sub_1800169B8.c)
 *     sub_180023ADC @ 0x180023ADC (sub_180023ADC.c)
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800259A0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 *v7; // rcx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h]

  v4 = a1 + 8;
  v11 = a1 + 8;
  sub_180027FBC(a1 + 8);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
  v5 = *(__int64 **)sub_180023ADC((__int64 *)(a1 + 24), (__int64)v9, &v10);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v6 = v5[6];
  v7 = v5 + 5;
  if ( v6 == v5[7] )
    sub_1800169B8(v7, v6, a2);
  else
    sub_180010AE8((__int64)v7, a2);
  return sub_18002815C(v4);
}
