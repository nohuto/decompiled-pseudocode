/*
 * XREFs of ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009C6F8
 * Callers:
 *     ?FlipManagerConsumerImmediateTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009C05C (-FlipManagerConsumerImmediateTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFl.c)
 * Callees:
 *     ?PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z @ 0x140008B50 (-PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z.c)
 *     ?PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z @ 0x140008C68 (-PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x140009F2C (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z @ 0x14000A110 (-ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z @ 0x14000A180 (-UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z.c)
 *     ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x14000A454 (-PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     ?GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z @ 0x14004C7C0 (-GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z.c)
 *     ?FreeExpiredCancels@CFlipManager@@AEAAX_K@Z @ 0x14004FAD0 (-FreeExpiredCancels@CFlipManager@@AEAAX_K@Z.c)
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x140050598 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 *     ?IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z @ 0x1400507C8 (-IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCFlipManagerSignal@@U?$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@@details@wil@@QEAA@XZ @ 0x1400507E4 (--1-$out_param_t@V-$unique_ptr@VCFlipManagerSignal@@U-$default_delete@VCFlipManagerSignal@@@wist.c)
 *     ?reset@?$unique_ptr@VCFlipManagerSignal@@U?$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@QEAAXPEAVCFlipManagerSignal@@@Z @ 0x140050808 (-reset@-$unique_ptr@VCFlipManagerSignal@@U-$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@.c)
 *     ?IsPresentCanceled@CFlipManager@@AEAA_N_K@Z @ 0x140051160 (-IsPresentCanceled@CFlipManager@@AEAA_N_K@Z.c)
 *     ?SetFlipManagerObject@CFlipManagerSignal@@QEAAJPEAUFlipManagerObject@@@Z @ 0x140052728 (-SetFlipManagerObject@CFlipManagerSignal@@QEAAJPEAUFlipManagerObject@@@Z.c)
 *     ?reset@?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVIMonitorDriverInterface@DxgMonitor@@@Z @ 0x14005287C (-reset@-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U-$default_delete@VIMonitorDriverInterf.c)
 *     ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x14005EE88 (-ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken.c)
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x140073484 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline @ 0x140097BC0 (Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009C454 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     _lambda_45b452eeef8f878a1390d07846441040_::operator() @ 0x14009C5E4 (_lambda_45b452eeef8f878a1390d07846441040_--operator().c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x14009CEA8 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14009CF6C (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     ?Create@CFlipManagerSignal@@SAJ_K_NPEAUFlipManagerTokenIFlipInfo@@PEAPEAV1@@Z @ 0x14009D2C0 (-Create@CFlipManagerSignal@@SAJ_K_NPEAUFlipManagerTokenIFlipInfo@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManager::ConsumerImmediateTokenCompleted(
        CFlipManager::PresentHistory **this,
        struct CFlipManagerToken *a2,
        struct CToken **a3,
        struct CFlipManagerSignal **a4)
{
  struct CToken **v4; // rdi
  __int64 v7; // rbx
  struct CToken *v8; // r12
  unsigned __int8 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned __int64 v13; // rdx
  __int64 Win32kImportTable; // rax
  __int64 v15; // rbx
  void (__fastcall *v16)(_QWORD, __int64, __int64); // rdi
  unsigned int TracingId; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  struct CFlipPresentUpdate *v19; // rcx
  __int64 v20; // rdx
  CFlipManager *v21; // rcx
  int v22; // eax
  int updated; // eax
  struct _LIST_ENTRY *v24; // rdx
  struct _LIST_ENTRY *v25; // rax
  CFlipManager::PresentHistory *v26; // rcx
  unsigned int v27; // edi
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v30; // rcx
  struct _LIST_ENTRY *v31; // rcx
  int v32; // eax
  int v33; // ebx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  CFlipManager *v37; // rcx
  int v38; // eax
  struct CFlipManagerSignal *v39; // rdx
  int v40; // ecx
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rbx
  void (__fastcall *v44)(_QWORD, __int64, _QWORD, _QWORD, __int64, _QWORD); // rsi
  unsigned int v45; // eax
  CFlipManagerSignal *v46; // [rsp+48h] [rbp-49h] BYREF
  struct CToken *v47; // [rsp+50h] [rbp-41h] BYREF
  struct _LIST_ENTRY v48; // [rsp+58h] [rbp-39h] BYREF
  struct CFlipPresentUpdate **v49[2]; // [rsp+68h] [rbp-29h] BYREF
  char v50; // [rsp+78h] [rbp-19h]
  struct CFlipPresentUpdate *UpdateForPresentId; // [rsp+80h] [rbp-11h] BYREF
  __int64 v52; // [rsp+88h] [rbp-9h]
  __int64 v53; // [rsp+90h] [rbp-1h]
  CFlipManagerSignal **v54; // [rsp+98h] [rbp+7h] BYREF
  struct CFlipManagerSignal *v55; // [rsp+A0h] [rbp+Fh] BYREF
  char v56; // [rsp+A8h] [rbp+17h]
  unsigned int v57; // [rsp+F8h] [rbp+67h]

  v4 = a3;
  if ( !*((_BYTE *)this + 32) )
  {
    v7 = *((_QWORD *)a2 + 10);
    v8 = 0LL;
    v47 = 0LL;
    v9 = 0;
    v46 = 0LL;
    v10 = 0LL;
    v53 = v7;
    v52 = 0LL;
    v57 = 0;
    if ( v7 )
    {
      v11 = *(_QWORD *)(v7 + 104);
      v10 = *(_QWORD *)(v11 + 40);
      v12 = *(_DWORD *)(v11 + 48);
      v9 = *(_DWORD *)(v11 + 52) != 0;
      v52 = v10;
      v57 = v12;
    }
    UpdateForPresentId = CFlipManager::GetUpdateForPresentId((CFlipManager *)this, *((_QWORD *)a2 + 12));
    if ( !UpdateForPresentId )
    {
      CFlipManager::MarkAsLost(this, 3221225473LL, 17LL);
LABEL_68:
      wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(
        (__int64 (__fastcall ****)(_QWORD, __int64))&v46,
        0LL);
      wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
        (__int64 (__fastcall ****)(_QWORD, __int64))&v47,
        0LL);
      return;
    }
    v49[0] = this;
    v49[1] = &UpdateForPresentId;
    v50 = 1;
    if ( !v9 && CFlipManager::IsPresentCanceled((CFlipManager *)this, v13) )
    {
      Win32kImportTable = DxgkGetWin32kImportTable();
      v15 = *((_QWORD *)a2 + 12);
      v16 = *(void (__fastcall **)(_QWORD, __int64, __int64))(Win32kImportTable + 360);
      TracingId = CFlipManager::GetTracingId((CFlipManager *)this);
      v16(TracingId, v15, 2LL);
      v7 = v53;
      v4 = a3;
    }
    IsEnabledDeviceUsageNoInline = Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline();
    v19 = UpdateForPresentId;
    if ( (!IsEnabledDeviceUsageNoInline || v7)
      && !CEndpointResourceStateManager::IsSimpleUpdatePresent(UpdateForPresentId) )
    {
      v20 = 3221225473LL;
LABEL_12:
      v21 = (CFlipManager *)this;
LABEL_13:
      CFlipManager::MarkAsLost(v21, v20, 19LL);
LABEL_14:
      v50 = 0;
      goto LABEL_67;
    }
    CFlipManager::PurgeSkippedTokens((CFlipManager *)this, *((_QWORD *)v19 + 8), v9);
    if ( *((_BYTE *)this + 32) )
      goto LABEL_14;
    if ( v9 )
    {
      v27 = 0;
    }
    else
    {
      v22 = CFlipManager::ApplyUpdateToConsumer((CFlipManager *)this, UpdateForPresentId);
      v21 = (CFlipManager *)this;
      if ( v22 < 0 )
      {
        v20 = (unsigned int)v22;
        goto LABEL_13;
      }
      v48.Blink = &v48;
      v48.Flink = &v48;
      updated = CFlipManager::ConsumerDwmProcessUpdateTokens(
                  (CFlipManager *)this,
                  (struct CFlipPropertySet **)UpdateForPresentId,
                  a2,
                  &v48);
      if ( updated < 0 )
      {
        v20 = (unsigned int)updated;
        goto LABEL_12;
      }
      if ( (unsigned int)Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline() )
      {
        Flink = v48.Flink;
        if ( v48.Flink != &v48 )
        {
          if ( !v4 )
            goto LABEL_36;
          v30 = v48.Flink->Flink;
          if ( v48.Flink->Blink != &v48 || v30->Blink != v48.Flink )
LABEL_41:
            __fastfail(3u);
          v48.Flink = v48.Flink->Flink;
          v30->Blink = &v48;
          wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
            (__int64 (__fastcall ****)(_QWORD, __int64))&v47,
            (__int64 (__fastcall ***)(_QWORD, __int64))&Flink[-1].Blink);
          v8 = v47;
          while ( 1 )
          {
            Flink = v48.Flink;
LABEL_36:
            if ( Flink == &v48 )
              break;
            if ( Flink->Blink != &v48 )
              goto LABEL_41;
            v31 = Flink->Flink;
            if ( Flink->Flink->Blink != Flink )
              goto LABEL_41;
            v48.Flink = Flink->Flink;
            v31->Blink = &v48;
            if ( Flink != (struct _LIST_ENTRY *)8 )
              ((void (__fastcall *)(struct _LIST_ENTRY **, __int64))Flink[-1].Blink->Flink)(&Flink[-1].Blink, 1LL);
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v24 = v48.Flink;
          if ( v48.Flink == &v48 )
            break;
          if ( v48.Flink->Blink != &v48 )
            goto LABEL_41;
          v25 = v48.Flink->Flink;
          if ( v48.Flink->Flink->Blink != v48.Flink )
            goto LABEL_41;
          v48.Flink = v48.Flink->Flink;
          v25->Blink = &v48;
          wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
            (__int64 (__fastcall ****)(_QWORD, __int64))&v47,
            (__int64 (__fastcall ***)(_QWORD, __int64))&v24[-1].Blink);
        }
        v8 = v47;
      }
      v26 = this[3];
      v27 = 0;
      if ( v26 )
      {
        NextEntry = CFlipManager::PresentHistory::GetNextEntry(v26);
        *((_QWORD *)NextEntry + 3) = *((_QWORD *)a2 + 14);
        *((_QWORD *)NextEntry + 2) = *((_QWORD *)a2 + 12);
        *((_DWORD *)NextEntry + 10) = 8;
      }
    }
    CFlipManager::UpdateNextConsumerPresentIdForUpdate((CFlipManager *)this, UpdateForPresentId, 0);
    v50 = 0;
    lambda_45b452eeef8f878a1390d07846441040_::operator()(v49);
    v55 = 0LL;
    v54 = &v46;
    v56 = 1;
    v32 = Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline();
    v33 = CFlipManagerSignal::Create(
            *((_QWORD *)a2 + 12),
            v9 != 1,
            (struct FlipManagerTokenIFlipInfo *)(v7 & -(__int64)(v32 != 0)),
            &v55);
    wil::details::out_param_t<wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>>::~out_param_t<wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>>((__int64)&v54);
    if ( v33 < 0 )
    {
      v36 = (unsigned int)v33;
LABEL_45:
      v37 = (CFlipManager *)this;
LABEL_46:
      CFlipManager::MarkAsLost(v37, v36, 19LL);
      if ( !v50 )
        goto LABEL_68;
      v50 = 0;
LABEL_67:
      lambda_45b452eeef8f878a1390d07846441040_::operator()(v49);
      goto LABEL_68;
    }
    v38 = CEndpointResourceStateManager::PrepareBufferSignals(
            (CEndpointResourceStateManager *)(this + 13),
            v46,
            v34,
            v35);
    if ( v38 < 0 )
    {
LABEL_49:
      v36 = (unsigned int)v38;
      goto LABEL_45;
    }
    if ( v8 )
    {
      v38 = CFlipManagerSignal::SetFlipManagerObject(v46, *((struct FlipManagerObject **)a2 + 11));
      if ( v38 < 0 )
        goto LABEL_49;
    }
    else
    {
      v39 = v46;
      v46 = 0LL;
      CFlipManager::ProcessSignal((CFlipManager *)this, v39, 0xFFFFFFFFFFFFFFFFuLL, 0);
    }
    if ( v9 )
      v40 = 3;
    else
      v40 = v10 == 0;
    v41 = CFlipManager::PostFlipManagerPresentStatusStatistics((__int64)this, *((_QWORD *)a2 + 12), 0LL, v40);
    v37 = (CFlipManager *)this;
    if ( v41 >= 0 )
    {
      CFlipManager::FreeExpiredCancels((CFlipManager *)this, *((_QWORD *)a2 + 12));
      v42 = DxgkGetWin32kImportTable();
      v43 = *((_QWORD *)a2 + 12);
      LOBYTE(v27) = v8 != 0LL;
      v44 = *(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64, _QWORD))(v42 + 192);
      v45 = CFlipManager::GetTracingId((CFlipManager *)this);
      v44(v45, v43, v27, v9, v52, v57);
      if ( v53 )
        CFlipManager::PostFlipManagerIFlipFrameStatistics((CFlipManager *)this, a2);
      if ( a3 )
      {
        v47 = 0LL;
        *a3 = v8;
      }
      if ( a4 )
      {
        *a4 = v46;
        v46 = 0LL;
      }
      if ( !v50 )
        goto LABEL_68;
      v50 = 0;
      goto LABEL_67;
    }
    v36 = (unsigned int)v41;
    goto LABEL_46;
  }
}
