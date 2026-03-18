/*
 * XREFs of IoCreateDeviceSecure @ 0x1409A1B40
 * Callers:
 *     <none>
 * Callees:
 *     IoDeleteDevice @ 0x1403F1B00 (IoDeleteDevice.c)
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x1404747D0 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ObSetSecurityObjectByPointer @ 0x1408587B0 (ObSetSecurityObjectByPointer.c)
 *     IopUpdateSecureDeviceClassState @ 0x1409A1648 (IopUpdateSecureDeviceClassState.c)
 *     IopGetSecurityDescriptorInformation @ 0x1409A1904 (IopGetSecurityDescriptorInformation.c)
 *     IopCreateSecureDeviceClassSettings @ 0x1409A1A38 (IopCreateSecureDeviceClassSettings.c)
 *     IoCreateDevice @ 0x1409A3530 (IoCreateDevice.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoCreateDeviceSecure(
        struct _DRIVER_OBJECT *a1,
        ULONG a2,
        UNICODE_STRING *a3,
        ULONG a4,
        ULONG a5,
        BOOLEAN a6,
        const void **a7,
        __int64 a8,
        PDEVICE_OBJECT DeviceObject)
{
  PDEVICE_OBJECT v9; // r13
  struct _DEVICE_OBJECT *v10; // rdi
  _WORD *v11; // r14
  char v12; // si
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  int SecureDeviceClassSettings; // ebx
  __int64 v16; // rax
  ULONG v17; // r9d
  ULONG DeviceCharacteristics; // edx
  NTSTATUS v20; // eax
  _WORD *Pool2; // rax
  BOOLEAN v23[4]; // [rsp+40h] [rbp-40h] BYREF
  ULONG v24; // [rsp+44h] [rbp-3Ch] BYREF
  __int64 v25; // [rsp+48h] [rbp-38h] BYREF
  ULONG DeviceType[4]; // [rsp+50h] [rbp-30h] BYREF
  ULONG v27[2]; // [rsp+60h] [rbp-20h]
  _QWORD v28[3]; // [rsp+68h] [rbp-18h] BYREF

  v9 = DeviceObject;
  v23[0] = 0;
  v25 = 0LL;
  *(_QWORD *)&DeviceObject->Type = 0LL;
  v10 = 0LL;
  v24 = 0;
  v11 = 0LL;
  DeviceObject = 0LL;
  *(_QWORD *)v27 = 0LL;
  *(_OWORD *)DeviceType = 0LL;
  if ( !a3 && (a5 & 0x80u) == 0 )
  {
    SecureDeviceClassSettings = -1073741811;
LABEL_23:
    v12 = DeviceType[0];
    goto LABEL_15;
  }
  if ( a8 )
  {
    SecureDeviceClassSettings = IopCreateSecureDeviceClassSettings(a8, (__int64)a1, DeviceType);
    if ( SecureDeviceClassSettings < 0 )
      goto LABEL_23;
  }
  v12 = DeviceType[0];
  if ( (DeviceType[0] & 2) != 0 )
    goto LABEL_8;
  v13 = *(unsigned __int16 *)a7;
  if ( *((unsigned __int16 *)a7 + 1) != v13 + 2 || (v14 = (__int64)a7[1], *(_WORD *)(v14 + 2 * (v13 >> 1))) )
  {
    Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
    v11 = Pool2;
    if ( !Pool2 )
    {
      SecureDeviceClassSettings = -1073741670;
      goto LABEL_15;
    }
    memmove(Pool2, a7[1], *(unsigned __int16 *)a7);
    v11[(unsigned __int64)*(unsigned __int16 *)a7 >> 1] = 0;
    v14 = (__int64)v11;
  }
  SecureDeviceClassSettings = SeConvertStringSecurityDescriptorToSecurityDescriptor(v14, 1, (__int64)&v25, 0LL);
  if ( SecureDeviceClassSettings >= 0 )
  {
    v16 = v25;
    v12 = 2;
    *(_QWORD *)&DeviceType[2] = v25;
    *(_WORD *)(v25 + 2) |= 8u;
    if ( !a8
      || (v28[0] = 2LL,
          v28[2] = 0LL,
          v28[1] = v16,
          SecureDeviceClassSettings = IopUpdateSecureDeviceClassState(a8, (__int64)v28),
          SecureDeviceClassSettings >= 0) )
    {
LABEL_8:
      v17 = a4;
      DeviceCharacteristics = a5;
      if ( (v12 & 1) != 0 )
        v17 = DeviceType[1];
      if ( (v12 & 4) != 0 )
        DeviceCharacteristics = v27[0];
      if ( (v12 & 8) != 0 )
        a6 = v27[1];
      v20 = IoCreateDevice(a1, a2, a3, v17, DeviceCharacteristics, a6, &DeviceObject);
      v10 = DeviceObject;
      SecureDeviceClassSettings = v20;
      if ( v20 >= 0 )
      {
        if ( (v12 & 2) == 0
          || (SecureDeviceClassSettings = IopGetSecurityDescriptorInformation(*(_WORD **)&DeviceType[2], v23, &v24),
              SecureDeviceClassSettings >= 0)
          && (SecureDeviceClassSettings = ObSetSecurityObjectByPointer(
                                            (__int64)v10,
                                            v24,
                                            *(unsigned __int64 *)&DeviceType[2]),
              SecureDeviceClassSettings >= 0) )
        {
          *(_QWORD *)&v9->Type = v10;
          v10 = 0LL;
        }
      }
    }
  }
LABEL_15:
  if ( (v12 & 2) != 0 )
    ExFreePoolWithTag(*(PVOID *)&DeviceType[2], 0);
  if ( v10 )
    IoDeleteDevice(v10);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)SecureDeviceClassSettings;
}
