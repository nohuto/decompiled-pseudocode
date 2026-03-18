/*
 * XREFs of CmCheckNoTxContext @ 0x140914000
 * Callers:
 *     NtCompactKeys @ 0x1407C0060 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407C02F0 (NtCompressKey.c)
 *     NtReplaceKey @ 0x1407C1280 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1407C15D0 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x1407C1980 (NtSaveMergedKeys.c)
 *     CmLoadDifferencingKey @ 0x140913148 (CmLoadDifferencingKey.c)
 *     NtSaveKeyEx @ 0x140A6BD80 (NtSaveKeyEx.c)
 * Callees:
 *     <none>
 */

__int64 CmCheckNoTxContext()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  result = TmCurrentTransaction(&v1);
  if ( (_DWORD)result == -1073741637 )
    return 0LL;
  if ( (int)result >= 0 )
    return v1 != 0 ? 0xC0190001 : 0;
  return result;
}
