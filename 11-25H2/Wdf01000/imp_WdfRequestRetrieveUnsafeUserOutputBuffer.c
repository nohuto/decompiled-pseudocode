/*
 * XREFs of imp_WdfRequestRetrieveUnsafeUserOutputBuffer @ 0x1400701C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140007A40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x140022C80 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qdid @ 0x1400929AC (WPP_IFR_SF_qdid.c)
 *     ?Vf_VerifyRequestIsInCallerContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DC43C (-Vf_VerifyRequestIsInCallerContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestRetrieveUnsafeUserOutputBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        unsigned __int64 RequiredLength,
        void **OutputBuffer,
        unsigned __int64 *Length)
{
  unsigned __int64 *v8; // rdi
  _FX_DRIVER_GLOBALS *v9; // rbx
  __int64 result; // rax
  unsigned __int8 v11; // r8
  FxRequest *v12; // r8
  int v13; // esi
  _IRP *m_Irp; // r9
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned __int8 MajorFunction; // al
  unsigned __int64 level; // rax
  unsigned __int16 v18; // r9
  unsigned __int8 v19; // r8
  unsigned __int16 v20; // r9
  unsigned __int8 v21; // dl
  _FX_DRIVER_GLOBALS **ObjectGlobals; // [rsp+20h] [rbp-30h]
  int v23; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+78h] [rbp+28h]
  _FX_DRIVER_GLOBALS *irql; // [rsp+80h] [rbp+30h] BYREF
  FxRequest *pRequest; // [rsp+98h] [rbp+48h] BYREF

  irql = 0LL;
  pRequest = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest,
    &irql);
  if ( !OutputBuffer )
    FxVerifierNullBugCheck(irql, retaddr);
  *OutputBuffer = 0LL;
  v8 = Length;
  if ( Length )
    *Length = 0LL;
  v9 = irql;
  result = FxVerifierCheckIrqlLevel(irql, 0);
  if ( (int)result >= 0 )
  {
    if ( v9->FxVerifierOn )
    {
      LOBYTE(irql) = 0;
      FxNonPagedObject::Lock(pRequest, (unsigned __int8 *)&irql, v11);
      v13 = v9->FxVerifierOn ? FxRequest::Vf_VerifyRequestIsInCallerContext(pRequest, v9) : 0;
      FxNonPagedObject::Unlock(pRequest, (unsigned __int8)irql, v19);
      if ( v13 < 0 )
        return (unsigned int)v13;
    }
    v12 = pRequest;
    v13 = -1073741808;
    m_Irp = pRequest->m_Irp.m_Irp;
    CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( CurrentStackLocation->MajorFunction == 4 )
    {
      if ( v9->FxVerboseOn )
      {
        v20 = 35;
LABEL_32:
        v21 = 5;
LABEL_36:
        WPP_IFR_SF_qd(v9, v21, 0x10u, v20, WPP_FxRequestApi_cpp_Traceguids, Request, -1073741808);
      }
    }
    else
    {
      if ( MajorFunction != 15 )
      {
        if ( MajorFunction == 14 )
        {
          if ( (CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart & 3) == 3 )
          {
            level = CurrentStackLocation->Parameters.Read.Length;
            if ( level >= RequiredLength )
            {
LABEL_11:
              *OutputBuffer = m_Irp->UserBuffer;
              if ( v8 )
                *v8 = v12->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
              return 0LL;
            }
            if ( v9->FxVerboseOn )
            {
              v18 = 37;
              goto LABEL_20;
            }
            return 3221225507LL;
          }
        }
        else if ( MajorFunction == 3
               && *(_DWORD *)(*((_QWORD *)CurrentStackLocation->DeviceObject->DeviceExtension - 6) + 212LL) == 1 )
        {
          level = CurrentStackLocation->Parameters.Read.Length;
          if ( level >= RequiredLength )
            goto LABEL_11;
          if ( v9->FxVerboseOn )
          {
            v18 = 38;
LABEL_20:
            WPP_IFR_SF_qdid(
              v9,
              (unsigned __int8)CurrentStackLocation,
              (unsigned int)pRequest,
              v18,
              (const _GUID *)ObjectGlobals,
              Request,
              level,
              RequiredLength,
              v23);
          }
          return 3221225507LL;
        }
        v20 = 39;
        v21 = 2;
        goto LABEL_36;
      }
      if ( v9->FxVerboseOn )
      {
        v20 = 36;
        goto LABEL_32;
      }
    }
    return (unsigned int)v13;
  }
  return result;
}
