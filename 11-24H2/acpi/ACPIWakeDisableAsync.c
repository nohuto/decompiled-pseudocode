/*
 * XREFs of ACPIWakeDisableAsync @ 0x140031C68
 * Callers:
 *     OSNotifyDeviceWake @ 0x140018190 (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1400311FC (OSNotifyDeviceWakeByInterrupt.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x140031A38 (OSNotifyDeviceWakeByGPEEvent.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x140032D20 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1400330A8 (ACPIWakeEnableDisablePciDevice.c)
 *     OSNotifyDeviceWakeCallBack @ 0x140033440 (OSNotifyDeviceWakeCallBack.c)
 *     WPP_RECORDER_SF_LLLqss @ 0x140033C34 (WPP_RECORDER_SF_LLLqss.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall ACPIWakeDisableAsync(__int64 a1, _QWORD **a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  _QWORD *v8; // rax
  int v9; // ebp
  const char *v10; // rsi
  const char *v11; // r9
  const char *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  int v15; // eax
  __int64 *v16; // r12
  _QWORD *v17; // rax
  _QWORD *v18; // r14
  __int64 v19; // r15
  _QWORD *v20; // rax
  __int64 v21; // r13
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  bool v25; // zf
  int v26; // ecx
  unsigned int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // edi
  const char *v30; // rax
  __int64 v32; // rcx
  const char *v33; // rax
  const char *v34; // rcx
  KIRQL NewIrql; // [rsp+60h] [rbp-D8h]
  _QWORD v36[16]; // [rsp+70h] [rbp-C8h] BYREF

  v4 = 0;
  memset(v36, 0, 0x78uLL);
  v8 = *a2;
  v9 = 0;
  while ( v8 != a2 )
  {
    v8 = (_QWORD *)*v8;
    ++v9;
  }
  v10 = byte_1400753E8;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v11 = byte_1400753E8;
  v12 = byte_1400753E8;
  v13 = 0LL;
  if ( a1 )
  {
    v14 = *(_QWORD *)(a1 + 8);
    v13 = a1;
    if ( (v14 & 0x200000000000LL) != 0 )
    {
      v11 = *(const char **)(a1 + 608);
      if ( (v14 & 0x400000000000LL) != 0 )
        v12 = *(const char **)(a1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LLLqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v12, v13, (_DWORD)v11);
  v15 = *(_DWORD *)(a1 + 552) - v9;
  *(_DWORD *)(a1 + 552) = v15;
  v16 = *(__int64 **)(a1 + 456);
  if ( v16 )
  {
    if ( v15 )
    {
      if ( _bittest64((const signed __int64 *)(a1 + 8), 0x3Bu) )
      {
        LOBYTE(v12) = 1;
        ACPIWakeEnableDisablePciDevice(a1, v12, v13, v11);
      }
    }
    else
    {
      v17 = ExAllocateFromNPagedLookasideList(&XswContextLookAsideList);
      v18 = v17;
      if ( v17 )
      {
        *((_BYTE *)v17 + 24) = 0;
        v19 = a1 + 560;
        v17[5] = a4;
        v17[4] = OSNotifyDeviceWakeCallBack;
        v17[2] = a1;
        *((_DWORD *)v17 + 7) = v9;
        v20 = *(_QWORD **)(a1 + 568);
        v21 = *(_QWORD *)(a1 + 560);
        if ( *v20 != a1 + 560 )
          __fastfail(3u);
        *v18 = v19;
        v18[1] = v20;
        *v20 = v18;
        *(_QWORD *)(a1 + 568) = v18;
        KeReleaseSpinLock(&AcpiPowerLock, NewIrql);
        v24 = *(_QWORD *)(a1 + 8);
        if ( v21 == v19 )
        {
          if ( (v24 & 0x800000000000000LL) != 0 )
            ACPIWakeEnableDisablePciDevice(a1, 0LL, v22, v23);
          v25 = (*(_DWORD *)(a1 + 600) & 0x40) == 0;
          v36[2] = 0LL;
          WORD1(v36[0]) = 1;
          if ( v25 )
          {
            v26 = 1;
          }
          else
          {
            v26 = 3;
            WORD1(v36[5]) = 1;
            v36[7] = 0LL;
            WORD1(v36[10]) = 1;
            v36[12] = 0LL;
          }
          v27 = AMLIAsyncEvalObject(v16, 0LL, v26, (__int64)v36, ACPIWakeEnableDisableAsyncCallBack, (__int64)v18);
          v28 = *(_QWORD *)(a1 + 8);
          v29 = v27;
          v30 = byte_1400753E8;
          if ( (v28 & 0x200000000000LL) != 0 )
          {
            v10 = *(const char **)(a1 + 608);
            if ( (v28 & 0x400000000000LL) != 0 )
              v30 = *(const char **)(a1 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              0x11u,
              0xCu,
              (__int64)&WPP_1095886ccac338778821f66e45f1cb69_Traceguids,
              v29,
              a1,
              v10,
              v30);
          if ( v29 != 259 )
            ACPIWakeEnableDisableAsyncCallBack(v16, v29, 0LL, v18);
        }
        else
        {
          v34 = byte_1400753E8;
          if ( (v24 & 0x200000000000LL) != 0 )
          {
            v10 = *(const char **)(a1 + 608);
            if ( (v24 & 0x400000000000LL) != 0 )
              v34 = *(const char **)(a1 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              0x11u,
              0xDu,
              (__int64)&WPP_1095886ccac338778821f66e45f1cb69_Traceguids,
              3,
              a1,
              v10,
              v34);
        }
        return 259LL;
      }
      v4 = -1073741670;
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, NewIrql);
  v32 = *(_QWORD *)(a1 + 8);
  v33 = byte_1400753E8;
  if ( (v32 & 0x200000000000LL) != 0 )
  {
    v10 = *(const char **)(a1 + 608);
    if ( (v32 & 0x400000000000LL) != 0 )
      v33 = *(const char **)(a1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0xEu,
      (__int64)&WPP_1095886ccac338778821f66e45f1cb69_Traceguids,
      v4,
      a1,
      v10,
      v33);
  OSNotifyDeviceWakeCallBack(v16, v4, 0LL, a4);
  return 259LL;
}
