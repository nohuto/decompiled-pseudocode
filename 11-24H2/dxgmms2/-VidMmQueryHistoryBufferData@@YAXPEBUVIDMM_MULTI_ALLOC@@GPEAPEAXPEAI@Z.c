/*
 * XREFs of ?VidMmQueryHistoryBufferData@@YAXPEBUVIDMM_MULTI_ALLOC@@GPEAPEAXPEAI@Z @ 0x14009F94C
 * Callers:
 *     ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x140036AF4 (-UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall VidMmQueryHistoryBufferData(__int64 **a1, __int16 a2, void **a3, unsigned int *a4)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  PVOID v8; // rax
  __int64 v9; // rcx

  v6 = **a1;
  *a3 = 0LL;
  *a4 = 0;
  if ( (*(_WORD *)(v6 + 24) & 0x3F) == a2 )
  {
    v7 = *(_QWORD *)(v6 + 56);
    if ( v7 )
    {
      if ( (*(_BYTE *)(v7 + 10) & 5) != 0 )
        v8 = *(PVOID *)(v7 + 24);
      else
        v8 = MmMapLockedPagesSpecifyCache((PMDL)v7, 0, MmCached, 0LL, 0, 0x40000010u);
      *a3 = v8;
      *a4 = *(_DWORD *)(*(_QWORD *)v6 + 16LL);
    }
    else
    {
      WdLogSingleEntry1(1LL, v6);
      WdLogGlobalForLineNumber = 62;
      DxgkLogInternalTriageEvent(v9, 0x40000LL);
    }
  }
}
