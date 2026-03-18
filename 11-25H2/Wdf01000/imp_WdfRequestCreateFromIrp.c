/*
 * XREFs of imp_WdfRequestCreateFromIrp @ 0x140067DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x140035320 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfRequestCreateFromIrp(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        _IRP *Irp,
        unsigned __int8 RequestFreesIrp,
        WDFREQUEST__ **Request)
{
  _FX_DRIVER_GLOBALS *v5; // rcx
  WDFREQUEST__ **v9; // rbx
  int result; // eax
  unsigned __int64 v11; // rcx
  void *ParentObject; // rdx
  void *retaddr; // [rsp+68h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+70h] [rbp+8h] BYREF
  FxRequest *pRequest; // [rsp+78h] [rbp+10h] BYREF
  void *PPObject; // [rsp+80h] [rbp+18h] BYREF

  v5 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pRequest = 0LL;
  pFxDriverGlobals = v5;
  if ( RequestAttributes )
  {
    ParentObject = RequestAttributes->ParentObject;
    if ( ParentObject )
    {
      PPObject = 0LL;
      FxObjectHandleGetPtrAndGlobals(v5, (unsigned __int64)ParentObject, 0x1000u, &PPObject, &pFxDriverGlobals);
      v5 = pFxDriverGlobals;
    }
  }
  if ( !Irp )
    FxVerifierNullBugCheck(v5, retaddr);
  v9 = Request;
  if ( !Request )
    FxVerifierNullBugCheck(v5, retaddr);
  *Request = 0LL;
  result = FxRequest::_Create(
             v5,
             RequestAttributes,
             Irp,
             0LL,
             2 - (RequestFreesIrp != 0),
             FxRequestConstructorCallerIsDriver,
             &pRequest);
  if ( result >= 0 )
  {
    if ( pRequest->m_ObjectSize )
      v11 = (unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v11 = 0LL;
    *v9 = (WDFREQUEST__ *)v11;
  }
  return result;
}
