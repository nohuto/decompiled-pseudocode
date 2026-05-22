/*
 * XREFs of ?OnTryDemote@MPCMouseProcessor@@MEAA_NXZ @ 0x1801C27E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTicks@PerfCounter@@YA_JXZ @ 0x1800BFE30 (-GetTicks@PerfCounter@@YA_JXZ.c)
 */

bool __fastcall MPCMouseProcessor::OnTryDemote(MPCMouseProcessor *this)
{
  bool result; // al

  if ( (unsigned __int64)(*(_QWORD *)&PerfCounter::GetTicks(this) - *((_QWORD *)this + 666)) <= *((_QWORD *)this + 678) )
    return 0;
  *((_DWORD *)this + 1339) = 0;
  result = 1;
  *((_DWORD *)this + 1318) = 0;
  return result;
}
