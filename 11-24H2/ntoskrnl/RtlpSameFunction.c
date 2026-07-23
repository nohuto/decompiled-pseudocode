/*
 * XREFs of RtlpSameFunction @ 0x14047EF18
 * Callers:
 *     RtlpxVirtualUnwind @ 0x1402345C0 (RtlpxVirtualUnwind.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x140232930 (RtlLookupFunctionEntry.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140234380 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x14047EFD0 (RtlpLookupPrimaryFunctionEntry.c)
 */

_DWORD *__fastcall RtlpSameFunction(__int64 a1, __int64 a2, DWORD64 a3)
{
  __int64 v3; // rbx
  _DWORD *v5; // rbp
  void *v6; // rax
  unsigned __int64 v7; // rdi
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  unsigned __int64 ImageBase; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  ImageBase = 0LL;
  v5 = (_DWORD *)((__int64 (*)(void))RtlpLookupPrimaryFunctionEntry)();
  if ( a3 > 0x7FFFFFFEFFFFLL )
  {
    v6 = RtlLookupFunctionEntry(a3, &ImageBase, 0LL);
    v7 = ImageBase;
    if ( v6 )
      goto LABEL_4;
    return 0LL;
  }
  v9 = 0LL;
  v10 = 0LL;
  v6 = RtlpLookupFunctionEntryForStackWalks(a3, (__int64)&v9);
  if ( !v6 )
    return 0LL;
  v7 = *((_QWORD *)&v9 + 1);
LABEL_4:
  if ( *v5 == *(_DWORD *)RtlpLookupPrimaryFunctionEntry(v6, v7, a3) )
    return v5;
  return (_DWORD *)v3;
}
