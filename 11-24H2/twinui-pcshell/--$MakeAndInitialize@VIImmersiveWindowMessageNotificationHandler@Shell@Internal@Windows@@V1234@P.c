/*
 * XREFs of ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVUndockedSearchAppExperienceManager@@P85@EAAJI_K_J@_E@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVUndockedSearchAppExperienceManager@@$$QEAP87@EAAJI_K_J@_E@Z @ 0x180210A20
 * Callers:
 *     ?RegisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180246308 (-RegisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180061920 (-InternalRelease@-$ComPtr@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@@WRL@Microsoft.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAA@XZ @ 0x180379A18 (--0IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@Z @ 0x18037A580 (-Attach@-$ComPtr@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@WRL@Micros.c)
 *     ??$RuntimeClassInitialize@VUndockedSearchAppExperienceManager@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVUndockedSearchAppExperienceManager@@P84@EAAJI_K_J@Z@Z @ 0x1803AF57C (--$RuntimeClassInitialize@VUndockedSearchAppExperienceManager@@@IImmersiveWindowMessageNotificat.c)
 */

__int64 __fastcall ___MakeAndInitialize_VIImmersiveWindowMessageNotificationHandler_Shell_Internal_Windows__V1234_PEAVUndockedSearchAppExperienceManager__P85_EAAJI_K_J__E_Details_WRL_Microsoft__YAJPEAPEAVIImmersiveWindowMessageNotificationHandler_Shell_Internal_Windows____QEAPEAVUndockedSearchAppExperienceManager____QEAP87_EAAJI_K_J__E_Z(
        __int64 *a1,
        __int64 *a2,
        __int128 *a3)
{
  void *v6; // rax
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // rbx
  __int64 v11; // rdx
  volatile int *v12; // rdx
  int v13; // edi
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  __int128 v16; // [rsp+20h] [rbp-18h] BYREF
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  void *v18; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v18 = v6;
  if ( !v6 )
    return 2147942414LL;
  v8 = Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::IImmersiveWindowMessageNotificationHandler((Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler *)v6);
  v17 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler>::Attach(&v17, v8);
  v9 = *a3;
  v10 = v17;
  v11 = *a2;
  v18 = 0LL;
  v16 = v9;
  v13 = Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::RuntimeClassInitialize<UndockedSearchAppExperienceManager>(
          v17,
          v11,
          &v16);
  if ( v13 >= 0 )
  {
    if ( v10 )
    {
      v14 = *(_QWORD *)(v10 + 32);
      while ( v14 >= 0 )
      {
        if ( (_DWORD)v14 != 0x7FFFFFFF )
        {
          v15 = v14;
          v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 32), v14 + 1, v14);
          if ( v15 != v14 )
            continue;
        }
        goto LABEL_11;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v14 + 16), v12);
LABEL_11:
      v10 = v17;
    }
    *a1 = v10;
    v13 = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::IInputHostLayoutChangesHandler>::InternalRelease(&v17);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v18);
  return (unsigned int)v13;
}
