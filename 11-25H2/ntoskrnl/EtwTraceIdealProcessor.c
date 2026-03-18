/*
 * XREFs of EtwTraceIdealProcessor @ 0x1404B0E7C
 * Callers:
 *     KeStartThread @ 0x14026AE04 (KeStartThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14026C404 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetAffinityThread @ 0x140271884 (KiSetAffinityThread.c)
 *     KiSetSystemAffinityThread @ 0x140278684 (KiSetSystemAffinityThread.c)
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 *     KiDirectSwitchThread @ 0x140315A20 (KiDirectSwitchThread.c)
 *     KiQueueReadyThread @ 0x14032F910 (KiQueueReadyThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x1403B3360 (KeSetIdealProcessorThreadEx.c)
 *     KiUpdateThreadCpuSets @ 0x140491C8C (KiUpdateThreadCpuSets.c)
 *     ?KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFINITY_EX@@2PEAE3PEAK@Z @ 0x1404A51A8 (-KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFI.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
