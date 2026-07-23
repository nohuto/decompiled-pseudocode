/*
 * XREFs of NtLockProductActivationKeys @ 0x140A32230
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     wcscat_s @ 0x140502000 (wcscat_s.c)
 *     wcscpy_s @ 0x1405020A0 (wcscpy_s.c)
 *     wcsncat_s @ 0x140502130 (wcsncat_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1406A79F0 (ZwEnumerateKey.c)
 *     ZwLockRegistryKey @ 0x1406A9670 (ZwLockRegistryKey.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtLockProductActivationKeys(ULONG *pPrivateVer, ULONG *pSafeMode)
{
  NTSTATUS v3; // ebx
  __int16 v4; // r8
  unsigned __int64 i; // rdx
  __int16 v6; // cx
  __int64 j; // r8
  unsigned int v8; // r9d
  unsigned int v9; // r10d
  unsigned int v10; // esi
  int v11; // r14d
  unsigned __int64 v12; // r11
  NTSTATUS result; // eax
  NTSTATUS v14; // edi
  ULONG v15; // r15d
  NTSTATUS v16; // esi
  NTSTATUS v17; // eax
  NTSTATUS v18; // esi
  char v19; // r14
  __int64 v20; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-908h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-900h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-8F8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-8F0h] BYREF
  OBJECT_ATTRIBUTES v25; // [rsp+50h] [rbp-8E8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-8B8h] BYREF
  UNICODE_STRING v27; // [rsp+90h] [rbp-8A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-898h] BYREF
  WCHAR SourceString[8]; // [rsp+D0h] [rbp-868h] BYREF
  __int128 v30; // [rsp+E0h] [rbp-858h]
  __int128 v31; // [rsp+F0h] [rbp-848h]
  __int64 v32; // [rsp+100h] [rbp-838h]
  int v33; // [rsp+108h] [rbp-830h]
  char KeyInformation[12]; // [rsp+110h] [rbp-828h] BYREF
  unsigned int v35; // [rsp+11Ch] [rbp-81Ch]
  wchar_t Src[504]; // [rsp+120h] [rbp-818h] BYREF
  wchar_t Dst[512]; // [rsp+510h] [rbp-428h] BYREF

  DestinationString = 0LL;
  v3 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  *(_OWORD *)SourceString = xmmword_14001A520;
  v30 = xmmword_14001A530;
  v31 = xmmword_14001A540;
  v32 = 0x2C7EFB57828734DALL;
  v33 = 593434642;
  v4 = -21647;
  for ( i = 0LL; i < 0x1E; ++i )
  {
    v6 = SourceString[i] ^ (v4 + SourceString[i]);
    v4 = v6;
  }
  if ( v6 != -18097 )
    return -1073741823;
  for ( j = 52LL; j >= 0; --j )
  {
    v8 = *(_DWORD *)((char *)SourceString + j);
    v9 = *(_DWORD *)((char *)&SourceString[2] + j);
    v10 = -957401312;
    v11 = 32;
    v12 = 3337565984LL;
    do
    {
      v9 -= (v10 + *(_DWORD *)&abWPAStringKey[4 * ((v12 >> 11) & 3)]) ^ (v8 + ((16 * v8) ^ (v8 >> 5)));
      v10 += 1640531527;
      v12 = v10;
      v8 -= (v10 + *(_DWORD *)&abWPAStringKey[4 * (v10 & 3)]) ^ (v9 + ((16 * v9) ^ (v9 >> 5)));
      --v11;
    }
    while ( v11 );
    *(_DWORD *)((char *)SourceString + j) = v8;
    *(_DWORD *)((char *)&SourceString[2] + j) = v9;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( pSafeMode )
    {
      v20 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)pSafeMode < 0x7FFFFFFF0000LL )
        v20 = (__int64)pSafeMode;
      *(_DWORD *)v20 = *(_DWORD *)v20;
      *pSafeMode = InitSafeBootMode;
    }
  }
  else if ( pSafeMode )
  {
    *pSafeMode = InitSafeBootMode;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v14 = result;
  if ( result >= 0 )
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = ZwEnumerateKey(KeyHandle, v15, KeyBasicInformation, KeyInformation, 0x400u, &ResultLength);
      if ( v16 == -2147483622 )
        break;
      v27 = 0LL;
      memset(&v25, 0, 44);
      Handle = 0LL;
      if ( v16 < 0 )
      {
        v14 = v16;
        break;
      }
      if ( v35 + 64 > 0x400 )
      {
        v14 = -1073741801;
      }
      else
      {
        wcscpy_s(Dst, 0x200uLL, SourceString);
        wcsncat_s(Dst, 0x200uLL, Src, (unsigned __int64)v35 >> 1);
        wcscat_s(Dst, 0x200uLL, L"\\");
        RtlInitUnicodeString(&v27, Dst);
        v25.Length = 48;
        v25.RootDirectory = 0LL;
        v25.Attributes = 576;
        v25.ObjectName = &v27;
        *(_OWORD *)&v25.SecurityDescriptor = 0LL;
        v17 = ZwOpenKey(&Handle, 0x20019u, &v25);
        if ( v17 < 0 )
        {
          v14 = v17;
        }
        else
        {
          Object = 0LL;
          v18 = ObReferenceObjectByHandle(Handle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
          if ( v18 >= 0 )
          {
            v19 = *(_BYTE *)(*((_QWORD *)Object + 1) + 8LL) & 0x80;
            ObfDereferenceObject(Object);
            if ( !v19 )
              v18 = ZwLockRegistryKey(Handle);
          }
          ZwClose(Handle);
          if ( v18 >= 0 )
            v18 = v14;
          v14 = v18;
        }
        ++v15;
      }
    }
    ZwClose(KeyHandle);
    if ( v16 != -2147483622 )
      return v14;
    return v3;
  }
  return result;
}
