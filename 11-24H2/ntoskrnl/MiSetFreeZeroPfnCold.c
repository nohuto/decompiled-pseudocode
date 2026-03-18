/*
 * XREFs of MiSetFreeZeroPfnCold @ 0x1404319A0
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x140220F00 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402213E0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiConvertContiguousPages @ 0x140268C24 (MiConvertContiguousPages.c)
 *     MiPageFreeToZero @ 0x14026ABD0 (MiPageFreeToZero.c)
 *     MiGetLargePage @ 0x1402F35A0 (MiGetLargePage.c)
 *     MiFinishLargePageFree @ 0x1403A3D48 (MiFinishLargePageFree.c)
 *     MiAllocateLargeZeroPages @ 0x1403A7BB8 (MiAllocateLargeZeroPages.c)
 *     MiGetLargePageChain @ 0x1403D4E10 (MiGetLargePageChain.c)
 *     MiLargeFreePageToMdl @ 0x14041F370 (MiLargeFreePageToMdl.c)
 *     MiLargePagePromote @ 0x1404316D4 (MiLargePagePromote.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x140459D90 (MiInitializeAllResidentPageBasePfns.c)
 *     MiEnableNewPfns @ 0x14066CABC (MiEnableNewPfns.c)
 *     MxInsertEnclaveBootPages @ 0x140C581C4 (MxInsertEnclaveBootPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetFreeZeroPfnCold(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  unsigned __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 && qword_140E2DB80 )
  {
    if ( (v2 & 0x10) != 0 )
      LODWORD(v2) = v2 & 0xFFFFFFEF;
    else
      LODWORD(v2) = ~(_DWORD)qword_140E2DB80 & v2;
  }
  v3 = (unsigned int)v2;
  result = (unsigned int)v2 | -(__int64)(a2 != 0) & 0xFFFFFFFD00000000uLL;
  if ( qword_140E2DB80 )
  {
    if ( (qword_140E2DB80 & result) != 0 )
      result = v3 | ((-(__int64)(a2 != 0) & 0xFFFFFFFD00000000uLL) + 16);
    else
      result |= qword_140E2DB80;
  }
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
