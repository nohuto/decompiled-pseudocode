/*
 * XREFs of UsbhCreatePdo @ 0x14001A420
 * Callers:
 *     UsbhPortConnect @ 0x140019BF0 (UsbhPortConnect.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDisableTimerObject @ 0x140013F2C (UsbhDisableTimerObject.c)
 *     UsbhSshPortsBusy @ 0x14001626C (UsbhSshPortsBusy.c)
 *     UsbhBuildDeviceID @ 0x14001B254 (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x14001B560 (UsbhBuildHardwareID.c)
 *     UsbhBuildCompatibleID @ 0x14001BCD8 (UsbhBuildCompatibleID.c)
 *     UsbhSetPortData @ 0x14001BE40 (UsbhSetPortData.c)
 *     UsbhIncPdoIoCount @ 0x14001BFB0 (UsbhIncPdoIoCount.c)
 *     UsbhConnectPdoToHub @ 0x14001C108 (UsbhConnectPdoToHub.c)
 *     UsbhGetLocationIdString @ 0x14001C1AC (UsbhGetLocationIdString.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x1400242E4 (Usbh_ErrorDisconnect_PdoEvent.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x14003DEE0 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x140060F40 (__security_check_cookie.c)
 *     memset @ 0x140061340 (memset.c)
 */

__int64 __fastcall UsbhCreatePdo(__int64 a1, __int64 a2)
{
  ULONG v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  _DWORD *v7; // r12
  __int64 Pool2; // rax
  void *v9; // rsi
  __int128 v10; // xmm1
  NTSTATUS appended; // ebx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  PDEVICE_OBJECT v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  char *DeviceExtension; // rbx
  struct _UNICODE_STRING v19; // xmm0
  _DWORD *v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  const WCHAR *v25; // rax
  WCHAR *v26; // rsi
  ULONG v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  _QWORD *v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  _QWORD *v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rcx
  __m128i si128; // xmm0
  int v41; // eax
  __int64 v42; // r8
  int v43; // edx
  PDEVICE_OBJECT v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned __int64 v47; // rsi
  char v48; // r13
  _DWORD *v49; // rbx
  BOOL v50; // r8d
  __int64 v51; // rdx
  __int64 v52; // rcx
  _DWORD *v53; // rax
  _DWORD *v54; // rax
  __int64 v55; // rdx
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-91h] BYREF
  int v58; // [rsp+50h] [rbp-89h] BYREF
  int v59; // [rsp+54h] [rbp-85h]
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-81h] BYREF
  struct _UNICODE_STRING String; // [rsp+68h] [rbp-71h] BYREF
  struct _UNICODE_STRING v62; // [rsp+78h] [rbp-61h] BYREF
  __int128 v63; // [rsp+88h] [rbp-51h]
  __int128 v64; // [rsp+98h] [rbp-41h]
  WCHAR SourceString[32]; // [rsp+B0h] [rbp-29h] BYREF

  DeviceObject = 0LL;
  v4 = 0;
  DestinationString = 0LL;
  v62 = 0LL;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
        *(_DWORD *)v6 = 1329877091;
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 16) = a2;
        *(_QWORD *)(v6 + 24) = 0LL;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      26,
      (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids);
  v7 = FdoExt(a1);
  while ( 1 )
  {
    v63 = *(_OWORD *)L"\\Device\\USBPDO-";
    v64 = *(_OWORD *)L"USBPDO-";
    String = 0LL;
    memset(SourceString, 0, sizeof(SourceString));
    Pool2 = ExAllocatePool2(64LL, 96LL, 1112885333LL);
    v9 = (void *)Pool2;
    if ( !Pool2 )
      break;
    v10 = v64;
    *(_OWORD *)Pool2 = v63;
    *(_OWORD *)(Pool2 + 16) = v10;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)Pool2);
    DestinationString.MaximumLength = 96;
    RtlInitUnicodeString(&String, SourceString);
    String.MaximumLength = 64;
    appended = RtlIntegerToUnicodeString(v4, 0xAu, &String);
    if ( appended >= 0 )
      appended = RtlAppendUnicodeStringToString(&DestinationString, &String);
    if ( (appended & 0xC0000000) == 0xC0000000 )
      ExFreePoolWithTag(v9, 0);
    if ( appended >= 0 )
    {
      appended = IoCreateDevice(UsbhDriverObject, 0xBF8u, &DestinationString, 0x22u, 0, 0, &DeviceObject);
      if ( appended >= 0 )
        goto LABEL_18;
      RtlFreeUnicodeString(&DestinationString);
    }
    ++v4;
    if ( appended != -1073741771 )
    {
LABEL_18:
      LODWORD(v12) = -1073741670;
      goto LABEL_20;
    }
  }
  LODWORD(v12) = -1073741670;
  appended = -1073741670;
