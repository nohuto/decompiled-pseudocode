/*
 * XREFs of ??1?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180010C14
 * Callers:
 *     ?reset@?$shared_object@V?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18000AC3C (-reset@-$shared_object@V-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180010BD4 (--1-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18000A18C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

__int64 __fastcall wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  void *v3; // rbx
  HANDLE ProcessHeap; // rax

  wil::details::shared_buffer::reset((volatile signed __int32 **)(a1 + 232));
  if ( *(_BYTE *)(a1 + 64) )
  {
    v3 = *(void **)(a1 + 56);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v3);
    *(_BYTE *)(a1 + 64) = 0;
  }
  *(_QWORD *)(a1 + 56) = 0LL;
  return _TlgActivityBase<wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>,0,5>::~_TlgActivityBase<wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>,0,5>(a1);
}
