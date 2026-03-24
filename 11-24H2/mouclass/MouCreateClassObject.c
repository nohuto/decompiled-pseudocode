/*
 * XREFs of MouCreateClassObject @ 0x1C000F950
 * Callers:
 *     MouseClassFindMorePorts @ 0x1C000E190 (MouseClassFindMorePorts.c)
 *     MouseAddDevice @ 0x1C000F790 (MouseAddDevice.c)
 *     DriverEntry @ 0x1C0011080 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002770 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x1C00047D0 (WPP_RECORDER_SF_S.c)
 *     RtlUnicodeStringPrintf @ 0x1C0005220 (RtlUnicodeStringPrintf.c)
 *     MouInitializeDataQueue @ 0x1C00055D0 (MouInitializeDataQueue.c)
 *     MouseClassLogError @ 0x1C00056A0 (MouseClassLogError.c)
 *     __security_check_cookie @ 0x1C0006AE0 (__security_check_cookie.c)
 */

__int64 __fastcall MouCreateClassObject(
        PDRIVER_OBJECT DriverObject,
        __int128 *a2,
        PDEVICE_OBJECT *a3,
        PWSTR *a4,
        char a5)
{
  __int64 DeviceExtension; // rdi
  int v7; // r15d
  unsigned int v8; // esi
  __int128 *v10; // r13
  int v11; // r14d
  unsigned __int16 v12; // ax
  NTSTATUS v13; // ebx
  const wchar_t *v14; // rdx
  int v15; // edx
  unsigned __int64 v16; // rdx
  PWSTR Buffer; // rcx
  NTSTATUS Device; // eax
  __int64 v19; // rcx
  _OWORD *v20; // rax
  __int128 v21; // xmm0
  __int64 v22; // rdx
  __int64 Pool2; // rax
  __int64 v24; // rdx
  void *v25; // rcx
  void *v26; // rcx
  ULONG DeviceCharacteristics; // [rsp+20h] [rbp-60h]
  ULONG DeviceCharacteristicsa; // [rsp+20h] [rbp-60h]
  struct _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-40h] BYREF
  PWSTR *v31; // [rsp+50h] [rbp-30h]
  PDRIVER_OBJECT DriverObjecta; // [rsp+58h] [rbp-28h]
  int v33[4]; // [rsp+60h] [rbp-20h] BYREF

  DriverObjecta = DriverObject;
  v31 = a4;
  DeviceExtension = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v7 = 0;
  UnicodeString.Buffer = 0LL;
  v8 = 0;
  v10 = a2;
  v11 = 20000;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 2LL);
  }
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  *a3 = 0LL;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    Device = IoCreateDevice(DriverObject, 0x160u, 0LL, 0xFu, 0, 0, a3);
    Buffer = UnicodeString.Buffer;
    v13 = Device;
    *v31 = 0LL;
  }
  else
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v12 = stru_1C000B370.Length + 30;
    UnicodeString.MaximumLength = stru_1C000B370.Length + 30;
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) && a5 )
    {
      v12 = stru_1C000B370.Length + 44;
      UnicodeString.MaximumLength = stru_1C000B370.Length + 44;
    }
    UnicodeString.Buffer = (PWSTR)ExAllocatePool2(256LL, v12, 1131769677LL);
    if ( !UnicodeString.Buffer )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 2LL, 2LL);
      v13 = -1073741823;
      v7 = -1073414143;
