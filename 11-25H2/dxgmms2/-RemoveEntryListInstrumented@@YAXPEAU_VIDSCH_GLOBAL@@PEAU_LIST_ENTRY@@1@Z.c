/*
 * XREFs of ?RemoveEntryListInstrumented@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_LIST_ENTRY@@1@Z @ 0x140038ACC
 * Callers:
 *     VidSchiUnwaitWaitQueuePacket @ 0x14002FA0C (VidSchiUnwaitWaitQueuePacket.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall RemoveEntryListInstrumented(KSPIN_LOCK *a1, struct _LIST_ENTRY *a2, struct _LIST_ENTRY *a3)
{
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v8; // rcx
  struct _LIST_ENTRY *v9; // rax

  if ( KeTestSpinLock(a1 + 248) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 61440LL, a1, 0LL, 0LL);
    WdLogGlobalForLineNumber = 906;
    JUMPOUT(0x140038CC5LL);
  }
  if ( *((_BYTE *)a1 + 7059) )
  {
    *((LARGE_INTEGER *)&a2[-29] + 7 * LODWORD(a2[-2].Blink) - 1) = KeQueryPerformanceCounter(0LL);
    *((_DWORD *)&a2[-29].Flink + 14 * LODWORD(a2[-2].Blink)) = a2[-45].Flink;
    RtlCaptureStackBackTrace(1u, 5u, (PVOID *)&a2[-28] + 7 * LODWORD(a2[-2].Blink) - 1, 0LL);
    LODWORD(a2[-2].Blink) = ((unsigned __int8)LODWORD(a2[-2].Blink) + 1) & 7;
  }
  Flink = a2->Flink;
  if ( a2->Flink->Blink != a2 )
    goto LABEL_16;
  Blink = a2->Blink;
  if ( Blink->Flink != a2 )
    goto LABEL_16;
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  a2->Flink = 0LL;
  a2->Blink = 0LL;
  v8 = a3->Flink;
  if ( !a3->Flink )
    goto LABEL_14;
  if ( v8->Blink != a3 || (v9 = a3->Blink, v9->Flink != a3) )
LABEL_16:
    __fastfail(3u);
  v9->Flink = v8;
  v8->Blink = v9;
  v8 = 0LL;
  a3->Flink = 0LL;
  a3->Blink = 0LL;
  if ( a2->Flink )
    goto LABEL_13;
  while ( a2->Blink || v8 || a3->Blink )
  {
LABEL_13:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 61440LL, a1, 0LL, 0LL);
    WdLogGlobalForLineNumber = 906;
LABEL_14:
    if ( LODWORD(a2[-1].Blink[3].Flink) == 4 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 61440LL, a1, 0LL, 0LL);
      WdLogGlobalForLineNumber = 906;
      goto LABEL_16;
    }
  }
}
