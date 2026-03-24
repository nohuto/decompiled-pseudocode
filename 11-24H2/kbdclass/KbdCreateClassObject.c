/*
 * XREFs of KbdCreateClassObject @ 0x1C000FD50
 * Callers:
 *     KeyboardClassFindMorePorts @ 0x1C000E010 (KeyboardClassFindMorePorts.c)
 *     KeyboardAddDevice @ 0x1C000FAE0 (KeyboardAddDevice.c)
 *     DriverEntry @ 0x1C0011080 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C00054C0 (WPP_RECORDER_SF_S.c)
 *     KbdInitializeDataQueue @ 0x1C0005600 (KbdInitializeDataQueue.c)
 *     RtlUnicodeStringPrintf @ 0x1C0005710 (RtlUnicodeStringPrintf.c)
 *     KeyboardClassLogError @ 0x1C0005970 (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C00061D8 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0007290 (__security_check_cookie.c)
 */

__int64 __fastcall KbdCreateClassObject(
        PDRIVER_OBJECT DriverObject,
        __int128 *a2,
        PDEVICE_OBJECT *a3,
        __int64 *a4,
        char a5)
{
  __int64 DeviceExtension; // rbx
  int v7; // r15d
  unsigned int v8; // r12d
  __int128 *v10; // r13
  int v11; // r14d
  unsigned __int16 v12; // ax
  __int64 v13; // rdx
  NTSTATUS v14; // edi
  const wchar_t *v15; // rdx
  int v16; // edx
  int v17; // r8d
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  PWSTR Buffer; // rcx
  NTSTATUS Device; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int64 v25; // rdx
  __int64 Pool2; // rax
  __int64 v27; // rdx
  int v28; // r8d
  void *v29; // rcx
  void *v30; // rcx
  ULONG DeviceCharacteristics; // [rsp+20h] [rbp-60h]
  ULONG DeviceCharacteristicsa; // [rsp+20h] [rbp-60h]
  struct _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v35; // [rsp+50h] [rbp-30h]
  PDRIVER_OBJECT DriverObjecta; // [rsp+58h] [rbp-28h]
  _DWORD v37[4]; // [rsp+60h] [rbp-20h] BYREF

  DriverObjecta = DriverObject;
  v35 = a4;
  DeviceExtension = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v7 = 0;
  UnicodeString.Buffer = 0LL;
  v8 = 0;
  v10 = a2;
  v11 = 10000;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 1LL);
  }
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  *a3 = 0LL;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    Device = IoCreateDevice(DriverObject, 0x180u, 0LL, 0xBu, 0, 0, a3);
    Buffer = UnicodeString.Buffer;
    v18 = 0LL;
    v14 = Device;
    *v35 = 0LL;
  }
  else
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v12 = DestinationString.Length + 30;
    UnicodeString.MaximumLength = DestinationString.Length + 30;
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) && a5 )
    {
      v12 = DestinationString.Length + 44;
      UnicodeString.MaximumLength = DestinationString.Length + 44;
    }
    UnicodeString.Buffer = (PWSTR)ExAllocatePool2(256LL, v12, 1130652235LL);
    if ( !UnicodeString.Buffer )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v13, 1LL);
      }
      v14 = -1073741823;
      v7 = -1073414143;
