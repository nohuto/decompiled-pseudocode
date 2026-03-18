/*
 * XREFs of ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x140050598
 * Callers:
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009C6F8 (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 * Callees:
 *     ?PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z @ 0x140008C68 (-PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x140009F2C (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z @ 0x14000A180 (-UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z.c)
 *     ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x14000A454 (-PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     ?GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z @ 0x14004C7C0 (-GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z.c)
 *     ?Remove@CFlipQueuedObject@@QEAAXXZ @ 0x140052688 (-Remove@CFlipQueuedObject@@QEAAXXZ.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009C454 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x14009CEA8 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14009CF6C (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     wil::details::lambda_call__lambda_88f3ed85026e62755ea077db9998d4dd___::reset @ 0x14009D134 (wil--details--lambda_call__lambda_88f3ed85026e62755ea077db9998d4dd___--reset.c)
 *     ?Create@CFlipManagerSignal@@SAJ_K_NPEAUFlipManagerTokenIFlipInfo@@PEAPEAV1@@Z @ 0x14009D2C0 (-Create@CFlipManagerSignal@@SAJ_K_NPEAUFlipManagerTokenIFlipInfo@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
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
  __int64 v15; // r8
  __int64 v16; // r9
  struct CFlipManagerSignal *v17; // rbx
  int v18; // eax
  void (__fastcall *v19)(_QWORD, unsigned __int64); // rbx
  unsigned int TracingId; // eax
  _QWORD v21[2]; // [rsp+20h] [rbp-38h] BYREF
  char v22; // [rsp+30h] [rbp-28h]
  struct CFlipManagerSignal *v23; // [rsp+60h] [rbp+8h] BYREF

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
      v21[0] = this;
      v21[1] = UpdateForPresentId;
      v22 = 1;
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
      wil::details::lambda_call__lambda_88f3ed85026e62755ea077db9998d4dd___::reset(v21);
      v23 = 0LL;
      v14 = CFlipManagerSignal::Create(i, a3 != 1, 0LL, &v23);
      if ( v14 < 0 )
      {
LABEL_14:
        CFlipManager::MarkAsLost(this, (unsigned int)v14, 19LL);
LABEL_15:
        wil::details::lambda_call__lambda_88f3ed85026e62755ea077db9998d4dd___::reset(v21);
        return;
      }
      v17 = v23;
      v18 = CEndpointResourceStateManager::PrepareBufferSignals((CFlipManager *)((char *)this + 104), v23, v15, v16);
      if ( v18 < 0 )
      {
        CFlipManager::MarkAsLost(this, (unsigned int)v18, 19LL);
        if ( v17 )
          (**(void (__fastcall ***)(struct CFlipManagerSignal *, __int64))v17)(v17, 1LL);
        goto LABEL_15;
      }
      CFlipManager::ProcessSignal(this, v17, 0xFFFFFFFFFFFFFFFFuLL, 0);
      v14 = CFlipManager::PostFlipManagerPresentStatusStatistics((__int64)this, i, 0LL, v8);
      if ( v14 < 0 )
        goto LABEL_14;
      v19 = *(void (__fastcall **)(_QWORD, unsigned __int64))(DxgkGetWin32kImportTable() + 200);
      TracingId = CFlipManager::GetTracingId(this);
      v19(TracingId, i);
      wil::details::lambda_call__lambda_88f3ed85026e62755ea077db9998d4dd___::reset(v21);
    }
    CFlipManager::MarkAsLost(this, 3221225473LL, 17LL);
  }
}
