/*
 * XREFs of ??$MakeAndInitialize@VUserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@AEAPEAUITaskDataArbiter@23456@@Details@WRL@Microsoft@@YAJPEAPEAVUserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAPEAUITaskDataArbiter@45678@@Z @ 0x180404F04
 * Callers:
 *     ?Create@UserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUITaskDataArbiter@23456@PEAPEAUITaskDataListener@23456@@Z @ 0x180405290 (-Create@UserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUITaskDa.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180019118 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ @ 0x1804051B8 (--0UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180405600 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITas_ea_180405600.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener,Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter * &>(
        __int64 *a1,
        __int64 *a2)
{
  unsigned int v2; // edi
  void *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  volatile int *v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  void *v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v5;
  if ( v5 )
  {
    v6 = Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::UserPresenceListener((Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener *)v5);
    v7 = *a2;
    v8 = v6;
    v13 = 0LL;
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
      (__int64 *)(v6 + 72),
      v7);
    if ( v8 )
    {
      v10 = *(_QWORD *)(v8 + 64);
      while ( v10 >= 0 )
      {
        if ( (_DWORD)v10 != 0x7FFFFFFF )
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 64), v10 + 1, v10);
          if ( v11 != v10 )
            continue;
        }
        goto LABEL_10;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v10 + 16), v9);
LABEL_10:
      *a1 = v8;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v8);
    }
    else
    {
      *a1 = 0LL;
    }
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v13);
  return v2;
}
