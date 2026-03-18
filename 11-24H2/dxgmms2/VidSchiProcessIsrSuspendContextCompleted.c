/*
 * XREFs of VidSchiProcessIsrSuspendContextCompleted @ 0x1400417B8
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x140006B60 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiProcessIsrSuspendContextCompleted(union _SLIST_HEADER *a1, __int64 a2)
{
  struct _SLIST_ENTRY *v4; // rbp
  __int64 result; // rax
  struct _SLIST_ENTRY *Next; // rbx
  PSLIST_ENTRY v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx

  v4 = *(struct _SLIST_ENTRY **)(*(_QWORD *)(a2 + 8) + 8LL);
  result = a1[40].Region;
  Next = v4[1].Next;
  if ( !_bittest64((const signed __int64 *)result, WORD2(Next->Next)) )
  {
    result = LODWORD(Next[1].Next);
    if ( (_DWORD)result != 1 )
    {
      if ( LODWORD(Next[1].Next) == 2 )
      {
        v9 = WORD2(Next->Next);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 16LL, a1, v9, 0LL);
        WdLogGlobalForLineNumber = 906;
        JUMPOUT(0x1400418E8LL);
      }
      v7 = ExpInterlockedPopEntrySList((PSLIST_HEADER)&Next[833]);
      if ( v7 )
      {
        v7[2].Next = v4;
        *((_QWORD *)&v7[2].Next + 1) = *(_QWORD *)(a2 + 16);
        LODWORD(v7->Next) = 17;
        return (__int64)ExpInterlockedPushEntrySList(a1 + 127, v7 + 1);
      }
      else
      {
        WdLogSingleEntry1(1LL, WORD2(Next->Next));
        WdLogGlobalForLineNumber = 460;
        return DxgkLogInternalTriageEvent(v8, 0x40000LL);
      }
    }
  }
  return result;
}
