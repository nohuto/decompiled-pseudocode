/*
 * XREFs of sub_180011424 @ 0x180011424
 * Callers:
 *     sub_180011190 @ 0x180011190 (sub_180011190.c)
 *     sub_1800B9D90 @ 0x1800B9D90 (sub_1800B9D90.c)
 *     sub_1800BEF30 @ 0x1800BEF30 (sub_1800BEF30.c)
 *     sub_1800BF168 @ 0x1800BF168 (sub_1800BF168.c)
 *     sub_1800C0E3C @ 0x1800C0E3C (sub_1800C0E3C.c)
 *     sub_1800C1068 @ 0x1800C1068 (sub_1800C1068.c)
 *     sub_1800C2A60 @ 0x1800C2A60 (sub_1800C2A60.c)
 *     sub_1800C2D00 @ 0x1800C2D00 (sub_1800C2D00.c)
 *     sub_1800C84D0 @ 0x1800C84D0 (sub_1800C84D0.c)
 *     sub_1800C8968 @ 0x1800C8968 (sub_1800C8968.c)
 *     sub_1800C8C18 @ 0x1800C8C18 (sub_1800C8C18.c)
 *     sub_1800CBD30 @ 0x1800CBD30 (sub_1800CBD30.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_180011424(__int64 *a1, const char *a2)
{
  __int64 v2; // rax
  void (__fastcall *v5)(__int64 *, void *, _QWORD, const char *); // rsi
  unsigned int v6; // eax
  int v7; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
  {
    v2 = *a1;
    v7 = 0;
    (*(void (__fastcall **)(__int64 *, void *, int *, _QWORD))(v2 + 32))(a1, &unk_1800F6B40, &v7, 0LL);
    if ( !v7 )
    {
      v5 = *(void (__fastcall **)(__int64 *, void *, _QWORD, const char *))(*a1 + 40);
      if ( a2 )
        v6 = strnlen(a2, 0xFFuLL);
      else
        v6 = 0;
      v5(a1, &unk_1800F6B40, v6, a2);
    }
  }
}