LABEL_12:
      v37[0] = UnicodeString.MaximumLength;
      v11 = 10006;
      v8 = 1;
      RtlFreeUnicodeString(&UnicodeString);
      *v35 = 0LL;
      goto LABEL_42;
    }
    do
    {
      if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) || (v15 = L"\\Device\\%wZLegacy%d", !a5) )
        v15 = L"\\Device\\%wZ%d";
      ++dword_1C000B11C;
      v14 = RtlUnicodeStringPrintf(&UnicodeString, v15, &DestinationString);
      if ( v14 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_S(
            WPP_GLOBAL_Control->DeviceExtension,
            v16,
            v17,
            74,
            DeviceCharacteristics,
            (__int64)UnicodeString.Buffer);
        }
        v7 = -1073414131;
        goto LABEL_12;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v16) = 5;
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          v16,
          v17,
          75,
          DeviceCharacteristics,
          (__int64)UnicodeString.Buffer);
      }
      v14 = IoCreateDevice(DriverObjecta, 0x180u, &UnicodeString, 0xBu, 0, 0, a3);
    }
    while ( v14 == -1073741771 );
    if ( UnicodeString.MaximumLength < (unsigned __int64)UnicodeString.Length + 2 )
    {
      v14 = -1073741823;
      RtlFreeUnicodeString(&UnicodeString);
      *v35 = 0LL;
      goto LABEL_48;
    }
    v19 = (unsigned __int64)UnicodeString.Length >> 1;
    v18 = 0LL;
    UnicodeString.Buffer[v19 + 1] = 0;
    Buffer = UnicodeString.Buffer;
    *v35 = (__int64)UnicodeString.Buffer;
  }
  if ( v14 >= 0 && *a3 )
  {
    (*a3)->Flags |= 4u;
    v22 = 3LL;
    DeviceExtension = (__int64)(*a3)->DeviceExtension;
    v23 = DeviceExtension;
    do
    {
      v23 += 128LL;
      v24 = *v10;
      v10 += 8;
      *(_OWORD *)(v23 - 128) = v24;
      *(_OWORD *)(v23 - 112) = *(v10 - 7);
      *(_OWORD *)(v23 - 96) = *(v10 - 6);
      *(_OWORD *)(v23 - 80) = *(v10 - 5);
      *(_OWORD *)(v23 - 64) = *(v10 - 4);
      *(_OWORD *)(v23 - 48) = *(v10 - 3);
      *(_OWORD *)(v23 - 32) = *(v10 - 2);
      *(_OWORD *)(v23 - 16) = *(v10 - 1);
      --v22;
    }
    while ( v22 );
    *(_QWORD *)DeviceExtension = *a3;
    IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 32), 0x4364624Bu, 0, 0, 0x20u);
    KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 160));
    *(_QWORD *)(DeviceExtension + 176) = DeviceExtension + 168;
    *(_QWORD *)(DeviceExtension + 168) = DeviceExtension + 168;
    v25 = *(unsigned int *)(DeviceExtension + 140);
    *(_DWORD *)(DeviceExtension + 80) = 0;
    Pool2 = ExAllocatePool2(64LL, v25, 1130652235LL);
    *(_QWORD *)(DeviceExtension + 104) = Pool2;
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = 2;
        WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v27, v28, 77, DeviceCharacteristicsa, *v35);
      }
      v14 = -1073741670;
      v7 = -1073414142;
      v11 = 10020;
      RtlFreeUnicodeString(&UnicodeString);
      *v35 = 0LL;
LABEL_42:
      v29 = *a3;
      if ( !*a3 )
        v29 = DriverObjecta;
      KeyboardClassLogError(v29, v7, v11, v14, v8, v37, 0);
      goto LABEL_45;
    }
    KbdInitializeDataQueue(DeviceExtension, v27);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v18, v19, 76, DeviceCharacteristics, (__int64)Buffer);
    }
    v7 = -1073414131;
    v37[0] = UnicodeString.MaximumLength;
    v11 = 10006;
    v8 = 1;
  }
  if ( !v14 )
    goto LABEL_50;
  RtlFreeUnicodeString(&UnicodeString);
  *v35 = 0LL;
  if ( v7 )
    goto LABEL_42;
LABEL_45:
  if ( DeviceExtension )
  {
    v30 = *(void **)(DeviceExtension + 104);
    if ( v30 )
    {
      ExFreePoolWithTag(v30, 0);
      *(_QWORD *)(DeviceExtension + 104) = 0LL;
    }
  }
LABEL_48:
  if ( *a3 )
  {
    IoDeleteDevice(*a3);
    *a3 = 0LL;
  }
LABEL_50:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v18) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v18, 1LL);
  }
  return (unsigned int)v14;
}
