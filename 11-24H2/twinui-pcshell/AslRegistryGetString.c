/*
 * XREFs of AslRegistryGetString @ 0x180138F90
 * Callers:
 *     AslEnvBuildBasic @ 0x180136F3C (AslEnvBuildBasic.c)
 *     AslRegistryGetStringExpand @ 0x180138500 (AslRegistryGetStringExpand.c)
 *     ?PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z @ 0x18013892C (-PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z.c)
 * Callees:
 *     AslFree @ 0x180139254 (AslFree.c)
 *     AslStringDuplicate @ 0x18013927C (AslStringDuplicate.c)
 *     AslLogCallPrintf @ 0x1802CE2E0 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryGetString(_QWORD *a1, void *a2, const WCHAR *a3)
{
  NTSTATUS v5; // eax
  NTSTATUS v6; // ebx
  _DWORD *Heap; // rax
  _DWORD *v8; // rdi
  const char *v10; // r9
  int v11; // r8d
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-28h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a3);
  v5 = ZwQueryValueKey(a2, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  v6 = v5;
  if ( v5 == -2147483643 || v5 == -1073741789 )
  {
    ResultLength += 2;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ResultLength);
    v8 = Heap;
    if ( !Heap )
    {
      v6 = -1073741801;
      AslLogCallPrintf(1, (unsigned int)"AslRegistryGetString", 1272, (unsigned int)"Out of memory");
      return (unsigned int)v6;
    }
    v6 = ZwQueryValueKey(a2, &ValueName, KeyValuePartialInformation, Heap, ResultLength, &ResultLength);
    if ( v6 < 0 )
    {
      v10 = "Failed to query key value [%x]";
      v11 = 1284;
    }
    else
    {
      if ( (unsigned int)(v8[1] - 1) > 1 )
      {
        AslLogCallPrintf(1, (unsigned int)"AslRegistryGetString", 1292, (unsigned int)"Invalid value type");
        v6 = -1073741788;
        goto LABEL_6;
      }
      *((_WORD *)v8 + ((unsigned __int64)(unsigned int)v8[2] >> 1) + 6) = 0;
      v6 = AslStringDuplicate(a1);
      if ( v6 >= 0 )
      {
LABEL_6:
        AslFree(NtCurrentPeb()->ProcessHeap, v8);
        return (unsigned int)v6;
      }
      v10 = "Out of memory [%x]";
      v11 = 1302;
    }
    AslLogCallPrintf(1, (unsigned int)"AslRegistryGetString", v11, (_DWORD)v10);
    goto LABEL_6;
  }
  if ( v5 != -1073741772 )
    AslLogCallPrintf(1, (unsigned int)"AslRegistryGetString", 1258, (unsigned int)"Failed to query key value [%x]");
  return (unsigned int)v6;
}
