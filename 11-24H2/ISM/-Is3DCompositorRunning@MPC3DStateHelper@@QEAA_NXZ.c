/*
 * XREFs of ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x18004E698
 * Callers:
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x18004DAB4 (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 *     ?Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z @ 0x18004E5B0 (-Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z.c)
 *     ?Initialize@MPCInputRouter@@AEAAJXZ @ 0x18004F794 (-Initialize@MPCInputRouter@@AEAAJXZ.c)
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x1800D1A34 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800D6AF8 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPC3DStateHelper::Is3DCompositorRunning(PSRWLOCK SRWLock)
{
  char v2; // bl

  AcquireSRWLockShared(SRWLock);
  v2 = BYTE4(SRWLock[2].Ptr);
  ReleaseSRWLockShared(SRWLock);
  return v2;
}
