/*
 * XREFs of VerifyAllocationForSubmissionPhysical @ 0x1400B82EC
 * Callers:
 *     ?VidMmPrepareDmaBuffer@@YAJPEBVVIDMM_GLOBAL@@PEBUVIDMM_DMA_BUFFER@@IPEAIPEAT_LARGE_INTEGER@@@Z @ 0x1400B8180 (-VidMmPrepareDmaBuffer@@YAJPEBVVIDMM_GLOBAL@@PEBUVIDMM_DMA_BUFFER@@IPEAIPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VerifyAllocationForSubmissionPhysical(__int64 a1, __int64 **a2)
{
  __int64 v2; // rcx
  __int64 v4; // rcx

  v2 = **a2;
  if ( (*(_DWORD *)(v2 + 24) & 0x200000) != 0 )
  {
    WdLogSingleEntry1(2LL, a2);
    WdLogGlobalForLineNumber = 8980;
  }
  else
  {
    if ( (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v2 + 392) + 8LL) - 2) <= 1u )
    {
      WdLogSingleEntry1(1LL, a2);
      WdLogGlobalForLineNumber = 8987;
    }
    else
    {
      if ( (*((_BYTE *)a2 + 28) & 3) == 2 )
        return 0LL;
      WdLogSingleEntry1(1LL, a2);
      WdLogGlobalForLineNumber = 8997;
    }
    DxgkLogInternalTriageEvent(v4, 0x40000LL);
  }
  return 3221225473LL;
}
