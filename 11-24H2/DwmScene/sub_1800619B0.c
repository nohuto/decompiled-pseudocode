/*
 * XREFs of sub_1800619B0 @ 0x1800619B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180032500 @ 0x180032500 (sub_180032500.c)
 *     sub_1800335C0 @ 0x1800335C0 (sub_1800335C0.c)
 *     sub_18006220C @ 0x18006220C (sub_18006220C.c)
 *     sub_1800622AC @ 0x1800622AC (sub_1800622AC.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800619B0(unsigned int *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8

  sub_1800335C0((__int64)a1, a2);
  v3 = sub_180032500((__int64)a1, 1);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v3 + 152LL))(v3, &unk_1801C5318, a1[147], 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v3 + 152LL))(v3, &unk_1801C5978, a1[136], 1LL);
  if ( a1[166] == 3 )
  {
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_1801C5138, v4, 1LL);
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_1801C50D8, v5, 1LL);
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_1801C50F8, v6, 1LL);
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_1801C5118, v7, 1LL);
  }
  sub_1800622AC(a1);
  sub_18006220C(a1);
  return sub_18006225C(a1);
}
