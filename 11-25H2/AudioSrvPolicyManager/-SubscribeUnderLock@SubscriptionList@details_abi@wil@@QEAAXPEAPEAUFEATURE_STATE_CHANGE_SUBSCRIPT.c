/*
 * XREFs of ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180025DF4
 * Callers:
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x180025CF8 (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180026410 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180026A2C (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 */

void __fastcall wil::details_abi::SubscriptionList::SubscribeUnderLock(
        wil::details_abi::SubscriptionList *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  wil::details_abi::heap_buffer *v4; // rbx
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v9; // r8
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v10; // rdx
  __int64 v11; // rax
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  *a2 = 0LL;
  v4 = (wil::details_abi::SubscriptionList *)((char *)this + 40);
  v5 = *((_QWORD *)this + 5);
  v6 = 0LL;
  v9 = 0LL;
  while ( v6 < (unsigned __int64)(*((_QWORD *)v4 + 1) - v5) >> 4 )
  {
    v10 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)(v6 + 1);
    if ( !*(_QWORD *)(v9 + v5) )
    {
      v11 = 2 * v6;
      *(_QWORD *)(v5 + 8 * v11) = a3;
      *(_QWORD *)(v5 + 8 * v11 + 8) = a4;
      *a2 = v10;
      return;
    }
    ++v6;
    v9 += 16LL;
  }
  v12[0] = a3;
  v12[1] = a4;
  if ( wil::details_abi::heap_buffer::push_back(v4, v12, 0x10uLL) )
    *a2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((*((_QWORD *)v4 + 1) - *(_QWORD *)v4) >> 4);
}
