/*
 * XREFs of ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@PEAPEAUITargetedContentContainer@TargetedContent@Services@3@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@PEAPEAUITargetedContentContainer@TargetedContent@Services@4@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180066550
 * Callers:
 *     ?ActivateHelper@NotificationsTargetedContentClient@ToastNotification@@AEAAJPEBG0@Z @ 0x180067A44 (-ActivateHelper@NotificationsTargetedContentClient@ToastNotification@@AEAAJPEBG0@Z.c)
 *     ??$wait_for_completion@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@V?$ComPtr@UITargetedContentContainer@TargetedContent@Services@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UITargetedContentContainer@TargetedContent@Services@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x1800ABAB4 (--$wait_for_completion@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@V-$ComPtr@.c)
 * Callees:
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180066410 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer *> *,Windows::Services::TargetedContent::ITargetedContentContainer * *>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 a2,
        int a3)
{
  __int64 result; // rax

  result = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer *> *>(
             a1,
             a2,
             a3);
  if ( (int)result >= 0 )
    return ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*a1)[8])(a1, a2);
  return result;
}
