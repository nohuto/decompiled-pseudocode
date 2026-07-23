/*
 * XREFs of IopLiveDumpTraceChunkCRCMismatchWrite @ 0x14059FFF4
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x1404957D4 (IopLiveDumpWriteDumpFile.c)
 * Callees:
 *     IopLiveDumpTraceEventGeneric @ 0x1405A0124 (IopLiveDumpTraceEventGeneric.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall IopLiveDumpTraceChunkCRCMismatchWrite(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  _QWORD v7[6]; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v8[6]; // [rsp+50h] [rbp+7h] BYREF

  v7[0] = a1;
  v8[0] = L"ChunkIndex";
  v7[1] = a2;
  v8[1] = L"ChunkCRC";
  v7[3] = a4;
  v8[2] = L"WriteComplete";
  v8[3] = L"WriteBufferCRC";
  v8[4] = L"WriteLength";
  v8[5] = L"ByteOffset";
  v7[2] = a3;
  v7[4] = a5;
  v7[5] = a6;
  return IopLiveDumpTraceEventGeneric(L"ChunkCRCMismatchWrite", 6LL, v8, v7);
}
