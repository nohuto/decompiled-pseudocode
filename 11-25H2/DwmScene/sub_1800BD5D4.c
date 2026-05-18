/*
 * XREFs of sub_1800BD5D4 @ 0x1800BD5D4
 * Callers:
 *     sub_1800BCF50 @ 0x1800BCF50 (sub_1800BCF50.c)
 *     sub_1800CBD30 @ 0x1800CBD30 (sub_1800CBD30.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_1800BD5D4(__int64 a1, const char *a2)
{
  void (__fastcall *v4)(__int64, void *, _QWORD, const char *); // rsi
  unsigned int v5; // eax

  if ( a1 )
  {
    v4 = *(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)a1 + 24LL);
    if ( a2 )
      v5 = strnlen(a2, 0xFFuLL);
    else
      v5 = 0;
    v4(a1, &unk_1800F6B40, v5, a2);
  }
}
