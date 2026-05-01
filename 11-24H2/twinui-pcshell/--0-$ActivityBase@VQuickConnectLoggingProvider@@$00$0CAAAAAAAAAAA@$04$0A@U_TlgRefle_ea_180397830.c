/*
 * XREFs of ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180397830
 * Callers:
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x18039825C (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 *     ?Split@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA?AV12@XZ @ 0x18039AD90 (-Split@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA-AV12@XZ.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18003F64C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??4?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180397EB0 (--4-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  char *v2; // rbx
  _QWORD *v5; // rcx

  v2 = (char *)a1 + 8;
  *(_QWORD *)a1 = &wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *((_DWORD *)a1 + 2) = 0;
  v5 = (_QWORD *)((char *)a1 + 88);
  v2[4] = 0;
  *((_DWORD *)v2 + 10) = 0;
  *((_QWORD *)v2 + 6) = 0LL;
  *((_QWORD *)v2 + 7) = 0LL;
  v2[64] = 0;
  *((_DWORD *)v2 + 18) = 0;
  v5[19] = 0LL;
  v5[20] = 0LL;
  memset_0(v5, 0, 0x98uLL);
  *((_DWORD *)v2 + 62) = 1;
  *((_QWORD *)v2 + 32) = 0LL;
  *((_QWORD *)a1 + 34) = v2;
  *((_QWORD *)a1 + 35) = 0LL;
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 288),
    a1,
    0LL,
    0);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
    a1,
    a2);
  return a1;
}
