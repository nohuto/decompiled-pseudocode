/*
 * XREFs of TpDbgDumpHeapUsage @ 0x18015DC20
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryTagHeap @ 0x1801431D0 (RtlQueryTagHeap.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

PWSTR __fastcall TpDbgDumpHeapUsage(
        BOOLEAN a1,
        __int64 (__fastcall *a2)(__int64, _QWORD, PWSTR, _QWORD, ULONG, SIZE_T),
        __int64 a3)
{
  unsigned int i; // ebx
  PWSTR result; // rax
  _RTL_HEAP_TAG_INFO TagInfo; // [rsp+40h] [rbp-38h] BYREF

  TagInfo = 0LL;
  for ( i = 0; i < 0xE; ++i )
  {
    result = RtlQueryTagHeap(NtCurrentPeb()->ProcessHeap, 0, i + (TppHeapTag >> 18), a1, &TagInfo);
    if ( result )
      result = (PWSTR)a2(
                        a3,
                        i + TppHeapTag,
                        result,
                        TagInfo.NumberOfAllocations,
                        TagInfo.NumberOfFrees,
                        TagInfo.BytesAllocated);
  }
  return result;
}
