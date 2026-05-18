/*
 * XREFs of sub_1800B628C @ 0x1800B628C
 * Callers:
 *     sub_1800B9BF0 @ 0x1800B9BF0 (sub_1800B9BF0.c)
 *     sub_1800BB150 @ 0x1800BB150 (sub_1800BB150.c)
 *     sub_1800BB270 @ 0x1800BB270 (sub_1800BB270.c)
 *     sub_1800CB6B0 @ 0x1800CB6B0 (sub_1800CB6B0.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800B628C(__int64 (__fastcall ****a1)(_QWORD, void *, __int64 *), __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, void *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  sub_18000E954(a2);
  return v4(v3, &unk_18018B430, a2);
}
