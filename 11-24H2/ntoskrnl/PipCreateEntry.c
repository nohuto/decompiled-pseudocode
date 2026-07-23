/*
 * XREFs of PipCreateEntry @ 0x140C22648
 * Callers:
 *     PipLookupGroupName @ 0x140C23398 (PipLookupGroupName.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PipCreateEntry(const void **a1)
{
  __int64 result; // rax
  __int64 v3; // rbx

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
