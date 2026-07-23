/*
 * XREFs of ?KiInitializeScb@@YAXPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@1K@Z @ 0x14045CEDC
 * Callers:
 *     KeInsertSchedulingGroup @ 0x14045CB04 (KeInsertSchedulingGroup.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall KiInitializeScb(
        struct _KSCB *a1,
        struct _KSCHEDULING_GROUP *a2,
        struct _KSCHEDULING_GROUP *a3,
        unsigned int a4)
{
  unsigned __int8 v4; // di
  _KSCB *v7; // rsi
  _LIST_ENTRY *ReadyListHead; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rax

  v4 = 0;
  if ( a3 )
    v7 = &a3->PerProcessor[a4];
  else
    v7 = 0LL;
  memset_0(a1, 0, sizeof(struct _KSCB));
  ReadyListHead = a1->ReadyListHead;
  v9 = 16LL;
  do
  {
    ReadyListHead->Blink = ReadyListHead;
    ReadyListHead->Flink = ReadyListHead;
    ++ReadyListHead;
    --v9;
  }
  while ( v9 );
  v10 = KiCycleDivisorShortTerm;
  a1->MinQuotaCycleTarget = KiCycleDivisorShortTerm;
  a1->MaxQuotaCycleTarget = v10;
  a1->ChildScbQueue.Root = 0LL;
  a1->ChildScbQueue.Min = 0LL;
  a1->OwningProcessorIndex = a4;
  if ( v7 )
  {
    a1->Parent = v7;
    a1->Root = v7->Root;
    v4 = v7->Depth + 1;
  }
  else
  {
    a1->Parent = 0LL;
    a1->Root = a1;
  }
  a1->Depth = v4;
}
