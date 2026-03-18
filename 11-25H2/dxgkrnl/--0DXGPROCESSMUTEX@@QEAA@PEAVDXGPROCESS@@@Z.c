/*
 * XREFs of ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400322F0
 * Callers:
 *     NtDxgkRegisterVailProcess @ 0x140203120 (NtDxgkRegisterVailProcess.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x140203E90 (NtDxgkVailPromoteCompositionSurface.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x140216248 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 *     DxgkGetPresentHistoryInternal @ 0x1402871A0 (DxgkGetPresentHistoryInternal.c)
 *     DxgkGetCachedHybridQueryValue @ 0x1403AD8F0 (DxgkGetCachedHybridQueryValue.c)
 *     DxgkCacheHybridQueryValue @ 0x1403C2160 (DxgkCacheHybridQueryValue.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

DXGPROCESSMUTEX *__fastcall DXGPROCESSMUTEX::DXGPROCESSMUTEX(DXGPROCESSMUTEX *this, struct DXGPROCESS *a2)
{
  *((_BYTE *)this + 8) = 0;
  *(_QWORD *)this = (char *)a2 + 104;
  if ( a2 == (struct DXGPROCESS *)-104LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(struct _KTHREAD **)(*(_QWORD *)this + 24LL) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  return this;
}
