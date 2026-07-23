/*
 * XREFs of PopGenerateDeviceFriendlyName @ 0x140A7C424
 * Callers:
 *     PopFxRegisterDevice @ 0x14074CC80 (PopFxRegisterDevice.c)
 *     PopDirectedDripsDiagCreateDeviceDescription @ 0x140763B64 (PopDirectedDripsDiagCreateDeviceDescription.c)
 *     PopIdleWakeGenerateInterruptDescriptionString @ 0x140A7C204 (PopIdleWakeGenerateInterruptDescriptionString.c)
 * Callees:
 *     RtlUnicodeStringCat @ 0x1403DA240 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCatString @ 0x1404105C0 (RtlUnicodeStringCatString.c)
 *     IoGetDeviceProperty @ 0x1408BA410 (IoGetDeviceProperty.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopGenerateDeviceFriendlyName(__int64 a1, char a2, UNICODE_STRING *a3)
{
  int v4; // r12d
  ULONG v5; // edx
  struct _DEVICE_OBJECT *v8; // r13
  char v9; // si
  const UNICODE_STRING *v10; // r14
  unsigned int Length; // ebx
  signed int v12; // eax
  NTSTATUS v13; // ebx
  ULONG v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // edx
  NTSTATUS DeviceProperty; // eax
  wchar_t *Pool2; // rbp
  unsigned int v21; // edx
  unsigned int v22; // ecx
  ULONG BufferLength; // [rsp+78h] [rbp+10h] BYREF

  v4 = a2 & 2;
  v5 = 0;
  BufferLength = 0;
  *a3 = 0LL;
  v8 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v9 = a2 & 1;
  if ( v9 )
  {
    DeviceProperty = IoGetDeviceProperty(v8, DevicePropertyDeviceDescription, 0, 0LL, &BufferLength);
    v13 = DeviceProperty;
    if ( DeviceProperty != -1073741789 )
    {
      if ( DeviceProperty != -1073741772 )
      {
LABEL_12:
        if ( v13 >= 0 )
          return (unsigned int)v13;
        goto LABEL_7;
      }
      v9 = 0;
      v10 = (const UNICODE_STRING *)(a1 + 128);
      goto LABEL_3;
    }
    v5 = BufferLength;
  }
  v10 = (const UNICODE_STRING *)(a1 + 128);
  if ( !v9 )
  {
LABEL_3:
    Length = v10->Length;
    v12 = 0;
    goto LABEL_4;
  }
  Length = -1;
  v15 = v5 + v10->Length;
  if ( v15 >= v5 )
    Length = v5 + v10->Length;
  v12 = v15 < v5 ? 0xC0000095 : 0;
  if ( v15 >= v5 )
  {
    v16 = -1;
    v17 = Length + 8;
    v18 = Length;
    if ( Length + 8 >= Length )
      v16 = Length + 8;
    Length = v16;
    v12 = v17 < v18 ? 0xC0000095 : 0;
  }
LABEL_4:
  if ( v4 )
  {
    if ( v12 < 0 )
      goto LABEL_6;
    v21 = Length + 8;
    if ( Length + 8 < Length )
      goto LABEL_6;
    Length = -1;
    v22 = v21 + *(unsigned __int16 *)(a1 + 56);
    if ( v22 >= v21 )
      Length = v21 + *(unsigned __int16 *)(a1 + 56);
    v12 = v22 < v21 ? 0xC0000095 : 0;
  }
  if ( v12 < 0 || Length >= 0xFFFF )
  {
LABEL_6:
    v13 = -1073741675;
    goto LABEL_7;
  }
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, Length, 0x4D584650u);
  if ( Pool2 )
  {
    a3->Buffer = Pool2;
    a3->Length = 0;
    a3->MaximumLength = Length;
    if ( v9
      && ((v13 = IoGetDeviceProperty(v8, DevicePropertyDeviceDescription, BufferLength, Pool2, &BufferLength), v13 < 0)
       || (a3->Length = BufferLength - 2, v13 = RtlUnicodeStringCatString(a3, L" ("), v13 < 0))
      || (v13 = RtlUnicodeStringCat(a3, v10), v9) )
    {
      if ( v13 >= 0 )
        v13 = RtlUnicodeStringCatString(a3, L")");
    }
    if ( v4 )
    {
      if ( v13 < 0
        || (v13 = RtlUnicodeStringCatString(a3, L" ["), v13 < 0)
        || (v13 = RtlUnicodeStringCat(a3, (PCUNICODE_STRING)(a1 + 56)), v13 < 0) )
      {
LABEL_11:
        ExFreePoolWithTag(Pool2, 0x4D584650u);
        goto LABEL_12;
      }
      v13 = RtlUnicodeStringCatString(a3, L"]");
    }
    if ( v13 >= 0 )
      return 0;
    goto LABEL_11;
  }
  v13 = -1073741670;
LABEL_7:
  *a3 = 0LL;
  return (unsigned int)v13;
}
