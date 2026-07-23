/*
 * XREFs of HalpGetMicrocodePatchRecord @ 0x14055703C
 * Callers:
 *     HalpLoadMicrocode @ 0x1406FF6C0 (HalpLoadMicrocode.c)
 * Callees:
 *     HalpGetCurrentMicrocodePlatform @ 0x140556FF0 (HalpGetCurrentMicrocodePlatform.c)
 *     PrExtExtractDataRecordTable @ 0x1406629BC (PrExtExtractDataRecordTable.c)
 *     PrExtGetRecord @ 0x140662A58 (PrExtGetRecord.c)
 */

__int64 __fastcall HalpGetMicrocodePatchRecord(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v6; // r9
  int v7; // r8d
  unsigned int Record; // ecx
  int v9; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h]
  __int64 v11; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+48h] [rbp-8h] BYREF

  v10 = 0LL;
  v9 = 0;
  v11 = 0LL;
  v12 = 0LL;
  result = HalpGetCurrentMicrocodePlatform();
  if ( (int)result >= 0 )
  {
    if ( (int)PrExtExtractDataRecordTable(*(PVOID *)(v6 + 48)) >= 0 )
    {
      Record = PrExtGetRecord(v10, 0, v7, (unsigned int)&v11, (__int64)&v12, (__int64)&v9);
      result = 3221225485LL;
      if ( Record != -1073741811 )
      {
        *a2 = v11;
        *a3 = v12;
        return Record;
      }
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
