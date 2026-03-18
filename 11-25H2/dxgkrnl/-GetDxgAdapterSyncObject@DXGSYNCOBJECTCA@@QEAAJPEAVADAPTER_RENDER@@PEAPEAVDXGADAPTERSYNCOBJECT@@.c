/*
 * XREFs of ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x140180714
 * Callers:
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x14018061C (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PE.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x140298C68 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1402ABA40 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x14003BE94 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ??_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z @ 0x140058F54 (--_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x1401816A4 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAG.c)
 */

__int64 __fastcall DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
        DXGSYNCOBJECTCA *this,
        struct ADAPTER_RENDER *a2,
        struct DXGADAPTERSYNCOBJECT **a3,
        struct DXGPAGINGQUEUE *a4,
        unsigned __int8 *a5,
        bool a6,
        bool a7)
{
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGADAPTERSYNCOBJECT *AdapterObject; // rbx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rax

  v11 = 0;
  AdapterObject = DXGSYNCOBJECTCA::FindAdapterObject(this, a2);
  if ( AdapterObject || !v12 )
    goto LABEL_13;
  if ( (*(_DWORD *)(v13 + 408) & 4) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2564;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCrossAdapterSyncObject()", 2564LL, 0LL, 0LL, 0LL, 0LL);
  }
  v16 = 256LL;
  if ( *((_DWORD *)this + 101) == 7 && !a7 || a6 )
    v16 = 64LL;
  v17 = operator new(0x88uLL, 0x4B677844u, v16, v15);
  AdapterObject = (struct DXGADAPTERSYNCOBJECT *)v17;
  if ( !v17 )
    return 3221225495LL;
  *(_QWORD *)(v17 + 16) = a2;
  *(_OWORD *)v17 = 0LL;
  *(_WORD *)(v17 + 24) = 0;
  *(_QWORD *)(v17 + 32) = 0LL;
  *(_BYTE *)(v17 + 26) = 0;
  *(_QWORD *)(v17 + 128) = this;
  *(_OWORD *)(v17 + 112) = 0LL;
  v11 = DXGADAPTERSYNCOBJECT::InitializeAdapterObject((DXGADAPTERSYNCOBJECT *)v17, this, 0LL, a4, a5, a6, a7);
  if ( v11 >= 0 )
LABEL_13:
    *a3 = AdapterObject;
  else
    DXGADAPTERSYNCOBJECTCA::`scalar deleting destructor'(AdapterObject);
  return (unsigned int)v11;
}
