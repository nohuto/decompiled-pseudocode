/*
 * XREFs of RtlpGetWindowsPolicy @ 0x18014A4A0
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x180086A64 (RtlpMuiRegLoadLicInformation.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x180165E10 (ZwQueryLicenseValue.c)
 */

__int64 __fastcall RtlpGetWindowsPolicy(PCWSTR SourceString, __int64 a2, _DWORD *a3, __int64 *a4)
{
  __int64 Heap; // rbx
  __int64 result; // rax
  __int64 v9; // r9
  unsigned int v10; // edi
  UNICODE_STRING v11; // [rsp+30h] [rbp-18h] BYREF

  Heap = 0LL;
  v11 = 0LL;
  if ( !a2 || !a3 || !a4 || !SourceString )
    return 3221225485LL;
  RtlInitUnicodeString(&v11, SourceString);
  result = ZwQueryLicenseValue(&v11, a2, 0LL, 0LL, a3);
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
  Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)*a3);
  if ( !Heap )
    return 3221225495LL;
LABEL_9:
  result = ZwQueryLicenseValue(&v11, a2, Heap, (unsigned int)*a3, a3);
  v10 = result;
  if ( (int)result < 0 )
  {
    if ( Heap )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap, v9);
      return v10;
    }
  }
  else
  {
    *a4 = Heap;
  }
  return result;
}
