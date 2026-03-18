/*
 * XREFs of ?OnPointerMessagePosted@InkFeedbackServer@@QEAAXIPEBUtagPOINTER_INFO@@@Z @ 0x140198B1C
 * Callers:
 *     ?OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z @ 0x140198A64 (-OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall InkFeedbackServer::OnPointerMessagePosted(
        InkFeedbackServer **this,
        int a2,
        const struct tagPOINTER_INFO *a3)
{
  InkFeedbackServer *i; // rbx

  if ( a2 == 583 || a2 == 594 )
  {
    if ( a3 )
    {
      for ( i = *this; i != (InkFeedbackServer *)this; i = *(InkFeedbackServer **)i )
        (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)i - 1) + 16LL))((__int64)i - 8, *((unsigned int *)a3 + 1));
    }
  }
}
