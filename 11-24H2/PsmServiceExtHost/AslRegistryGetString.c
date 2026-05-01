/*
 * XREFs of AslRegistryGetString @ 0x18009DCFC
 * Callers:
 *     SdbpGetMergeRedirectPathInternal @ 0x180093640 (SdbpGetMergeRedirectPathInternal.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     AslFree @ 0x18009D9EC (AslFree.c)
 *     AslStringDuplicate @ 0x18009E508 (AslStringDuplicate.c)
 */

__int64 __fastcall AslRegistryGetString(_QWORD *a1, void *a2, const WCHAR *a3)
{
  NTSTATUS v5; // eax
  NTSTATUS v6; // ebx
  _DWORD *Heap; // rax
  _DWORD *v8; // rdi
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
      AslLogCallPrintf(1LL);
      return (unsigned int)v6;
    }
    v6 = ZwQueryValueKey(a2, &ValueName, KeyValuePartialInformation, Heap, ResultLength, &ResultLength);
    if ( v6 >= 0 )
    {
      if ( (unsigned int)(v8[1] - 1) > 1 )
      {
        AslLogCallPrintf(1LL);
        v6 = -1073741788;
LABEL_12:
        AslFree(NtCurrentPeb()->ProcessHeap, v8);
        return (unsigned int)v6;
      }
      *((_WORD *)v8 + ((unsigned __int64)(unsigned int)v8[2] >> 1) + 6) = 0;
      v6 = AslStringDuplicate(a1, v8 + 3);
      if ( v6 >= 0 )
        goto LABEL_12;
    }
    AslLogCallPrintf(1LL);
    goto LABEL_12;
  }
  if ( v5 != -1073741772 )
    AslLogCallPrintf(1LL);
  return (unsigned int)v6;
}
