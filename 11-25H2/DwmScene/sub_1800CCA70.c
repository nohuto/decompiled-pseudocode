/*
 * XREFs of sub_1800CCA70 @ 0x1800CCA70
 * Callers:
 *     sub_1800CCFE0 @ 0x1800CCFE0 (sub_1800CCFE0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memset @ 0x18000C088 (memset.c)
 *     sub_1800CCEBC @ 0x1800CCEBC (sub_1800CCEBC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_1800CCA70(__int64 a1)
{
  void (__fastcall *v2)(__int64, void *, _QWORD, char *); // rbx
  unsigned int v3; // eax
  int v4; // [rsp+20h] [rbp-128h]
  char String[256]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1 )
  {
    memset(String, 0, sizeof(String));
    v4 = dword_1801C3E40++;
    sub_1800CCEBC(String, -1LL, "%S(%u)", L"CoreEngine", v4);
    v2 = *(void (__fastcall **)(__int64, void *, _QWORD, char *))(*(_QWORD *)a1 + 280LL);
    v3 = strnlen(String, 0x7FFFFFFFuLL);
    v2(a1, &unk_1800F6B40, v3, String);
  }
}
