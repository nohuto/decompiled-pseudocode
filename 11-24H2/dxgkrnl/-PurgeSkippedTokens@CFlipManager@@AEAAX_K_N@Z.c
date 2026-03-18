/*
 * XREFs of ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x140050018
 * Callers:
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009EA58 (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 * Callees:
 *     ?PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z @ 0x140018168 (-PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x140019460 (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z @ 0x1400196B4 (-UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z.c)
 *     ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x140019988 (-PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z @ 0x14004C270 (-GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z.c)
 *     ?Remove@CFlipQueuedObject@@QEAAXXZ @ 0x140052338 (-Remove@CFlipQueuedObject@@QEAAXXZ.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009E7B4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x14009F1E4 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14009F2A8 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     wil::details::lambda_call__lambda_88f3ed85026e62755ea077db9998d4dd___::reset @ 0x14009F4B4 (wil--details--lambda_call__lambda_88f3ed85026e62755ea077db9998d4dd___--reset.c)
 *     ?Create@CFlipManagerSignal@@SAJ_K_NPEAUFlipManagerTokenIFlipInfo@@PEAPEAV1@@Z @ 0x14009F620 (-Create@CFlipManagerSignal@@SAJ_K_NPEAUFlipManagerTokenIFlipInfo@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManager::PurgeSkippedTokens(CFlipManager *this, unsigned __int64 a2, unsigned __int8 a3)
{
  char *v3; // rax
  char *v7; // rcx
  int v8; // ebp
  unsigned __int64 i; // rsi
  struct CFlipPresentUpdate *UpdateForPresentId; // rax
  struct CFlipPresentUpdate *v11; // rbx
  CFlipManager::PresentHistory *v12; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax
  int v14; // eax
  struct CFlipManagerSignal *v15; // rbx
  int v16; // eax
  void (__fastcall *v17)(_QWORD, unsigned __int64); // rbx
  unsigned int TracingId; // eax
  _QWORD v19[2]; // [rsp+20h] [rbp-38h] BYREF
  char v20; // [rsp+30h] [rbp-28h]
  struct CFlipManagerSignal *v21; // [rsp+60h] [rbp+8h] BYREF

  v3 = (char *)this + 152;
  v7 = (char *)*((_QWORD *)this + 19);
  if ( v7 != v3 )
  {
    v8 = 2 * a3 + 1;
    for ( i = *(_QWORD *)(((unsigned __int64)(v7 - 24) & -(__int64)(v7 != 0LL)) + 0x40); ; ++i )
    {
      if ( i >= a2 )
        return;
      UpdateForPresentId = CFlipManager::GetUpdateForPresentId(this, i);
      v11 = UpdateForPresentId;
      if ( !UpdateForPresentId )
        break;
      v19[0] = this;
      v19[1] = UpdateForPresentId;
      v20 = 1;
      CFlipQueuedObject::Remove((struct CFlipPresentUpdate *)((char *)UpdateForPresentId + 16));
      *((_DWORD *)v11 + 22) = v8;
      v12 = (CFlipManager::PresentHistory *)*((_QWORD *)this + 3);
      if ( v12 )
      {
        NextEntry = CFlipManager::PresentHistory::GetNextEntry(v12);
        *((_QWORD *)NextEntry + 3) = *((_QWORD *)v11 + 10);
        *((_QWORD *)NextEntry + 2) = i;
        *((_DWORD *)NextEntry + 10) = 9;
      }
      CFlipManager::UpdateNextConsumerPresentIdForUpdate(this, v11, 3u);
      wil::details::lambda_call__lambda_88f3ed85026e62755ea077db9998d4dd___::reset(v19);
      v21 = 0LL;
      v14 = CFlipManagerSignal::Create(i, a3 != 1, 0LL, &v21);
      if ( v14 < 0 )
      {
LABEL_14:
        CFlipManager::MarkAsLost(this, (unsigned int)v14, 19LL);
LABEL_15:
        wil::details::lambda_call__lambda_88f3ed85026e62755ea077db9998d4dd___::reset(v19);
        return;
      }
      v15 = v21;
      v16 = CEndpointResourceStateManager::PrepareBufferSignals((CFlipManager *)((char *)this + 104), v21);
      if ( v16 < 0 )
      {
        CFlipManager::MarkAsLost(this, (unsigned int)v16, 19LL);
        if ( v15 )
          (**(void (__fastcall ***)(struct CFlipManagerSignal *, __int64))v15)(v15, 1LL);
        goto LABEL_15;
      }
      CFlipManager::ProcessSignal(this, v15, 0xFFFFFFFFFFFFFFFFuLL, 0);
      v14 = CFlipManager::PostFlipManagerPresentStatusStatistics((__int64)this, i, 0LL, v8);
      if ( v14 < 0 )
        goto LABEL_14;
      v17 = *(void (__fastcall **)(_QWORD, unsigned __int64))(DxgkGetWin32kImportTable() + 200);
      TracingId = CFlipManager::GetTracingId(this);
      v17(TracingId, i);
      wil::details::lambda_call__lambda_88f3ed85026e62755ea077db9998d4dd___::reset(v19);
    }
    CFlipManager::MarkAsLost(this, 3221225473LL, 17LL);
  }
}
