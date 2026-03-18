/*
 * XREFs of PopFxBuildDripsBlockingDeviceList @ 0x140490CC8
 * Callers:
 *     PopDripsWatchdogCallbackHandler @ 0x140752EE0 (PopDripsWatchdogCallbackHandler.c)
 *     PopDripsWatchdogTakeAction @ 0x1407564A0 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     PopFxReferenceDevice @ 0x140281350 (PopFxReferenceDevice.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     PopFxIsDripsBlockingDevice @ 0x140491140 (PopFxIsDripsBlockingDevice.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x140741AEC (PopFxDestroyDripsBlockingDeviceList.c)
 *     RtlPrefixUnicodeString @ 0x140871070 (RtlPrefixUnicodeString.c)
 *     IoGetDevicePropertyData @ 0x1409A2450 (IoGetDevicePropertyData.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140A9C8DC (IoLockUnlockPnpDeviceTree.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopFxBuildDripsBlockingDeviceList(__int64 a1, __int64 **a2)
{
  __int64 v2; // r12
  NTSTATUS DevicePropertyData; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rax
  signed __int8 v7; // cf
  __int64 *v8; // rsi
  __int64 *v9; // rax
  __int64 *v10; // rsi
  ULONG_PTR *i; // rsi
  __int64 *v12; // r14
  __int64 *j; // r13
  __int64 *v14; // r14
  __int64 *v15; // rax
  unsigned int v16; // esi
  __int64 *v17; // rbx
  __int64 *v18; // rax
  __int64 v20; // r8
  volatile signed __int32 *v21; // rcx
  unsigned int v22; // ebx
  volatile signed __int32 *v23; // rdx
  __int64 v24; // rax
  volatile signed __int32 *v25; // rax
  __int64 ***v26; // rax
  __int64 v27; // rax
  __int64 *k; // rax
  const GUID *v29; // r9
  int Data; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v31; // [rsp+44h] [rbp-BCh] BYREF
  ULONG v32; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v33; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG Type; // [rsp+50h] [rbp-B0h] BYREF
  ULONG RequiredSize; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v36; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v37; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v38; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING String1; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v40; // [rsp+78h] [rbp-88h] BYREF
  __int64 v41; // [rsp+88h] [rbp-78h] BYREF
  __int64 v42; // [rsp+90h] [rbp-70h] BYREF
  __int64 Pool2; // [rsp+98h] [rbp-68h]
  __int128 v44; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D8h] [rbp-28h]
  unsigned int *v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  __int64 *v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+100h] [rbp+0h] BYREF
  unsigned int *v53; // [rsp+120h] [rbp+20h]
  __int64 v54; // [rsp+128h] [rbp+28h]
  unsigned int *v55; // [rsp+130h] [rbp+30h]
  __int64 v56; // [rsp+138h] [rbp+38h]
  __int64 *v57; // [rsp+140h] [rbp+40h]
  __int64 v58; // [rsp+148h] [rbp+48h]
  __int64 v59; // [rsp+150h] [rbp+50h] BYREF
  wchar_t v60; // [rsp+158h] [rbp+58h]
  __int64 v61; // [rsp+160h] [rbp+60h] BYREF
  wchar_t v62; // [rsp+168h] [rbp+68h]

  v60 = aPci[4];
  v32 = 0;
  v40.Buffer = (wchar_t *)&v59;
  v2 = a1;
  LOBYTE(a1) = 1;
  v44 = 0LL;
  v62 = aUsb_0[4];
  v59 = *(_QWORD *)L"PCI\\";
  DevicePropertyData = 0;
  String1.Buffer = (wchar_t *)&v61;
  v31 = 0;
  Type = 0;
  *(_QWORD *)&v40.Length = 655368LL;
  v61 = *(_QWORD *)L"USB\\";
  *(_QWORD *)&String1.Length = 655368LL;
  IoLockUnlockPnpDeviceTree(a1);
  RequiredSize = 0;
  Data = -1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxBlockingDeviceListLock, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&PopFxBlockingDeviceListLock, v6, (__int64)&PopFxBlockingDeviceListLock);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  v9 = KeAbPreAcquire((__int64)&PopFxDeviceListLock, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxDeviceListLock, 0LL);
  v10 = v9;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&PopFxDeviceListLock, v9, (__int64)&PopFxDeviceListLock);
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
  a2[1] = (__int64 *)a2;
  *a2 = (__int64 *)a2;
  for ( i = (ULONG_PTR *)PopFxDeviceList; i != &PopFxDeviceList; i = (ULONG_PTR *)*i )
  {
    v12 = (__int64 *)(i + 114);
    if ( i[6] && (unsigned __int8)PopFxIsDripsBlockingDevice(i, v2, i + 116) )
    {
      PopFxReferenceDevice((ULONG_PTR)i, 3);
      v26 = (__int64 ***)a2[1];
      if ( *v26 != a2 )
        __fastfail(3u);
      *v12 = (__int64)a2;
      i[115] = (ULONG_PTR)v26;
      *v26 = (__int64 **)v12;
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
                           &v44,
                           &v32,
                           &v31);
    if ( DevicePropertyData < 0 || v31 != 13 || v32 != 16 )
      goto LABEL_20;
    v27 = *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 - v44;
    if ( *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 == (_QWORD)v44 )
      v27 = *(_QWORD *)GUID_DEVICE_CLASS_USB_CONTROLLER.Data4 - *((_QWORD *)&v44 + 1);
    if ( !v27 )
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
            || RtlPrefixUnicodeString(&v40, (PCUNICODE_STRING)(v17 + 5), 0) )
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
      if ( 8 * (unsigned __int64)v16 > 0xFFFFFFFF )
      {
LABEL_50:
        DevicePropertyData = -1073741675;
LABEL_51:
        PopFxDestroyDripsBlockingDeviceList(a2);
        return (unsigned int)DevicePropertyData;
      }
      DevicePropertyData = 0;
      Pool2 = ExAllocatePool2(0x100uLL);
      v20 = Pool2;
      if ( !Pool2 )
      {
        DevicePropertyData = -1073741670;
        goto LABEL_51;
      }
      v21 = (volatile signed __int32 *)v14[1];
      v22 = 0;
      v23 = (volatile signed __int32 *)v14;
      while ( v21 )
      {
        v23 = v21;
        v21 = (volatile signed __int32 *)*((_QWORD *)v21 + 1);
      }
      while ( v23 != (volatile signed __int32 *)v14 )
      {
        _m_prefetchw((const void *)(v23 + 74));
        if ( (_InterlockedOr(v23 + 74, 0) & 0x20) != 0 )
        {
          if ( v22 >= v16 )
          {
            if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
            {
              v47 = 4LL;
              v36 = v22 + 1;
              v37 = v16;
              v46 = &v36;
              v49 = 4LL;
              v48 = &v37;
              v41 = 0x1000000LL;
              v50 = &v41;
              v51 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140E07680,
                (unsigned __int8 *)&word_1400481D6,
                0LL,
                v29,
                5u,
                &v45);
            }
            break;
          }
          _InterlockedAnd(v23 + 74, 0xFFFFFFDF);
          v24 = v22++;
          *(_QWORD *)(v20 + 8 * v24) = v23;
        }
        v25 = *(volatile signed __int32 **)v23;
        if ( *(_QWORD *)v23 )
        {
          do
          {
            v23 = v25;
            v25 = (volatile signed __int32 *)*((_QWORD *)v25 + 1);
          }
          while ( v25 );
        }
        else
        {
          v23 = (volatile signed __int32 *)*((_QWORD *)v23 + 2);
        }
      }
      if ( v22 != v16 && (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
      {
        v38 = v22;
        v53 = &v38;
        v54 = 4LL;
        v55 = &v33;
        v33 = v16;
        v57 = &v42;
        v56 = 4LL;
        v42 = 0x1000000LL;
        v58 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07680,
          (unsigned __int8 *)byte_140048235,
          0LL,
          0LL,
          5u,
          &v52);
      }
      j[3] = Pool2;
      *((_DWORD *)j + 8) = v22;
    }
    else
    {
LABEL_20:
      DevicePropertyData = 0;
    }
  }
  return (unsigned int)DevicePropertyData;
}
