/*
 * XREFs of ?CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z @ 0x14000F944
 * Callers:
 *     ?StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140007868 (-StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005F60 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z @ 0x14000601C (-GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x140007494 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B328 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     memmove @ 0x14001C740 (memmove.c)
 */

__int64 __fastcall CSidebandDevice::CreateKsPin(
        CSidebandDevice *this,
        unsigned int a2,
        union KSDATAFORMAT *Src,
        struct _KSPIN **a4)
{
  struct $58C2C1BF6568EE28BD9B872E6BA03976 *v5; // rsi
  union KSDATAFORMAT *v6; // r12
  unsigned int v7; // r13d
  char v9; // di
  __int64 v10; // rdx
  int FilterInstance; // ebx
  int v12; // r8d
  PDEVICE_OBJECT v13; // rcx
  __int64 Pool2; // rax
  int v15; // edx
  int v16; // r8d
  struct _KSPIN *ObjectFromFileObject; // rax
  int v18; // edx
  int v19; // r8d
  __int64 v20; // rdx
  void *ConnectionHandle; // [rsp+58h] [rbp-9h] BYREF
  PVOID Object; // [rsp+60h] [rbp-1h] BYREF
  HANDLE FilterHandle; // [rsp+68h] [rbp+7h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v25; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v26; // [rsp+88h] [rbp+27h]
  unsigned int v27; // [rsp+E0h] [rbp+7Fh] BYREF

  v27 = -1;
  v5 = 0LL;
  ConnectionHandle = 0LL;
  v6 = Src;
  v25 = 0LL;
  v7 = a2;
  FilterHandle = 0LL;
  v9 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (LOBYTE(Src) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(Src) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)Src )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, a2, (_DWORD)Src, WPP_GLOBAL_Control->DeviceExtension);
  *a4 = 0LL;
  FilterInstance = CSidebandDevice::GetFilterInstance(this, &FilterHandle);
  if ( FilterInstance >= 0 )
  {
    FilterInstance = CSidebandDevice::GetPinFromEpIndex(this, v7, &v27, &v25);
    if ( FilterInstance >= 0 )
    {
      Pool2 = ExAllocatePool2(64LL, v6->FormatSize + 72LL, 929200197LL);
      v5 = (struct $58C2C1BF6568EE28BD9B872E6BA03976 *)Pool2;
      if ( Pool2 )
      {
        v26 = 0LL;
        *(_QWORD *)(Pool2 + 56) = 0LL;
        *(GUID *)Pool2 = GUID_1a8766a0_62ce_11cf_a5d6_28db04c10000;
        *(_DWORD *)(Pool2 + 64) = 0x40000000;
        *(_QWORD *)(Pool2 + 16) = v26;
        *(GUID *)(Pool2 + 24) = GUID_4747b320_62ce_11cf_a5d6_28db04c10000;
        *(_DWORD *)(Pool2 + 68) = 1;
        v26 = 0LL;
        *(_QWORD *)(Pool2 + 40) = 0LL;
        *(_DWORD *)(Pool2 + 48) = v27;
        memmove((void *)(Pool2 + 72), v6, v6->FormatSize);
        FilterInstance = KsCreatePin(FilterHandle, v5, 0xC0000000, &ConnectionHandle);
        if ( FilterInstance >= 0 )
        {
          Object = 0LL;
          FilterInstance = ObReferenceObjectByHandle(
                             ConnectionHandle,
                             0x1F01FFu,
                             (POBJECT_TYPE)IoFileObjectType,
                             0,
                             &Object,
                             0LL);
          if ( FilterInstance >= 0 )
          {
            ZwClose(ConnectionHandle);
            ObjectFromFileObject = (struct _KSPIN *)KsGetObjectFromFileObject((PFILE_OBJECT)Object);
            *a4 = ObjectFromFileObject;
            if ( ObjectFromFileObject )
            {
              KsAddItemToObjectBag(ObjectFromFileObject->Bag, v5, ExFreePool);
              v20 = (__int64)*a4;
              *(_BYTE *)(*(_QWORD *)(v20 + 16) + 47LL) = 1;
              v10 = *(_QWORD *)(v20 + 16);
              *(_QWORD *)(v10 + 48) = Object;
            }
            else
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
                || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
              {
                LOBYTE(v18) = 0;
              }
              if ( (_BYTE)v18 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v19) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v18,
                  v19,
                  WPP_GLOBAL_Control->DeviceExtension);
              }
              ObfDereferenceObject(Object);
              FilterInstance = -1073741275;
            }
          }
          else
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
              || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
            {
              LOBYTE(v15) = 0;
            }
            if ( (_BYTE)v15 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v16) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_d(
                WPP_GLOBAL_Control->AttachedDevice,
                v15,
                v16,
                WPP_GLOBAL_Control->DeviceExtension);
            }
            ZwClose(ConnectionHandle);
          }
        }
        else
        {
          v13 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v10) = 0;
          }
          LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            goto LABEL_19;
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v10) = 0;
        }
        if ( (_BYTE)v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v10, v12, WPP_GLOBAL_Control->DeviceExtension);
        }
        FilterInstance = -1073741664;
      }
    }
    else
    {
      v13 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v10) = 0;
      }
      LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        goto LABEL_19;
    }
  }
  else
  {
    v13 = WPP_GLOBAL_Control;
    LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
LABEL_19:
      WPP_RECORDER_AND_TRACE_SF_d(v13->AttachedDevice, v10, v12, v13->DeviceExtension);
  }
  if ( FilterHandle )
    ZwClose(FilterHandle);
  if ( FilterInstance < 0 && v5 )
    ExFreePool(v5);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v10) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v9 = 0;
  if ( (_BYTE)v10 || v9 )
  {
    LOBYTE(v12) = v9;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v10, v12, WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)FilterInstance;
}
