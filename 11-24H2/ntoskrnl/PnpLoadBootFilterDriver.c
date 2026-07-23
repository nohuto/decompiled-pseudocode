/*
 * XREFs of PnpLoadBootFilterDriver @ 0x140C69CC4
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140982F18 (PipCallDriverAddDeviceQueryRoutine.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     PipIs32bitKey @ 0x1405A0530 (PipIs32bitKey.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409B6410 (IopGetDriverNameFromKeyNode.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     PnpInitializeBootStartDriver @ 0x140C68294 (PnpInitializeBootStartDriver.c)
 */

__int64 __fastcall PnpLoadBootFilterDriver(HANDLE KeyHandle, PCUNICODE_STRING String1, unsigned int a3, _QWORD *a4)
{
  unsigned int i; // edx
  __int64 **v8; // r9
  __int64 *j; // rax
  __int64 v10; // rbx
  char *k; // rdi
  int started; // eax
  PVOID v13; // rsi
  int v14; // ebx
  int v16; // [rsp+30h] [rbp-38h]
  UNICODE_STRING String2; // [rsp+40h] [rbp-28h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  Object = 0LL;
  *a4 = 0LL;
  String2 = 0LL;
  if ( !IopGroupTable || a3 >= IopGroupIndex )
    return 3221225473LL;
  for ( i = 0; i < a3; ++i )
  {
    v8 = (__int64 **)((char *)IopGroupTable + 16 * i);
    for ( j = *v8; j != (__int64 *)v8; j = (__int64 *)*j )
    {
      if ( !*((_BYTE *)j + 47) )
        return 3221225473LL;
    }
  }
  _mm_lfence();
  v10 = 16LL * a3;
  for ( k = *(char **)((char *)IopGroupTable + v10); k != (char *)IopGroupTable + v10; k = *(char **)k )
  {
    if ( (int)IopGetDriverNameFromKeyNode(*((HANDLE *)k + 4), &String2) >= 0 )
    {
      if ( RtlEqualUnicodeString(String1, &String2, 1u) )
      {
        if ( k[47] )
        {
          v14 = *((_DWORD *)k + 10);
          if ( v14 >= 0 )
            v14 = -1073741823;
        }
        else
        {
          started = PnpInitializeBootStartDriver(
                      &String2.Length,
                      (__int128 *)(*((_QWORD *)k + 3) + 32LL),
                      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)k + 3) + 48LL) + 56LL),
                      *(_QWORD *)(*((_QWORD *)k + 3) + 48LL),
                      1,
                      1,
                      v16,
                      (__int64)&Object);
          v13 = Object;
          v14 = started;
          *((_DWORD *)k + 10) = started;
          *((_QWORD *)k + 2) = v13;
          k[47] = 1;
          if ( v13 )
          {
            ObfReferenceObjectWithTag(v13, 0x746C6644u);
            *a4 = v13;
          }
          else
          {
            k[46] = 1;
          }
        }
        ExFreePoolWithTag(String2.Buffer, 0);
        return (unsigned int)v14;
      }
      ExFreePoolWithTag(String2.Buffer, 0);
    }
  }
  v14 = -1073741823;
  if ( (unsigned int)PipIs32bitKey(KeyHandle) )
    return (unsigned int)-1073740948;
  return (unsigned int)v14;
}
