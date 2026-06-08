/*
 * XREFs of sub_140047614 @ 0x140047614
 * Callers:
 *     sub_140005640 @ 0x140005640 (sub_140005640.c)
 *     sub_14004A99C @ 0x14004A99C (sub_14004A99C.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_14003AB2C @ 0x14003AB2C (sub_14003AB2C.c)
 *     sub_14003B054 @ 0x14003B054 (sub_14003B054.c)
 */

__int64 __fastcall sub_140047614(int a1)
{
  __int64 v1; // r15
  const WCHAR *v2; // rdx
  __int64 v3; // rsi
  unsigned __int8 *Pool2; // r14
  NTSTATUS v5; // edi
  unsigned __int16 v6; // r9
  int v7; // edx
  ULONG i; // r12d
  unsigned int v9; // ebx
  int v10; // eax
  unsigned __int8 *v11; // rbx
  __int64 v12; // r12
  _QWORD *v13; // r15
  unsigned int j; // esi
  void *v15; // rcx
  void *KeyHandle; // [rsp+30h] [rbp-49h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-29h] BYREF
  _OWORD KeyInformation[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+27h]

  v1 = a1;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v2 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor\\HwDebugRegisters";
  ResultLength = 0;
  KeyHandle = 0LL;
  v3 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  Pool2 = 0LL;
  v22 = 0LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  DestinationString = 0LL;
  if ( a1 )
    v2 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Diagnostics\\DiagTrack\\HwDebugRegisters";
  RtlInitUnicodeString(&DestinationString, v2);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( (_DWORD)v1 == 1 )
  {
    v5 = sub_14003B054(&ObjectAttributes);
    if ( v5 < 0 )
    {
      if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
        goto LABEL_23;
      v6 = 12;
      goto LABEL_7;
    }
  }
  v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    v5 = ZwQueryKey(KeyHandle, KeyCachedInformation, KeyInformation, 0x28u, &ResultLength);
    if ( v5 >= 0 )
    {
      if ( HIDWORD(KeyInformation[0]) )
      {
        Pool2 = (unsigned __int8 *)ExAllocatePool2(64LL, (unsigned int)(40 * HIDWORD(KeyInformation[0])), 1919119952LL);
        if ( Pool2 )
        {
          for ( i = 0; i < HIDWORD(KeyInformation[0]); ++i )
          {
            v9 = v3;
            v10 = sub_14003AB2C(KeyHandle, i, (__int64)&Pool2[40 * v3]);
            v3 = (unsigned int)(v3 + 1);
            v5 = v10;
            if ( v10 < 0 )
              v3 = v9;
          }
          LOBYTE(qword_140019140[2 * v1 + 294]) = v3;
          if ( (_DWORD)v3 )
          {
            qword_140019140[2 * v1 + 295] = (__int64)Pool2;
            Pool2 = 0LL;
          }
        }
        else
        {
          v5 = -1073741670;
          if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          {
            LOBYTE(v7) = 2;
            sub_140003D28(off_140018050->DeviceExtension, v7, 4, 14, (__int64)&unk_140014B60);
          }
        }
      }
      else
      {
        v5 = 0;
      }
    }
    else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v6 = 13;
LABEL_7:
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 4u, v6, (__int64)&unk_140014B60, v5);
    }
  }
LABEL_23:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
  {
    if ( (_DWORD)v3 )
    {
      v11 = Pool2 + 16;
      v12 = (unsigned int)v3;
      do
      {
        v13 = (_QWORD *)*((_QWORD *)v11 + 1);
        if ( v13 )
        {
          for ( j = 0; j < *v11; ++j )
          {
            v15 = (void *)v13[2 * j];
            if ( v15 )
              ExFreePoolWithTag(v15, 0x72637250u);
          }
          ExFreePoolWithTag(v13, 0x72637250u);
        }
        v11 += 40;
        --v12;
      }
      while ( v12 );
    }
    ExFreePoolWithTag(Pool2, 0x72637250u);
  }
  return (unsigned int)v5;
}
