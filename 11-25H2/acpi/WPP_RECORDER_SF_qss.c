/*
 * XREFs of WPP_RECORDER_SF_qss @ 0x14003E0C4
 * Callers:
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1400175C0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     OSNotifyDeviceWake @ 0x140018190 (OSNotifyDeviceWake.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x14001DC20 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x140029280 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIFanFSTCallback @ 0x14002C010 (ACPIFanFSTCallback.c)
 *     ACPIFilterFastIoDetachCallback @ 0x14003C550 (ACPIFilterFastIoDetachCallback.c)
 *     ACPIDeviceInternalSynchronizeRequest @ 0x14003DFD8 (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIInitStartDevice @ 0x140044BF4 (ACPIInitStartDevice.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1400482A0 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPICMButtonStartWorker @ 0x14005BB60 (ACPICMButtonStartWorker.c)
 *     ACPIQueryGedDeviceInterface @ 0x1400617C8 (ACPIQueryGedDeviceInterface.c)
 *     ACPIInternalEvaluateOST @ 0x140061980 (ACPIInternalEvaluateOST.c)
 *     PcisuppReleasePciInterfaces @ 0x1400A9244 (PcisuppReleasePciInterfaces.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1400BAA18 (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7,
        const char *a8)
{
  const char *v8; // rsi
  __int64 v10; // rdi
  __int64 v11; // rbx
  unsigned __int64 v13; // r14
  unsigned int v14; // ebp
  unsigned int v15; // r12d
  int v16; // eax
  unsigned __int8 v17; // cf
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v21; // r8
  const char *v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rdx
  const char *v25; // rcx
  int v26; // [rsp+20h] [rbp-68h]

  v8 = a7;
  v10 = (__int64)a8;
  v11 = -1LL;
  v13 = (unsigned __int64)a3 >> 16;
  v14 = a2;
  v15 = a4;
  v16 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v13 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v17 = _bittest(&v16, (a3 - 1) & 0x1F);
  v18 = 5LL;
  if ( v17 && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v13 + 1) >= a2 )
  {
    if ( a8 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a8[v21] );
      v18 = v21 + 1;
    }
    v22 = a8;
    if ( !a8 )
      v22 = "NULL";
    if ( a7 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a7[v23] );
      v24 = v23 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    v25 = a7;
    if ( !a7 )
      v25 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v13),
      43LL,
      a5,
      v15,
      &a6,
      8LL,
      v25,
      v24,
      v22,
      v18,
      0LL);
  }
  if ( v10 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(v10 + v19) );
  }
  if ( v8 )
  {
    do
      ++v11;
    while ( v8[v11] );
  }
  if ( !v8 )
    v8 = "NULL";
  LOWORD(v26) = v15;
  return WppAutoLogTrace(a1, v14, a3, a5, v26, &a6, 8LL, v8);
}
