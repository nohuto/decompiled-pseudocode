/*
 * XREFs of HvpApplyLogEntryDataToFileBackedHive @ 0x140A67E54
 * Callers:
 *     HvpApplyLegacyLogFile @ 0x1407E6640 (HvpApplyLegacyLogFile.c)
 *     HvpApplyIncrementalLogFile @ 0x140A84B40 (HvpApplyIncrementalLogFile.c)
 * Callees:
 *     HvpSetRangeProtection @ 0x140887154 (HvpSetRangeProtection.c)
 *     HvpCopyModifiedData @ 0x140A67F04 (HvpCopyModifiedData.c)
 */

__int64 __fastcall HvpApplyLogEntryDataToFileBackedHive(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _DWORD *a6)
{
  int v6; // edi
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 result; // rax

  v6 = 0;
  v11 = 0LL;
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) = *(_DWORD *)(a2 + 16);
  while ( 1 )
  {
    if ( (unsigned int)v11 >= *(_DWORD *)(a2 + 20) )
    {
      result = 1073741833LL;
      *a6 = v6;
      return result;
    }
    v12 = *(unsigned int *)(a3 + 8 * v11 + 4);
    if ( !HvpSetRangeProtection(BugCheckParameter2, *(unsigned int *)(a3 + 8 * v11), *(_DWORD *)(a3 + 8 * v11 + 4), 4) )
      break;
    HvpCopyModifiedData(BugCheckParameter2);
    a4 += v12;
    v6 += v12;
    v11 = (unsigned int)(v11 + 1);
  }
  return 3221225626LL;
}
