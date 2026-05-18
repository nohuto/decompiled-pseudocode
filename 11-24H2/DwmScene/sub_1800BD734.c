/*
 * XREFs of sub_1800BD734 @ 0x1800BD734
 * Callers:
 *     sub_1800BD0B0 @ 0x1800BD0B0 (sub_1800BD0B0.c)
 *     sub_1800CBE90 @ 0x1800CBE90 (sub_1800CBE90.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_1800BD734(__int64 a1, const char *a2)
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
    v4(a1, &unk_1800F7B68, v5, a2);
  }
}
