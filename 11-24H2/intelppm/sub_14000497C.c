/*
 * XREFs of sub_14000497C @ 0x14000497C
 * Callers:
 *     sub_140004910 @ 0x140004910 (sub_140004910.c)
 *     sub_140004940 @ 0x140004940 (sub_140004940.c)
 *     sub_140009100 @ 0x140009100 (sub_140009100.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14000497C(void (__fastcall *a1)(__int64 *, int *), __int64 a2, char a3)
{
  __int64 *i; // rbx

  dword_1400197D0 = dword_1400197B0;
  qword_1400197D8 = a2;
  byte_1400197E0 = a3;
  (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2528))(qword_140019128, qword_140019790);
  for ( i = (__int64 *)qword_1400197A0; i != &qword_1400197A0; i = (__int64 *)*i )
    a1(i, &dword_1400197D0);
  return (*(__int64 (__fastcall **)(__int64, __int64))(qword_140019120 + 2536))(qword_140019128, qword_140019790);
}
