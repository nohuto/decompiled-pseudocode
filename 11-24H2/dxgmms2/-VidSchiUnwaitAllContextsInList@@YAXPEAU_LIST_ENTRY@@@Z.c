/*
 * XREFs of ?VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z @ 0x14001BCCC
 * Callers:
 *     VidSchiUnwaitAllContexts @ 0x1400500E0 (VidSchiUnwaitAllContexts.c)
 * Callees:
 *     VidSchiUnwaitContext @ 0x14001B8CC (VidSchiUnwaitContext.c)
 */

void __fastcall VidSchiUnwaitAllContextsInList(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // rcx

  while ( 1 )
  {
    Flink = a1->Flink;
    if ( a1->Flink == a1 )
      break;
    LODWORD(Flink[11].Flink) = 0;
    VidSchiUnwaitContext((__int64)&Flink[-1].Blink, 0x7691u);
  }
}
