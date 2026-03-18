/*
 * XREFs of ?WaitForNextTick@CClockBase@@UEAA?AW4WaitResult@ICompositorClock@@PEAX@Z @ 0x1801BF390
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcTimeoutTimeMs@CClockBase@@IEBAIXZ @ 0x1801C1168 (-CalcTimeoutTimeMs@CClockBase@@IEBAIXZ.c)
 */

__int64 __fastcall CClockBase::WaitForNextTick(CClockBase *a1, void *a2)
{
  DWORD v3; // edi
  DWORD v4; // eax
  unsigned int v5; // ebx

  v3 = CClockBase::CalcTimeoutTimeMs(a1);
  v4 = WaitForSingleObject(a2, v3);
  v5 = 0;
  if ( v4 )
  {
    if ( v4 == 258 )
      return 4;
    else
      Sleep(v3);
  }
  else
  {
    return 3;
  }
  return v5;
}
