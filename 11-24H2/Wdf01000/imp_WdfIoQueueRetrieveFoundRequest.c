/*
 * XREFs of imp_WdfIoQueueRetrieveFoundRequest @ 0x14006FFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x140015A20 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140016CE0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfIoQueueRetrieveFoundRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ *TagRequest,
        WDFREQUEST__ **OutRequest)
{
  int result; // eax
  WDFREQUEST__ *v7; // rcx
  FxIoQueue *pQueue; // [rsp+30h] [rbp-10h] BYREF
  FxRequest *pOutputRequest; // [rsp+38h] [rbp-8h] BYREF
  void *retaddr; // [rsp+58h] [rbp+18h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+20h] BYREF
  FxRequest *pTagRequest; // [rsp+78h] [rbp+38h] BYREF

  pQueue = 0LL;
  pTagRequest = 0LL;
  pOutputRequest = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Queue,
    0x1003u,
    (void **)&pQueue,
    &pFxDriverGlobals);
  if ( !OutRequest )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  FxObjectHandleGetPtr(pFxDriverGlobals, (unsigned __int64)TagRequest, 0x1008u, (void **)&pTagRequest);
  result = FxIoQueue::GetRequest(pQueue, 0LL, pTagRequest, &pOutputRequest);
  if ( result >= 0 && pOutputRequest->m_ObjectSize )
    v7 = (WDFREQUEST__ *)((unsigned __int64)pOutputRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v7 = 0LL;
  *OutRequest = v7;
  return result;
}
