/*
 * XREFs of ??$MakeAndInitialize@VJointDivider@@V1@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VJointDivider@@@WRL@Microsoft@@@012@AEAPEAUHWND__@@@Z @ 0x18007B0A8
 * Callers:
 *     ?JointDivider_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x18007AF04 (-JointDivider_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?add_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ @ 0x1800151E0 (-add_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InternalRelease@?$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ @ 0x18007B020 (-InternalRelease@-$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0JointDivider@@QEAA@XZ @ 0x180532404 (--0JointDivider@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<JointDivider,JointDivider,HWND__ * &>(
        __int64 *a1,
        __int64 *a2)
{
  unsigned int v4; // edi
  void *v5; // rax
  JointDivider *v6; // rax
  __int64 v7; // rcx
  volatile int *v8; // rdx
  __int64 v9; // r8
  JointDivider *v11; // [rsp+30h] [rbp+8h] BYREF
  void *v12; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease(a1);
  v4 = 0;
  *a1 = 0LL;
  v5 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v5;
  if ( v5 )
  {
    v6 = JointDivider::JointDivider((JointDivider *)v5);
    v7 = *a2;
    v11 = v6;
    v12 = 0LL;
    *((_QWORD *)v6 + 11) = v7;
    winrt::com_ptr<CMultitaskingViewManager>::add_ref((__int64 *)&v11, v8);
    *a1 = v9;
    Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease((__int64 *)&v11);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
