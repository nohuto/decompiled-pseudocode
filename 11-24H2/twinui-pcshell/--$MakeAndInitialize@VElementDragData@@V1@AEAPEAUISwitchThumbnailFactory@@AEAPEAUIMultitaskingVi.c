/*
 * XREFs of ??$MakeAndInitialize@VElementDragData@@V1@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@AEAPEAU3@AEAPEAUIUnknown@@AEBUDragMetrics@@AEAW4DragEffects@@@Details@WRL@Microsoft@@YAJPEAPEAVElementDragData@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@2AEAPEAUIUnknown@@AEBUDragMetrics@@AEAW4DragEffects@@@Z @ 0x1804DC320
 * Callers:
 *     ?ElementDragData_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1PEAUIUnknown@@AEBUDragMetrics@@W4DragEffects@@AEBU_GUID@@PEAPEAX@Z @ 0x1804DCC1C (-ElementDragData_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailFactory@@@Z @ 0x1804C16F4 (--4-$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailFactory@@@.c)
 *     ??0ElementDragData@@QEAA@XZ @ 0x1804DC5A4 (--0ElementDragData@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ElementDragData,ElementDragData,ISwitchThumbnailFactory * &,IMultitaskingViewElement * &,IMultitaskingViewElement * &,IUnknown * &,DragMetrics const &,enum DragEffects &>(
        ElementDragData **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        _OWORD *a6,
        int *a7)
{
  unsigned int v11; // r15d
  void *v12; // rax
  ElementDragData *v13; // r14
  int v14; // ebp
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rbx
  _OWORD *v18; // rcx
  void *v20; // [rsp+20h] [rbp-38h] BYREF
  ElementDragData *v21; // [rsp+60h] [rbp+8h] BYREF

  v11 = 0;
  *a1 = 0LL;
  v12 = operator new(0x210uLL, (const struct std::nothrow_t *)&std::nothrow);
  v20 = v12;
  if ( v12 )
  {
    v13 = ElementDragData::ElementDragData((ElementDragData *)v12);
    v21 = v13;
    v20 = 0LL;
    v14 = *a7;
    v15 = *a5;
    v16 = *a4;
    v17 = *a3;
    Microsoft::WRL::ComPtr<ISwitchThumbnailFactory>::operator=((__int64 *)v13 + 2, *a2);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v13 + 5, v17);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v13 + 4, v16);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v13 + 3, v15);
    v18 = a6;
    *((_OWORD *)v13 + 7) = *a6;
    *((_OWORD *)v13 + 8) = v18[1];
    *((_OWORD *)v13 + 9) = v18[2];
    *((_OWORD *)v13 + 10) = v18[3];
    *((_DWORD *)v13 + 44) = v14;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
    *a1 = v13;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
  }
  else
  {
    v11 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v20);
  return v11;
}
