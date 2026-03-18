/*
 * XREFs of W32kStub_DrvSampleDisplayState @ 0x140232D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall W32kStub_DrvSampleDisplayState(__int64 a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = Win32Stub_MonitorUniqueness;
  *(_DWORD *)(a1 + 8) = Win32Stub_PopulationUniqueness;
  result = 0LL;
  *(_OWORD *)(a1 + 12) = 0LL;
  return result;
}
