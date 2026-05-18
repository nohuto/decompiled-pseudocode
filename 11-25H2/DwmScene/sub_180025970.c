/*
 * XREFs of sub_180025970 @ 0x180025970
 * Callers:
 *     sub_1800BAB10 @ 0x1800BAB10 (sub_1800BAB10.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180025970(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 184LL))(*a2);
  return sub_180095ED8(*v2);
}