LABEL_20:
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = 828665955;
        *(_QWORD *)(v14 + 24) = appended;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = a2;
      }
    }
  }
  if ( !DeviceObject )
    return (unsigned int)-1073741670;
  if ( appended < 0 )
    return (unsigned int)appended;
  DeviceObject->StackSize = *(_BYTE *)(*((_QWORD *)v7 + 151) + 76LL) + 1;
  DeviceObject->Flags |= 0x2000u;
  v15 = DeviceObject;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
        *(_DWORD *)v17 = 826560611;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 16) = a2;
        *(_QWORD *)(v17 + 24) = v15;
        v15 = DeviceObject;
      }
    }
  }
  DeviceExtension = (char *)v15->DeviceExtension;
  *(_DWORD *)DeviceExtension = 1329877064;
  v19 = DestinationString;
  *((_QWORD *)DeviceExtension + 145) = 0xFEFEFEFEFEFEFEFEuLL;
  *((_DWORD *)DeviceExtension + 288) = 0;
  *((struct _UNICODE_STRING *)DeviceExtension + 167) = v19;
  *((_DWORD *)DeviceExtension + 588) = -1;
  *((_DWORD *)DeviceExtension + 295) = *(_DWORD *)(*((_QWORD *)v7 + 377) + 4LL * *(unsigned __int16 *)(a2 + 4));
  *((_DWORD *)DeviceExtension + 196) = 1;
  *((_DWORD *)DeviceExtension + 596) = 1;
  *((_DWORD *)DeviceExtension + 742) = 1000;
  v20 = PdoExt((__int64)DeviceObject);
  v21 = ((unsigned __int8)v20[1] + 1) & 7;
  v20[1] = v21;
  v21 *= 32LL;
  *(_DWORD *)((char *)v20 + v21 + 16) = 7;
  *(_DWORD *)((char *)v20 + v21 + 20) = v20[281];
  *(_DWORD *)((char *)v20 + v21 + 24) = 1;
  v20[281] = 1;
  *((_QWORD *)DeviceExtension + 120) = DeviceObject;
  *((_DWORD *)DeviceExtension + 236) = 2017613128;
  *((_DWORD *)DeviceExtension + 237) = 1;
  *((_QWORD *)DeviceExtension + 119) = a1;
  *((_DWORD *)DeviceExtension + 264) = 1734964085;
  *((_DWORD *)DeviceExtension + 252) = 1734964085;
  *((_DWORD *)DeviceExtension + 248) = 1734964085;
  *((_DWORD *)DeviceExtension + 244) = 1734964085;
  *((_DWORD *)DeviceExtension + 255) = 1734964085;
  *((_DWORD *)DeviceExtension + 258) = 1734964085;
  *((_DWORD *)DeviceExtension + 261) = 1734964085;
  *((_DWORD *)DeviceExtension + 266) = 1734964085;
  *((_QWORD *)DeviceExtension + 120) = DeviceObject;
  *((_QWORD *)DeviceExtension + 317) = MEMORY[0xFFFFF78000000014];
  LOBYTE(v59) = 0;
  v58 = 0;
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2360), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2920), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 1240), NotificationEvent, 0);
  *((_QWORD *)DeviceExtension + 154) = DeviceExtension + 1224;
  *((_QWORD *)DeviceExtension + 153) = DeviceExtension + 1224;
  KeInitializeEvent((PRKEVENT)DeviceExtension + 54, NotificationEvent, 1u);
  *((_QWORD *)DeviceExtension + 160) = DeviceExtension + 1272;
  *((_QWORD *)DeviceExtension + 159) = DeviceExtension + 1272;
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2056), SynchronizationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2944), SynchronizationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2896), SynchronizationEvent, 1u);
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 351);
  KeInitializeEvent((PRKEVENT)DeviceExtension + 115, SynchronizationEvent, 0);
  v22 = DeviceExtension + 1704;
  if ( (UsbhLogMask & 0x2000) != 0 )
  {
    if ( a1 )
    {
      v23 = *(_QWORD *)(a1 + 64);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v23 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
        *(_DWORD *)v24 = 1416195689;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v24 + 16) = v22;
        *(_QWORD *)(v24 + 24) = UsbhDriverNotFoundTimer;
      }
    }
  }
  *v22 = 1332899156LL;
  *((_QWORD *)DeviceExtension + 219) = UsbhDriverNotFoundTimer;
  *((_DWORD *)DeviceExtension + 428) = 0;
  *((_DWORD *)DeviceExtension + 444) = 1145980532;
  v25 = (const WCHAR *)ExAllocatePool2(64LL, 16LL, 1112885333LL);
  v26 = (WCHAR *)v25;
  if ( !v25 )
    goto LABEL_77;
  RtlInitUnicodeString(&v62, v25);
  v27 = *(unsigned __int16 *)(a2 + 4);
  v62.MaximumLength = 16;
  LODWORD(v12) = RtlIntegerToUnicodeString(v27, 0xAu, &v62);
  if ( (v12 & 0xC0000000) == 0xC0000000 )
  {
    ExFreePoolWithTag(v26, 0);
  }
  else
  {
    *((_QWORD *)DeviceExtension + 269) = v26;
    *((_DWORD *)DeviceExtension + 537) = v62.MaximumLength;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( a1 )
      {
        v28 = *(_QWORD *)(a1 + 64);
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
          *(_DWORD *)v29 = 845443171;
          *(_QWORD *)(v29 + 8) = 0LL;
          *(_QWORD *)(v29 + 16) = a2;
          *(_QWORD *)(v29 + 24) = v26;
        }
      }
    }
    v30 = UsbhBuildDeviceID(a1, 0LL, DeviceExtension + 2080);
    LODWORD(v12) = v30;
    if ( (v30 & 0xC0000000) == 0xC0000000 )
    {
      Log(a1, 256, 1668302129, (_DWORD)DeviceObject, v30);
    }
    else
    {
      v31 = UsbhBuildHardwareID(a1, 0LL, DeviceExtension + 2096);
      LODWORD(v12) = v31;
      if ( (v31 & 0xC0000000) == 0xC0000000 )
      {
        Log(a1, 256, 1668302130, (_DWORD)DeviceObject, v31);
      }
      else
      {
        v32 = UsbhBuildCompatibleID(a1, 0LL, DeviceExtension + 2112);
        LODWORD(v12) = v32;
        if ( (v32 & 0xC0000000) == 0xC0000000 )
        {
          Log(a1, 256, 1668302131, (_DWORD)DeviceObject, v32);
        }
        else
        {
          v33 = UsbhConnectPdoToHub(DeviceObject, a1);
          LODWORD(v12) = v33;
          if ( (v33 & 0xC0000000) == 0xC0000000 )
          {
            Log(a1, 256, 1668302132, (_DWORD)DeviceObject, v33);
          }
          else
          {
            KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 152);
            KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 293);
            *((_QWORD *)DeviceExtension + 284) = DeviceExtension + 2264;
            *((_QWORD *)DeviceExtension + 283) = DeviceExtension + 2264;
            IoCsqInitialize(
              (PIO_CSQ)(DeviceExtension + 2280),
              UsbhInsertPdoWakeIrp,
              UsbhRemovePdoWakeIrp,
              UsbhPeekNextPdoWakeIrp,
              UsbhAcquirePdoWakeIrpLock,
              UsbhReleasePdoWakeIrpLock,
              UsbhCompleteCanceledPdoWakeIrp);
            KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 191);
            KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 256);
            *((_QWORD *)DeviceExtension + 182) = DeviceExtension + 1448;
            *((_QWORD *)DeviceExtension + 181) = DeviceExtension + 1448;
            IoCsqInitialize(
              (PIO_CSQ)(DeviceExtension + 1464),
              UsbhInsertPdoIdleIrp,
              UsbhRemovePdoIdleIrp,
              UsbhPeekNextPdoIdleIrp,
              UsbhAcquirePdoIdleIrpLock,
              UsbhReleasePdoIdleIrpLock,
              UsbhCompleteCanceledPdoIdleIrp);
            v34 = DeviceExtension + 1544;
            if ( (UsbhLogMask & 0x2000) != 0 )
            {
              if ( a1 )
              {
                v35 = *(_QWORD *)(a1 + 64);
                if ( v35 )
                {
                  v36 = *(_QWORD *)(v35 + 888)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
                  *(_DWORD *)v36 = 1416195689;
                  *(_QWORD *)(v36 + 8) = 0LL;
                  *(_QWORD *)(v36 + 16) = v34;
                  *(_QWORD *)(v36 + 24) = UsbhIdleIrpRetryTimer;
                }
              }
            }
            *((_QWORD *)DeviceExtension + 199) = UsbhIdleIrpRetryTimer;
            *v34 = 1332899156LL;
            *((_DWORD *)DeviceExtension + 388) = 0;
            *((_DWORD *)DeviceExtension + 404) = 1231318117;
            v37 = DeviceExtension + 1624;
            if ( (UsbhLogMask & 0x2000) != 0 )
            {
              if ( a1 )
              {
                v38 = *(_QWORD *)(a1 + 64);
                if ( v38 )
                {
                  v39 = *(_QWORD *)(v38 + 888)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
                  *(_DWORD *)v39 = 1416195689;
                  *(_QWORD *)(v39 + 8) = 0LL;
                  *(_QWORD *)(v39 + 16) = v37;
                  *(_QWORD *)(v39 + 24) = UsbhSS_WakeIrpRetryTimer;
                }
              }
            }
            *v37 = 1332899156LL;
            *((_QWORD *)DeviceExtension + 209) = UsbhSS_WakeIrpRetryTimer;
            *((_DWORD *)DeviceExtension + 408) = 0;
            *((_DWORD *)DeviceExtension + 424) = 1144018785;
            KeInitializeSemaphore((PRKSEMAPHORE)(DeviceExtension + 2568), 1, 1);
            si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
            *((__m128i *)DeviceExtension + 57) = si128;
            *(__m128i *)(DeviceExtension + 892) = si128;
            v41 = UsbhIncPdoIoCount(DeviceObject, DeviceObject, 1162637161LL, 0LL);
            v12 = v41;
            if ( (v41 & 0xC0000000) != 0xC0000000 )
            {
              *((_DWORD *)DeviceExtension + 356) |= 1u;
              *((_QWORD *)DeviceExtension + 105) = DeviceObject;
              *((_WORD *)DeviceExtension + 714) = *(_WORD *)(a2 + 4);
              *((_QWORD *)DeviceExtension + 382) = *(_QWORD *)(a2 + 2920);
              *((_DWORD *)DeviceExtension + 298) = v7[1259];
              *((_DWORD *)DeviceExtension + 282) = 1;
              *((_DWORD *)DeviceExtension + 197) = 1;
              *((_DWORD *)DeviceExtension + 198) = 1;
              *((_DWORD *)DeviceExtension + 684) = 0;
              DeviceExtension[2740] = 0;
              LOBYTE(v58) = KeAcquireSpinLockRaiseToDpc(&HubG);
              v59 = 1;
              qword_14006F5E0 = (__int64)&dword_14006F5E8;
              UsbhSetPortData(a1, DeviceObject, &v58);
              UsbhGetLocationIdString(a1, DeviceObject, v42, DeviceExtension + 2224);
              v59 = 0;
              qword_14006F5E0 = 0LL;
              KeReleaseSpinLock(&HubG, v58);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_q(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v43,
                  1,
                  27,
                  (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
                  (char)DeviceObject);
              }
              v44 = DeviceObject;
              if ( (UsbhLogMask & 0x100) != 0 )
              {
                if ( a1 )
                {
                  v45 = *(_QWORD *)(a1 + 64);
                  if ( v45 )
                  {
                    v46 = *(_QWORD *)(v45 + 888)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v45 + 880)) & *(_DWORD *)(v45 + 884));
                    *(_DWORD *)v46 = 1666139216;
                    *(_QWORD *)(v46 + 8) = 0LL;
                    *(_QWORD *)(v46 + 16) = v44;
                    *(_QWORD *)(v46 + 24) = v12;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( (v12 & 0xC0000000) == 0xC0000000 )
  {
LABEL_77:
    Log(a1, 256, 1346653985, (_DWORD)DeviceObject, (int)v12);
    Usbh_ErrorDisconnect_PdoEvent(a1, DeviceObject, a2 + 24);
  }
  else
  {
    DeviceObject->Flags &= ~0x80u;
    v47 = *(unsigned __int16 *)(a2 + 4);
    v48 = *(_WORD *)(a2 + 4);
    if ( (unsigned __int16)(v47 - 1) <= 0x7Eu )
    {
      v49 = FdoExt(a1);
      KeWaitForSingleObject(v49 + 790, Executive, 0, 0, 0LL);
      v50 = v49[830] || v49[831] || v49[832] || v49[833];
      v49[(v47 >> 5) + 830] |= 1 << (v48 & 0x1F);
      if ( (UsbhLogMask & 0x10000) != 0 )
      {
        if ( a1 )
        {
          v51 = *(_QWORD *)(a1 + 64);
          if ( v51 )
          {
            v52 = *(_QWORD *)(v51 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v51 + 880)) & *(_DWORD *)(v51 + 884));
            *(_DWORD *)v52 = 1112568659;
            *(_QWORD *)(v52 + 16) = v50;
            *(_QWORD *)(v52 + 8) = 0LL;
            *(_QWORD *)(v52 + 24) = v47;
          }
        }
      }
      if ( !v50 )
      {
        v53 = FdoExt(a1);
        UsbhSshPortsBusy(a1, (__int64)(v53 + 478), 1);
        UsbhDisableTimerObject(a1, (__int64)(v49 + 800));
      }
      KeReleaseSemaphore((PRKSEMAPHORE)(v49 + 790), 16, 1, 0);
    }
    v54 = PdoExt((__int64)DeviceObject);
    v55 = ((unsigned __int8)v54[3] + 1) & 7;
    v54[3] = v55;
    v55 *= 32LL;
    *(_DWORD *)((char *)v54 + v55 + 528) = 6;
    *(_DWORD *)((char *)v54 + v55 + 532) = v54[280];
    *(_DWORD *)((char *)v54 + v55 + 536) = 100;
    v54[280] = 100;
  }
  return (unsigned int)v12;
}
