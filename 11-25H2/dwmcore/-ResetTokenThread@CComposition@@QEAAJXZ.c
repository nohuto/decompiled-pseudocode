/*
 * XREFs of ?ResetTokenThread@CComposition@@QEAAJXZ @ 0x180229CBC
 * Callers:
 *     ?DeleteUnusedDevices@CDeviceManager@@AEAAXXZ @ 0x180031AC0 (-DeleteUnusedDevices@CDeviceManager@@AEAAXXZ.c)
 *     ?CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003F190 (-CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?InternalUpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x18022CD78 (-InternalUpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18010010C (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 */

__int64 __fastcall CComposition::ResetTokenThread(CComposition *this)
{
  unsigned int v1; // ebx
  CSurfaceManager *v2; // rcx
  int v4; // eax

  v1 = 0;
  v2 = (CSurfaceManager *)*((_QWORD *)g_pComposition + 78);
  if ( v2 )
  {
    v4 = CSurfaceManager::ResetTokenThread(v2);
    v1 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x302u, 0LL);
  }
  return v1;
}
