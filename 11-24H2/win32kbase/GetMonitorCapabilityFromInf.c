/*
 * XREFs of GetMonitorCapabilityFromInf @ 0x14008FBC4
 * Callers:
 *     GetMonitorCapability @ 0x14008FB00 (GetMonitorCapability.c)
 * Callees:
 *     ParseModeCap @ 0x14008EF04 (ParseModeCap.c)
 *     xwtol @ 0x14008FFE4 (xwtol.c)
 *     InsertModecapList @ 0x1400905F8 (InsertModecapList.c)
 *     __report_rangecheckfailure @ 0x14019FD30 (__report_rangecheckfailure.c)
 *     wcschr @ 0x1401A0348 (wcschr.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall GetMonitorCapabilityFromInf(struct _DEVICE_OBJECT *a1, __int64 a2, char a3)
{
  unsigned int inserted; // esi
  ULONG v6; // r14d
  unsigned __int64 v7; // r9
  wchar_t *v8; // rdi
  unsigned int v9; // ebx
  wchar_t *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r9
  int v16; // edi
  unsigned int v17; // ebx
  unsigned __int64 v19; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  ULONG v23; // [rsp+50h] [rbp-B0h]
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  void *DeviceRegKey; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v26; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp-88h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _DWORD KeyInformation[64]; // [rsp+B0h] [rbp-50h] BYREF
  int v30; // [rsp+1B0h] [rbp+B0h]
  __int64 v31; // [rsp+1B4h] [rbp+B4h]
  WCHAR SourceString[8]; // [rsp+1C0h] [rbp+C0h] BYREF
  wchar_t Dst[128]; // [rsp+1D0h] [rbp+D0h] BYREF

  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  if ( IoOpenDeviceRegistryKey(a1, 2u, 0x20019u, &DeviceRegKey) < 0 )
    return 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  inserted = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"MODES");
  ObjectAttributes.RootDirectory = DeviceRegKey;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    memset(KeyInformation, 0, sizeof(KeyInformation));
    ResultLength = 0;
    v6 = 0;
    v26 = 0LL;
    v27 = 0LL;
    while ( ZwEnumerateKey(KeyHandle, v6, KeyBasicInformation, KeyInformation, 0x100u, &ResultLength) >= 0 )
    {
      ++v6;
      DestinationString.Buffer = (PWSTR)&KeyInformation[4];
      v23 = v6;
      DestinationString.Length = KeyInformation[3];
      DestinationString.MaximumLength = KeyInformation[3];
      v7 = LOWORD(KeyInformation[3]);
      if ( LOWORD(KeyInformation[3]) >= 0x100u )
        v7 = 256LL;
      wcsncpy_s(Dst, 0x80uLL, (const wchar_t *)&KeyInformation[4], v7 >> 1);
      if ( DestinationString.Length < 0x100u )
      {
        v19 = DestinationString.Length & 0xFFFE;
        if ( v19 >= 0x100 )
          _report_rangecheckfailure();
        *(wchar_t *)((char *)Dst + v19) = 0;
      }
      v31 = 0xFFFFFFFFLL;
      v8 = Dst;
      Dst[127] = 0;
      v9 = 0;
      v30 = 0;
      do
      {
        if ( v9 >= 4 )
          break;
        v10 = wcschr(v8, 0x2Cu);
        if ( v10 )
          *v10 = 0;
        v13 = xwtol(v8, v11, v12, v10);
        v14 = v9;
        v8 = (wchar_t *)(v15 + 2);
        ++v9;
        *(&v30 + v14) = v13;
      }
      while ( v15 );
      if ( v30 )
      {
        if ( (_DWORD)v31 != -1 )
        {
          LODWORD(v26) = v30;
          ObjectAttributes.RootDirectory = KeyHandle;
          *(_QWORD *)((char *)&v26 + 4) = v31;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&Handle, 0x2000000u, &ObjectAttributes) >= 0 )
          {
            v16 = 0;
            v17 = 0;
            wcscpy(SourceString, L"Mode1");
            do
            {
              RtlInitUnicodeString(&DestinationString, SourceString);
              if ( ZwQueryValueKey(
                     Handle,
                     &DestinationString,
                     KeyValueFullInformation,
                     KeyInformation,
                     0x100u,
                     &ResultLength) >= 0 )
              {
                wcsncpy_s(Dst, 0x80uLL, (const wchar_t *)((char *)KeyInformation + KeyInformation[2]), 0x7FuLL);
                v27 = 0xFFFFFFFF00000000uLL;
                DWORD2(v26) = -1;
                HIDWORD(v26) = a3 == 0 ? 0x38 : 0;
                if ( (unsigned int)ParseModeCap(Dst, &v26, 1) )
                  inserted = InsertModecapList(&v26, a2, inserted);
                v16 = 1;
              }
              else if ( v16 )
              {
                break;
              }
              ++SourceString[4];
              ++v17;
            }
            while ( v17 < 9 );
            ZwClose(Handle);
            v6 = v23;
          }
        }
      }
    }
    ZwClose(KeyHandle);
  }
  ZwClose(DeviceRegKey);
  return inserted;
}
