/*
 * XREFs of ?QueryState@CVADServer@@QEAAJPEAH00@Z @ 0x180080520
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180016D04 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 *     ?ReevaluateTimerActivationRequest@CVADServer@@QEAAXXZ @ 0x180107170 (-ReevaluateTimerActivationRequest@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVADServer::QueryState(CVADServer *this, int *a2, int *a3, int *a4)
{
  int v4; // r10d

  v4 = 1;
  if ( a2 )
    *a2 = *((_DWORD *)this + 42) == 1;
  if ( a3 )
  {
    if ( *((_DWORD *)this + 60) || (*((_BYTE *)this + 244) & 1) == 0 )
      v4 = 0;
    *a3 = v4;
  }
  if ( a4 )
    *a4 = *((_DWORD *)this + 63);
  return 0LL;
}
