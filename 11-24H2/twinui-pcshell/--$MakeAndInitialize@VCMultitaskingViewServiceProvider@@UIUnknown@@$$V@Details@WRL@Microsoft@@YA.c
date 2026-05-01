/*
 * XREFs of ??$MakeAndInitialize@VCMultitaskingViewServiceProvider@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802386CC
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCMultitaskingViewServiceProvider@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180498D70 (-CreateInstance@-$SimpleClassFactory@VCMultitaskingViewServiceProvider@@$0A@@WRL@Microsoft@@UEAA.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ @ 0x1801430C8 (-RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801797C8 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCI_ea_1801797C8.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801C0750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1801C0750.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CMultitaskingViewServiceProvider@@QEAA@XZ @ 0x180498AA8 (--0CMultitaskingViewServiceProvider@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewServiceProvider,IUnknown,>(_QWORD *a1)
{
  void *v2; // rax
  CMultitaskingViewServiceProvider *v4; // rbx
  int v5; // edi
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  CMultitaskingViewServiceProvider *v7; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = operator new(0x108uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( !v2 )
    return 2147942414LL;
  v4 = CMultitaskingViewServiceProvider::CMultitaskingViewServiceProvider((CMultitaskingViewServiceProvider *)v2);
  v7 = v4;
  v6 = 0LL;
  v5 = CMultitaskingViewServiceProvider::RuntimeClassInitialize(v4);
  if ( v5 >= 0 )
    v5 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IMultitaskingViewServiceProvider,IMultitaskingViewTaskScheduler>>(
           (__int64)v4,
           &GUID_00000000_0000_0000_c000_000000000046,
           a1);
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IMultitaskingViewServiceProvider,IMultitaskingViewTaskScheduler>::Release((__int64)v4);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
  return (unsigned int)v5;
}
