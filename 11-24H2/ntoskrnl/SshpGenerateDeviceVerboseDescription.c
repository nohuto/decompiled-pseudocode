/*
 * XREFs of SshpGenerateDeviceVerboseDescription @ 0x140A19898
 * Callers:
 *     SleepstudyHelperCreateBlockerFromComponent @ 0x140767A20 (SleepstudyHelperCreateBlockerFromComponent.c)
 *     SleepstudyHelperCreateBlockerFromDevice @ 0x140A18A40 (SleepstudyHelperCreateBlockerFromDevice.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     IoGetDeviceProperty @ 0x1408BA410 (IoGetDeviceProperty.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SshpGenerateDeviceVerboseDescription(PDEVICE_OBJECT DeviceObject, ULONG a2, unsigned int **a3)
{
  NTSTATUS DeviceProperty; // eax
  NTSTATUS v7; // ebx
  NTSTATUS v8; // eax
  NTSTATUS v9; // eax
  ULONG v11; // r8d
  ULONG v12; // r9d
  unsigned int v13; // r11d
  ULONG v14; // ecx
  unsigned int v15; // r10d
  unsigned int v16; // eax
  ULONG *Pool2; // rax
  unsigned int *v18; // rdi
  char *v19; // rsi
  int v20; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-10h] BYREF
  ULONG BufferLength[3]; // [rsp+34h] [rbp-Ch] BYREF
  ULONG v23; // [rsp+88h] [rbp+48h] BYREF

  v23 = 0;
  ResultLength = 0;
  BufferLength[0] = 0;
  DeviceProperty = IoGetDeviceProperty(DeviceObject, DevicePropertyClassName, 0, 0LL, &ResultLength);
  v7 = DeviceProperty;
  if ( DeviceProperty == -1073741772 )
  {
    ResultLength = 0;
  }
  else if ( DeviceProperty != -1073741789 )
  {
    return (unsigned int)v7;
  }
  v8 = IoGetDeviceProperty(DeviceObject, DevicePropertyClassGuid, 0, 0LL, &v23);
  v7 = v8;
  if ( v8 == -1073741772 )
  {
    v23 = 0;
  }
  else if ( v8 != -1073741789 )
  {
    return (unsigned int)v7;
  }
  v9 = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, 0, 0LL, BufferLength);
  v7 = v9;
  if ( v9 == -1073741772 )
  {
    v11 = 0;
    BufferLength[0] = 0;
  }
  else
  {
    if ( v9 != -1073741789 )
      return (unsigned int)v7;
    v11 = BufferLength[0];
  }
  v12 = v23 + 12;
  if ( v23 >= 0xFFFFFFF4 )
    return (unsigned int)-1073741675;
  v13 = -1;
  v14 = v12 + ResultLength;
  v15 = -1;
  if ( v12 + ResultLength >= v12 )
    v15 = v12 + ResultLength;
  v7 = v14 < v12 ? 0xC0000095 : 0;
  if ( v14 >= v12 )
  {
    v16 = v15 + v11;
    if ( v15 + v11 >= v15 )
      v13 = v15 + v11;
    v7 = v16 < v15 ? 0xC0000095 : 0;
    if ( v16 >= v15 )
    {
      Pool2 = (ULONG *)ExAllocatePool2(0x100uLL, v13, a2);
      v18 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v19 = (char *)(Pool2 + 3);
      *Pool2 = v23 >> 1;
      Pool2[1] = ResultLength >> 1;
      Pool2[2] = BufferLength[0] >> 1;
      if ( v23 )
      {
        v7 = IoGetDeviceProperty(DeviceObject, DevicePropertyClassGuid, v23, Pool2 + 3, &v23);
        if ( v7 < 0 )
          goto LABEL_37;
        v19 += 2 * *v18;
      }
      if ( ResultLength )
      {
        v7 = IoGetDeviceProperty(DeviceObject, DevicePropertyClassName, ResultLength, v19, &ResultLength);
        if ( v7 < 0 )
          goto LABEL_37;
        v19 += 2 * v18[1];
      }
      if ( !BufferLength[0] )
      {
LABEL_20:
        *a3 = v18;
        return 0;
      }
      v7 = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, BufferLength[0], v19, BufferLength);
      if ( v7 >= 0 )
      {
        v20 = 0;
        if ( v18[2] > 2 )
        {
          do
          {
            if ( !*(_WORD *)&v19[2 * v20] )
              *(_WORD *)&v19[2 * v20] = 44;
            ++v20;
          }
          while ( v20 + 2 < v18[2] );
        }
        goto LABEL_20;
      }
LABEL_37:
      CmpFreeTransientPoolWithTag(v18, a2);
    }
  }
  return (unsigned int)v7;
}
