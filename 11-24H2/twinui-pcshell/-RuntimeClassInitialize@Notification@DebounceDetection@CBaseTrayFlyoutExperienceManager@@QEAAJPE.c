/*
 * XREFs of ?RuntimeClassInitialize@Notification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAJPEAV23@@Z @ 0x1803CBD98
 * Callers:
 *     ??$MakeAndInitialize@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@V123@PEAV23@@Details@WRL@Microsoft@@YAJPEAPEAVNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@$$QEAPEAV45@@Z @ 0x1803C74C4 (--$MakeAndInitialize@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@V123@PEAV.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification::RuntimeClassInitialize(
        CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification *this,
        struct CBaseTrayFlyoutExperienceManager::DebounceDetection *a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  LPVOID v7; // rbx
  __int64 (__fastcall *v8)(LPVOID, SID *, GUID *, __int64 *); // rdi
  __int64 *v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID ppv; // [rsp+60h] [rbp+18h] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  v4 = CoCreateInstance(
         &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
         0LL,
         0x404u,
         &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
         &ppv);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = ppv;
    v8 = *(__int64 (__fastcall **)(LPVOID, SID *, GUID *, __int64 *))(*(_QWORD *)ppv + 24LL);
    v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)this + 6);
    v4 = v8(v7, &SID_ImmersiveRawInputProvider, &GUID_c1235996_b084_4af2_8663_28f19352097e, v9);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification *, __int64, char *))(**((_QWORD **)this + 6) + 24LL))(
             *((_QWORD *)this + 6),
             this,
             1LL,
             (char *)this + 56);
      v5 = v4;
      if ( v4 >= 0 )
      {
        *((_QWORD *)this + 5) = a2;
        v5 = 0;
        goto LABEL_9;
      }
      v6 = 573LL;
    }
    else
    {
      v6 = 571LL;
    }
  }
  else
  {
    v6 = 570LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
    (const char *)(unsigned int)v4);
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  return v5;
}
