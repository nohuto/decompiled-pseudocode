/*
 * XREFs of imp_WdfRequestProbeAndLockUserBufferForRead @ 0x140007DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140007A40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x140007F34 (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x140022C80 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140026620 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14003CB50 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400843C4 (-VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestProbeAndLockUserBufferForRead(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        void *Buffer,
        unsigned __int64 Length,
        WDFMEMORY__ **MemoryObject)
{
  unsigned int v5; // r15d
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  WDFMEMORY__ **v8; // rsi
  __int64 result; // rax
  unsigned int v10; // edx
  FxRequest *v11; // r10
  _FX_DRIVER_GLOBALS *v12; // rcx
  signed int _a1; // eax
  int IsDriverOwned; // edi
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  FxRequestMemory *pMemory; // [rsp+30h] [rbp-10h] BYREF
  void *retaddr; // [rsp+68h] [rbp+28h]
  unsigned __int8 irql; // [rsp+70h] [rbp+30h] BYREF
  FxRequest *pRequest; // [rsp+80h] [rbp+40h] BYREF

  v5 = Length;
  pRequest = 0LL;
  pMemory = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Request, 0x1008u, (void **)&pRequest);
  m_Globals = pRequest->m_Globals;
  if ( !Buffer )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v8 = MemoryObject;
  if ( !MemoryObject )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *MemoryObject = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    v11 = pRequest;
    v12 = pRequest->m_Globals;
    if ( v12->FxVerifierOn && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v12, v10, 9u) || *(_BYTE *)(v16 + 325)) )
    {
      irql = 0;
      FxNonPagedObject::Lock(v11, &irql);
      IsDriverOwned = FxRequest::VerifyRequestIsDriverOwned(pRequest, m_Globals);
      FxNonPagedObject::Unlock(pRequest, irql);
      if ( IsDriverOwned < 0 )
        return (unsigned int)IsDriverOwned;
      v11 = pRequest;
    }
    _a1 = FxRequest::ProbeAndLockForRead(v11, Buffer, v5, &pMemory);
    IsDriverOwned = _a1;
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_D(m_Globals, 2u, 0x10u, 0x41u, WPP_FxRequestApi_cpp_Traceguids, _a1);
    }
    else
    {
      if ( pMemory->m_ObjectSize )
        v15 = (unsigned __int64)pMemory ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v15 = 0LL;
      *v8 = (WDFMEMORY__ *)v15;
    }
    return (unsigned int)IsDriverOwned;
  }
  return result;
}
