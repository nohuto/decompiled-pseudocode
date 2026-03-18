/*
 * XREFs of CiConfigInitializeFromRegistry @ 0x1C0010180
 * Callers:
 *     CiConfigInitialize @ 0x1C000F1B0 (CiConfigInitialize.c)
 * Callees:
 *     WPP_SF_Sd @ 0x1C0004750 (WPP_SF_Sd.c)
 *     WPP_SF_d @ 0x1C0004960 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x1C0004EE0 (__security_check_cookie.c)
 *     memmove @ 0x1C0005000 (memmove.c)
 *     memset @ 0x1C0005300 (memset.c)
 *     CiTaskAllocate @ 0x1C000F7B8 (CiTaskAllocate.c)
 *     CiConfigQueryTaskFromRegistry @ 0x1C000FAC0 (CiConfigQueryTaskFromRegistry.c)
 *     CiTaskDump @ 0x1C000FF50 (CiTaskDump.c)
 *     CiConfigTaskPolicy @ 0x1C00100E0 (CiConfigTaskPolicy.c)
 */

__int64 __fastcall CiConfigInitializeFromRegistry(HANDLE KeyHandle)
{
  ULONG i; // ebx
  NTSTATUS v3; // edi
  WCHAR *Pool2; // rax
  WCHAR *v5; // r14
  NTSTATUS v6; // r9d
  int TaskFromRegistry; // edi
  int v8; // r8d
  __int64 v9; // rdx
  unsigned __int8 *v10; // rcx
  __int64 v11; // r8
  ULONG Length[2]; // [rsp+28h] [rbp-E0h]
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandlea; // [rsp+40h] [rbp-C8h] BYREF
  __int64 ObjectAttributes; // [rsp+48h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes_8; // [rsp+50h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+80h] [rbp-88h] BYREF
  _OWORD v19[3]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v20[64]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE KeyInformation[12]; // [rsp+108h] [rbp+0h] BYREF
  unsigned int Size; // [rsp+114h] [rbp+Ch]
  size_t Size_4; // [rsp+118h] [rbp+10h] BYREF

  ObjectAttributes = 0LL;
  ResultLength[0] = 0;
  KeyHandlea = 0LL;
  memset(&ObjectAttributes_8, 0, 44);
  memset(v19, 0, sizeof(v19));
  DestinationString_8 = 0LL;
  memset(v20, 0, sizeof(v20));
  for ( i = 0; ; ++i )
  {
    v3 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, KeyInformation, 0x98u, ResultLength);
    if ( v3 < 0 )
      break;
    if ( Size < 0x80 )
    {
      Pool2 = (WCHAR *)ExAllocatePool2(64LL, 2LL * (Size + 1), 1953658433LL);
      v5 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, &Size_4, Size);
        v5[(unsigned __int64)Size >> 1] = 0;
        if ( RtlInitUnicodeStringEx(&DestinationString_8, v5) < 0 )
          goto LABEL_16;
        ObjectAttributes_8.Length = 48;
        ObjectAttributes_8.ObjectName = &DestinationString_8;
        ObjectAttributes_8.RootDirectory = KeyHandle;
        ObjectAttributes_8.Attributes = 64;
        *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
        v6 = ZwOpenKey(&KeyHandlea, 0x101u, &ObjectAttributes_8);
        if ( v6 < 0 )
        {
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            WPP_SF_d(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xEu,
              (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
              v6);
LABEL_16:
          ExFreePoolWithTag(v5, 0);
          continue;
        }
        TaskFromRegistry = CiConfigQueryTaskFromRegistry(KeyHandlea, (__int64)v20, (__int64)v19);
        ZwClose(KeyHandlea);
        if ( TaskFromRegistry < 0 )
          goto LABEL_16;
        CiConfigTaskPolicy((__int64)v19);
        v8 = CiTaskAllocate(v5, v19, &ObjectAttributes);
        if ( v8 < 0 )
        {
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            Length[0] = v8;
            WPP_SF_Sd(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xDu,
              (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
              0LL,
              *(_QWORD *)Length);
          }
        }
        else
        {
          CiConfigTaskPolicy(ObjectAttributes);
          CiTaskDump(v10, v9, v11);
        }
      }
    }
LABEL_21:
    ;
  }
  if ( v3 == -1073741789 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xFu,
        (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
        -1073741789);
    goto LABEL_21;
  }
  if ( v3 == -2147483622 )
    return 0LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x10u,
      (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
      v3);
  return (unsigned int)v3;
}
