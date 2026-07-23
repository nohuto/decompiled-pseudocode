/*
 * XREFs of MiSetFreeZeroPfnCold @ 0x140423EE0
 * Callers:
 *     MiFinishLargePageFree @ 0x14021B7C8 (MiFinishLargePageFree.c)
 *     MiPageFreeToZero @ 0x140220160 (MiPageFreeToZero.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14024DC50 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14024E130 (MiUnlinkFreeOrZeroedPage.c)
 *     MiGetLargePage @ 0x1402517B0 (MiGetLargePage.c)
 *     MiGetLargePageChain @ 0x140263C74 (MiGetLargePageChain.c)
 *     MiAllocateLargeZeroPages @ 0x14026F2E8 (MiAllocateLargeZeroPages.c)
 *     MiLargeFreePageToMdl @ 0x1402EF600 (MiLargeFreePageToMdl.c)
 *     MiConvertContiguousPages @ 0x1403932BC (MiConvertContiguousPages.c)
 *     MiLargePagePromote @ 0x140423C14 (MiLargePagePromote.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x14044F1DC (MiInitializeAllResidentPageBasePfns.c)
 *     MiEnableNewPfns @ 0x14066DC8C (MiEnableNewPfns.c)
 *     MxInsertEnclaveBootPages @ 0x140C5A354 (MxInsertEnclaveBootPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetFreeZeroPfnCold(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  unsigned __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 && qword_140E2DCC0 )
  {
    if ( (v2 & 0x10) != 0 )
      LODWORD(v2) = v2 & 0xFFFFFFEF;
    else
      LODWORD(v2) = ~(_DWORD)qword_140E2DCC0 & v2;
  }
  v3 = (unsigned int)v2;
  result = (unsigned int)v2 | -(__int64)(a2 != 0) & 0xFFFFFFFD00000000uLL;
  if ( qword_140E2DCC0 )
  {
    if ( (qword_140E2DCC0 & result) != 0 )
      result = v3 | ((-(__int64)(a2 != 0) & 0xFFFFFFFD00000000uLL) + 16);
    else
      result |= qword_140E2DCC0;
  }
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
