/*
 * XREFs of DpiRemoveAdapter @ 0x14007C860
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x1402421F0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x140248100 (DpiFdoStopAdapter.c)
 *     DpiPowerArbiterThread @ 0x1402C9300 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?RemoveChildPairing@DISPLAY_MUX_PAIRING@@AEAAXU_LUID@@PEAW4DISPLAY_MUX_PAIRING_DESTROYED_REASON@@@Z @ 0x140087334 (-RemoveChildPairing@DISPLAY_MUX_PAIRING@@AEAAXU_LUID@@PEAW4DISPLAY_MUX_PAIRING_DESTROYED_REASON@.c)
 *     DxgkNotifyAdapterRemoval @ 0x1401D74F4 (DxgkNotifyAdapterRemoval.c)
 *     DxgkRemoveAdapter @ 0x1401D7558 (DxgkRemoveAdapter.c)
 */

__int64 __fastcall DpiRemoveAdapter(__int64 a1, char a2, char a3, char a4)
{
  DISPLAY_MUX_MGR *v4; // rdi
  struct _LUID v6; // rbx
  DISPLAY_MUX_PAIRING *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 result; // rax
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = qword_140161380;
  v6 = *(struct _LUID *)(a1 + 2696);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DISPLAY_MUX_MGR *)((char *)qword_140161380 + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  if ( *((_DWORD *)v4 + 20) == 1 )
  {
    v10 = (DISPLAY_MUX_PAIRING *)*((_QWORD *)v4 + 9);
    if ( v10 )
      DISPLAY_MUX_PAIRING::RemoveChildPairing(v10, v6, 0LL);
  }
  else
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 2939;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
  LOBYTE(v11) = a3;
  LOBYTE(v12) = a2;
  result = DxgkRemoveAdapter(*(_QWORD *)(a1 + 4032), v12, v11);
  if ( a4 )
    return DxgkNotifyAdapterRemoval();
  return result;
}
