/*
 * XREFs of NtGdiDDCCIGetTimingReport @ 0x140267FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdcciGetTimingReport@CMonitorAPI@@QEAAJPEAXPEAU_MC_TIMING_REPORT@@@Z @ 0x14026806C (-DdcciGetTimingReport@CMonitorAPI@@QEAAJPEAXPEAU_MC_TIMING_REPORT@@@Z.c)
 */

__int64 __fastcall NtGdiDDCCIGetTimingReport(void *a1, _QWORD *Address)
{
  __int64 SessionState; // rax
  int TimingReport; // ebx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v7 = 0LL;
  v8 = 0;
  SessionState = W32GetSessionState((_DWORD)a1, Address);
  TimingReport = CMonitorAPI::DdcciGetTimingReport(
                   *(CMonitorAPI **)(*(_QWORD *)(SessionState + 96) + 128LL),
                   a1,
                   (struct _MC_TIMING_REPORT *)&v7);
  if ( TimingReport >= 0 )
  {
    ProbeForWrite(Address, 9uLL, 1u);
    *((_BYTE *)Address + 8) = v8;
    *Address = v7;
  }
  return (unsigned int)TimingReport;
}
