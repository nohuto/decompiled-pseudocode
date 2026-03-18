/*
 * XREFs of MiSetFreeZeroPfnCold @ 0x140438788
 * Callers:
 *     MiGetLargePage @ 0x140222688 (MiGetLargePage.c)
 *     MiConvertContiguousPages @ 0x140224560 (MiConvertContiguousPages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140342DE0 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140344B60 (MiUnlinkFreeOrZeroedPage.c)
 *     MiPageFreeToZero @ 0x1403478B0 (MiPageFreeToZero.c)
 *     MiGetLargePageChain @ 0x140378BB8 (MiGetLargePageChain.c)
 *     MiFinishLargePageFree @ 0x14038D7E8 (MiFinishLargePageFree.c)
 *     MiAllocateLargeZeroPages @ 0x140390BD8 (MiAllocateLargeZeroPages.c)
 *     MiLargePagePromote @ 0x1404384BC (MiLargePagePromote.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x14045DDAC (MiInitializeAllResidentPageBasePfns.c)
 *     MiLargeFreePageToMdl @ 0x14049FBFC (MiLargeFreePageToMdl.c)
 *     MiEnableNewPfns @ 0x140660F7C (MiEnableNewPfns.c)
 *     MxInsertEnclaveBootPages @ 0x140C46EE4 (MxInsertEnclaveBootPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetFreeZeroPfnCold(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  unsigned __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 && qword_140E2D940 )
  {
    if ( (v2 & 0x10) != 0 )
      LODWORD(v2) = v2 & 0xFFFFFFEF;
    else
      LODWORD(v2) = ~(_DWORD)qword_140E2D940 & v2;
  }
  v3 = (unsigned int)v2;
  result = (unsigned int)v2 | -(__int64)(a2 != 0) & 0xFFFFFFFD00000000uLL;
  if ( qword_140E2D940 )
  {
    if ( (qword_140E2D940 & result) != 0 )
      result = v3 | ((-(__int64)(a2 != 0) & 0xFFFFFFFD00000000uLL) + 16);
    else
      result |= qword_140E2D940;
  }
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
