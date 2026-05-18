/*
 * XREFs of sub_1800C3044 @ 0x1800C3044
 * Callers:
 *     sub_1800B90C0 @ 0x1800B90C0 (sub_1800B90C0.c)
 *     sub_1800B9420 @ 0x1800B9420 (sub_1800B9420.c)
 *     sub_1800BCCB0 @ 0x1800BCCB0 (sub_1800BCCB0.c)
 *     sub_1800C2E60 @ 0x1800C2E60 (sub_1800C2E60.c)
 *     sub_1800CA220 @ 0x1800CA220 (sub_1800CA220.c)
 *     sub_1800CA390 @ 0x1800CA390 (sub_1800CA390.c)
 *     sub_1800CA4B0 @ 0x1800CA4B0 (sub_1800CA4B0.c)
 *     sub_1800CA6B0 @ 0x1800CA6B0 (sub_1800CA6B0.c)
 *     sub_1800CB460 @ 0x1800CB460 (sub_1800CB460.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800C3044(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_180011C04(a1 + 72, &v7);
  sub_18002894C(v7 + 24, v4);
  if ( v8 )
    sub_18001060C(v8);
  v5 = *(_QWORD *)(a1 + 144);
  *a2 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return a2;
}
