/*
 * XREFs of InkProcessorOnPointerMessagePosted @ 0x140198A20
 * Callers:
 *     <none>
 * Callees:
 *     ?OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z @ 0x140198A64 (-OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z.c)
 */

void __fastcall InkProcessorOnPointerMessagePosted(__int64 a1, unsigned __int64 a2)
{
  unsigned int v3; // edi
  InkProcessor *v4; // rcx

  v3 = a1;
  v4 = *(InkProcessor **)(W32GetUserSessionState(a1, a2) + 3280);
  if ( v4 )
    InkProcessor::OnPointerMessagePosted(v4, v3, a2);
}
