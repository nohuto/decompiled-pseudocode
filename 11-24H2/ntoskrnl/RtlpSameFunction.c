/*
 * XREFs of RtlpSameFunction @ 0x1404839F8
 * Callers:
 *     RtlpxVirtualUnwind @ 0x14027F030 (RtlpxVirtualUnwind.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x14027D3A0 (RtlLookupFunctionEntry.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14027EDF0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x140483AB0 (RtlpLookupPrimaryFunctionEntry.c)
 */

_DWORD *__fastcall RtlpSameFunction(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  _DWORD *v5; // rbp
  void *v6; // rax
  unsigned __int64 v7; // rdi
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  unsigned __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  v11 = 0LL;
  v5 = (_DWORD *)((__int64 (*)(void))RtlpLookupPrimaryFunctionEntry)();
  if ( a3 > 0x7FFFFFFEFFFFLL )
  {
    v6 = RtlLookupFunctionEntry(a3, &v11, 0LL);
    v7 = v11;
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
