/*
 * XREFs of wil::details::lambda_call__lambda_4ad8e298f3ae73e5f189321865e7eb90___::_lambda_call__lambda_4ad8e298f3ae73e5f189321865e7eb90___ @ 0x14003E310
 * Callers:
 *     _CConnectionNode::CreateConnection_::_1_::dtor$0 @ 0x1400923CE (_CConnectionNode--CreateConnection_--_1_--dtor$0.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000CD4C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x14000CD90 (-AERTFree@@YAXPEAX0@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_4ad8e298f3ae73e5f189321865e7eb90___::_lambda_call__lambda_4ad8e298f3ae73e5f189321865e7eb90___(
        _BYTE *a1)
{
  void *v2; // rax
  int v3; // r8d

  if ( a1[8] )
  {
    a1[8] = 0;
    v2 = (void *)AERTGetDLLRTHeap();
    AERTFree(*(void **)(*(_QWORD *)a1 + 104LL), v2, v3);
    *(_QWORD *)(*(_QWORD *)a1 + 104LL) = 0LL;
  }
}
