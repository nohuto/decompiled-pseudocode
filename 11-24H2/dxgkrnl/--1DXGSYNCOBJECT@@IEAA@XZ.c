/*
 * XREFs of ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x140189FE8
 * Callers:
 *     ??1DXGSYNCOBJECTSA@@QEAA@XZ @ 0x140020650 (--1DXGSYNCOBJECTSA@@QEAA@XZ.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1402FA90C (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmFreeFenceStorageSlot@VIDMM_EXPORT@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x14003E560 (-VidMmFreeFenceStorageSlot@VIDMM_EXPORT@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14005D990 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall DXGSYNCOBJECT::~DXGSYNCOBJECT(DXGSYNCOBJECT *this)
{
  VIDMM_EXPORT *v2; // rcx
  char v3; // r8
  void *v4; // rcx

  if ( (unsigned int)(*((_DWORD *)this + 101) - 5) <= 2 )
  {
    v2 = (VIDMM_EXPORT *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 33);
    v3 = (*((_BYTE *)this + 408) & 1) != 0 || (*((_DWORD *)this + 103) & 0x20) != 0;
    VIDMM_EXPORT::VidMmFreeFenceStorageSlot(v2, (DXGSYNCOBJECT *)((char *)this + 128), v3);
  }
  v4 = (void *)*((_QWORD *)this + 11);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( *((_DWORD *)this + 20) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1629;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_hSyncObjHandle == NULL", 1629LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 6) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1630;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_cReference == 0", 1630LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSYNCOBJECT *)((char *)this + 32));
  *((_QWORD *)this + 2) = 0LL;
}
