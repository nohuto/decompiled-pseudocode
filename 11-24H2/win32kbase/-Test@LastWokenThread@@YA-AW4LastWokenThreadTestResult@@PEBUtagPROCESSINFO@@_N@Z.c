/*
 * XREFs of ?Test@LastWokenThread@@YA?AW4LastWokenThreadTestResult@@PEBUtagPROCESSINFO@@_N@Z @ 0x1400FE920
 * Callers:
 *     xxxCreateThreadInfo @ 0x14015DFD8 (xxxCreateThreadInfo.c)
 * Callees:
 *     ?Test@CLastWokenThread@@QEAA?AW4LastWokenThreadTestResult@@PEBUtagPROCESSINFO@@_N@Z @ 0x1400FE94C (-Test@CLastWokenThread@@QEAA-AW4LastWokenThreadTestResult@@PEBUtagPROCESSINFO@@_N@Z.c)
 */

__int64 __fastcall LastWokenThread::Test(__int64 a1, char a2, __int64 a3)
{
  LOBYTE(a3) = a2;
  return CLastWokenThread::Test(*(_QWORD *)(*(_QWORD *)(a1 + 1216) + 3056LL), a1, a3);
}
