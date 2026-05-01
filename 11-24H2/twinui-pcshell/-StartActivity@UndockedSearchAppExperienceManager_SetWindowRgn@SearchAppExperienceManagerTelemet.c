/*
 * XREFs of ?StartActivity@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAAXAEBUtagRECT@@00@Z @ 0x1800CDDD4
 * Callers:
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180246938 (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@A.c)
 * Callees:
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180024560 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800824C8 (-Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444444@Z @ 0x1800CC788 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@.c)
 *     ?zInternalStart@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800CDF54 (-zInternalStart@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::StartActivity(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  __int64 v8; // rcx
  const struct _tlgProvider_t *v9; // rdi
  LONG top; // ecx
  LONG bottom; // r10d
  LONG right; // r8d
  LONG v13; // eax
  LONG v14; // ecx
  LONG v15; // eax
  LONG v16; // ecx
  DWORD CurrentThreadId; // eax
  const GUID *v18; // rax
  LONG v19; // [rsp+98h] [rbp+7h] BYREF
  LONG v20; // [rsp+9Ch] [rbp+Bh] BYREF
  LONG v21; // [rsp+A0h] [rbp+Fh] BYREF
  LONG v22; // [rsp+A4h] [rbp+13h] BYREF
  LONG v23; // [rsp+A8h] [rbp+17h] BYREF
  LONG v24; // [rsp+ACh] [rbp+1Bh] BYREF
  LONG left; // [rsp+B0h] [rbp+1Fh] BYREF
  LONG v26; // [rsp+B4h] [rbp+23h] BYREF
  LONG v27; // [rsp+B8h] [rbp+27h] BYREF
  LONG v28; // [rsp+BCh] [rbp+2Bh] BYREF
  LONG v29; // [rsp+C0h] [rbp+2Fh] BYREF
  DWORD v30; // [rsp+C4h] [rbp+33h] BYREF
  __int64 v31; // [rsp+C8h] [rbp+37h] BYREF
  LONG v32; // [rsp+F8h] [rbp+67h] BYREF

  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v9 = SearchAppLauncherLogging::Provider(v8);
  if ( *(_DWORD *)v9 > 5u )
  {
    top = a4->top;
    bottom = a4->bottom;
    right = a4->right;
    v23 = a3->right;
    v24 = a3->top;
    left = a3->left;
    v26 = a2->bottom;
    v27 = a2->right;
    v13 = a2->top;
    v20 = top;
    v14 = a4->left;
    v28 = v13;
    v15 = a2->left;
    v21 = v14;
    v16 = a3->bottom;
    v29 = v15;
    v32 = bottom;
    v19 = right;
    v22 = v16;
    CurrentThreadId = GetCurrentThreadId();
    v31 = 0x1000000LL;
    v30 = CurrentThreadId;
    v18 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v9,
      byte_1807F2355,
      (const GUID *)(*((_QWORD *)this + 34) + 8LL),
      v18,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&left,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v32);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
