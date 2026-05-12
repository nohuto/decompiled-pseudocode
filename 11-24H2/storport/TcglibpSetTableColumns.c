/*
 * XREFs of TcglibpSetTableColumns @ 0x14013F554
 * Callers:
 *     TcglibpSetBand @ 0x14013E0A4 (TcglibpSetBand.c)
 *     TcglibpSetBandLocation @ 0x14013E4B8 (TcglibpSetBandLocation.c)
 *     TcglibpSetTableColumnData @ 0x14013F4F0 (TcglibpSetTableColumnData.c)
 * Callees:
 *     TcglibEalLogCommand @ 0x14008578C (TcglibEalLogCommand.c)
 *     TcglibpCallMethod @ 0x14013EF38 (TcglibpCallMethod.c)
 */

__int64 __fastcall TcglibpSetTableColumns(int **a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  TcglibEalLogCommand(*a1, "SetTableColumns", a3, 23, *a4, a4[1]);
  return TcglibpCallMethod(
           (__int64)a1,
           a2,
           a3,
           0x600000017LL,
           (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))GenSetTableColumnParams,
           (__int64)a4,
           0LL,
           0LL,
           0LL,
           0LL);
}
