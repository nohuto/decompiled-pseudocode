/*
 * XREFs of sub_180011524 @ 0x180011524
 * Callers:
 *     sub_180011290 @ 0x180011290 (sub_180011290.c)
 *     sub_1800B9EF0 @ 0x1800B9EF0 (sub_1800B9EF0.c)
 *     sub_1800BF090 @ 0x1800BF090 (sub_1800BF090.c)
 *     sub_1800BF2C8 @ 0x1800BF2C8 (sub_1800BF2C8.c)
 *     sub_1800C0F9C @ 0x1800C0F9C (sub_1800C0F9C.c)
 *     sub_1800C11C8 @ 0x1800C11C8 (sub_1800C11C8.c)
 *     sub_1800C2BC0 @ 0x1800C2BC0 (sub_1800C2BC0.c)
 *     sub_1800C2E60 @ 0x1800C2E60 (sub_1800C2E60.c)
 *     sub_1800C8630 @ 0x1800C8630 (sub_1800C8630.c)
 *     sub_1800C8AC8 @ 0x1800C8AC8 (sub_1800C8AC8.c)
 *     sub_1800C8D78 @ 0x1800C8D78 (sub_1800C8D78.c)
 *     sub_1800CBE90 @ 0x1800CBE90 (sub_1800CBE90.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_180011524(__int64 *a1, const char *a2)
{
  __int64 v2; // rax
  void (__fastcall *v5)(__int64 *, void *, _QWORD, const char *); // rsi
  unsigned int v6; // eax
  int v7; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
  {
    v2 = *a1;
    v7 = 0;
    (*(void (__fastcall **)(__int64 *, void *, int *, _QWORD))(v2 + 32))(a1, &unk_1800F7B68, &v7, 0LL);
    if ( !v7 )
    {
      v5 = *(void (__fastcall **)(__int64 *, void *, _QWORD, const char *))(*a1 + 40);
      if ( a2 )
        v6 = strnlen(a2, 0xFFuLL);
      else
        v6 = 0;
      v5(a1, &unk_1800F7B68, v6, a2);
    }
  }
}
