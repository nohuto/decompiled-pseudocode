/*
 * XREFs of RtlpEnsureBufferSize @ 0x18008B0C0
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18005B1C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18005D5B0 (sxsisol_SearchActCtxForDllName.c)
 *     RtlNtPathNameToDosPathName @ 0x18008A780 (RtlNtPathNameToDosPathName.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x18008AB50 (RtlMultiAppendUnicodeStringBuffer.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x18008B22C (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     sxsisol_RespectDotLocal @ 0x18010BDCC (sxsisol_RespectDotLocal.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x18000D2C0 (RtlpAllocateAtom.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlpEnsureBufferSize(int a1, __int64 a2, unsigned __int64 a3)
{
  char v5; // bp
  void *Atom; // rax
  void *v7; // rsi
  __int64 result; // rax

  v5 = a1;
  if ( (a1 & 0xFFFFFFFE) != 0 || !a2 )
    return 3221225485LL;
  if ( a3 <= *(_QWORD *)(a2 + 16) )
    return 0LL;
  if ( *(_QWORD *)a2 == *(_QWORD *)(a2 + 8) && a3 <= *(_QWORD *)(a2 + 24) )
  {
    *(_QWORD *)(a2 + 16) = a3;
    return 0LL;
  }
  Atom = (void *)RtlpAllocateAtom(a3);
  v7 = Atom;
  if ( !Atom )
    return 3221225495LL;
  if ( (v5 & 1) == 0 )
    memmove(Atom, *(const void **)a2, *(_QWORD *)(a2 + 16));
  if ( *(_QWORD *)a2 != *(_QWORD *)(a2 + 8) )
    RtlpSysVolFree(*(_QWORD *)a2);
  *(_QWORD *)a2 = v7;
  result = 0LL;
  *(_QWORD *)(a2 + 16) = a3;
  return result;
}
