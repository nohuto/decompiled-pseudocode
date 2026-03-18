/*
 * XREFs of SshpGenerateDeviceVerboseDescription @ 0x140A258A8
 * Callers:
 *     SleepstudyHelperCreateBlockerFromComponent @ 0x1407677F0 (SleepstudyHelperCreateBlockerFromComponent.c)
 *     SleepstudyHelperCreateBlockerFromDevice @ 0x140A24A50 (SleepstudyHelperCreateBlockerFromDevice.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140441FC0 (CmpFreeTransientPoolWithTag.c)
 *     IoGetDeviceProperty @ 0x1408BCAC0 (IoGetDeviceProperty.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SshpGenerateDeviceVerboseDescription(PDEVICE_OBJECT DeviceObject, ULONG a2, unsigned int **a3)
{
  NTSTATUS DeviceProperty; // eax
  NTSTATUS v7; // ebx
  NTSTATUS v8; // eax
  NTSTATUS v9; // eax
  ULONG v11; // r8d
  ULONG v12; // r9d
  ULONG v13; // ecx
  unsigned int v14; // r10d
  ULONG *Pool2; // rax
  unsigned int *v16; // rdi
  char *v17; // rsi
  int v18; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-10h] BYREF
  ULONG BufferLength[3]; // [rsp+34h] [rbp-Ch] BYREF
  ULONG v21; // [rsp+88h] [rbp+48h] BYREF

  v21 = 0;
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
  v8 = IoGetDeviceProperty(DeviceObject, DevicePropertyClassGuid, 0, 0LL, &v21);
  v7 = v8;
  if ( v8 == -1073741772 )
  {
    v21 = 0;
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
  v12 = v21 + 12;
  if ( v21 >= 0xFFFFFFF4 )
    return (unsigned int)-1073741675;
  v13 = v12 + ResultLength;
  v14 = -1;
  if ( v12 + ResultLength >= v12 )
    v14 = v12 + ResultLength;
  v7 = v13 < v12 ? 0xC0000095 : 0;
  if ( v13 >= v12 )
  {
    v7 = v14 + v11 < v14 ? 0xC0000095 : 0;
    if ( v14 + v11 >= v14 )
    {
      Pool2 = (ULONG *)ExAllocatePool2(0x100uLL);
      v16 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v17 = (char *)(Pool2 + 3);
      *Pool2 = v21 >> 1;
      Pool2[1] = ResultLength >> 1;
      Pool2[2] = BufferLength[0] >> 1;
      if ( v21 )
      {
        v7 = IoGetDeviceProperty(DeviceObject, DevicePropertyClassGuid, v21, Pool2 + 3, &v21);
        if ( v7 < 0 )
          goto LABEL_35;
        v17 += 2 * *v16;
      }
      if ( ResultLength )
      {
        v7 = IoGetDeviceProperty(DeviceObject, DevicePropertyClassName, ResultLength, v17, &ResultLength);
        if ( v7 < 0 )
          goto LABEL_35;
        v17 += 2 * v16[1];
      }
      if ( !BufferLength[0] )
      {
LABEL_18:
        *a3 = v16;
        return 0;
      }
      v7 = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, BufferLength[0], v17, BufferLength);
      if ( v7 >= 0 )
      {
        v18 = 0;
        if ( v16[2] > 2 )
        {
          do
          {
            if ( !*(_WORD *)&v17[2 * v18] )
              *(_WORD *)&v17[2 * v18] = 44;
            ++v18;
          }
          while ( v18 + 2 < v16[2] );
        }
        goto LABEL_18;
      }
LABEL_35:
      CmpFreeTransientPoolWithTag(v16, a2);
    }
  }
  return (unsigned int)v7;
}
