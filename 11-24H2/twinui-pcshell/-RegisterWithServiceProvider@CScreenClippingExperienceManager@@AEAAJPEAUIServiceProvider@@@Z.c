/*
 * XREFs of ?RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1800782A4
 * Callers:
 *     ?RuntimeClassInitialize@CScreenClippingExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1802B8304 (-RuntimeClassInitialize@CScreenClippingExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180025298 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterForViewPresentationMediator@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1800778D8 (-RegisterForViewPresentationMediator@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@@012@@Z @ 0x1800785EC (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-.c)
 *     ?RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ @ 0x180078610 (-RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800B40C4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RegisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1800F12F8 (-RegisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?RegisterForPackageUpdatesWNF@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801C28D8 (-RegisterForPackageUpdatesWNF@CScreenClippingExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::RegisterWithServiceProvider(
        CScreenClippingExperienceManager *this,
        struct IServiceProvider *a2)
{
  const struct _tlgProvider_t *v4; // rax
  int v5; // edi
  __int64 v6; // rdx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = SingleViewExperienceLogging::Provider((__int64)this);
  if ( *(_DWORD *)v4 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v4,
      &unk_1807EFFCE,
      0LL);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 33, (__int64)a2);
  if ( !*((_QWORD *)this + 38) )
  {
    v5 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>();
    if ( v5 < 0 )
    {
      v6 = 739LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  v5 = CScreenClippingExperienceManager::RegisterForViewExperience(this);
  if ( v5 < 0 )
  {
    v6 = 742LL;
    goto LABEL_6;
  }
  v5 = CScreenClippingExperienceManager::RegisterForViewPresentationMediator(this);
  if ( v5 < 0 )
  {
    v6 = 743LL;
    goto LABEL_6;
  }
  v5 = CScreenClippingExperienceManager::RegisterForPackageUpdatesWNF(this);
  if ( v5 < 0 )
  {
    v6 = 744LL;
    goto LABEL_6;
  }
  v8 = CScreenClippingExperienceManager::RegisterForHotKeyHandling(this);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2E9,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
  return 0LL;
}
