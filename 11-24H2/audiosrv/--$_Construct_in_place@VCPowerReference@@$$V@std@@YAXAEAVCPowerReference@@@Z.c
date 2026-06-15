/*
 * XREFs of ??$_Construct_in_place@VCPowerReference@@$$V@std@@YAXAEAVCPowerReference@@@Z @ 0x1800115E8
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180010DC4 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 */

__int64 __fastcall std::_Construct_in_place<CPowerReference,>(_QWORD *a1)
{
  __int64 result; // rax

  memset_0(a1, 0, 0x70uLL);
  result = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  a1[6] = 0LL;
  a1[7] = 0LL;
  a1[8] = 0LL;
  a1[9] = 0LL;
  a1[10] = 0LL;
  a1[11] = 0LL;
  a1[12] = 0LL;
  a1[13] = 0LL;
  return result;
}
