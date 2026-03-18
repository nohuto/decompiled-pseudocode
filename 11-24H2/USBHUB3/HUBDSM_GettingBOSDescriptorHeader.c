/*
 * XREFs of HUBDSM_GettingBOSDescriptorHeader @ 0x140022720
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer @ 0x14002B180 (HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_GettingBOSDescriptorHeader(__int64 a1)
{
  HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
