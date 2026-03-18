/*
 * XREFs of EtwpTiFillZeroVad @ 0x140461964
 * Callers:
 *     EtwpTiVadQueryEventWrite @ 0x1403BD3A4 (EtwpTiVadQueryEventWrite.c)
 *     EtwpTiFillVadEventWrite @ 0x1404618A0 (EtwpTiFillVadEventWrite.c)
 *     EtwTiLogProtectExecVm @ 0x1408F8258 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x1409C4FE0 (EtwTiLogReadWriteVm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpTiFillZeroVad(_QWORD *a1)
{
  __int64 result; // rax

  a1[1] = 4LL;
  *a1 = &qword_140019348;
  result = 7LL;
  a1[2] = &qword_140019348;
  a1[3] = 8LL;
  a1[4] = &qword_140019348;
  a1[5] = 4LL;
  a1[6] = &qword_140019348;
  a1[7] = 4LL;
  a1[8] = &qword_140019348;
  a1[9] = 8LL;
  a1[10] = &qword_140019348;
  a1[11] = 8LL;
  a1[12] = &qword_140019348;
  a1[13] = 2LL;
  return result;
}
