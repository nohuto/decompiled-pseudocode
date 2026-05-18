/*
 * XREFs of sub_1800C2EE4 @ 0x1800C2EE4
 * Callers:
 *     sub_1800B8F60 @ 0x1800B8F60 (sub_1800B8F60.c)
 *     sub_1800B92C0 @ 0x1800B92C0 (sub_1800B92C0.c)
 *     sub_1800BCB50 @ 0x1800BCB50 (sub_1800BCB50.c)
 *     sub_1800C2D00 @ 0x1800C2D00 (sub_1800C2D00.c)
 *     sub_1800CA0C0 @ 0x1800CA0C0 (sub_1800CA0C0.c)
 *     sub_1800CA230 @ 0x1800CA230 (sub_1800CA230.c)
 *     sub_1800CA350 @ 0x1800CA350 (sub_1800CA350.c)
 *     sub_1800CA550 @ 0x1800CA550 (sub_1800CA550.c)
 *     sub_1800CB300 @ 0x1800CB300 (sub_1800CB300.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800C2EE4(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_180011B04(a1 + 72, &v7);
  sub_1800287EC(v7 + 24, v4);
  if ( v8 )
    sub_18001050C(v8);
  v5 = *(_QWORD *)(a1 + 144);
  *a2 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return a2;
}
