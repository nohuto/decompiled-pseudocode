/*
 * XREFs of ?TimerCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18011A950
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180074F3C (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800B51EC (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 */

void __fastcall CWorkFifo::TimerCallback(PTP_CALLBACK_INSTANCE Instance, _BYTE *Context, PTP_TIMER Timer)
{
  __int64 v3; // rdx

  Context[137] = 0;
  if ( !std::_Atomic_storage<bool,1>::load((__int64)(Context + 136)) )
  {
    if ( *(_QWORD *)(v3 + 128) )
      SubmitThreadpoolWork(*(PTP_WORK *)(v3 + 16));
    else
      wil::details::SetEvent(*(wil::details **)(v3 + 176), (void *)v3);
  }
}
