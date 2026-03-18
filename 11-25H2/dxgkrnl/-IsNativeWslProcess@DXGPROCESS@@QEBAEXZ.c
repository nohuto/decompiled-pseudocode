/*
 * XREFs of ?IsNativeWslProcess@DXGPROCESS@@QEBAEXZ @ 0x1400379BC
 * Callers:
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAE@Z @ 0x1401811E4 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAE@Z.c)
 *     ?SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1401EFCAC (-SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAV.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGPROCESS::IsNativeWslProcess(DXGPROCESS *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 102);
  return (v1 & 0x10) != 0 && (v1 & 0x100) == 0;
}
