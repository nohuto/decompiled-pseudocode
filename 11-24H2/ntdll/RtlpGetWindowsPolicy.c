/*
 * XREFs of RtlpGetWindowsPolicy @ 0x180148EF0
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x1800EB31C (RtlpMuiRegLoadLicInformation.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x1800DA0A0 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x180164880 (ZwQueryLicenseValue.c)
 */

__int64 __fastcall RtlpGetWindowsPolicy(PCWSTR SourceString, __int64 a2, _DWORD *a3, unsigned __int64 *a4)
{
  unsigned __int64 Heap; // rbx
  __int64 result; // rax
  unsigned int v9; // edi
  UNICODE_STRING v10; // [rsp+30h] [rbp-18h] BYREF

  Heap = 0LL;
  v10 = 0LL;
  if ( !a2 || !a3 || !a4 || !SourceString )
    return 3221225485LL;
  RtlInitUnicodeString(&v10, SourceString);
  result = ZwQueryLicenseValue(&v10, a2, 0LL, 0LL, a3);
  if ( (int)result >= 0 )
  {
    if ( !*a3 )
    {
      *a4 = 0LL;
      return result;
    }
  }
  else
  {
    if ( (_DWORD)result != -1073741789 )
      goto LABEL_9;
    if ( !*a3 )
      return 3221225495LL;
  }
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)*a3);
  if ( !Heap )
    return 3221225495LL;
LABEL_9:
  result = ZwQueryLicenseValue(&v10, a2, Heap, (unsigned int)*a3, a3);
  v9 = result;
  if ( (int)result < 0 )
  {
    if ( Heap )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v9;
    }
  }
  else
  {
    *a4 = Heap;
  }
  return result;
}
