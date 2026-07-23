/*
 * XREFs of AslRegistryGetString @ 0x140809334
 * Callers:
 *     SdbpGetMergeRedirectPathInternal @ 0x140801F44 (SdbpGetMergeRedirectPathInternal.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     AslStringDuplicate @ 0x140942210 (AslStringDuplicate.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryGetString(_QWORD *a1, void *a2, const WCHAR *a3)
{
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  NTSTATUS v7; // ebx
  _WORD *v8; // rax
  _WORD *v9; // rdi
  const char *v10; // r9
  int v11; // r8d
  __int64 v12; // rcx
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-28h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a3);
  v5 = ZwQueryValueKey(a2, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  v7 = v5;
  if ( v5 == -2147483643 || v5 == -1073741789 )
  {
    ResultLength += 2;
    v8 = (_WORD *)AslAlloc(v6, ResultLength);
    v9 = v8;
    if ( !v8 )
    {
      v7 = -1073741801;
      AslLogCallPrintf(1, (unsigned int)"AslRegistryGetString", 1272, (unsigned int)"Out of memory");
      return (unsigned int)v7;
    }
    v7 = ZwQueryValueKey(a2, &ValueName, KeyValuePartialInformation, v8, ResultLength, &ResultLength);
    if ( v7 < 0 )
    {
      v10 = "Failed to query key value [%x]";
      v11 = 1284;
LABEL_13:
      AslLogCallPrintf(1, (unsigned int)"AslRegistryGetString", v11, (_DWORD)v10);
      goto LABEL_14;
    }
    if ( (unsigned int)(*((_DWORD *)v9 + 1) - 1) <= 1 )
    {
      v9[((unsigned __int64)*((unsigned int *)v9 + 2) >> 1) + 6] = 0;
      v7 = AslStringDuplicate(a1, v9 + 6);
      if ( v7 < 0 )
      {
        v10 = "Out of memory [%x]";
        v11 = 1302;
        goto LABEL_13;
      }
    }
    else
    {
      AslLogCallPrintf(1, (unsigned int)"AslRegistryGetString", 1292, (unsigned int)"Invalid value type");
      v7 = -1073741788;
    }
LABEL_14:
    AslFree(v12);
    return (unsigned int)v7;
  }
  if ( v5 != -1073741772 )
    AslLogCallPrintf(1, (unsigned int)"AslRegistryGetString", 1258, (unsigned int)"Failed to query key value [%x]");
  return (unsigned int)v7;
}
