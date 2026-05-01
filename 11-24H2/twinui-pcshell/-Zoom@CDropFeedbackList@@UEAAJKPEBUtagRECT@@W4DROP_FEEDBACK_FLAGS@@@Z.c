/*
 * XREFs of ?Zoom@CDropFeedbackList@@UEAAJKPEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z @ 0x18053EA00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_AddUpdate@CDropFeedbackList@@AEAAJPEAUIDropFeedbackItem@@@Z @ 0x18053EAB4 (-_AddUpdate@CDropFeedbackList@@AEAAJPEAUIDropFeedbackItem@@@Z.c)
 *     ?CDropFeedbackItem_CreateInstance@@YAJKW4DROP_FEEDBACK_ACTION@@PEAUIApplicationView@@W4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@3NW4DROP_FEEDBACK_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x180547B58 (-CDropFeedbackItem_CreateInstance@@YAJKW4DROP_FEEDBACK_ACTION@@PEAUIApplicationView@@W4DROP_FEED.c)
 */

__int64 __fastcall CDropFeedbackList::Zoom(CDropFeedbackList *a1, unsigned int a2)
{
  int Instance; // ebx
  struct IDropFeedbackItem *v6[2]; // [rsp+50h] [rbp-18h] BYREF

  v6[0] = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)v6);
  Instance = CDropFeedbackItem_CreateInstance(a2, 1LL, 0LL);
  if ( Instance >= 0 )
    Instance = CDropFeedbackList::_AddUpdate(a1, v6[0]);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)v6);
  return (unsigned int)Instance;
}
