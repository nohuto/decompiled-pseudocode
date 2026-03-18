/*
 * XREFs of VidSchiProcessIsrHwQueuePageFaulted @ 0x140052AB4
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x140006B60 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiProcessIsrHwQueuePageFaulted(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v4; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rcx
  PSLIST_ENTRY v12; // rax
  struct _SLIST_ENTRY v13; // xmm1
  __int64 v14; // rcx

  v2 = *(__int64 **)(a1 + 688);
  v4 = *(unsigned int *)(a2 + 44);
  v6 = *(unsigned int *)(a2 + 40);
  v7 = (unsigned int)v6 + *(unsigned __int8 *)(v4 + a1 + 88);
  v8 = (unsigned int)v7;
  if ( (unsigned int)v7 < *(_DWORD *)(a1 + 760) )
    v2 += v7;
  v9 = *v2;
  if ( (*(_DWORD *)(v9 + 12) & 2) == 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 13LL, 0LL, v6, v4);
    WdLogGlobalForLineNumber = 906;
  }
  result = *(_QWORD *)(a1 + 648);
  if ( !_bittest64((const signed __int64 *)result, v8) )
  {
    result = *(unsigned int *)(v9 + 16);
    if ( (_DWORD)result != 1 )
    {
      if ( *(_DWORD *)(v9 + 16) == 2 )
      {
        v11 = *(unsigned __int16 *)(v9 + 4);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 16LL, a1, v11, 0LL);
        WdLogGlobalForLineNumber = 906;
      }
      v12 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v9 + 11520));
      if ( v12 )
      {
        v12[2].Next = (struct _SLIST_ENTRY *)v9;
        *(PSLIST_ENTRY)((char *)v12 + 40) = *(PSLIST_ENTRY)(a2 + 8);
        *(PSLIST_ENTRY)((char *)v12 + 56) = *(PSLIST_ENTRY)(a2 + 24);
        *(PSLIST_ENTRY)((char *)v12 + 72) = *(PSLIST_ENTRY)(a2 + 40);
        v13 = *(struct _SLIST_ENTRY *)(a2 + 56);
        LODWORD(v12->Next) = 12;
        *(PSLIST_ENTRY)((char *)v12 + 88) = v13;
        return (__int64)ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 2032), v12 + 1);
      }
      else
      {
        WdLogSingleEntry1(1LL, *(unsigned __int16 *)(v9 + 4));
        WdLogGlobalForLineNumber = 525;
        return DxgkLogInternalTriageEvent(v14, 0x40000LL);
      }
    }
  }
  return result;
}
