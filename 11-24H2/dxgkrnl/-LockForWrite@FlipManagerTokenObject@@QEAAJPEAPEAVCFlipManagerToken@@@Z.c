/*
 * XREFs of ?LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z @ 0x14001A928
 * Callers:
 *     ??0CIFlipPresentHistoryTokenFlipManager@@QEAA@PEBU_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN@@@Z @ 0x14001A4D8 (--0CIFlipPresentHistoryTokenFlipManager@@QEAA@PEBU_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x140049338 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x14005E9A4 (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 *     ?FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z @ 0x140062D98 (-FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14001A9A4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

__int64 __fastcall FlipManagerTokenObject::LockForWrite(char *Object, struct CFlipManagerToken **a2)
{
  NTSTATUS v4; // edi

  *a2 = 0LL;
  v4 = ObReferenceObjectByPointer(Object, 3u, g_pDxgkCompositionObjectType, 0);
  if ( v4 >= 0 )
  {
    v4 = CPushLock::AcquireLockExclusive((CPushLock *)(Object + 88));
    if ( v4 < 0 )
      ObfDereferenceObject(Object);
    else
      *a2 = (struct CFlipManagerToken *)(Object + 32);
  }
  return (unsigned int)v4;
}
