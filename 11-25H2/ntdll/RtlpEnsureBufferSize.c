/*
 * XREFs of RtlpEnsureBufferSize @ 0x1800B4050
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180016E20 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180019210 (sxsisol_SearchActCtxForDllName.c)
 *     sxsisol_RespectDotLocal @ 0x1800A0C84 (sxsisol_RespectDotLocal.c)
 *     RtlNtPathNameToDosPathName @ 0x1800B3710 (RtlNtPathNameToDosPathName.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x1800B3AE0 (RtlMultiAppendUnicodeStringBuffer.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800B41BC (sxsisol_ExpandEnvironmentStrings_UEx.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpEnsureBufferSize(int a1, __int64 a2, SIZE_T a3)
{
  char v5; // bp
  PVOID Atom; // rax
  PVOID v7; // rsi
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
  Atom = RtlpAllocateAtom(a3);
  v7 = Atom;
  if ( !Atom )
    return 3221225495LL;
  if ( (v5 & 1) == 0 )
    memmove(Atom, *(const void **)a2, *(_QWORD *)(a2 + 16));
  if ( *(_QWORD *)a2 != *(_QWORD *)(a2 + 8) )
    RtlpSysVolFree(*(void **)a2);
  *(_QWORD *)a2 = v7;
  result = 0LL;
  *(_QWORD *)(a2 + 16) = a3;
  return result;
}
