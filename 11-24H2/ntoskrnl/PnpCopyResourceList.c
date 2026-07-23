/*
 * XREFs of PnpCopyResourceList @ 0x140731524
 * Callers:
 *     PiUpdateDeviceResourceLists @ 0x14073439C (PiUpdateDeviceResourceLists.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PnpDetermineResourceListSize @ 0x140979290 (PnpDetermineResourceListSize.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void *__fastcall PnpCopyResourceList(void *Src)
{
  unsigned int v2; // eax
  unsigned int v3; // esi
  void *Pool2; // rax
  void *v5; // rbx

  v2 = PnpDetermineResourceListSize(Src);
  if ( !v2 )
    return 0LL;
  v3 = v2;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, v2, 0x36706E50u);
  v5 = Pool2;
  if ( !Pool2 )
    return 0LL;
  memmove(Pool2, Src, v3);
  return v5;
}
