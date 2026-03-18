/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1400232C0
 * Callers:
 *     ACPIAsyncAcquireGlobalLock @ 0x140022BF0 (ACPIAsyncAcquireGlobalLock.c)
 *     ACPIReleaseGlobalLock @ 0x140022EA0 (ACPIReleaseGlobalLock.c)
 *     OSNotifyDeviceWakeCallBack @ 0x140033440 (OSNotifyDeviceWakeCallBack.c)
 *     ACPIMapNamedTable @ 0x140040810 (ACPIMapNamedTable.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase4 @ 0x14004B7B0 (ACPIDevicePowerProcessPhase2SystemSubPhase4.c)
 *     LinkNodepRunSrsWorker @ 0x140070260 (LinkNodepRunSrsWorker.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1400A9FFC (IrqArbpAssignIrqFromLinkNode.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1400B170C (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpFindSuitableRangeMsi @ 0x1400BDFDC (IrqArbpFindSuitableRangeMsi.c)
 *     ACPIGlobalInitialize @ 0x1400C6008 (ACPIGlobalInitialize.c)
 *     ACPILoadProcessDSDT @ 0x1400C74D8 (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessFACS @ 0x1400C7618 (ACPILoadProcessFACS.c)
 *     ACPILoadProcessRSDT @ 0x1400C9308 (ACPILoadProcessRSDT.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // r11
  unsigned int v9; // edi
  int v10; // eax
  char *v12; // rcx
  int v13; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) )
  {
    v12 = (char *)WPP_GLOBAL_Control + 80 * v7;
    if ( (unsigned __int8)v12[41] >= a2 )
      ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
        *((_QWORD *)v12 + 3),
        43LL,
        a5,
        a4,
        va,
        8LL,
        0LL);
  }
  LOWORD(v13) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v13, va, 8LL, 0LL);
}
