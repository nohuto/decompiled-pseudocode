/*
 * XREFs of ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z @ 0x14000B870
 * Callers:
 *     ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14018EBD0 (-DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1401AB000 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     DxgkGetIndirectDisplayRenderAdapterByHandle @ 0x1401AC7A0 (DxgkGetIndirectDisplayRenderAdapterByHandle.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140416310 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::GetPairedRenderAdapter(
        ADAPTER_DISPLAY *this,
        struct DXGADAPTER_REFERENCE *a2,
        struct _GUID *a3)
{
  struct _KTHREAD **v4; // rcx
  __int64 v7; // rbx
  struct _KTHREAD **v8; // [rsp+50h] [rbp-18h] BYREF
  char v9; // [rsp+58h] [rbp-10h]

  v9 = 0;
  v4 = (struct _KTHREAD **)((char *)this + 200);
  v8 = v4;
  if ( !v4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
    v4 = 0LL;
  }
  if ( v4[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 644;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v8);
  v7 = *((_QWORD *)this + 31);
  if ( *(_QWORD *)a2 )
    DXGADAPTER::ReleaseReference(*(DXGADAPTER **)a2, *((_QWORD *)a2 + 1));
  *(_QWORD *)a2 = v7;
  if ( v7 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v7 + 24));
    *((_QWORD *)a2 + 1) = -1LL;
  }
  if ( a3 )
    *a3 = *(struct _GUID *)((char *)this + 264);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v8);
}
