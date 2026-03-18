/*
 * XREFs of ?ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x14004E9F8
 * Callers:
 *     NtFlipObjectConsumerPostMessage @ 0x14004E920 (NtFlipObjectConsumerPostMessage.c)
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x14000B2D0 (DxgkGetSessionTokenManager.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14000B474 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14000C610 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x140078D98 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009C454 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     ?ConsumerPostMessage@CFlipManager@@QEAAXPEAVCFlipConsumerMessage@@PEAPEAUPresentedContentOverlayInfo@@@Z @ 0x14009CB6C (-ConsumerPostMessage@CFlipManager@@QEAAXPEAVCFlipConsumerMessage@@PEAPEAUPresentedContentOverlay.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x14009CEA8 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FlipManagerObject::ConsumerPostMessage(FlipManagerObject *this, struct CFlipConsumerMessage *a2)
{
  CPushLock *v4; // rdi
  int v5; // esi
  unsigned int TracingId; // r12d
  struct PresentedContentOverlayInfo *v7; // r13
  int SessionTokenManager; // r15d
  struct PresentedContentOverlayInfo *v9; // rbx
  __int64 Win32kImportTable; // rax
  struct PresentedContentOverlayInfo *v12; // [rsp+70h] [rbp+18h] BYREF

  v4 = (FlipManagerObject *)((char *)this + 40);
  if ( (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline() )
  {
    v5 = CPushLock::AcquireLockExclusive(v4);
    if ( v5 >= 0 )
    {
      v12 = 0LL;
      CFlipManager::ConsumerPostMessage((FlipManagerObject *)((char *)this + 32), a2, &v12);
      TracingId = CFlipManager::GetTracingId((FlipManagerObject *)((char *)this + 32));
      CPushLock::ReleaseLock(v4);
      v7 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        SessionTokenManager = DxgkGetSessionTokenManager(&v12);
        if ( SessionTokenManager < 0
          || (v9 = v12,
              (*(void (__fastcall **)(struct PresentedContentOverlayInfo *))(*(_QWORD *)v12 + 16LL))(v12),
              SessionTokenManager = (*(__int64 (__fastcall **)(struct PresentedContentOverlayInfo *, FlipManagerObject *, struct PresentedContentOverlayInfo *, _QWORD))(*(_QWORD *)v9 + 232LL))(
                                      v9,
                                      this,
                                      v7,
                                      *((_QWORD *)v7 + 3)),
              (*(void (__fastcall **)(struct PresentedContentOverlayInfo *))(*(_QWORD *)v9 + 24LL))(v9),
              (*(void (__fastcall **)(struct PresentedContentOverlayInfo *))(*(_QWORD *)v9 + 8LL))(v9),
              Win32kImportTable = DxgkGetWin32kImportTable(),
              (*(void (__fastcall **)(_QWORD, struct PresentedContentOverlayInfo *, _QWORD, _QWORD))(Win32kImportTable + 392))(
                TracingId,
                v7,
                *((_QWORD *)v7 + 3),
                (unsigned int)SessionTokenManager),
              SessionTokenManager < 0) )
        {
          if ( (int)CPushLock::AcquireLockExclusive(v4) >= 0 )
          {
            CFlipManager::MarkAsLost((char *)this + 32, (unsigned int)SessionTokenManager, 19LL);
            goto LABEL_10;
          }
        }
      }
    }
  }
  else
  {
    v5 = CPushLock::AcquireLockExclusive(v4);
    if ( v5 >= 0 )
    {
      v12 = 0LL;
      CFlipManager::ConsumerPostMessage((FlipManagerObject *)((char *)this + 32), a2, &v12);
LABEL_10:
      CPushLock::ReleaseLock(v4);
    }
  }
  return (unsigned int)v5;
}
