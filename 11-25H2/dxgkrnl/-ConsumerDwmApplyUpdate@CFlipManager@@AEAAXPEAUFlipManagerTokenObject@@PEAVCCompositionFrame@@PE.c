/*
 * XREFs of ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x140049C48
 * Callers:
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z @ 0x1400499B8 (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z.c)
 * Callees:
 *     ?PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z @ 0x140008C68 (-PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x140009934 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z @ 0x14000A110 (-ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z @ 0x14000A180 (-UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z.c)
 *     ?UnlockAndRelease@CFlipManagerToken@@QEAAXXZ @ 0x14000B3C8 (-UnlockAndRelease@CFlipManagerToken@@QEAAXXZ.c)
 *     ?LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z @ 0x14000B3F8 (-LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     ?AddTokenToFrame@CCompositionFrame@@QEAAXPEAVCToken@@@Z @ 0x14003E090 (-AddTokenToFrame@CCompositionFrame@@QEAAXPEAVCToken@@@Z.c)
 *     ?GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z @ 0x14004C7C0 (-GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z.c)
 *     ?FreeExpiredCancels@CFlipManager@@AEAAX_K@Z @ 0x14004FAD0 (-FreeExpiredCancels@CFlipManager@@AEAAX_K@Z.c)
 *     ?IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z @ 0x1400507C8 (-IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z.c)
 *     ?IsPresentCanceled@CFlipManager@@AEAA_N_K@Z @ 0x140051160 (-IsPresentCanceled@CFlipManager@@AEAA_N_K@Z.c)
 *     ?AddFlipManagerSignal@CCompositionFrame@@QEAAXPEAVCFlipManagerSignal@@@Z @ 0x1400511AC (-AddFlipManagerSignal@CCompositionFrame@@QEAAXPEAVCFlipManagerSignal@@@Z.c)
 *     ?Remove@CFlipQueuedObject@@QEAAXXZ @ 0x140052688 (-Remove@CFlipQueuedObject@@QEAAXXZ.c)
 *     ?SetFlipManagerObject@CFlipManagerSignal@@QEAAJPEAUFlipManagerObject@@@Z @ 0x140052728 (-SetFlipManagerObject@CFlipManagerSignal@@QEAAJPEAUFlipManagerObject@@@Z.c)
 *     ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x14005EE88 (-ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken.c)
 *     ?GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x140062F60 (-GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z.c)
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x140073484 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009C454 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x14009CEA8 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14009CF6C (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     ?Create@CFlipManagerSignal@@SAJ_K_NPEAUFlipManagerTokenIFlipInfo@@PEAPEAV1@@Z @ 0x14009D2C0 (-Create@CFlipManagerSignal@@SAJ_K_NPEAUFlipManagerTokenIFlipInfo@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManager::ConsumerDwmApplyUpdate(
        CFlipManager *this,
        char *Object,
        struct CCompositionFrame *a3,
        struct CFlipPresentUpdate **a4)
{
  int v7; // r13d
  unsigned __int64 v8; // r12
  void (__fastcall *v9)(_QWORD, __int64); // rdi
  __int64 v10; // rbx
  unsigned int TracingId; // eax
  struct CFlipPresentUpdate *UpdateForPresentId; // rax
  __int64 v13; // r10
  struct CFlipPresentUpdate *v14; // r15
  void (__fastcall *v15)(_QWORD, unsigned __int64, _QWORD); // rbx
  unsigned int v16; // eax
  __int64 v17; // rcx
  void (__fastcall *v18)(_QWORD, unsigned __int64, __int64); // rbx
  unsigned int v19; // eax
  __int64 v20; // rdi
  unsigned int (__fastcall *v21)(__int64, __int64); // rbx
  __int64 v22; // rax
  void (__fastcall *v23)(_QWORD, unsigned __int64); // rbx
  unsigned int v24; // eax
  void (__fastcall *v25)(_QWORD, __int64); // rdi
  __int64 v26; // rbx
  unsigned int v27; // eax
  bool v28; // zf
  bool v29; // bl
  struct FlipManagerTokenIFlipInfo *v30; // r8
  int v31; // eax
  __int64 v32; // r8
  __int64 v33; // r9
  CFlipManager *v34; // rcx
  struct CFlipManagerSignal *v35; // rdi
  int updated; // eax
  CFlipManager *v37; // rcx
  CCompositionFrame *v38; // rbx
  char v39; // r8
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v41; // rax
  void (__fastcall *v42)(_QWORD, unsigned __int64); // rbx
  unsigned int v43; // eax
  unsigned __int64 v44; // rax
  void (__fastcall *v45)(_QWORD, unsigned __int64); // rbx
  unsigned int v46; // eax
  void (__fastcall *v47)(_QWORD, CCompositionFrame *); // rbx
  unsigned int v48; // eax
  char **v49; // rdx
  PVOID *v50; // rax
  unsigned __int64 v51; // [rsp+20h] [rbp-28h]
  struct _LIST_ENTRY v52; // [rsp+28h] [rbp-20h] BYREF
  struct CFlipManagerSignal *v53; // [rsp+90h] [rbp+48h] BYREF
  CFlipManagerToken *v54; // [rsp+98h] [rbp+50h] BYREF
  CCompositionFrame *v55; // [rsp+A0h] [rbp+58h] BYREF
  struct CFlipPresentUpdate **v56; // [rsp+A8h] [rbp+60h]

  v56 = a4;
  v55 = a3;
  v51 = *((_QWORD *)a3 + 7);
  v7 = 0;
  v54 = 0LL;
  if ( !*((_BYTE *)this + 32) && *((_QWORD *)this + 5) )
  {
    FlipManagerTokenObject::LockForWrite(Object, &v54);
    (*(void (__fastcall **)(struct CCompositionFrame *))(*(_QWORD *)a3 + 72LL))(a3);
    v8 = *((_QWORD *)v54 + 12);
    v53 = (struct CFlipManagerSignal *)*((_QWORD *)v54 + 14);
    v9 = *(void (__fastcall **)(_QWORD, __int64))(DxgkGetWin32kImportTable() + 112);
    v10 = *((_QWORD *)v54 + 12);
    TracingId = CFlipManager::GetTracingId(this);
    v9(TracingId, v10);
    if ( v8 < *((_QWORD *)this + 31) )
    {
LABEL_45:
      v45 = *(void (__fastcall **)(_QWORD, unsigned __int64))(DxgkGetWin32kImportTable() + 120);
      v46 = CFlipManager::GetTracingId(this);
      v45(v46, v8);
      CFlipManagerToken::UnlockAndRelease(v54);
      goto LABEL_47;
    }
    UpdateForPresentId = CFlipManager::GetUpdateForPresentId(this, v8);
    v14 = UpdateForPresentId;
    if ( !UpdateForPresentId )
    {
      CFlipManager::MarkAsLost(this, 3221225473LL, 17LL);
      goto LABEL_45;
    }
    if ( v13 == v8 && CFlipManager::IsPresentCanceled(this, *((_QWORD *)UpdateForPresentId + 8)) )
    {
      if ( CEndpointResourceStateManager::IsSimpleUpdatePresent(v14) )
      {
        v17 = *((_QWORD *)v54 + 10);
        if ( *(_BYTE *)(v17 + 86) || *(_BYTE *)(v17 + 84) )
        {
          v18 = *(void (__fastcall **)(_QWORD, unsigned __int64, __int64))(DxgkGetWin32kImportTable() + 360);
          v19 = CFlipManager::GetTracingId(this);
          v18(v19, v8, 1LL);
        }
        else
        {
          v7 = 3;
        }
      }
      else
      {
        v15 = *(void (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(DxgkGetWin32kImportTable() + 360);
        v16 = CFlipManager::GetTracingId(this);
        v15(v16, v8, 0LL);
      }
    }
    v20 = *((_QWORD *)v54 + 13);
    if ( v20
      && (v21 = *(unsigned int (__fastcall **)(__int64, __int64))(DxgkGetWin32kImportTable() + 72),
          v22 = (*(__int64 (__fastcall **)(CCompositionFrame *))(*(_QWORD *)v55 + 72LL))(v55),
          v21(v22, v20))
      || v7 != 3 && *((_QWORD *)this + 31) != v8
      || (unsigned __int64)v53 > v51 )
    {
      v23 = *(void (__fastcall **)(_QWORD, unsigned __int64))(DxgkGetWin32kImportTable() + 120);
      v24 = CFlipManager::GetTracingId(this);
      v23(v24, v8);
      CFlipManagerToken::UnlockAndRelease(v54);
      return;
    }
    CFlipQueuedObject::Remove((struct CFlipPresentUpdate *)((char *)v14 + 16));
    *((_DWORD *)v14 + 22) = v7;
    v25 = *(void (__fastcall **)(_QWORD, __int64))(DxgkGetWin32kImportTable() + 168);
    v26 = --*((_QWORD *)this + 21);
    v27 = CFlipManager::GetTracingId(this);
    v25(v27, v26);
    v28 = v7 == 0;
    if ( v7 )
      v28 = 0;
    v29 = v28;
    v53 = 0LL;
    if ( (unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline() )
      v30 = (struct FlipManagerTokenIFlipInfo *)*((_QWORD *)v54 + 10);
    else
      v30 = 0LL;
    v31 = CFlipManagerSignal::Create(v8, v29, v30, &v53);
    if ( v31 < 0 )
    {
      CFlipManager::MarkAsLost(this, (unsigned int)v31, 19LL);
LABEL_44:
      CFlipManager::ReleaseKernelPresentUpdateReferences(v34, v14);
      *v56 = v14;
      goto LABEL_45;
    }
    v35 = v53;
    updated = CEndpointResourceStateManager::PrepareBufferSignals((CFlipManager *)((char *)this + 104), v53, v32, v33);
    v37 = this;
    if ( updated < 0 )
    {
LABEL_28:
      CFlipManager::MarkAsLost(v37, (unsigned int)updated, 19LL);
      if ( v35 )
        (**(void (__fastcall ***)(struct CFlipManagerSignal *, __int64))v35)(v35, 1LL);
      goto LABEL_44;
    }
    CFlipManager::UpdateNextConsumerPresentIdForUpdate(this, v14, 2u);
    LOBYTE(v53) = 0;
    if ( v7 )
      goto LABEL_42;
    updated = CFlipManager::ApplyUpdateToConsumer(this, v14);
    v37 = this;
    if ( updated < 0 )
      goto LABEL_28;
    v52.Blink = &v52;
    v52.Flink = &v52;
    updated = CFlipManager::ConsumerDwmProcessUpdateTokens(this, v14, v54, &v52);
    if ( updated < 0 )
      goto LABEL_33;
    v38 = v55;
    v39 = (char)v53;
    while ( 1 )
    {
      Flink = v52.Flink;
      if ( v52.Flink == &v52 )
        break;
      if ( v52.Flink->Blink != &v52 )
        goto LABEL_50;
      v41 = v52.Flink->Flink;
      if ( v52.Flink->Flink->Blink != v52.Flink )
        goto LABEL_50;
      v52.Flink = v52.Flink->Flink;
      v41->Blink = &v52;
      CCompositionFrame::AddTokenToFrame(v38, (struct CToken *)&Flink[-1].Blink);
    }
    if ( !v39 )
    {
LABEL_42:
      v42 = *(void (__fastcall **)(_QWORD, unsigned __int64))(DxgkGetWin32kImportTable() + 304);
      v43 = CFlipManager::GetTracingId(this);
      v42(v43, v8);
      v44 = (*(__int64 (__fastcall **)(CCompositionFrame *))(*(_QWORD *)v55 + 72LL))(v55);
      CFlipManager::ProcessSignal(this, v35, v44, 0);
    }
    else
    {
      updated = CFlipManagerSignal::SetFlipManagerObject(v35, (CFlipManager *)((char *)this - 32));
      if ( updated < 0 )
      {
LABEL_33:
        v37 = this;
        goto LABEL_28;
      }
      CCompositionFrame::AddFlipManagerSignal(v38, v35);
    }
    CFlipManager::FreeExpiredCancels(this, v8);
    goto LABEL_44;
  }
  v55 = 0LL;
  FlipManagerTokenObject::GetPresentId((FlipManagerTokenObject *)Object, (unsigned __int64 *)&v55);
  v47 = *(void (__fastcall **)(_QWORD, CCompositionFrame *))(DxgkGetWin32kImportTable() + 376);
  v48 = CFlipManager::GetTracingId(this);
  v47(v48, v55);
LABEL_47:
  v49 = (char **)*((_QWORD *)Object + 6);
  if ( v49[1] != Object + 48 || (v50 = (PVOID *)*((_QWORD *)Object + 7), *v50 != Object + 48) )
LABEL_50:
    __fastfail(3u);
  *v50 = v49;
  v49[1] = (char *)v50;
  ObfDereferenceObject(Object);
}
