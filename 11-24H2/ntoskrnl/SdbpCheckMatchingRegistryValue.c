/*
 * XREFs of SdbpCheckMatchingRegistryValue @ 0x140803A6C
 * Callers:
 *     SdbpCheckMatchingRegistryEntry @ 0x14080388C (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x14080467C (SdbpCheckMatchingWildcardRegistryEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     AslStringDuplicate @ 0x140942210 (AslStringDuplicate.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     AslStringPatternMatchExW @ 0x140948000 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall SdbpCheckMatchingRegistryValue(
        HANDLE KeyHandle,
        wchar_t *Str1,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        void *Buf1,
        size_t Size,
        _DWORD *a9)
{
  PCWSTR v12; // r15
  _WORD *v13; // rsi
  _DWORD *v14; // rbx
  unsigned int v15; // edi
  const WCHAR *v16; // rdx
  int v17; // eax
  NTSTATUS v18; // eax
  _DWORD *v19; // rax
  const char *v20; // r9
  int v21; // r8d
  int v22; // eax
  _DWORD *v23; // r14
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  bool v29; // zf
  _WORD *v30; // rax
  _WORD *v31; // rcx
  _WORD *v33; // rax
  PCWSTR SourceString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+98h] [rbp+48h] BYREF
  __int64 v37; // [rsp+A8h] [rbp+58h]

  v37 = a4;
  SourceString = 0LL;
  ResultLength = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  DestinationString = 0LL;
  if ( !Str1 || !*Str1 )
    goto LABEL_38;
  if ( wcsicmp(Str1, L"dbRegistryDefaultName") )
  {
    v17 = AslStringDuplicate(&SourceString, Str1);
    v12 = SourceString;
    if ( v17 < 0 )
      goto LABEL_42;
    v16 = SourceString;
  }
  else
  {
    v16 = 0LL;
  }
  RtlInitUnicodeString(&DestinationString, v16);
  v18 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, 0LL, 0, &ResultLength);
  if ( v18 < 0 && v18 != -2147483643 && v18 != -1073741789 )
  {
    v15 = 1;
    goto LABEL_42;
  }
  v19 = (_DWORD *)AslAlloc(KeyHandle, ResultLength);
  v14 = v19;
  if ( !v19 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingRegistryValue", 1205, (unsigned int)"Failed to allocate memory");
    goto LABEL_42;
  }
  if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, v19, ResultLength, &ResultLength) >= 0 )
  {
    v22 = v14[1];
    if ( !a3 )
    {
      *a9 = 1;
LABEL_18:
      v15 = 1;
      goto LABEL_39;
    }
    if ( v22 != a3 )
      goto LABEL_18;
    v23 = (_DWORD *)((char *)v14 + (unsigned int)v14[2]);
    v24 = v22 - 1;
    if ( v24 && (v25 = v24 - 1) != 0 )
    {
      v26 = v25 - 1;
      if ( !v26 )
      {
        if ( Size != v14[3] )
          goto LABEL_52;
        v29 = memcmp(Buf1, (char *)v14 + (unsigned int)v14[2], Size) == 0;
LABEL_37:
        if ( v29 )
          goto LABEL_38;
LABEL_52:
        v15 = 1;
        goto LABEL_39;
      }
      v27 = v26 - 1;
      if ( !v27 )
      {
        v29 = a5 == *v23;
        goto LABEL_37;
      }
      v28 = v27 - 3;
      if ( v28 )
      {
        if ( v28 != 4 )
        {
          v20 = "Unknown registry value data type";
          v21 = 1351;
          goto LABEL_15;
        }
        v29 = a6 == *(_QWORD *)v23;
        goto LABEL_37;
      }
      v30 = (_WORD *)AslAlloc(KeyHandle, (unsigned int)v14[3] + 2LL);
      v13 = v30;
      if ( !v30 )
      {
        v21 = 1276;
LABEL_49:
        v20 = "Failed to allocate memory";
        goto LABEL_15;
      }
      memmove(v30, v23, (unsigned int)v14[3]);
      v31 = v13;
      for ( v13[(unsigned __int64)(unsigned int)v14[3] >> 1] = 0;
            v31 < (_WORD *)((char *)v13 + (v14[3] & 0xFFFFFFFE));
            ++v31 )
      {
        if ( !*v31 )
        {
          if ( !v31[1] )
            break;
          *v31 = 59;
        }
      }
    }
    else
    {
      v33 = (_WORD *)AslAlloc(KeyHandle, (unsigned int)v14[3] + 2LL);
      v13 = v33;
      if ( !v33 )
      {
        v21 = 1253;
        goto LABEL_49;
      }
      memmove(v33, v23, (unsigned int)v14[3]);
      v13[(unsigned __int64)(unsigned int)v14[3] >> 1] = 0;
    }
    if ( !(unsigned int)AslStringPatternMatchExW(v37, v13) )
      goto LABEL_52;
LABEL_38:
    *a9 = 1;
    v15 = 1;
    if ( !v14 )
      goto LABEL_40;
    goto LABEL_39;
  }
  v20 = "Failed to read value";
  v21 = 1216;
LABEL_15:
  AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingRegistryValue", v21, (_DWORD)v20);
LABEL_39:
  AslFree(KeyHandle);
LABEL_40:
  if ( v13 )
    AslFree(KeyHandle);
LABEL_42:
  if ( v12 )
    AslFree(KeyHandle);
  return v15;
}
