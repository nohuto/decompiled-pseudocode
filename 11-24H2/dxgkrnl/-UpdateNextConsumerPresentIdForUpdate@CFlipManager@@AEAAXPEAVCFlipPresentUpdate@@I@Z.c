/*
 * XREFs of ?UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z @ 0x1400196B4
 * Callers:
 *     ?ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z @ 0x140019644 (-ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x140049338 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x140050018 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009EA58 (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009E7B4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManager::UpdateNextConsumerPresentIdForUpdate(
        CFlipManager *this,
        struct CFlipPresentUpdate *a2,
        unsigned int a3)
{
  unsigned __int64 v4; // rax
  __int64 Win32kImportTable; // rax
  __int64 v7; // rbx
  void (__fastcall *v8)(_QWORD, __int64, _QWORD); // rdi
  unsigned int TracingId; // eax

  v4 = *((_QWORD *)a2 + 8) + 1LL;
  if ( v4 > *((_QWORD *)this + 31) )
  {
    *((_QWORD *)this + 31) = v4;
    Win32kImportTable = DxgkGetWin32kImportTable();
    v7 = *((_QWORD *)this + 31);
    v8 = *(void (__fastcall **)(_QWORD, __int64, _QWORD))(Win32kImportTable + 368);
    TracingId = CFlipManager::GetTracingId(this);
    v8(TracingId, v7, a3);
  }
}
