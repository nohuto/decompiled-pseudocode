/*
 * XREFs of HvpGenerateLogEntryMetadata @ 0x140377360
 * Callers:
 *     HvpGenerateLogEntry @ 0x140967718 (HvpGenerateLogEntry.c)
 * Callees:
 *     HvpCopyDataToOffsetArray @ 0x1403774BC (HvpCopyDataToOffsetArray.c)
 *     HvpGenerateLogMetadata @ 0x1409679D8 (HvpGenerateLogMetadata.c)
 */

__int64 __fastcall HvpGenerateLogEntryMetadata(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  int v9; // r9d

  HvpGenerateLogMetadata((PRTL_BITMAP)(a1 + 88));
  return HvpCopyDataToOffsetArray(a6, 8 * a7, a2, v9, a4, a5);
}
