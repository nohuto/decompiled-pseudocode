/*
 * XREFs of ACPIInitStopDevice @ 0x1400B439C
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x14003C610 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x14003D09C (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBusIrpRemoveDevice @ 0x140050130 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x140050500 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1400609D0 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIBusIrpStopDevice @ 0x14009BC90 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x140014164 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIInternalClearFlags @ 0x14003E7CC (ACPIInternalClearFlags.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x14004541C (ACPIDeviceInternalDeviceRequest.c)
 *     IsNsobjPciBus @ 0x1400B47D0 (IsNsobjPciBus.c)
 */

__int64 __fastcall ACPIInitStopDevice(__int64 a1, char a2)
{
  char *v2; // rbx
  __int64 *v4; // rsi
  int v6; // eax
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rsi
  int v12; // ebx
  int v13; // r11d
  __int64 v14; // r8
  const char *v15; // rcx
  const char *v16; // r10
  __int64 v17; // r9
  const char *v18; // rcx
  const char *v19; // r10
  void *v20; // rcx
  void *v21; // rcx
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF
  __int64 v24; // [rsp+80h] [rbp+8h] BYREF

  v24 = 0LL;
  v2 = (char *)(a1 + 1120);
  v4 = *(__int64 **)(a1 + 760);
  if ( (*(_DWORD *)(a1 + 1120) & 0x40000LL) == 0 && !(unsigned __int8)IsNsobjPciBus(*(_QWORD *)(a1 + 760)) )
  {
    v6 = *(_DWORD *)(a1 + 384);
    if ( v6 )
    {
      if ( v6 != 4 || a2 && *v2 < 0 )
      {
        memset(&Event, 0, sizeof(Event));
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        if ( (unsigned int)ACPIDeviceInternalDeviceRequest(
                             (_QWORD *)a1,
                             4LL,
                             (void (__fastcall *)(__int64, __int64, __int64))ACPIInitPowerRequestCompletion,
                             (__int64)&Event,
                             a2 != 0 ? 8 : 0) == 259 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      }
    }
  }
  if ( _bittest64((const signed __int64 *)(a1 + 8), 0x25u) && *(_BYTE *)(a1 + 184) )
  {
    v7 = (__int64 *)(a1 + 192);
    v8 = 3LL;
    do
    {
      v9 = *v7++;
      *(_BYTE *)(v9 + 130) = 0;
      --v8;
    }
    while ( v8 );
  }
  ACPIInternalClearFlags(v2, 1LL);
  if ( v4 )
  {
    if ( (*(_DWORD *)v2 & 0x40100) == 0 )
    {
      v10 = AMLIGetNamedChild(v4, 1397310559);
      v11 = (__int64)v10;
      if ( v10 )
      {
        v12 = AMLIEvalNameSpaceObject(v10, 0LL, 0, 0LL);
        AMLIDereferenceHandleEx(v11);
        if ( v12 >= 0 )
        {
          v13 = ACPIGet(a1, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v24, 0LL);
          if ( v13 >= 0 )
          {
            if ( (v24 & 2) != 0 )
            {
              v17 = *(_QWORD *)(a1 + 8);
              v18 = byte_140075488;
              v19 = byte_140075488;
              if ( (v17 & 0x200000000000LL) != 0 )
              {
                v18 = *(const char **)(a1 + 608);
                if ( (v17 & 0x400000000000LL) != 0 )
                  v19 = *(const char **)(a1 + 616);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Lqss(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  2u,
                  1u,
                  0x1Du,
                  (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
                  v24,
                  a1,
                  v18,
                  v19);
            }
          }
          else
          {
            v14 = *(_QWORD *)(a1 + 8);
            v15 = byte_140075488;
            v16 = byte_140075488;
            if ( (v14 & 0x200000000000LL) != 0 )
            {
              v15 = *(const char **)(a1 + 608);
              if ( (v14 & 0x400000000000LL) != 0 )
                v16 = *(const char **)(a1 + 616);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Lqss(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                4u,
                1u,
                0x1Cu,
                (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
                v13,
                a1,
                v15,
                v16);
          }
        }
      }
    }
  }
  v20 = *(void **)(a1 + 672);
  if ( v20 )
  {
    ExFreePoolWithTag(v20, 0);
    *(_QWORD *)(a1 + 672) = 0LL;
  }
  v21 = *(void **)(a1 + 680);
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0);
    *(_QWORD *)(a1 + 680) = 0LL;
  }
  return 0LL;
}
