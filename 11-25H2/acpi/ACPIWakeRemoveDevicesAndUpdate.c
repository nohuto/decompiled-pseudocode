/*
 * XREFs of ACPIWakeRemoveDevicesAndUpdate @ 0x140019370
 * Callers:
 *     OSNotifyDeviceWake @ 0x140018190 (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1400311FC (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIWakeEmptyRequestQueue @ 0x140031854 (ACPIWakeEmptyRequestQueue.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1400318F0 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x140031A38 (OSNotifyDeviceWakeByGPEEvent.c)
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1400320E0 (ACPIDeviceIrpWaitWakeRequestPending.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x140032430 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIRootPowerCallBack @ 0x14003A030 (ACPIRootPowerCallBack.c)
 *     ACPIWakeDisconnectWakeInterrupts @ 0x14003DE58 (ACPIWakeDisconnectWakeInterrupts.c)
 *     ACPITableLoadCallBack @ 0x140051AD0 (ACPITableLoadCallBack.c)
 * Callees:
 *     ACPIGpeIndexToByteIndex @ 0x140019870 (ACPIGpeIndexToByteIndex.c)
 *     ACPIGpeIndexToGpeRegister @ 0x14001A728 (ACPIGpeIndexToGpeRegister.c)
 *     WPP_RECORDER_SF_Dqss @ 0x14002AD3C (WPP_RECORDER_SF_Dqss.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     memset @ 0x140070F40 (memset.c)
 */

