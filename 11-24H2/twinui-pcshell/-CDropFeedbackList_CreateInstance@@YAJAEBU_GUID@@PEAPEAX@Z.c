/*
 * XREFs of ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18053E154
 * Callers:
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18052AA04 (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?InitDropFeedback@WindowArrangementView@@AEAAJPEAUIUnknown@@@Z @ 0x18052BADC (-InitDropFeedback@WindowArrangementView@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@Z @ 0x18052DFD0 (-UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@.c)
 *     ?InitDropFeedback@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x18052F8D0 (-InitDropFeedback@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDropFeedbackFlags@@@Z @ 0x180530BA8 (-UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDrop.c)
 *     ?RuntimeClassInitialize@CDropFeedback@@QEAAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@@Z @ 0x18053F9B0 (-RuntimeClassInitialize@CDropFeedback@@QEAAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCDropFeedbackList@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCDropFeedbackList@@@Z @ 0x18053DCB8 (--$MakeAndInitialize@VCDropFeedbackList@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCDropFeedbackLi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropFeedbackList_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v8)(_QWORD, GUID *, void **); // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v8);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<CDropFeedbackList,CDropFeedbackList,>(&v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 338LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dropfeedbacklist.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_6;
  }
  v3 = (**v8)(v8, &GUID_9c2220eb_4f22_455a_bd5e_e940c9eed36c, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 339LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v8);
  return v4;
}
