/*
 * XREFs of ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x14000B4F4
 * Callers:
 *     ?PreAllocateForPrimaryMonitorChange@@YAHXZ @ 0x14000B480 (-PreAllocateForPrimaryMonitorChange@@YAHXZ.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x14000C568 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 * Callees:
 *     HMAllocObjectEx @ 0x140041FF0 (HMAllocObjectEx.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ?AllocationFailure@Monitors@InputTraceLogging@@SAXXZ @ 0x14019DD8C (-AllocationFailure@Monitors@InputTraceLogging@@SAXXZ.c)
 */

struct tagMONITOR *__fastcall CreateMonitor(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx

  LOBYTE(a3) = 12;
  v3 = (_QWORD *)HMAllocObjectEx(0LL, 0LL, a3, 152LL, 0);
  v4 = v3;
  if ( v3 )
  {
    *(_DWORD *)(v3[5] + 28LL) = 0;
    *(_DWORD *)(v3[5] + 32LL) = 0;
    *(_DWORD *)(v3[5] + 36LL) = 0;
    *(_DWORD *)(v3[5] + 40LL) = 0;
    *(_DWORD *)(v3[5] + 44LL) = 0;
    *(_DWORD *)(v3[5] + 48LL) = 0;
    *(_DWORD *)(v3[5] + 52LL) = 0;
    *(_DWORD *)(v3[5] + 56LL) = 0;
    v3[14] = 0LL;
    v3[15] = 0LL;
  }
  else
  {
    UserSetLastError(8LL);
    InputTraceLogging::Monitors::AllocationFailure();
  }
  return (struct tagMONITOR *)v4;
}
