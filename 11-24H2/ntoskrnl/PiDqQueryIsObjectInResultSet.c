/*
 * XREFs of PiDqQueryIsObjectInResultSet @ 0x1408D3F10
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x1408D327C (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1403FFF00 (RtlLookupElementGenericTableAvl.c)
 */

bool __fastcall PiDqQueryIsObjectInResultSet(__int64 a1, __int64 a2)
{
  __int64 Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = a2;
  return RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer) != 0LL;
}
