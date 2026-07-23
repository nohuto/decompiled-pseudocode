/*
 * XREFs of PipInitDeviceOverrideCache @ 0x140C230E8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryKey @ 0x1406A7670 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x1406A79F0 (ZwEnumerateKey.c)
 *     RtlHashUnicodeString @ 0x14096EAB0 (RtlHashUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x1409D2A00 (RtlCreateUnicodeString.c)
 *     IopOpenRegistryKeyEx @ 0x140A39394 (IopOpenRegistryKeyEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 PipInitDeviceOverrideCache()
{
  NTSTATUS v0; // eax
  unsigned int Key; // ebx
  unsigned int i; // ecx
  unsigned int v3; // eax
  _QWORD *Pool2; // rax
  __int64 v6; // rdx
  ULONG j; // esi
  NTSTATUS v8; // eax
  UNICODE_STRING *v9; // rax
  UNICODE_STRING *v10; // rdi
  NTSTATUS v11; // eax
  ULONG v12; // ecx
  __int64 v13; // rcx
  UNICODE_STRING **v14; // rax
  ULONG HashValue[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING v17; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD KeyInformation_8[6]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v19[12]; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v20; // [rsp+94h] [rbp-74h]
  WCHAR SourceString[264]; // [rsp+98h] [rbp-70h] BYREF

  *(_QWORD *)&v17.Length = 8781956LL;
  KeyHandle = 0LL;
  HashValue[1] = 0;
  HashValue[0] = 0;
  v17.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\DeviceOverrides";
  memset(KeyInformation_8, 0, sizeof(KeyInformation_8));
  v0 = IopOpenRegistryKeyEx(&KeyHandle, 0LL, &v17, 0x20019u);
  Key = v0;
  if ( v0 == -1073741772 )
    goto LABEL_2;
  if ( v0 >= 0 )
  {
    Key = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation_8, 0x30u, &HashValue[1]);
    if ( (int)(Key + 0x80000000) < 0 || Key == -2147483643 )
    {
      if ( !HIDWORD(KeyInformation_8[2]) )
      {
LABEL_2:
        Key = 0;
        goto LABEL_17;
      }
      for ( i = 0; i < 3; ++i )
      {
        if ( HIDWORD(KeyInformation_8[2]) < 3 * *((_DWORD *)qword_140027B00 + i) )
        {
          PnpDeviceOverrideHashListSize = *((_DWORD *)qword_140027B00 + i);
          break;
        }
      }
      v3 = PnpDeviceOverrideHashListSize;
      if ( !PnpDeviceOverrideHashListSize )
      {
        v3 = 257;
        PnpDeviceOverrideHashListSize = 257;
      }
      Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 16LL * v3, 0x6E697050uLL);
      PnpDeviceOverrideHashList = (__int64)Pool2;
      if ( Pool2 )
      {
        if ( PnpDeviceOverrideHashListSize )
        {
          v6 = (unsigned int)PnpDeviceOverrideHashListSize;
          do
          {
            Pool2[1] = Pool2;
            *Pool2 = Pool2;
            Pool2 += 2;
            --v6;
          }
          while ( v6 );
        }
        for ( j = 0; ; ++j )
        {
          v8 = ZwEnumerateKey(KeyHandle, j, KeyBasicInformation, v19, 0x218u, &HashValue[1]);
          Key = v8;
          if ( v8 >= 0 )
          {
            if ( v20 <= 0x200 )
            {
              SourceString[(unsigned __int64)v20 >> 1] = 0;
              v9 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL, 0x20uLL, 0x6E697050uLL);
              v10 = v9;
              if ( !v9 )
                goto LABEL_16;
              if ( !RtlCreateUnicodeString(v9 + 1, SourceString) )
              {
                Key = -1073741670;
                ExFreePoolWithTag(v10, 0);
                goto LABEL_17;
              }
              v11 = RtlHashUnicodeString(v10 + 1, 1u, 0, HashValue);
              v12 = HashValue[0];
              if ( v11 < 0 )
                v12 = 0;
              HashValue[0] = v12;
              v13 = PnpDeviceOverrideHashList + 16LL * (v12 % PnpDeviceOverrideHashListSize);
              v14 = *(UNICODE_STRING ***)(v13 + 8);
              if ( *v14 != (UNICODE_STRING *)v13 )
                __fastfail(3u);
              *(_QWORD *)&v10->Length = v13;
              v10->Buffer = (wchar_t *)v14;
              *v14 = v10;
              *(_QWORD *)(v13 + 8) = v10;
            }
          }
          else
          {
            if ( v8 == -2147483622 )
              goto LABEL_2;
            if ( v8 != -2147483643 )
              goto LABEL_17;
          }
        }
      }
      PnpDeviceOverrideHashListSize = 0;
LABEL_16:
      Key = -1073741670;
    }
  }
LABEL_17:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return Key;
}
