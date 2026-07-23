/*
 * XREFs of HvlpSetupPageListIteration @ 0x1405898AC
 * Callers:
 *     HvlpStartPageListIteration @ 0x140589934 (HvlpStartPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x140589958 (HvlpStartSecurePageListIteration.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     HvlpGetPageListIterator @ 0x1405897E0 (HvlpGetPageListIterator.c)
 */

PHYSICAL_ADDRESS *__fastcall HvlpSetupPageListIteration(int a1, char a2)
{
  PHYSICAL_ADDRESS *PageListIterator; // rbx
  int v4; // ecx
  PVOID v5; // rcx
  PVOID v6; // rax
  PHYSICAL_ADDRESS *result; // rax

  PageListIterator = (PHYSICAL_ADDRESS *)HvlpGetPageListIterator(a1);
  PageListIterator->LowPart = 0;
  BYTE4(PageListIterator->QuadPart) = 0;
  if ( v4 == 1 )
  {
    v5 = HvlpFallbackScratchPage;
    v6 = HvlpHibernateScratchPage;
  }
  else
  {
    v5 = HvlpHibernateScratchPage;
    v6 = HvlpFallbackScratchPage;
  }
  if ( !v5 )
    v5 = v6;
  PageListIterator[1].QuadPart = (LONGLONG)v5;
  if ( !v5 )
    return 0LL;
  PageListIterator[2] = MmGetPhysicalAddress(v5);
  BYTE3(PageListIterator->QuadPart) = a2 & 1;
  BYTE4(PageListIterator->QuadPart) = (a2 & 2) != 0;
  result = PageListIterator;
  BYTE2(PageListIterator->u.LowPart) = 1;
  return result;
}
