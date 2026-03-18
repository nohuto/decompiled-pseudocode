/*
 * XREFs of VidSchiProcessIsrNativeFenceSignaled @ 0x140052784
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x140006B60 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x140056040 (memmove.c)
 */

PSLIST_ENTRY __fastcall VidSchiProcessIsrNativeFenceSignaled(__int64 a1, __int64 a2)
{
  union _SLIST_HEADER *v2; // rbp
  PSLIST_ENTRY v5; // rax
  PSLIST_ENTRY v6; // rbx
  __int64 v7; // rax
  __int64 v9; // rcx

  v2 = *(union _SLIST_HEADER **)(a2 + 24);
  v5 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a2 + 3088));
  v6 = v5;
  if ( v5 )
  {
    v5[2].Next = (struct _SLIST_ENTRY *)a2;
    LODWORD(v5->Next) = 19;
    v5[7].Next = *(struct _SLIST_ENTRY **)(a1 + 32);
    v7 = *(unsigned int *)(a1 + 16);
    *((_DWORD *)&v6[2].Next + 2) = v7;
    if ( (_DWORD)v7 )
    {
      if ( (unsigned int)v7 <= 8 )
        memmove(&v6[3], *(const void **)(a1 + 24), 8 * v7);
      else
        *((_DWORD *)&v6[2].Next + 2) = 0;
    }
    return ExpInterlockedPushEntrySList(v2 + 127, v6 + 1);
  }
  else
  {
    WdLogSingleEntry1(1LL, *(unsigned __int16 *)(a2 + 4));
    WdLogGlobalForLineNumber = 320;
    return (PSLIST_ENTRY)DxgkLogInternalTriageEvent(v9, 0x40000LL);
  }
}
