/*
 * XREFs of RIMIsDeviceExcluded @ 0x14014C940
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1401DECF0 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

_BOOL8 __fastcall RIMIsDeviceExcluded(__int16 a1, struct _UNICODE_STRING *a2)
{
  BOOL v2; // ebx
  _DWORD *v4; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+20h] BYREF
  void *KeyHandle; // [rsp+A0h] [rbp+30h] BYREF

  v2 = 0;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  if ( a1 == 1 )
  {
    ResultLength = 0;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Wisp\\ExcludedDEvices");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      if ( ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, 0LL, 0, &ResultLength) != -1073741772 )
      {
        if ( ResultLength )
        {
          v4 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, ResultLength, 0x78657352u);
          if ( v4 )
          {
            if ( ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, v4, ResultLength, &ResultLength) >= 0
              && v4[1] == 4 )
            {
              v2 = (_DWORD)v4 == -11;
            }
            GreDeleteFastMutex((char *)v4);
          }
        }
      }
      ZwClose(KeyHandle);
    }
  }
  return v2;
}
