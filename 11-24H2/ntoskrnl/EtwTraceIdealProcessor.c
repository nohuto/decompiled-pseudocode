/*
 * XREFs of EtwTraceIdealProcessor @ 0x1404B1DCC
 * Callers:
 *     KiQueueReadyThread @ 0x140295020 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14031ED40 (KiDeferredReadySingleThread.c)
 *     KiSetSystemAffinityThread @ 0x1403398F4 (KiSetSystemAffinityThread.c)
 *     KiSetAffinityThread @ 0x1403B1A08 (KiSetAffinityThread.c)
 *     KeStartThread @ 0x1403B3660 (KeStartThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x1403B422C (KeSetIdealProcessorThreadEx.c)
 *     KiUpdateThreadCpuSets @ 0x1403C6418 (KiUpdateThreadCpuSets.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1403C9208 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiDirectSwitchThread @ 0x14042B970 (KiDirectSwitchThread.c)
 *     ?KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFINITY_EX@@2PEAE3PEAK@Z @ 0x1404A5B9C (-KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFI.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceIdealProcessor(__int64 a1, __int16 a2, int a3, int a4)
{
  int v4; // eax
  __int64 result; // rax
  _DWORD v6[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  if ( a3 != a4 )
  {
    v4 = *(_DWORD *)(a1 + 1296);
    v9 = 0;
    v6[0] = v4;
    v6[2] = a4;
    v6[1] = a3;
    v7 = v6;
    v8 = 12;
    return EtwTraceKernelEvent((int)&v7, 1, 0x88000000, a2, 23075075);
  }
  return result;
}
