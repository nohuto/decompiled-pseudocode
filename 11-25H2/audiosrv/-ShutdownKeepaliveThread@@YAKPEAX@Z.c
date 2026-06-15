/*
 * XREFs of ?ShutdownKeepaliveThread@@YAKPEAX@Z @ 0x1801452E0
 * Callers:
 *     <none>
 * Callees:
 *     ReportStatusToSCMgr @ 0x180145340 (ReportStatusToSCMgr.c)
 */

__int64 __fastcall ShutdownKeepaliveThread(PVOID Parameter, __int64 a2, __int64 a3, __int64 a4)
{
  DWORD v4; // eax

  do
  {
    ReportStatusToSCMgr(3LL, 0LL, 5000LL, a4);
    v4 = WaitForSingleObject(hEventShutdownComplete, 0x1388u);
  }
  while ( v4 && v4 != -1 );
  return 0LL;
}
