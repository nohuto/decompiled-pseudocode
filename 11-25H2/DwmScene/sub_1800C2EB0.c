/*
 * XREFs of sub_1800C2EB0 @ 0x1800C2EB0
 * Callers:
 *     sub_1800C3A00 @ 0x1800C3A00 (sub_1800C3A00.c)
 *     sub_1800C51D0 @ 0x1800C51D0 (sub_1800C51D0.c)
 *     sub_1800C5BE0 @ 0x1800C5BE0 (sub_1800C5BE0.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_1800C2EB0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 104);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
