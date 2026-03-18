/*
 * XREFs of ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C00393C0
 * Callers:
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C0038EF4 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 * Callees:
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C0039390 (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C00394B4 (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?IsPackedQueueRecalc@@YAHXZ @ 0x1C00394F8 (-IsPackedQueueRecalc@@YAHXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00B7028 (zzzEndDeferWinEventNotify.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzRecalc2(struct tagQ *a1)
{
  int v2; // r15d
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // r14
  struct _LIST_ENTRY *Flink; // rdi
  struct tagTHREADINFO *RecalcPtiFromListEntry; // rax
  struct tagQ **v6; // rbp
  _QWORD *i; // rbx
  struct tagQ **v8; // rsi
  __int64 v9; // rcx
  struct tagQ *v10; // rax
  char v11; // [rsp+58h] [rbp+10h] BYREF

  ++gdwDeferWinEvent;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v11);
  do
  {
    v2 = 0;
    RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
    Flink = RecalcHeadPtiListEntry->Flink;
    if ( RecalcHeadPtiListEntry->Flink == RecalcHeadPtiListEntry )
      break;
    do
    {
      RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(Flink);
      v6 = (struct tagQ **)RecalcPtiFromListEntry;
      if ( RecalcPtiFromListEntry && *((struct tagQ **)RecalcPtiFromListEntry + 82) == a1 )
      {
        for ( i = (_QWORD *)gpai; i; i = (_QWORD *)*i )
        {
          IsPackedQueueRecalc();
          v8 = (struct tagQ **)i[1];
          if ( v8 == v6 )
            goto LABEL_18;
          if ( (struct tagQ **)i[2] != v6 )
            continue;
          if ( v8 == v6 )
LABEL_18:
            v8 = (struct tagQ **)i[2];
          if ( v8[82] != a1 )
          {
            v10 = tagTHREADINFO::AssignAttachQueue((tagTHREADINFO *)v8, a1);
            if ( v10 )
              zzzDestroyQueue(v10, v8);
            v2 = 1;
          }
        }
      }
      Flink = Flink->Flink;
    }
    while ( Flink != RecalcHeadPtiListEntry );
  }
  while ( v2 );
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v11);
  zzzEndDeferWinEventNotify(v9);
}
