/*
 * XREFs of ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1400A13EC
 * Callers:
 *     imp_WdfIoQueueAssignForwardProgressPolicy @ 0x1400A0690 (imp_WdfIoQueueAssignForwardProgressPolicy.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x140034320 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14003CB50 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z @ 0x1400A0F84 (-AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z.c)
 *     ?FreeAllReservedRequests@FxIoQueue@@AEAAXE@Z @ 0x1400A160C (-FreeAllReservedRequests@FxIoQueue@@AEAAXE@Z.c)
 */

__int64 __fastcall FxIoQueue::AssignForwardProgressPolicy(
        FxIoQueue *this,
        _WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY *Policy)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v3; // esi
  unsigned __int8 i; // cl
  unsigned __int16 v7; // r9
  unsigned int _a1; // ebx
  ULONG Tag; // ecx
  void *v11; // rax
  FX_POOL **v12; // rax
  _LIST_ENTRY *p_m_ReservedRequestList; // rax
  _LIST_ENTRY *p_m_ReservedRequestInUseList; // rax
  _LIST_ENTRY *p_m_PendedIrpList; // rax
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // rax
  unsigned int v17; // edi
  unsigned __int8 v18; // dl
  _LIST_ENTRY *v19; // rcx
  _LIST_ENTRY *p_m_ForwardProgressList; // rax
  _LIST_ENTRY *Blink; // rdx
  __m128i v22; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v3 = 0;
  pRequest = 0LL;
  if ( !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, (unsigned int)Policy, 0xBu) )
  {
    for ( i = 0; i <= 0x1Bu; ++i )
    {
      if ( this->m_PkgIo->m_DispatchTable[i] == this )
        goto LABEL_8;
    }
    v7 = 12;
    _a1 = -1073741811;
    goto LABEL_7;
  }
LABEL_8:
  Tag = m_Globals->Tag;
  v22.m128i_i64[0] = 0LL;
  v22.m128i_i64[1] = 64LL;
  if ( m_Globals->FxPoolTrackingOn )
    v11 = retaddr;
  else
    v11 = 0LL;
  v12 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v22, 0x68uLL, Tag, v11);
  this->m_FwdProgContext = (_FXIO_FORWARD_PROGRESS_CONTEXT *)v12;
  if ( !v12 )
  {
    _a1 = -1073741670;
    v7 = 13;
LABEL_7:
    WPP_IFR_SF_D(m_Globals, 2u, 0xDu, v7, WPP_FxIoQueueKm_cpp_Traceguids, _a1);
    return _a1;
  }
  *((_DWORD *)v12 + 8) = Policy->ForwardProgressReservedPolicy;
  this->m_FwdProgContext->m_NumberOfReservedRequests = Policy->TotalForwardProgressRequests;
  this->m_FwdProgContext->m_IoReservedResourcesAllocate.Method = Policy->EvtIoAllocateResourcesForReservedRequest;
  this->m_FwdProgContext->m_IoResourcesAllocate.Method = Policy->EvtIoAllocateRequestResources;
  this->m_FwdProgContext->m_IoExamineIrp.Method = Policy->ForwardProgressReservePolicySettings.Policy.ExaminePolicy.EvtIoWdmIrpForForwardProgress;
  p_m_ReservedRequestList = &this->m_FwdProgContext->m_ReservedRequestList;
  p_m_ReservedRequestList->Blink = p_m_ReservedRequestList;
  p_m_ReservedRequestList->Flink = p_m_ReservedRequestList;
  p_m_ReservedRequestInUseList = &this->m_FwdProgContext->m_ReservedRequestInUseList;
  p_m_ReservedRequestInUseList->Blink = p_m_ReservedRequestInUseList;
  p_m_ReservedRequestInUseList->Flink = p_m_ReservedRequestInUseList;
  p_m_PendedIrpList = &this->m_FwdProgContext->m_PendedIrpList;
  p_m_PendedIrpList->Blink = p_m_PendedIrpList;
  p_m_PendedIrpList->Flink = p_m_PendedIrpList;
  m_FwdProgContext = this->m_FwdProgContext;
  m_FwdProgContext->m_PendedReserveLock.m_Lock = 0LL;
  v17 = 0;
  m_FwdProgContext->m_PendedReserveLock.m_DbgFlagIsInitialized = 1;
  while ( v17 < this->m_FwdProgContext->m_NumberOfReservedRequests )
  {
    v3 = FxIoQueue::AllocateReservedRequest(this, &pRequest);
    if ( v3 < 0 )
    {
      FxIoQueue::FreeAllReservedRequests(this, v18);
      this->m_FwdProgContext->m_PendedReserveLock.m_DbgFlagIsInitialized = 0;
      FxPoolFree(&this->m_FwdProgContext->m_NumberOfReservedRequests);
      this->m_FwdProgContext = 0LL;
      return (unsigned int)v3;
    }
    v19 = &this->m_FwdProgContext->m_ReservedRequestList;
    p_m_ForwardProgressList = &pRequest->m_ForwardProgressList;
    Blink = this->m_FwdProgContext->m_ReservedRequestList.Blink;
    if ( Blink->Flink != v19 )
      __fastfail(3u);
    p_m_ForwardProgressList->Flink = v19;
    ++v17;
    p_m_ForwardProgressList->Blink = Blink;
    Blink->Flink = p_m_ForwardProgressList;
    v19->Blink = p_m_ForwardProgressList;
  }
  this->m_SupportForwardProgress = 1;
  return (unsigned int)v3;
}
