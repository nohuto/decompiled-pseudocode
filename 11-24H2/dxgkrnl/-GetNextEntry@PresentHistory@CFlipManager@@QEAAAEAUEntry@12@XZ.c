/*
 * XREFs of ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x140019460
 * Callers:
 *     ?ProcessPendingProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1400190D4 (-ProcessPendingProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x14001927C (-ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14001A590 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresen.c)
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z @ 0x1400490A8 (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z.c)
 *     ?ConsumerIFlipTokenSubmitted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@@Z @ 0x14004C54C (-ConsumerIFlipTokenSubmitted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@@Z.c)
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x140050018 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 *     ?PresentCancel@CFlipManager@@QEAAJ_K@Z @ 0x140064B74 (-PresentCancel@CFlipManager@@QEAAJ_K@Z.c)
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009EA58 (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 *     ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14009EF2C (-IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x14009F1E4 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14009F2A8 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 * Callees:
 *     memset @ 0x1400A2000 (memset.c)
 */

struct CFlipManager::PresentHistory::Entry *__fastcall CFlipManager::PresentHistory::GetNextEntry(
        CFlipManager::PresentHistory *this)
{
  __int64 v1; // rdx
  char *v2; // rbx
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  _OWORD v8[6]; // [rsp+20h] [rbp-68h] BYREF

  v1 = *(unsigned int *)this;
  v2 = (char *)this + 88 * v1;
  *(_DWORD *)this = (unsigned __int8)(v1 + 1);
  memset(v8, 0, 0x58uLL);
  v3 = v8[1];
  *(_OWORD *)(v2 + 8) = v8[0];
  v4 = v8[2];
  *(_OWORD *)(v2 + 24) = v3;
  v5 = v8[3];
  *(_OWORD *)(v2 + 40) = v4;
  v6 = v8[4];
  *(_OWORD *)(v2 + 56) = v5;
  *(_QWORD *)&v5 = *(_QWORD *)&v8[5];
  *(_OWORD *)(v2 + 72) = v6;
  *((_QWORD *)v2 + 11) = v5;
  RtlCaptureStackBackTrace(1u, 4u, (PVOID *)v2 + 7, 0LL);
  return (struct CFlipManager::PresentHistory::Entry *)(v2 + 8);
}
