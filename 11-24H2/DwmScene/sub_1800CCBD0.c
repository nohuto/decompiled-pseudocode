/*
 * XREFs of sub_1800CCBD0 @ 0x1800CCBD0
 * Callers:
 *     sub_1800CD140 @ 0x1800CD140 (sub_1800CD140.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_1800CD01C @ 0x1800CD01C (sub_1800CD01C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_1800CCBD0(__int64 a1)
{
  void (__fastcall *v2)(__int64, void *, _QWORD, char *); // rbx
  unsigned int v3; // eax
  int v4; // [rsp+20h] [rbp-128h]
  char String[256]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1 )
  {
    memset(String, 0, sizeof(String));
    v4 = dword_1801C4E50++;
    sub_1800CD01C(String, -1LL, "%S(%u)", L"CoreEngine", v4);
    v2 = *(void (__fastcall **)(__int64, void *, _QWORD, char *))(*(_QWORD *)a1 + 280LL);
    v3 = strnlen(String, 0x7FFFFFFFuLL);
    v2(a1, &unk_1800F7B68, v3, String);
  }
}
