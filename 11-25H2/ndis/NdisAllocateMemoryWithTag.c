/*
 * XREFs of NdisAllocateMemoryWithTag @ 0x14006F9E0
 * Callers:
 *     Duplicate802_11AttachAttributesCommon @ 0x14006EED0 (Duplicate802_11AttachAttributesCommon.c)
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisAllocateMemoryWithTag(PVOID *VirtualAddress, UINT Length, ULONG Tag)
{
  void *Pool2; // rax
  NDIS_STATUS v5; // ecx

  if ( !Tag )
    Tag = 1835091022;
  Pool2 = (void *)ExAllocatePool2(66LL, Length, Tag);
  v5 = -1073741823;
  *VirtualAddress = Pool2;
  if ( Pool2 )
    return 0;
  return v5;
}
