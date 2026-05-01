/*
 * XREFs of ??$MakeAndInitialize@VAltEscHotkeyHandler@@V1@AEAPEAUIWeakReference@WeakReference@@@Details@WRL@Microsoft@@YAJPEAPEAVAltEscHotkeyHandler@@AEAPEAUIWeakReference@WeakReference@@@Z @ 0x1804B8DE4
 * Callers:
 *     ?AltEscHotkeyHandler_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B9174 (-AltEscHotkeyHandler_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VAltEscHotkeyHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x1801D7D38 (-InternalRelease@-$ComPtr@VAltEscHotkeyHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AltEscHotkeyHandler@@QEAA@XZ @ 0x1804B8EC0 (--0AltEscHotkeyHandler@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@AltEscHotkeyHandler@@QEAAJPEAUIWeakReference@WeakReference@@@Z @ 0x1804B967C (-RuntimeClassInitialize@AltEscHotkeyHandler@@QEAAJPEAUIWeakReference@WeakReference@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AltEscHotkeyHandler,AltEscHotkeyHandler,WeakReference::IWeakReference * &>(
        volatile signed __int64 **a1,
        struct IWeakReference **a2)
{
  void *v4; // rax
  int v5; // edi
  volatile signed __int64 *v6; // rbx
  volatile int *v7; // rdx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  volatile signed __int64 *v11; // [rsp+30h] [rbp+8h] BYREF
  void *v12; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v4;
  v11 = (volatile signed __int64 *)v4;
  if ( v4 )
  {
    v6 = (volatile signed __int64 *)AltEscHotkeyHandler::AltEscHotkeyHandler((AltEscHotkeyHandler *)v4);
    v11 = v6;
    v12 = 0LL;
    v5 = AltEscHotkeyHandler::RuntimeClassInitialize((AltEscHotkeyHandler *)v6, *a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
      {
        v8 = *((_QWORD *)v6 + 5);
        while ( v8 >= 0 )
        {
          if ( (_DWORD)v8 != 0x7FFFFFFF )
          {
            v9 = v8;
            v8 = _InterlockedCompareExchange64(v6 + 5, v8 + 1, v8);
            if ( v9 != v8 )
              continue;
          }
          goto LABEL_12;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v8 + 16), v7);
      }
LABEL_12:
      *a1 = v6;
      Microsoft::WRL::ComPtr<AltEscHotkeyHandler>::InternalRelease((__int64 *)&v11);
      v5 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<AltEscHotkeyHandler>::InternalRelease((__int64 *)&v11);
    }
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v12);
  return (unsigned int)v5;
}
