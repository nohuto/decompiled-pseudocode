/*
 * XREFs of SshpGenerateDeviceFriendlyName @ 0x140A195D4
 * Callers:
 *     SleepstudyHelperCreateBlockerFromComponent @ 0x140767A20 (SleepstudyHelperCreateBlockerFromComponent.c)
 *     SleepstudyHelper_GetPdoFriendlyName @ 0x140A189C0 (SleepstudyHelper_GetPdoFriendlyName.c)
 *     SleepstudyHelperCreateBlockerFromDevice @ 0x140A18A40 (SleepstudyHelperCreateBlockerFromDevice.c)
 * Callees:
 *     RtlUnicodeStringCat @ 0x1403DA240 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCatString @ 0x1404105C0 (RtlUnicodeStringCatString.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     RtlUnicodeStringPrintf @ 0x14047B368 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     IoGetDeviceProperty @ 0x1408BA410 (IoGetDeviceProperty.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SshpGenerateDeviceFriendlyName(
        PDEVICE_OBJECT DeviceObject,
        unsigned int *a2,
        ULONG a3,
        UNICODE_STRING *a4)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax
  ULONG v5; // esi
  const UNICODE_STRING *DeviceNode; // r15
  wchar_t *v10; // r14
  NTSTATUS DeviceProperty; // eax
  NTSTATUS v12; // ebx
  ULONG v13; // esi
  unsigned int v14; // esi
  wchar_t *Pool2; // rax
  __int64 v16; // r8
  wchar_t *v17; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  ULONG v21; // [rsp+30h] [rbp-59h]
  ULONG BufferLength; // [rsp+34h] [rbp-55h] BYREF
  UNICODE_STRING SourceString; // [rsp+38h] [rbp-51h] BYREF
  char v24; // [rsp+50h] [rbp-39h] BYREF

  DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
  v5 = 0;
  BufferLength = 0;
  v21 = a3;
  DeviceNode = (const UNICODE_STRING *)DeviceObjectExtension->DeviceNode;
  v10 = 0LL;
  SourceString = 0LL;
  if ( DeviceNode )
  {
    DeviceProperty = IoGetDeviceProperty(DeviceObject, DevicePropertyDeviceDescription, 0, 0LL, &BufferLength);
    v12 = DeviceProperty;
    if ( DeviceProperty == -1073741789 )
    {
      if ( BufferLength > 0xFFFF )
      {
        v12 = -2147483643;
        goto LABEL_20;
      }
      v5 = BufferLength + 4;
    }
    else if ( DeviceProperty != -1073741772 )
    {
      if ( DeviceProperty >= 0 )
        return (unsigned int)v12;
      goto LABEL_20;
    }
    v13 = DeviceNode[8].Length + v5;
    if ( a2 )
    {
      v20 = *a2;
      SourceString.Buffer = (wchar_t *)&v24;
      *(_DWORD *)&SourceString.Length = 0x400000;
      v12 = RtlUnicodeStringPrintf(&SourceString, L" (%d)", v20);
      if ( v12 < 0 )
        goto LABEL_20;
      v13 += SourceString.Length;
    }
    if ( !v13 )
    {
      v12 = -1073741811;
      goto LABEL_20;
    }
    a3 = v21;
    v14 = v13 + 2;
    if ( v14 < 0xFFFF )
    {
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 2LL * v14, v21);
      v10 = Pool2;
      if ( Pool2 )
      {
        if ( !BufferLength )
        {
          *a4 = 0LL;
          v19 = 0x7FFFLL;
          while ( *Pool2 )
          {
            ++Pool2;
            if ( !--v19 )
              goto LABEL_32;
          }
          if ( a4 )
          {
            a4->Buffer = v10;
            a4->Length = 2 * (0x7FFF - v19);
          }
LABEL_32:
          a4->MaximumLength = v14;
          goto LABEL_33;
        }
        v12 = IoGetDeviceProperty(DeviceObject, DevicePropertyDeviceDescription, BufferLength, Pool2, &BufferLength);
        if ( v12 >= 0 )
        {
          *a4 = 0LL;
          v16 = 0x7FFFLL;
          v17 = v10;
          do
          {
            if ( !*v17 )
              break;
            ++v17;
            --v16;
          }
          while ( v16 );
          v12 = -1073741811;
          if ( v16 )
          {
            if ( !a4 )
            {
LABEL_18:
              a4->MaximumLength = v14;
              if ( v12 < 0 )
                goto LABEL_20;
              v12 = RtlUnicodeStringCatString(a4, L" (");
              if ( v12 < 0 )
                goto LABEL_20;
LABEL_33:
              v12 = RtlUnicodeStringCat(a4, DeviceNode + 8);
              if ( v12 >= 0 )
              {
                if ( !BufferLength || (v12 = RtlUnicodeStringCatString(a4, L")"), v12 >= 0) )
                {
                  if ( !a2 )
                    return 0;
                  v12 = RtlUnicodeStringCat(a4, &SourceString);
                  if ( v12 >= 0 )
                    return 0;
                }
              }
              goto LABEL_20;
            }
            a4->Buffer = v10;
            a4->Length = 2 * (0x7FFF - v16);
          }
          v12 = v16 == 0 ? 0xC000000D : 0;
          goto LABEL_18;
        }
      }
      else
      {
        v12 = -1073741670;
      }
LABEL_20:
      a3 = v21;
      goto LABEL_21;
    }
    v12 = -2147483643;
  }
  else
  {
    v12 = -1073741811;
  }
LABEL_21:
  *a4 = 0LL;
  if ( v10 )
    CmpFreeTransientPoolWithTag(v10, a3);
  return (unsigned int)v12;
}
