/*
 * XREFs of SmcCacheManagerStart @ 0x14079D298
 * Callers:
 *     SmcCacheCreatePrepare @ 0x140798E8C (SmcCacheCreatePrepare.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     SmKmKeyGenStart @ 0x14079A4E4 (SmKmKeyGenStart.c)
 *     SmpUtilsGetControlDevice @ 0x14079E520 (SmpUtilsGetControlDevice.c)
 */

int __fastcall SmcCacheManagerStart(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  int result; // eax
  __int64 v6; // rcx
  const char *v7; // rax
  const wchar_t *v8; // rax
  __int64 v9; // rcx
  struct _UNICODE_STRING v10; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  v10 = 0LL;
  v4 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  while ( v4 < 2 )
  {
    if ( (*(_DWORD *)(a1 + 24 * (v4 - 10LL)) & 1) == 0 )
    {
      if ( !v4 )
      {
        result = SmpUtilsGetControlDevice(a1, a1 - 232, a1 - 224);
        if ( result < 0 )
          return result;
      }
      *(_DWORD *)(a1 + 24 * (v4 - 10LL)) |= 1u;
    }
    ++v4;
  }
  v6 = 0x7FFFLL;
  v7 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters";
  while ( *(_WORD *)v7 )
  {
    v7 += 2;
    if ( !--v6 )
      goto LABEL_13;
  }
  v10.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters";
  v10.Length = 2 * (0x7FFF - v6);
  v10.MaximumLength = v10.Length + 2;
LABEL_13:
  ObjectAttributes.ObjectName = &v10;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  result = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result >= 0 )
  {
    ZwClose(KeyHandle);
    v10 = 0LL;
    v8 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters\\CacheInfo";
    v9 = 0x7FFFLL;
    while ( *v8 )
    {
      ++v8;
      if ( !--v9 )
        goto LABEL_19;
    }
    v10.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParam"
                  "eters\\CacheInfo";
    v10.Length = 2 * (0x7FFF - v9);
    v10.MaximumLength = v10.Length + 2;
LABEL_19:
    result = SmKmKeyGenStart(a1 + 512, &v10);
    if ( result >= 0 )
    {
      *(_QWORD *)(a1 + 552) = a2;
      return 0;
    }
  }
  return result;
}
