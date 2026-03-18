/*
 * XREFs of ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009EA58
 * Callers:
 *     ?FlipManagerConsumerImmediateTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009E3BC (-FlipManagerConsumerImmediateTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFl.c)
 * Callees:
 *     ?PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z @ 0x140018050 (-PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z.c)
 *     ?PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z @ 0x140018168 (-PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x140019460 (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z @ 0x140019644 (-ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z @ 0x1400196B4 (-UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z.c)
 *     ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x140019988 (-PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z @ 0x14004C270 (-GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z.c)
 *     ?FreeExpiredCancels@CFlipManager@@AEAAX_K@Z @ 0x14004F550 (-FreeExpiredCancels@CFlipManager@@AEAAX_K@Z.c)
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x140050018 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 *     ?IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z @ 0x140050248 (-IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCFlipManagerSignal@@U?$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@@details@wil@@QEAA@XZ @ 0x140050264 (--1-$out_param_t@V-$unique_ptr@VCFlipManagerSignal@@U-$default_delete@VCFlipManagerSignal@@@wist.c)
 *     ?reset@?$unique_ptr@VCFlipManagerSignal@@U?$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@QEAAXPEAVCFlipManagerSignal@@@Z @ 0x140050288 (-reset@-$unique_ptr@VCFlipManagerSignal@@U-$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@.c)
 *     ?IsPresentCanceled@CFlipManager@@AEAA_N_K@Z @ 0x140050BD0 (-IsPresentCanceled@CFlipManager@@AEAA_N_K@Z.c)
 *     ?SetFlipManagerObject@CFlipManagerSignal@@QEAAJPEAUFlipManagerObject@@@Z @ 0x1400523D8 (-SetFlipManagerObject@CFlipManagerSignal@@QEAAJPEAUFlipManagerObject@@@Z.c)
 *     ?reset@?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVIMonitorDriverInterface@DxgMonitor@@@Z @ 0x14005252C (-reset@-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U-$default_delete@VIMonitorDriverInterf.c)
 *     ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x14005F734 (-ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken.c)
 *     Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline @ 0x140099E40 (Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009E7B4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     _lambda_45b452eeef8f878a1390d07846441040_::operator() @ 0x14009E944 (_lambda_45b452eeef8f878a1390d07846441040_--operator().c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x14009F1E4 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14009F2A8 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     ?Create@CFlipManagerSignal@@SAJ_K_NPEAUFlipManagerTokenIFlipInfo@@PEAPEAV1@@Z @ 0x14009F620 (-Create@CFlipManagerSignal@@SAJ_K_NPEAUFlipManagerTokenIFlipInfo@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManager::ConsumerImmediateTokenCompleted(
        CFlipManager::PresentHistory **this,
        struct CFlipManagerToken *a2,
        struct CToken **a3,
        struct CFlipManagerSignal **a4)
{
  struct CToken **v4; // rdi
  struct FlipManagerTokenIFlipInfo *v7; // rbx
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
  unsigned __int64 v32; // rcx
  int v33; // ebx
  __int64 v34; // rdx
  CFlipManager *v35; // rcx
  NTSTATUS v36; // eax
  struct CFlipManagerSignal *v37; // rdx
  int v38; // ecx
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rbx
  void (__fastcall *v42)(_QWORD, __int64, _QWORD, _QWORD, __int64, _QWORD); // rsi
  unsigned int v43; // eax
  CFlipManagerSignal *v44; // [rsp+48h] [rbp-49h] BYREF
  struct CToken *v45; // [rsp+50h] [rbp-41h] BYREF
  struct _LIST_ENTRY v46; // [rsp+58h] [rbp-39h] BYREF
  struct CFlipPresentUpdate **v47[2]; // [rsp+68h] [rbp-29h] BYREF
  char v48; // [rsp+78h] [rbp-19h]
  struct CFlipPresentUpdate *UpdateForPresentId; // [rsp+80h] [rbp-11h] BYREF
  __int64 v50; // [rsp+88h] [rbp-9h]
  struct FlipManagerTokenIFlipInfo *v51; // [rsp+90h] [rbp-1h]
  CFlipManagerSignal **v52; // [rsp+98h] [rbp+7h] BYREF
  struct CFlipManagerSignal *v53; // [rsp+A0h] [rbp+Fh] BYREF
  char v54; // [rsp+A8h] [rbp+17h]
  unsigned int v55; // [rsp+F8h] [rbp+67h]

  v4 = a3;
  if ( !*((_BYTE *)this + 32) )
  {
    v7 = (struct FlipManagerTokenIFlipInfo *)*((_QWORD *)a2 + 10);
    v8 = 0LL;
    v45 = 0LL;
    v9 = 0;
    v44 = 0LL;
    v10 = 0LL;
    v51 = v7;
    v50 = 0LL;
    v55 = 0;
    if ( v7 )
    {
      v11 = *((_QWORD *)v7 + 13);
      v10 = *(_QWORD *)(v11 + 40);
      v12 = *(_DWORD *)(v11 + 48);
      v9 = *(_DWORD *)(v11 + 52) != 0;
      v50 = v10;
      v55 = v12;
    }
    UpdateForPresentId = CFlipManager::GetUpdateForPresentId((CFlipManager *)this, *((_QWORD *)a2 + 12));
    if ( !UpdateForPresentId )
    {
      CFlipManager::MarkAsLost(this, 3221225473LL, 17LL);
LABEL_68:
      wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(
        (__int64 (__fastcall ****)(_QWORD, __int64))&v44,
        0LL);
      wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
        (__int64 (__fastcall ****)(_QWORD, __int64))&v45,
        0LL);
      return;
    }
    v47[0] = this;
    v47[1] = &UpdateForPresentId;
    v48 = 1;
    if ( !v9 && CFlipManager::IsPresentCanceled((CFlipManager *)this, v13) )
    {
      Win32kImportTable = DxgkGetWin32kImportTable();
      v15 = *((_QWORD *)a2 + 12);
      v16 = *(void (__fastcall **)(_QWORD, __int64, __int64))(Win32kImportTable + 360);
      TracingId = CFlipManager::GetTracingId((CFlipManager *)this);
      v16(TracingId, v15, 2LL);
      v7 = v51;
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
      v48 = 0;
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
      v46.Blink = &v46;
      v46.Flink = &v46;
      updated = CFlipManager::ConsumerDwmProcessUpdateTokens(
                  (CFlipManager *)this,
                  (struct CFlipPropertySet **)UpdateForPresentId,
                  a2,
                  &v46);
      if ( updated < 0 )
      {
        v20 = (unsigned int)updated;
        goto LABEL_12;
      }
      if ( (unsigned int)Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline() )
      {
        Flink = v46.Flink;
        if ( v46.Flink != &v46 )
        {
          if ( !v4 )
            goto LABEL_36;
          v30 = v46.Flink->Flink;
          if ( v46.Flink->Blink != &v46 || v30->Blink != v46.Flink )
LABEL_41:
            __fastfail(3u);
          v46.Flink = v46.Flink->Flink;
          v30->Blink = &v46;
          wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
            (__int64 (__fastcall ****)(_QWORD, __int64))&v45,
            (__int64 (__fastcall ***)(_QWORD, __int64))&Flink[-1].Blink);
          v8 = v45;
          while ( 1 )
          {
            Flink = v46.Flink;
LABEL_36:
            if ( Flink == &v46 )
              break;
            if ( Flink->Blink != &v46 )
              goto LABEL_41;
            v31 = Flink->Flink;
            if ( Flink->Flink->Blink != Flink )
              goto LABEL_41;
            v46.Flink = Flink->Flink;
            v31->Blink = &v46;
            if ( Flink != (struct _LIST_ENTRY *)8 )
              ((void (__fastcall *)(struct _LIST_ENTRY **, __int64))Flink[-1].Blink->Flink)(&Flink[-1].Blink, 1LL);
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v24 = v46.Flink;
          if ( v46.Flink == &v46 )
            break;
          if ( v46.Flink->Blink != &v46 )
            goto LABEL_41;
          v25 = v46.Flink->Flink;
          if ( v46.Flink->Flink->Blink != v46.Flink )
            goto LABEL_41;
          v46.Flink = v46.Flink->Flink;
          v25->Blink = &v46;
          wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
            (__int64 (__fastcall ****)(_QWORD, __int64))&v45,
            (__int64 (__fastcall ***)(_QWORD, __int64))&v24[-1].Blink);
        }
        v8 = v45;
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
    v48 = 0;
    lambda_45b452eeef8f878a1390d07846441040_::operator()(v47);
    v32 = *((_QWORD *)a2 + 12);
    v52 = &v44;
    v53 = 0LL;
    v54 = 1;
    v33 = CFlipManagerSignal::Create(v32, v9 != 1, v7, &v53);
    wil::details::out_param_t<wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>>::~out_param_t<wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>>((__int64)&v52);
    if ( v33 < 0 )
    {
      v34 = (unsigned int)v33;
LABEL_45:
      v35 = (CFlipManager *)this;
LABEL_46:
      CFlipManager::MarkAsLost(v35, v34, 19LL);
      if ( !v48 )
        goto LABEL_68;
      v48 = 0;
LABEL_67:
      lambda_45b452eeef8f878a1390d07846441040_::operator()(v47);
      goto LABEL_68;
    }
    v36 = CEndpointResourceStateManager::PrepareBufferSignals((CEndpointResourceStateManager *)(this + 13), v44);
    if ( v36 < 0 )
    {
LABEL_49:
      v34 = (unsigned int)v36;
      goto LABEL_45;
    }
    if ( v8 )
    {
      v36 = CFlipManagerSignal::SetFlipManagerObject(v44, *((struct FlipManagerObject **)a2 + 11));
      if ( v36 < 0 )
        goto LABEL_49;
    }
    else
    {
      v37 = v44;
      v44 = 0LL;
      CFlipManager::ProcessSignal((CFlipManager *)this, v37, 0xFFFFFFFFFFFFFFFFuLL, 0);
    }
    if ( v9 )
      v38 = 3;
    else
      v38 = v10 == 0;
    v39 = CFlipManager::PostFlipManagerPresentStatusStatistics((__int64)this, *((_QWORD *)a2 + 12), 0LL, v38);
    v35 = (CFlipManager *)this;
    if ( v39 >= 0 )
    {
      CFlipManager::FreeExpiredCancels((CFlipManager *)this, *((_QWORD *)a2 + 12));
      v40 = DxgkGetWin32kImportTable();
      v41 = *((_QWORD *)a2 + 12);
      LOBYTE(v27) = v8 != 0LL;
      v42 = *(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64, _QWORD))(v40 + 192);
      v43 = CFlipManager::GetTracingId((CFlipManager *)this);
      v42(v43, v41, v27, v9, v50, v55);
      if ( v51 )
        CFlipManager::PostFlipManagerIFlipFrameStatistics((CFlipManager *)this, a2);
      if ( a3 )
      {
        v45 = 0LL;
        *a3 = v8;
      }
      if ( a4 )
      {
        *a4 = v44;
        v44 = 0LL;
      }
      if ( !v48 )
        goto LABEL_68;
      v48 = 0;
      goto LABEL_67;
    }
    v34 = (unsigned int)v39;
    goto LABEL_46;
  }
}
