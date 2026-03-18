/*
 * XREFs of ?IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14028943C
 * Callers:
 *     DxgkGetPresentHistoryInternal @ 0x1402871A0 (DxgkGetPresentHistoryInternal.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1404233E0 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140427920 (-VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14000C610 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

char __fastcall CIFlipPresentHistoryToken::IsIFlipSupported(const struct _D3DKMT_PRESENTHISTORYTOKEN *a1)
{
  char v1; // di
  UINT64 FenceValue; // rsi
  CPushLock *v3; // rbx
  __int64 v4; // rsi

  v1 = 0;
  if ( a1->Model == D3DKMT_PM_REDIRECTED_FLIP )
    return 1;
  if ( a1->Model == D3DKMT_PM_FLIPMANAGER )
  {
    FenceValue = a1->Token.Flip.FenceValue;
    if ( FenceValue )
    {
      if ( (a1->Token.Gdi.ScrollRect.left & 4) != 0 )
      {
        KeEnterCriticalRegion();
        v3 = (CPushLock *)(FenceValue + 88);
        ExAcquirePushLockSharedEx(FenceValue + 88, 0LL);
        v4 = *(_QWORD *)(FenceValue + 112);
        CPushLock::ReleaseLock(v3);
        if ( v4 )
        {
          if ( *(_DWORD *)(v4 + 32) || *(_DWORD *)(v4 + 36) )
          {
            if ( *(_QWORD *)(v4 + 48) )
              return 1;
          }
        }
      }
    }
  }
  return v1;
}
