/*
 * XREFs of DpiRemoveAdapter @ 0x14007C36C
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x14023B6E0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1402412FC (DpiFdoStopAdapter.c)
 *     DpiPowerArbiterThread @ 0x1402BBB00 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?RemoveChildPairing@DISPLAY_MUX_PAIRING@@AEAAXU_LUID@@PEAW4DISPLAY_MUX_PAIRING_DESTROYED_REASON@@@Z @ 0x140086C78 (-RemoveChildPairing@DISPLAY_MUX_PAIRING@@AEAAXU_LUID@@PEAW4DISPLAY_MUX_PAIRING_DESTROYED_REASON@.c)
 *     DxgkNotifyAdapterRemoval @ 0x1401D2244 (DxgkNotifyAdapterRemoval.c)
 *     DxgkRemoveAdapter @ 0x1401D22A8 (DxgkRemoveAdapter.c)
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

  v4 = qword_14015E3C0;
  v6 = *(struct _LUID *)(a1 + 2696);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DISPLAY_MUX_MGR *)((char *)qword_14015E3C0 + 16), 0);
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
    WdLogGlobalForLineNumber = 2930;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
  LOBYTE(v11) = a3;
  LOBYTE(v12) = a2;
  result = DxgkRemoveAdapter(*(_QWORD *)(a1 + 4032), v12, v11);
  if ( a4 )
    return DxgkNotifyAdapterRemoval();
  return result;
}
