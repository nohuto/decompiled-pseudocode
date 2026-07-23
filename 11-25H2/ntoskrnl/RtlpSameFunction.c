/*
 * XREFs of RtlpSameFunction @ 0x140483548
 * Callers:
 *     RtlpxVirtualUnwind @ 0x140259250 (RtlpxVirtualUnwind.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 * Callees:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140259000 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlLookupFunctionEntry @ 0x14025C9D0 (RtlLookupFunctionEntry.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x140483600 (RtlpLookupPrimaryFunctionEntry.c)
 */

_DWORD *__fastcall RtlpSameFunction(__int64 a1, __int64 a2, DWORD64 a3)
{
  __int64 v3; // rbx
  _DWORD *v5; // rbp
  PRUNTIME_FUNCTION v6; // rax
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
  v6 = (PRUNTIME_FUNCTION)RtlpLookupFunctionEntryForStackWalks(a3, (__int64)&v9);
  if ( !v6 )
    return 0LL;
  v7 = *((_QWORD *)&v9 + 1);
LABEL_4:
  if ( *v5 == *(_DWORD *)RtlpLookupPrimaryFunctionEntry(v6, v7, a3) )
    return v5;
  return (_DWORD *)v3;
}
