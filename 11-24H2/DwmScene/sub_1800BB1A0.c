/*
 * XREFs of sub_1800BB1A0 @ 0x1800BB1A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_1800373E4 @ 0x1800373E4 (sub_1800373E4.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800BB1A0(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)(a1 + 272);
  sub_1800373E4(*(_QWORD ***)(a1 + 272));
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 48LL))(*v1);
  *(_OWORD *)v4 = 0LL;
  sub_180011110(v1, v4);
  if ( v4[1] )
    sub_18001060C(v4[1]);
  sub_18000E954((__int64 *)(a1 + 3872));
  *(_DWORD *)(a1 + 3864) = 6;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 3880) + 880LL))(*(_QWORD *)(a1 + 3880));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 3880) + 888LL))(*(_QWORD *)(a1 + 3880));
  sub_18000E954((__int64 *)(a1 + 3880));
  sub_18000E954((__int64 *)(a1 + 3888));
  sub_18000E954((__int64 *)(a1 + 3896));
  return sub_18000E954((__int64 *)(a1 + 4256));
}
