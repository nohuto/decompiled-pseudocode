/*
 * XREFs of IrqArbpGetRangeData @ 0x1400C033C
 * Callers:
 *     IrqArbPackResource @ 0x1400C0290 (IrqArbPackResource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IrqArbpGetRangeData(__int64 a1, PVOID *a2)
{
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-28h] BYREF
  PRTL_RANGE Range; // [rsp+60h] [rbp+18h] BYREF

  Range = 0LL;
  memset(&Iterator, 0, sizeof(Iterator));
  RtlGetFirstRange(qword_140089890, &Iterator, &Range);
  while ( Range )
  {
    if ( Range->Start == a1 )
    {
      *a2 = Range->UserData;
      return 0LL;
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return 3221226021LL;
}
