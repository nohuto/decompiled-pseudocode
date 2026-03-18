/*
 * XREFs of PnpCopyResourceList @ 0x1407335F0
 * Callers:
 *     PiUpdateDeviceResourceLists @ 0x14073646C (PiUpdateDeviceResourceLists.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     PnpDetermineResourceListSize @ 0x14098E258 (PnpDetermineResourceListSize.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
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
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v5 = Pool2;
  if ( !Pool2 )
    return 0LL;
  memmove(Pool2, Src, v3);
  return v5;
}
