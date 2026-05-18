/*
 * XREFs of sub_180025AD0 @ 0x180025AD0
 * Callers:
 *     sub_1800BAC70 @ 0x1800BAC70 (sub_1800BAC70.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180025AD0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 184LL))(*a2);
  return sub_180096038(*v2);
}
