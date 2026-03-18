/*
 * XREFs of MiReturnPteMappingSet @ 0x140225EF0
 * Callers:
 *     MiCopyPage @ 0x1402254C0 (MiCopyPage.c)
 *     MiSlowRotateCopy @ 0x1406783E4 (MiSlowRotateCopy.c)
 *     MiCopyFilePage @ 0x14067A640 (MiCopyFilePage.c)
 *     MiFillPageWithImageExtentContents @ 0x14067ACF4 (MiFillPageWithImageExtentContents.c)
 *     MiCopyMemoryPagefileData @ 0x14068E320 (MiCopyMemoryPagefileData.c)
 * Callees:
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

struct _KPRCB *__fastcall MiReturnPteMappingSet(__int64 a1)
{
  struct _KPRCB *result; // rax
  unsigned __int64 v2; // rbx

  if ( *(_BYTE *)(a1 + 8) == 17 )
    return (struct _KPRCB *)MiReleasePtes(&qword_140E37568, *(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 4));
  result = KeGetCurrentPrcb();
  *(_QWORD *)result->MmInternal = 0LL;
  v2 = *(unsigned __int8 *)(a1 + 8);
  if ( KiIrqlFlags )
    result = (struct _KPRCB *)KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v2);
  __writecr8(v2);
  return result;
}
