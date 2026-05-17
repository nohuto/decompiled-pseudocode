/*
 * XREFs of LdrpFindOrPrepareEnclaveModule @ 0x1800D8748
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpEnclaveAddDependentModule @ 0x180134834 (LdrpEnclaveAddDependentModule.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x1800B3990 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1800B49D0 (RtlEqualUnicodeString.c)
 *     LdrpFindLoadedEnclaveModule @ 0x1800B4B04 (LdrpFindLoadedEnclaveModule.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800D956C (LdrpCreatePendingEnclaveModule.c)
 */

__int64 __fastcall LdrpFindOrPrepareEnclaveModule(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7)
{
  unsigned __int16 *v9; // rbx
  bool v11; // al
  unsigned __int16 *v12; // rcx
  __int64 result; // rax

  v9 = (unsigned __int16 *)a2;
  *a6 = 0LL;
  if ( (a4 & 0x20) != 0 )
  {
    if ( RtlEqualUnicodeString(word_180175C90, a2, 1) )
    {
      if ( a5 == *(_QWORD *)(a1 + 120) || a5 == *(_QWORD *)(a1 + 128) )
        v9 = (unsigned __int16 *)&unk_180175C70;
    }
    else
    {
      v11 = RtlPrefixUnicodeString(L"\b\n", (__int64)v9, 1);
      v12 = (unsigned __int16 *)&unk_180175C70;
      if ( !v11 )
        v12 = v9;
      v9 = v12;
    }
  }
  result = LdrpFindLoadedEnclaveModule(a1, v9, a6);
  if ( (_DWORD)result == -1073741515 )
    return LdrpCreatePendingEnclaveModule(a1, (_DWORD)v9, a4, 8, a3, a5, (__int64)a6, a7);
  return result;
}
