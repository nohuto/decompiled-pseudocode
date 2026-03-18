/*
 * XREFs of CmFcManagerStartBootPhase @ 0x140C3BDAC
 * Callers:
 *     CmFcInitSystem0 @ 0x140C38E74 (CmFcInitSystem0.c)
 * Callees:
 *     RtlpFcWriteHighLowHigh @ 0x1404BDC88 (RtlpFcWriteHighLowHigh.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmFcpIncrementChangeStamp @ 0x1406EEF34 (CmFcpIncrementChangeStamp.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140A30428 (RtlpFcBufferManagerUpdateBuffers.c)
 */

char __fastcall CmFcManagerStartBootPhase(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  char result; // al
  _QWORD v17[12]; // [rsp+20h] [rbp-59h] BYREF

  v12 = CmFcpIncrementChangeStamp(qword_140EF6B78);
  v17[8] = a5;
  v17[10] = a11;
  v17[11] = a12;
  v17[1] = v13;
  v17[2] = v14;
  v17[4] = v13;
  v17[5] = v14;
  v17[0] = v12;
  v17[3] = v12;
  v17[6] = v12;
  v17[7] = v15;
  v17[9] = v12;
  RtlpFcBufferManagerUpdateBuffers(qword_140EF6BE8, v12, (__int64)v17);
  RtlpFcWriteHighLowHigh((__int64)&qword_140EF6B78, v12);
  qword_140EF6D00[0] = a6;
  qword_140EF7088 = a8;
  result = a10;
  byte_140EF7258 = a10;
  byte_140EF6CFB = 0;
  return result;
}
