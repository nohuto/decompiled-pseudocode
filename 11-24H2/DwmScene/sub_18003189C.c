/*
 * XREFs of sub_18003189C @ 0x18003189C
 * Callers:
 *     sub_1800181E0 @ 0x1800181E0 (sub_1800181E0.c)
 *     sub_1800335C0 @ 0x1800335C0 (sub_1800335C0.c)
 * Callees:
 *     sub_18003181C @ 0x18003181C (sub_18003181C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18003189C(__int64 *a1, __int64 *a2)
{
  sub_18003181C(a1, a2);
  (*(void (__fastcall **)(__int64 *, __int64 *))(*a1 + 80))(a1, a2);
  return a2;
}
