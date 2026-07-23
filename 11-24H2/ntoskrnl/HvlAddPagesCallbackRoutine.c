/*
 * XREFs of HvlAddPagesCallbackRoutine @ 0x140586FA0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetPageList @ 0x140589728 (HvlpGetPageList.c)
 *     HvlpGetPageListIterator @ 0x1405897E0 (HvlpGetPageListIterator.c)
 *     HvlpStartPageListIteration @ 0x140589934 (HvlpStartPageListIteration.c)
 *     IoIsPartialDumpRetry @ 0x14058EBC0 (IoIsPartialDumpRetry.c)
 */

void __fastcall HvlAddPagesCallbackRoutine(
        __int64 Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        __int64 ReasonSpecificDataLength)
{
  int v5; // eax
  __int64 v6; // rdx
  int PageList; // eax
  __int64 PageListIterator; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+50h] [rbp+18h] BYREF

  ReasonSpecificData[3] = 0LL;
  *((_DWORD *)ReasonSpecificData + 2) = 0;
  v9[0] = 0LL;
  v10 = 0;
  if ( Address && (*((_DWORD *)Address + 1) & 1) != 0 && HvlpFallbackScratchPage )
  {
    if ( !*ReasonSpecificData )
    {
      if ( (HvlpForceAllPages & 1) != 0
        || ((v5 = *((_DWORD *)ReasonSpecificData + 3), v5 == 131073) || v5 == 395)
        && !(unsigned __int8)IoIsPartialDumpRetry(Reason, Record, ReasonSpecificData, ReasonSpecificDataLength) )
      {
        HvlpAllPages = 1;
        v6 = 0LL;
      }
      else
      {
        HvlpAllPages = 0;
        v6 = 2LL;
      }
      *ReasonSpecificData = &HvlpCrashdumpIterationState;
      LOBYTE(HvlpCrashdumpIterationState) = 1;
      HvlpStartPageListIteration(1LL, v6);
    }
    PageList = HvlpGetPageList(1LL, v9, &v10);
    if ( v10 )
    {
      ReasonSpecificData[3] = v10;
      ReasonSpecificData[2] = v9[0];
      *((_DWORD *)ReasonSpecificData + 2) = 2;
    }
    if ( PageList == 261 )
    {
      *((_DWORD *)ReasonSpecificData + 2) |= 0x80000000;
    }
    else
    {
      PageListIterator = HvlpGetPageListIterator(1LL);
      *(_QWORD *)(PageListIterator + 8) = 0LL;
      *(_WORD *)PageListIterator = 0;
      *(_WORD *)(PageListIterator + 3) = 0;
      *(_BYTE *)(PageListIterator + 2) = 0;
      LOBYTE(HvlpCrashdumpIterationState) = 0;
      *ReasonSpecificData = 0LL;
    }
  }
}
