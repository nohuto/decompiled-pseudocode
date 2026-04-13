/*
 * XREFs of ??0?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18005FE6C
 * Callers:
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x18006279C (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 *     _lambda_0d276c7ea3d710d19b822c1822ed0068_::operator() @ 0x18006D598 (_lambda_0d276c7ea3d710d19b822c1822ed0068_--operator().c)
 *     _lambda_1535a6ac74a46a99e57700c911cef706_::operator() @ 0x18006D72C (_lambda_1535a6ac74a46a99e57700c911cef706_--operator().c)
 *     _lambda_6ab1f6f5bfb1610cca41dbb66aaa8812_::operator() @ 0x18006DA4C (_lambda_6ab1f6f5bfb1610cca41dbb66aaa8812_--operator().c)
 *     _lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca_::operator() @ 0x18006DBE0 (_lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca_--operator().c)
 * Callees:
 *     memset_0 @ 0x180022931 (memset_0.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18004B258 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  char *v2; // rbx
  _QWORD *v4; // rcx

  v2 = (char *)a1 + 8;
  *(_QWORD *)a1 = &wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v4 = (_QWORD *)((char *)a1 + 88);
  *(_DWORD *)v2 = 0;
  v2[4] = 0;
  *((_DWORD *)v2 + 10) = 0;
  *((_QWORD *)v2 + 7) = 0LL;
  *((_QWORD *)v2 + 6) = a2;
  v2[64] = 0;
  *((_DWORD *)v2 + 18) = 0;
  v4[19] = 0LL;
  v4[20] = 0LL;
  memset_0(v4, 0, 0x98uLL);
  *((_DWORD *)v2 + 62) = 1;
  *((_QWORD *)v2 + 32) = 0LL;
  *((_QWORD *)a1 + 34) = v2;
  *((_QWORD *)a1 + 35) = 0LL;
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 288),
    a1,
    (struct wil::details::IFailureCallback *)((char *)a1 + 48),
    0);
  return a1;
}