LABEL_12:
      v33[0] = UnicodeString.MaximumLength;
      v11 = 20006;
      v8 = 1;
      RtlFreeUnicodeString(&UnicodeString);
      *v31 = 0LL;
      goto LABEL_42;
    }
    do
    {
      if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) || (v14 = L"\\Device\\%wZLegacy%d", !a5) )
        v14 = L"\\Device\\%wZ%d";
      ++dword_1C000B118;
      v13 = RtlUnicodeStringPrintf(&UnicodeString, v14, &stru_1C000B370);
      if ( v13 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_S(
            WPP_GLOBAL_Control->DeviceExtension,
            2,
            2,
            70,
            DeviceCharacteristics,
            (__int64)UnicodeString.Buffer);
        v7 = -1073414131;
        goto LABEL_12;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v15) = 5;
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          2,
          71,
          DeviceCharacteristics,
          (__int64)UnicodeString.Buffer);
      }
      v13 = IoCreateDevice(DriverObjecta, 0x160u, &UnicodeString, 0xFu, 0, 0, a3);
    }
    while ( v13 == -1073741771 );
    if ( UnicodeString.MaximumLength < (unsigned __int64)UnicodeString.Length + 2 )
    {
      v13 = -1073741823;
      RtlFreeUnicodeString(&UnicodeString);
      *v31 = 0LL;
      goto LABEL_48;
    }
    v16 = (unsigned __int64)UnicodeString.Length >> 1;
    UnicodeString.Buffer[v16 + 1] = 0;
    Buffer = UnicodeString.Buffer;
    *v31 = UnicodeString.Buffer;
  }
  if ( v13 >= 0 && *a3 )
  {
    (*a3)->Flags |= 4u;
    v19 = 2LL;
    DeviceExtension = (__int64)(*a3)->DeviceExtension;
    v20 = (_OWORD *)DeviceExtension;
    do
    {
      v20 += 8;
      v21 = *v10;
      v10 += 8;
      *(v20 - 8) = v21;
      *(v20 - 7) = *(v10 - 7);
      *(v20 - 6) = *(v10 - 6);
      *(v20 - 5) = *(v10 - 5);
      *(v20 - 4) = *(v10 - 4);
      *(v20 - 3) = *(v10 - 3);
      *(v20 - 2) = *(v10 - 2);
      *(v20 - 1) = *(v10 - 1);
      --v19;
    }
    while ( v19 );
    *v20 = *v10;
    v20[1] = v10[1];
    v20[2] = v10[2];
    v20[3] = v10[3];
    v20[4] = v10[4];
    v20[5] = v10[5];
    *(_QWORD *)DeviceExtension = *a3;
    IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 32), 0x43756F4Du, 0, 0, 0x20u);
    KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 144));
    *(_QWORD *)(DeviceExtension + 160) = DeviceExtension + 152;
    *(_QWORD *)(DeviceExtension + 152) = DeviceExtension + 152;
    v22 = *(unsigned int *)(DeviceExtension + 136);
    *(_DWORD *)(DeviceExtension + 80) = 0;
    Pool2 = ExAllocatePool2(64LL, v22, 1131769677LL);
    *(_QWORD *)(DeviceExtension + 104) = Pool2;
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          2,
          2,
          73,
          DeviceCharacteristicsa,
          (__int64)UnicodeString.Buffer);
      v13 = -1073741670;
      v7 = -1073414142;
      v11 = 20020;
      RtlFreeUnicodeString(&UnicodeString);
      *v31 = 0LL;
LABEL_42:
      v25 = *a3;
      if ( !*a3 )
        v25 = DriverObjecta;
      MouseClassLogError(v25, v7, v11, v13, v8, v33, 0);
      goto LABEL_45;
    }
    MouInitializeDataQueue(DeviceExtension, v24);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, 2, 2, 72, DeviceCharacteristics, (__int64)Buffer);
    v7 = -1073414131;
    v33[0] = UnicodeString.MaximumLength;
    v11 = 20006;
    v8 = 1;
  }
  if ( !v13 )
    goto LABEL_50;
  RtlFreeUnicodeString(&UnicodeString);
  *v31 = 0LL;
  if ( v7 )
    goto LABEL_42;
LABEL_45:
  if ( DeviceExtension )
  {
    v26 = *(void **)(DeviceExtension + 104);
    if ( v26 )
    {
      ExFreePoolWithTag(v26, 0);
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
    LOBYTE(v16) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v16, 2LL);
  }
  return (unsigned int)v13;
}
