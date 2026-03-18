/*
 * XREFs of ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x140049338
 * Callers:
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z @ 0x1400490A8 (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z.c)
 * Callees:
 *     ?PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z @ 0x140018168 (-PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x140018E68 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z @ 0x140019644 (-ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z @ 0x1400196B4 (-UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z.c)
 *     ?UnlockAndRelease@CFlipManagerToken@@QEAAXXZ @ 0x14001A8F8 (-UnlockAndRelease@CFlipManagerToken@@QEAAXXZ.c)
 *     ?LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z @ 0x14001A928 (-LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?AddTokenToFrame@CCompositionFrame@@QEAAXPEAVCToken@@@Z @ 0x14003DA50 (-AddTokenToFrame@CCompositionFrame@@QEAAXPEAVCToken@@@Z.c)
 *     ?GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z @ 0x14004C270 (-GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z.c)
 *     ?FreeExpiredCancels@CFlipManager@@AEAAX_K@Z @ 0x14004F550 (-FreeExpiredCancels@CFlipManager@@AEAAX_K@Z.c)
 *     ?IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z @ 0x140050248 (-IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z.c)
 *     ?IsPresentCanceled@CFlipManager@@AEAA_N_K@Z @ 0x140050BD0 (-IsPresentCanceled@CFlipManager@@AEAA_N_K@Z.c)
 *     ?AddFlipManagerSignal@CCompositionFrame@@QEAAXPEAVCFlipManagerSignal@@@Z @ 0x140050C1C (-AddFlipManagerSignal@CCompositionFrame@@QEAAXPEAVCFlipManagerSignal@@@Z.c)
 *     ?Remove@CFlipQueuedObject@@QEAAXXZ @ 0x140052338 (-Remove@CFlipQueuedObject@@QEAAXXZ.c)
 *     ?SetFlipManagerObject@CFlipManagerSignal@@QEAAJPEAUFlipManagerObject@@@Z @ 0x1400523D8 (-SetFlipManagerObject@CFlipManagerSignal@@QEAAJPEAUFlipManagerObject@@@Z.c)
 *     ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x14005F734 (-ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken.c)
 *     ?GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x140063850 (-GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009E7B4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x14009F1E4 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14009F2A8 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     ?Create@CFlipManagerSignal@@SAJ_K_NPEAUFlipManagerTokenIFlipInfo@@PEAPEAV1@@Z @ 0x14009F620 (-Create@CFlipManagerSignal@@SAJ_K_NPEAUFlipManagerTokenIFlipInfo@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
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
  int v28; // eax
  CFlipManager *v29; // rcx
  struct CFlipManagerSignal *v30; // rdi
  int updated; // eax
  CFlipManager *v32; // rcx
  CCompositionFrame *v33; // rbx
  char v34; // r8
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v36; // rax
  void (__fastcall *v37)(_QWORD, unsigned __int64); // rbx
  unsigned int v38; // eax
  unsigned __int64 v39; // rax
  void (__fastcall *v40)(_QWORD, unsigned __int64); // rbx
  unsigned int v41; // eax
  void (__fastcall *v42)(_QWORD, CCompositionFrame *); // rbx
  unsigned int v43; // eax
  char **v44; // rdx
  PVOID *v45; // rax
  unsigned __int64 v46; // [rsp+20h] [rbp-28h]
  struct _LIST_ENTRY v47; // [rsp+28h] [rbp-20h] BYREF
  struct CFlipManagerSignal *v48; // [rsp+90h] [rbp+48h] BYREF
  CFlipManagerToken *v49; // [rsp+98h] [rbp+50h] BYREF
  CCompositionFrame *v50; // [rsp+A0h] [rbp+58h] BYREF
  struct CFlipPresentUpdate **v51; // [rsp+A8h] [rbp+60h]

  v51 = a4;
  v50 = a3;
  v46 = *((_QWORD *)a3 + 7);
  v7 = 0;
  v49 = 0LL;
  if ( !*((_BYTE *)this + 32) && *((_QWORD *)this + 5) )
  {
    FlipManagerTokenObject::LockForWrite(Object, &v49);
    (*(void (__fastcall **)(struct CCompositionFrame *))(*(_QWORD *)a3 + 72LL))(a3);
    v8 = *((_QWORD *)v49 + 12);
    v48 = (struct CFlipManagerSignal *)*((_QWORD *)v49 + 14);
    v9 = *(void (__fastcall **)(_QWORD, __int64))(DxgkGetWin32kImportTable() + 112);
    v10 = *((_QWORD *)v49 + 12);
    TracingId = CFlipManager::GetTracingId(this);
    v9(TracingId, v10);
    if ( v8 < *((_QWORD *)this + 31) )
    {
LABEL_40:
      v40 = *(void (__fastcall **)(_QWORD, unsigned __int64))(DxgkGetWin32kImportTable() + 120);
      v41 = CFlipManager::GetTracingId(this);
      v40(v41, v8);
      CFlipManagerToken::UnlockAndRelease(v49);
      goto LABEL_42;
    }
    UpdateForPresentId = CFlipManager::GetUpdateForPresentId(this, v8);
    v14 = UpdateForPresentId;
    if ( !UpdateForPresentId )
    {
      CFlipManager::MarkAsLost(this, 3221225473LL, 17LL);
      goto LABEL_40;
    }
    if ( v13 == v8 && CFlipManager::IsPresentCanceled(this, *((_QWORD *)UpdateForPresentId + 8)) )
    {
      if ( CEndpointResourceStateManager::IsSimpleUpdatePresent(v14) )
      {
        v17 = *((_QWORD *)v49 + 10);
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
    v20 = *((_QWORD *)v49 + 13);
    if ( v20
      && (v21 = *(unsigned int (__fastcall **)(__int64, __int64))(DxgkGetWin32kImportTable() + 72),
          v22 = (*(__int64 (__fastcall **)(CCompositionFrame *))(*(_QWORD *)v50 + 72LL))(v50),
          v21(v22, v20))
      || v7 != 3 && *((_QWORD *)this + 31) != v8
      || (unsigned __int64)v48 > v46 )
    {
      v23 = *(void (__fastcall **)(_QWORD, unsigned __int64))(DxgkGetWin32kImportTable() + 120);
      v24 = CFlipManager::GetTracingId(this);
      v23(v24, v8);
      CFlipManagerToken::UnlockAndRelease(v49);
      return;
    }
    CFlipQueuedObject::Remove((struct CFlipPresentUpdate *)((char *)v14 + 16));
    *((_DWORD *)v14 + 22) = v7;
    v25 = *(void (__fastcall **)(_QWORD, __int64))(DxgkGetWin32kImportTable() + 168);
    v26 = --*((_QWORD *)this + 21);
    v27 = CFlipManager::GetTracingId(this);
    v25(v27, v26);
    v48 = 0LL;
    v28 = CFlipManagerSignal::Create(v8, v7 == 0, *((struct FlipManagerTokenIFlipInfo **)v49 + 10), &v48);
    if ( v28 < 0 )
    {
      CFlipManager::MarkAsLost(this, (unsigned int)v28, 19LL);
LABEL_39:
      CFlipManager::ReleaseKernelPresentUpdateReferences(v29, v14);
      *v51 = v14;
      goto LABEL_40;
    }
    v30 = v48;
    updated = CEndpointResourceStateManager::PrepareBufferSignals((CFlipManager *)((char *)this + 104), v48);
    v32 = this;
    if ( updated < 0 )
    {
LABEL_23:
      CFlipManager::MarkAsLost(v32, (unsigned int)updated, 19LL);
      if ( v30 )
        (**(void (__fastcall ***)(struct CFlipManagerSignal *, __int64))v30)(v30, 1LL);
      goto LABEL_39;
    }
    CFlipManager::UpdateNextConsumerPresentIdForUpdate(this, v14, 2u);
    LOBYTE(v48) = 0;
    if ( v7 )
      goto LABEL_37;
    updated = CFlipManager::ApplyUpdateToConsumer(this, v14);
    v32 = this;
    if ( updated < 0 )
      goto LABEL_23;
    v47.Blink = &v47;
    v47.Flink = &v47;
    updated = CFlipManager::ConsumerDwmProcessUpdateTokens(this, v14, v49, &v47);
    if ( updated < 0 )
      goto LABEL_28;
    v33 = v50;
    v34 = (char)v48;
    while ( 1 )
    {
      Flink = v47.Flink;
      if ( v47.Flink == &v47 )
        break;
      if ( v47.Flink->Blink != &v47 )
        goto LABEL_45;
      v36 = v47.Flink->Flink;
      if ( v47.Flink->Flink->Blink != v47.Flink )
        goto LABEL_45;
      v47.Flink = v47.Flink->Flink;
      v36->Blink = &v47;
      CCompositionFrame::AddTokenToFrame(v33, (struct CToken *)&Flink[-1].Blink);
    }
    if ( !v34 )
    {
LABEL_37:
      v37 = *(void (__fastcall **)(_QWORD, unsigned __int64))(DxgkGetWin32kImportTable() + 304);
      v38 = CFlipManager::GetTracingId(this);
      v37(v38, v8);
      v39 = (*(__int64 (__fastcall **)(CCompositionFrame *))(*(_QWORD *)v50 + 72LL))(v50);
      CFlipManager::ProcessSignal(this, v30, v39, 0);
    }
    else
    {
      updated = CFlipManagerSignal::SetFlipManagerObject(v30, (CFlipManager *)((char *)this - 32));
      if ( updated < 0 )
      {
LABEL_28:
        v32 = this;
        goto LABEL_23;
      }
      CCompositionFrame::AddFlipManagerSignal(v33, v30);
    }
    CFlipManager::FreeExpiredCancels(this, v8);
    goto LABEL_39;
  }
  v50 = 0LL;
  FlipManagerTokenObject::GetPresentId((FlipManagerTokenObject *)Object, (unsigned __int64 *)&v50);
  v42 = *(void (__fastcall **)(_QWORD, CCompositionFrame *))(DxgkGetWin32kImportTable() + 376);
  v43 = CFlipManager::GetTracingId(this);
  v42(v43, v50);
LABEL_42:
  v44 = (char **)*((_QWORD *)Object + 6);
  if ( v44[1] != Object + 48 || (v45 = (PVOID *)*((_QWORD *)Object + 7), *v45 != Object + 48) )
LABEL_45:
    __fastfail(3u);
  *v45 = v44;
  v44[1] = (char *)v45;
  ObfDereferenceObject(Object);
}
