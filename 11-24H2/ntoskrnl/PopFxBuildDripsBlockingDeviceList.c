/*
 * XREFs of PopFxBuildDripsBlockingDeviceList @ 0x14048AB44
 * Callers:
 *     PopDripsWatchdogCallbackHandler @ 0x14075EAE0 (PopDripsWatchdogCallbackHandler.c)
 *     PopDripsWatchdogTakeAction @ 0x140765E80 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PopFxReferenceDevice @ 0x1403AA248 (PopFxReferenceDevice.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PopFxIsDripsBlockingDevice @ 0x14048AFB8 (PopFxIsDripsBlockingDevice.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14074BEEC (PopFxDestroyDripsBlockingDeviceList.c)
 *     RtlPrefixUnicodeString @ 0x1408726F0 (RtlPrefixUnicodeString.c)
 *     IoGetDevicePropertyData @ 0x1409C0320 (IoGetDevicePropertyData.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140A9D5CC (IoLockUnlockPnpDeviceTree.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopFxBuildDripsBlockingDeviceList(__int64 a1, __int64 **a2)
{
  __int64 v2; // r12
  NTSTATUS DevicePropertyData; // edi
  struct _KTHREAD *CurrentThread; // rax
  char *v6; // rax
  signed __int8 v7; // cf
  char *v8; // rsi
  char *v9; // rax
  char *v10; // rsi
  ULONG_PTR *i; // rsi
  __int64 *v12; // r14
  __int64 *j; // r13
  __int64 *v14; // r14
  __int64 *v15; // rax
  unsigned int v16; // esi
  __int64 *v17; // rbx
  __int64 *v18; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  volatile signed __int32 *v22; // rcx
  unsigned int v23; // ebx
  volatile signed __int32 *v24; // rdx
  __int64 v25; // rax
  volatile signed __int32 *v26; // rax
  __int64 ***v27; // rax
  __int64 v28; // rax
  __int64 *k; // rax
  const GUID *v30; // r9
  int Data; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v32; // [rsp+44h] [rbp-BCh] BYREF
  ULONG v33; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v34; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG Type; // [rsp+50h] [rbp-B0h] BYREF
  ULONG RequiredSize; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v37; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v38; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v39; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING String1; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v41; // [rsp+78h] [rbp-88h] BYREF
  __int64 v42; // [rsp+88h] [rbp-78h] BYREF
  __int64 v43; // [rsp+90h] [rbp-70h] BYREF
  __int64 Pool2; // [rsp+98h] [rbp-68h]
  __int128 v45; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v47; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h]
  unsigned int *v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E8h] [rbp-18h]
  __int64 *v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+100h] [rbp+0h] BYREF
  unsigned int *v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h]
  unsigned int *v56; // [rsp+130h] [rbp+30h]
  __int64 v57; // [rsp+138h] [rbp+38h]
  __int64 *v58; // [rsp+140h] [rbp+40h]
  __int64 v59; // [rsp+148h] [rbp+48h]
  __int64 v60; // [rsp+150h] [rbp+50h] BYREF
  wchar_t v61; // [rsp+158h] [rbp+58h]
  __int64 v62; // [rsp+160h] [rbp+60h] BYREF
  wchar_t v63; // [rsp+168h] [rbp+68h]

  v61 = aPci[4];
  v33 = 0;
  v41.Buffer = (wchar_t *)&v60;
  v2 = a1;
  LOBYTE(a1) = 1;
  v45 = 0LL;
  v63 = aUsb_0[4];
  v60 = *(_QWORD *)L"PCI\\";
  DevicePropertyData = 0;
  String1.Buffer = (wchar_t *)&v62;
  v32 = 0;
  Type = 0;
  *(_QWORD *)&v41.Length = 655368LL;
  v62 = *(_QWORD *)L"USB\\";
  *(_QWORD *)&String1.Length = 655368LL;
  IoLockUnlockPnpDeviceTree(a1);
  RequiredSize = 0;
  Data = -1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (char *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxBlockingDeviceListLock, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&PopFxBlockingDeviceListLock, v6, (__int64)&PopFxBlockingDeviceListLock);
  if ( v8 )
    v8[10] = 1;
  v9 = (char *)KeAbPreAcquire((__int64)&PopFxDeviceListLock, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxDeviceListLock, 0LL);
  v10 = v9;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&PopFxDeviceListLock, v9, (__int64)&PopFxDeviceListLock);
  if ( v10 )
    v10[10] = 1;
  a2[1] = (__int64 *)a2;
  *a2 = (__int64 *)a2;
  for ( i = (ULONG_PTR *)PopFxDeviceList; i != &PopFxDeviceList; i = (ULONG_PTR *)*i )
  {
    v12 = (__int64 *)(i + 114);
    if ( i[6] && (unsigned __int8)PopFxIsDripsBlockingDevice(i, v2, i + 116) )
    {
      PopFxReferenceDevice((ULONG_PTR)i, 3);
      v27 = (__int64 ***)a2[1];
      if ( *v27 != a2 )
        __fastfail(3u);
      *v12 = (__int64)a2;
      i[115] = (ULONG_PTR)v27;
      *v27 = (__int64 **)v12;
      a2[1] = v12;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  for ( j = *a2; j != (__int64 *)a2; j = (__int64 *)*j )
  {
    v14 = (__int64 *)*(j - 108);
    DevicePropertyData = IoGetDevicePropertyData(
                           (PDEVICE_OBJECT)v14[4],
                           &DEVPKEY_PciDevice_DeviceType,
                           0,
                           0,
                           4u,
                           &Data,
                           &RequiredSize,
                           &Type);
    if ( DevicePropertyData >= 0 && Data == 8 )
      goto LABEL_23;
    DevicePropertyData = IoGetDevicePropertyData(
                           (PDEVICE_OBJECT)v14[4],
                           &DEVPKEY_Device_ClassGuid,
                           0,
                           0,
                           0x10u,
                           &v45,
                           &v33,
                           &v32);
    if ( DevicePropertyData < 0 || v32 != 13 || v33 != 16 )
      goto LABEL_20;
    v28 = *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 - v45;
    if ( *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 == (_QWORD)v45 )
      v28 = *(_QWORD *)GUID_DEVICE_CLASS_USB_CONTROLLER.Data4 - *((_QWORD *)&v45 + 1);
    if ( !v28 )
    {
LABEL_23:
      v15 = (__int64 *)v14[1];
      v16 = 0;
      v17 = v14;
      while ( v15 )
      {
        v17 = v15;
        v15 = (__int64 *)v15[1];
      }
      while ( v17 != v14 )
      {
        if ( *((_DWORD *)v17 + 39) == 1 )
        {
          _InterlockedAnd((volatile signed __int32 *)v17 + 74, 0xFFFFFFDF);
          if ( RtlPrefixUnicodeString(&String1, (PCUNICODE_STRING)(v17 + 5), 0)
            || RtlPrefixUnicodeString(&v41, (PCUNICODE_STRING)(v17 + 5), 0) )
          {
            for ( k = v17; k != v14; k = (__int64 *)k[2] )
            {
              if ( *((_DWORD *)k + 39) != 1 )
                goto LABEL_30;
            }
            _InterlockedOr((volatile signed __int32 *)v17 + 74, 0x20u);
            if ( v16 + 1 < v16 )
              goto LABEL_50;
            ++v16;
            DevicePropertyData = 0;
          }
        }
LABEL_30:
        v18 = (__int64 *)*v17;
        if ( *v17 )
        {
          do
          {
            v17 = v18;
            v18 = (__int64 *)v18[1];
          }
          while ( v18 );
        }
        else
        {
          v17 = (__int64 *)v17[2];
        }
      }
      if ( !v16 )
        continue;
      v20 = 8LL * v16;
      if ( v20 > 0xFFFFFFFF )
      {
LABEL_50:
        DevicePropertyData = -1073741675;
LABEL_51:
        PopFxDestroyDripsBlockingDeviceList(a2);
        return (unsigned int)DevicePropertyData;
      }
      DevicePropertyData = 0;
      Pool2 = ExAllocatePool2(0x100uLL, (unsigned int)v20, 0x4D584650u);
      v21 = Pool2;
      if ( !Pool2 )
      {
        DevicePropertyData = -1073741670;
        goto LABEL_51;
      }
      v22 = (volatile signed __int32 *)v14[1];
      v23 = 0;
      v24 = (volatile signed __int32 *)v14;
      while ( v22 )
      {
        v24 = v22;
        v22 = (volatile signed __int32 *)*((_QWORD *)v22 + 1);
      }
      while ( v24 != (volatile signed __int32 *)v14 )
      {
        _m_prefetchw((const void *)(v24 + 74));
        if ( (_InterlockedOr(v24 + 74, 0) & 0x20) != 0 )
        {
          if ( v23 >= v16 )
          {
            if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
            {
              v48 = 4LL;
              v37 = v23 + 1;
              v38 = v16;
              v47 = &v37;
              v50 = 4LL;
              v49 = &v38;
              v42 = 0x1000000LL;
              v51 = &v42;
              v52 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140E07680,
                (unsigned __int8 *)byte_140048AD5,
                0LL,
                v30,
                5u,
                &v46);
            }
            break;
          }
          _InterlockedAnd(v24 + 74, 0xFFFFFFDF);
          v25 = v23++;
          *(_QWORD *)(v21 + 8 * v25) = v24;
        }
        v26 = *(volatile signed __int32 **)v24;
        if ( *(_QWORD *)v24 )
        {
          do
          {
            v24 = v26;
            v26 = (volatile signed __int32 *)*((_QWORD *)v26 + 1);
          }
          while ( v26 );
        }
        else
        {
          v24 = (volatile signed __int32 *)*((_QWORD *)v24 + 2);
        }
      }
      if ( v23 != v16 && (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
      {
        v39 = v23;
        v54 = &v39;
        v55 = 4LL;
        v56 = &v34;
        v34 = v16;
        v58 = &v43;
        v57 = 4LL;
        v43 = 0x1000000LL;
        v59 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07680,
          (unsigned __int8 *)&dword_140048B34,
          0LL,
          0LL,
          5u,
          &v53);
      }
      j[3] = Pool2;
      *((_DWORD *)j + 8) = v23;
    }
    else
    {
LABEL_20:
      DevicePropertyData = 0;
    }
  }
  return (unsigned int)DevicePropertyData;
}
