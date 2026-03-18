/*
 * XREFs of KeQueryNumaCosts @ 0x140C15C68
 * Callers:
 *     SaveNodeDistanceInformation @ 0x140C4E1FC (SaveNodeDistanceInformation.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

void *KeQueryNumaCosts()
{
  ULONG_PTR v0; // rdi
  void *Pool2; // rax
  void *v2; // rbx

  v0 = 8LL * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, v0, 0x616D754EuLL);
  v2 = Pool2;
  if ( Pool2 )
    memmove(Pool2, KiActualNodeCost, v0);
  return v2;
}
