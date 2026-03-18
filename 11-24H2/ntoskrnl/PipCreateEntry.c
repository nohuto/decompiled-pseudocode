/*
 * XREFs of PipCreateEntry @ 0x140C20608
 * Callers:
 *     PipLookupGroupName @ 0x140C21358 (PipLookupGroupName.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

ULONG_PTR __fastcall PipCreateEntry(const void **a1)
{
  ULONG_PTR result; // rax
  ULONG_PTR v3; // rbx

  result = ExAllocatePool2(0x100uLL, *(unsigned __int16 *)a1 + 48LL, 0x6E697050uLL);
  v3 = result;
  if ( result )
  {
    *(_WORD *)(result + 32) = *(_WORD *)a1;
    *(_WORD *)(result + 34) = *(_WORD *)a1;
    *(_QWORD *)(result + 40) = result + 48;
    memmove((void *)(result + 48), a1[1], *(unsigned __int16 *)a1);
    return v3;
  }
  return result;
}
