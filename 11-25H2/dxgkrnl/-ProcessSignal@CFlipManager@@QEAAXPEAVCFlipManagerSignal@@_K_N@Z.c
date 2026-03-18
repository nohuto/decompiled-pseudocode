/*
 * XREFs of ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14009CF6C
 * Callers:
 *     ?FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x140024F78 (-FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x140049C48 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x140050598 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009C6F8 (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 * Callees:
 *     ?ServiceBufferSignals@CFlipManagerSignal@@QEAAXXZ @ 0x140008878 (-ServiceBufferSignals@CFlipManagerSignal@@QEAAXXZ.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x140009F2C (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x140078D98 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009C454 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14009CBD4 (-IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManager::ProcessSignal(
        CFlipManager::PresentHistory **this,
        CFlipManager::PresentHistory **a2,
        __int64 a3,
        char a4)
{
  unsigned __int64 v4; // r14
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 Win32kImportTable; // rax
  CFlipManager::PresentHistory *v15; // rbx
  void (__fastcall *v16)(_QWORD, CFlipManager::PresentHistory *); // rdi
  unsigned int TracingId; // eax
  CFlipManager::PresentHistory *v18; // rdx
  _QWORD **v19; // rbx
  _QWORD *v20; // rcx
  _QWORD *v21; // rdi
  _QWORD *i; // rcx
  __int64 v23; // rax
  unsigned __int64 *v24; // rax
  CFlipManager::PresentHistory *v25; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax

  v4 = (unsigned __int64)(a2 + 1);
  v9 = (_QWORD *)((unsigned __int64)(a2 + 1) & -(__int64)(a2 != 0LL));
  v10 = *v9;
  if ( *(_QWORD **)(*v9 + 8LL) != v9 )
    goto LABEL_22;
  v11 = (_QWORD *)v9[1];
  if ( (_QWORD *)*v11 != v9 )
    goto LABEL_22;
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  v12 = (_QWORD *)(v4 & -(__int64)(a2 != 0LL));
  v12[1] = v12;
  *v12 = v12;
  CFlipManagerSignal::ServiceBufferSignals((CFlipManagerSignal *)a2);
  IsEnabledDeviceUsageNoInline = Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline();
  if ( this[38] && (!IsEnabledDeviceUsageNoInline || !*((_BYTE *)this + 32)) )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    v15 = a2[7];
    v16 = *(void (__fastcall **)(_QWORD, CFlipManager::PresentHistory *))(Win32kImportTable + 208);
    TracingId = CFlipManager::GetTracingId((CFlipManager *)this);
    v16(TracingId, v15);
    v18 = a2[7];
    v19 = (_QWORD **)(this + 26);
    if ( v18 == this[33] )
    {
      CFlipManager::IssueAndFreeSignal((CFlipManager *)this, (struct CFlipManagerSignal *)a2, a3, a4);
      v20 = *v19;
      if ( *v19 != v19 )
      {
        do
        {
          v21 = (_QWORD *)*v20;
          if ( *(CFlipManager::PresentHistory **)(((unsigned __int64)(v20 - 1) & -(__int64)(v20 != 0LL)) + 0x38) != this[33] )
            break;
          CFlipManager::IssueAndFreeSignal(
            (CFlipManager *)this,
            (struct CFlipManagerSignal *)((unsigned __int64)(v20 - 1) & -(__int64)(v20 != 0LL)),
            a3,
            a4);
          v20 = v21;
        }
        while ( v21 != v19 );
      }
      return;
    }
    for ( i = *v19; i != v19; i = (_QWORD *)*i )
    {
      v23 = (__int64)(i + 6);
      if ( !i )
        v23 = 56LL;
      if ( (unsigned __int64)v18 < *(_QWORD *)v23 )
        break;
    }
    v24 = (unsigned __int64 *)i[1];
    if ( (_QWORD *)*v24 == i )
    {
      *(_QWORD *)v4 = i;
      *(_QWORD *)(v4 + 8) = v24;
      *v24 = v4;
      i[1] = v4;
      v25 = this[3];
      if ( v25 )
      {
        NextEntry = CFlipManager::PresentHistory::GetNextEntry(v25);
        *(_QWORD *)NextEntry = a3;
        *((_QWORD *)NextEntry + 2) = a2[7];
        *((_DWORD *)NextEntry + 10) = 15;
      }
      return;
    }
LABEL_22:
    __fastfail(3u);
  }
  if ( a2 )
    (*(void (__fastcall **)(CFlipManager::PresentHistory **, __int64))*a2)(a2, 1LL);
}
