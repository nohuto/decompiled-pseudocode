/*
 * XREFs of ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z @ 0x14001AE50
 * Callers:
 *     ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14018C9A0 (-DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1401A8AE0 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     DxgkGetIndirectDisplayRenderAdapterByHandle @ 0x1401AA310 (DxgkGetIndirectDisplayRenderAdapterByHandle.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::GetPairedRenderAdapter(
        ADAPTER_DISPLAY *this,
        struct DXGADAPTER_REFERENCE *a2,
        struct _GUID *a3)
{
  __int64 v6; // rbx
  struct _KTHREAD **v7; // [rsp+50h] [rbp-18h] BYREF
  char v8; // [rsp+58h] [rbp-10h]

  v7 = (struct _KTHREAD **)((char *)this + 200);
  v8 = 0;
  if ( this == (ADAPTER_DISPLAY *)-200LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v7[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v7);
  v6 = *((_QWORD *)this + 31);
  if ( *(_QWORD *)a2 )
    DXGADAPTER::ReleaseReference(*(DXGADAPTER **)a2, *((_QWORD *)a2 + 1));
  *(_QWORD *)a2 = v6;
  if ( v6 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v6 + 24));
    *((_QWORD *)a2 + 1) = -1LL;
  }
  if ( a3 )
    *a3 = *(struct _GUID *)((char *)this + 264);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v7);
}
