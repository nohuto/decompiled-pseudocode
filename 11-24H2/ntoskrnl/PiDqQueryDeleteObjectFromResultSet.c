/*
 * XREFs of PiDqQueryDeleteObjectFromResultSet @ 0x140A4FE3C
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x1408D327C (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryFreeActiveData @ 0x1408D3C80 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1403F0610 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmObjectRelease @ 0x1408D0A30 (PiDmObjectRelease.c)
 */

void __fastcall PiDqQueryDeleteObjectFromResultSet(__int64 a1, unsigned int *a2)
{
  unsigned int *Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = a2;
  if ( RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer) )
    PiDmObjectRelease(Buffer);
}
