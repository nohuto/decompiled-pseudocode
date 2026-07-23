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

NTSTATUS __fastcall RtlpGetWindowsPolicy(PCWSTR SourceString, PULONG Type, PULONG ResultDataSize, _QWORD *a4)
{
  PVOID Heap; // rbx
  NTSTATUS result; // eax
  NTSTATUS v9; // edi
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  Heap = 0LL;
  ValueName = 0LL;
  if ( !Type || !ResultDataSize || !a4 || !SourceString )
    return -1073741811;
  RtlInitUnicodeString(&ValueName, SourceString);
  result = ZwQueryLicenseValue(&ValueName, Type, 0LL, 0, ResultDataSize);
  if ( result >= 0 )
  {
    if ( !*ResultDataSize )
    {
      *a4 = 0LL;
      return result;
    }
  }
  else
  {
    if ( result != -1073741789 )
      goto LABEL_9;
    if ( !*ResultDataSize )
      return -1073741801;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, *ResultDataSize);
  if ( !Heap )
    return -1073741801;
LABEL_9:
  result = ZwQueryLicenseValue(&ValueName, Type, Heap, *ResultDataSize, ResultDataSize);
  v9 = result;
  if ( result < 0 )
  {
    if ( Heap )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v9;
    }
  }
  else
  {
    *a4 = Heap;
  }
  return result;
}
