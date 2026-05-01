/*
 * XREFs of ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180007490
 * Callers:
 *     ?EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x180007750 (-EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ.c)
 * Callees:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180007650 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 */

void __fastcall wil::details_abi::SubscriptionList::SubscribeUnderLock(
        wil::details_abi::SubscriptionList *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  rsize_t v4; // rdi
  __int64 v7; // r10
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r11
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  void *v14; // rcx
  __int64 v15; // rax
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v16; // r8
  __int64 v17; // rax
  _QWORD Source[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  *a2 = 0LL;
  v7 = *((_QWORD *)this + 5);
  v9 = 0LL;
  v10 = *((_QWORD *)this + 6) - v7;
  v11 = 0LL;
  while ( v9 < v10 >> 4 )
  {
    v16 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)(v9 + 1);
    if ( !*(_QWORD *)(v11 + v7) )
    {
      v17 = 2 * v9;
      *(_QWORD *)(v7 + 8 * v17) = a3;
      *(_QWORD *)(v7 + 8 * v17 + 8) = a4;
      *a2 = v16;
      return;
    }
    ++v9;
    v11 += 16LL;
  }
  v12 = *((_QWORD *)this + 7) - v7;
  Source[0] = a3;
  Source[1] = a4;
  if ( v10 + 16 < v12 )
    goto LABEL_7;
  v13 = 16LL;
  if ( 2 * v12 > 0x10 )
    v13 = 2 * v12;
  if ( wil::details_abi::heap_buffer::reserve((wil::details_abi::SubscriptionList *)((char *)this + 40), v13) )
  {
LABEL_7:
    v14 = (void *)*((_QWORD *)this + 6);
    if ( (unsigned __int64)v14 < *((_QWORD *)this + 7) )
      v4 = *((_QWORD *)this + 7) - (_QWORD)v14;
    memcpy_s(v14, v4, Source, 0x10uLL);
    v15 = *((_QWORD *)this + 6) + 16LL;
    *((_QWORD *)this + 6) = v15;
    *a2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((unsigned __int64)(v15 - *((_QWORD *)this + 5)) >> 4);
  }
}