void __fastcall ACPIWakeRemoveDevicesAndUpdate(__int64 a1, __int64 a2)
{
  char v4; // si
  unsigned __int16 *v5; // rcx
  unsigned int i; // r10d
  __int64 v7; // r9
  __int64 *v8; // rdi
  __int64 *v9; // rdx
  __int64 v10; // rbx
  unsigned int v11; // eax
  int v12; // ebx
  unsigned int v13; // ebp
  __int64 v14; // r14
  unsigned __int8 v15; // cl
  int (__fastcall *v16)(__int64); // rax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  void *v19; // rdx
  int (__fastcall *v20)(__int64, void *, _QWORD); // rax
  __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // rax
  __int64 **v24; // rcx
  __int64 **v25; // rax
  __int64 v26; // rax
  const char *v27; // rdx
  const char *v28; // rcx
  __int64 v29; // [rsp+38h] [rbp-50h]
  char v30; // [rsp+A0h] [rbp+18h] BYREF
  char v31; // [rsp+A8h] [rbp+20h] BYREF

  if ( *((_BYTE *)AcpiInformation + 133) )
  {
    v4 = 0;
    KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  }
  else
  {
    v4 = 1;
    KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
    v5 = (unsigned __int16 *)AcpiInformation;
    for ( i = 0; i < *((unsigned __int16 *)AcpiInformation + 51); v5 = (unsigned __int16 *)AcpiInformation )
    {
      v7 = i++;
      *((_BYTE *)GpeCurEnable + v7) &= *((_BYTE *)GpeSpecialHandler + v7) | (unsigned __int8)~(*((_BYTE *)GpeWakeEnable
                                                                                               + v7) | *((_BYTE *)GpeWakeHandler + v7));
    }
    memset(GpeWakeEnable, 0, v5[51]);
  }
  v8 = (__int64 *)AcpiPowerWaitWakeList;
  if ( (__int64 *)AcpiPowerWaitWakeList != &AcpiPowerWaitWakeList )
  {
    while ( 1 )
    {
      v9 = v8;
      v8 = (__int64 *)*v8;
      v10 = v9[5];
      if ( v10 == a1 )
      {
        _InterlockedExchange64((volatile __int64 *)(v9[25] + 104), 0LL);
        if ( !*(_BYTE *)(v9[25] + 68) )
        {
          v23 = *v9;
          if ( *(__int64 **)(*v9 + 8) != v9
            || (v24 = (__int64 **)v9[1], *v24 != v9)
            || (*v24 = (__int64 *)v23, *(_QWORD *)(v23 + 8) = v24, v25 = *(__int64 ***)(a2 + 8), *v25 != (__int64 *)a2) )
          {
            __fastfail(3u);
          }
          *v9 = a2;
          v9[1] = (__int64)v25;
          *v25 = v9;
          *(_QWORD *)(a2 + 8) = v9;
          *((_DWORD *)v9 + 14) &= ~0x40u;
          *((_DWORD *)v9 + 27) |= 2u;
        }
        goto LABEL_19;
      }
      if ( v4 && (*(_QWORD *)(v10 + 1120) & 0x500000000LL) == 0 && *((_DWORD *)v9 + 26) >= AcpiMostRecentSleepState )
      {
        if ( *(_BYTE *)((unsigned int)ACPIGpeIndexToByteIndex(*(unsigned int *)(v10 + 504)) + GpeMap) )
        {
          v26 = *(_QWORD *)(v10 + 8);
          v27 = byte_140075488;
          v28 = byte_140075488;
          if ( (v26 & 0x200000000000LL) != 0 )
          {
            v27 = *(const char **)(v10 + 608);
            if ( (v26 & 0x400000000000LL) != 0 )
              v28 = *(const char **)(v10 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v29 = (__int64)v27;
            LOBYTE(v27) = 4;
            WPP_RECORDER_SF_Dqss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v27,
              17,
              24,
              (__int64)&WPP_1095886ccac338778821f66e45f1cb69_Traceguids,
              *(_DWORD *)(v10 + 504),
              v10,
              v29,
              (__int64)v28);
          }
          goto LABEL_19;
        }
        v11 = ACPIGpeIndexToGpeRegister(*(unsigned int *)(v10 + 504));
        v12 = 1 << (*(_BYTE *)(v10 + 504) & 7);
        v13 = v11;
        v14 = v11;
        v15 = *((_BYTE *)GpeWakeEnable + v11);
        if ( (v15 & (unsigned __int8)v12) == 0 )
          break;
      }
LABEL_19:
      if ( v8 == &AcpiPowerWaitWakeList )
        goto LABEL_20;
    }
    v30 = v12;
    *((_BYTE *)GpeWakeEnable + v11) = v12 | v15;
    v16 = *(int (__fastcall **)(__int64))(PmHalDispatchTable + 120);
    if ( v13 >= *((unsigned __int16 *)AcpiInformation + 43) )
    {
      if ( v16(7LL) < 0 )
      {
LABEL_16:
        if ( ((unsigned __int8)v12 & *((_BYTE *)GpeEnable + v14)) != 0 )
        {
          if ( ((unsigned __int8)v12 & *((_BYTE *)GpeSpecialHandler + v14)) == 0 )
            *((_BYTE *)GpeWakeHandler + v14) |= v12;
        }
        else if ( ((unsigned __int8)v12 & *((_BYTE *)GpeCurEnable + v14)) == 0 )
        {
          *((_BYTE *)GpeIsLevel + v14) |= v12;
          *((_BYTE *)GpeCurEnable + v14) |= v12;
        }
        goto LABEL_19;
      }
      v13 -= *((unsigned __int16 *)AcpiInformation + 43);
      v17 = 7LL;
    }
    else
    {
      if ( v16(6LL) < 0 )
        goto LABEL_16;
      v17 = 6LL;
    }
    (*(void (__fastcall **)(__int64, _QWORD, char *, __int64, _QWORD))(PmHalDispatchTable + 136))(
      v17,
      v13,
      &v30,
      1LL,
      0LL);
    goto LABEL_16;
  }
LABEL_20:
  if ( v4 )
  {
    v18 = 0;
    if ( *((_WORD *)AcpiInformation + 51) )
    {
      while ( 1 )
      {
        v19 = GpeCurEnable;
        if ( AcpiPowerLeavingS0 )
          *((_BYTE *)GpeCurEnable + v18) &= ~*((_BYTE *)GpeWakeEnable + v18);
        else
          *((_BYTE *)GpeCurEnable + v18) |= *((_BYTE *)GpeWakeEnable + v18) & (unsigned __int8)~*((_BYTE *)GpePending
                                                                                                + v18);
        v31 = *((_BYTE *)GpeCurEnable + v18);
        v20 = *(int (__fastcall **)(__int64, void *, _QWORD))(PmHalDispatchTable + 120);
        if ( v18 >= *((unsigned __int16 *)AcpiInformation + 43) )
          break;
        if ( v20(6LL, v19, v18) >= 0 )
        {
          v21 = 6LL;
          v22 = *((unsigned __int16 *)AcpiInformation + 43);
LABEL_27:
          (*(void (__fastcall **)(__int64, _QWORD, char *, __int64, _QWORD))(PmHalDispatchTable + 136))(
            v21,
            v18 + v22,
            &v31,
            1LL,
            0LL);
        }
LABEL_28:
        if ( ++v18 >= *((unsigned __int16 *)AcpiInformation + 51) )
          goto LABEL_29;
      }
      if ( v20(7LL, v19, v18) < 0 )
        goto LABEL_28;
      v21 = 7LL;
      v22 = *((unsigned __int16 *)AcpiInformation + 49) - *((unsigned __int16 *)AcpiInformation + 43);
      goto LABEL_27;
    }
  }
LABEL_29:
  KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
}
