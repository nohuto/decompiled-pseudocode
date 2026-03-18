/*
 * XREFs of Endpoint_SendClearStallTransfer @ 0x14001BC34
 * Callers:
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x14001BAC0 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_ddq @ 0x140001BE8 (WPP_RECORDER_SF_ddq.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

_UNKNOWN **__fastcall Endpoint_SendClearStallTransfer(_QWORD **Context)
{
  PIRP *v1; // rax
  PIRP v3; // rbp
  PIRP *v4; // rdi
  char v5; // al
  _IO_STACK_LOCATION *v6; // rbx
  __int64 v7; // rax
  struct _DEVICE_OBJECT *v8; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  _UNKNOWN **result; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rdx
  __int64 InvokeOnError; // [rsp+28h] [rbp-40h]
  __int64 InvokeOnCancel; // [rsp+30h] [rbp-38h]
  _BYTE v17[12]; // [rsp+40h] [rbp-28h] BYREF
  int v18; // [rsp+4Ch] [rbp-1Ch]
  PIRP v19; // [rsp+50h] [rbp-18h]

  v1 = (PIRP *)Context[35];
  v3 = *v1;
  v4 = v1 + 1;
  IoReuseIrp(*v1, 0);
  v5 = (_BYTE)v4[16] & 0x1C;
  *((_BYTE *)v4 + 129) = 1;
  *((_WORD *)v4 + 65) = 0;
  *((_BYTE *)v4 + 128) = v5 | 2;
  *((_DWORD *)v4 + 33) = *((unsigned __int8 *)Context + 98);
  *(_DWORD *)v4 = 3276936;
  v4[4] = (PIRP)24;
  v4[5] = 0LL;
  v4[6] = 0LL;
  *((_DWORD *)v4 + 14) = 5000;
  v6 = v3->Tail.Overlay.CurrentStackLocation - 1;
  memset(v6, 0, sizeof(_IO_STACK_LOCATION));
  v6->MajorFunction = 15;
  v6->Parameters.Read.ByteOffset.LowPart = 2228227;
  v6->Parameters.WMI.ProviderId = (unsigned __int64)v4;
  --v3->CurrentLocation;
  v7 = (__int64)&v3->Tail.Overlay.CurrentStackLocation[-1];
  v3->Tail.Overlay.CurrentStackLocation = (_IO_STACK_LOCATION *)v7;
  *(_OWORD *)(v7 - 72) = *(_OWORD *)v7;
  *(_OWORD *)(v7 - 56) = *(_OWORD *)(v7 + 16);
  *(_OWORD *)(v7 - 40) = *(_OWORD *)(v7 + 32);
  *(_QWORD *)(v7 - 24) = *(_QWORD *)(v7 + 48);
  *(_BYTE *)(v7 - 69) = 0;
  v8 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 248))(
                                  WdfDriverGlobals,
                                  **Context);
  if ( IoSetCompletionRoutineEx(v8, v3, Endpoint_ClearStallTransferCompletion, Context, 1u, 1u, 1u) < 0 )
  {
    CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))Endpoint_ClearStallTransferCompletion;
    CurrentStackLocation[-1].Context = Context;
    CurrentStackLocation[-1].Control = -32;
  }
  --v3->CurrentLocation;
  --v3->Tail.Overlay.CurrentStackLocation;
  v10 = Context[2];
  v11 = v10[23];
  if ( v11 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(v11 + 88) + 72LL);
    v18 = 0;
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount <= 0x34 )
        *(_DWORD *)v17 = -1;
      else
        *(_DWORD *)v17 = *(_DWORD *)(WdfStructures + 416);
    }
    else
    {
      *(_DWORD *)v17 = 24;
    }
    v14 = Context[35];
    *(_QWORD *)&v17[4] = 3LL;
    v19 = v3;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _BYTE *))(WdfFunctions_01033 + 1992))(
      WdfDriverGlobals,
      v14[18],
      v17);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(InvokeOnCancel) = *((_DWORD *)Context + 38);
      LODWORD(InvokeOnError) = *((unsigned __int8 *)Context[2] + 143);
      WPP_RECORDER_SF_ddq(
        (__int64)Context[10],
        4u,
        0xDu,
        0x47u,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        InvokeOnError,
        InvokeOnCancel,
        Context[35][18],
        *(_QWORD *)v17);
    }
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2248))(
                            WdfDriverGlobals,
                            Context[35][18],
                            v13);
    if ( (int)result < 0 )
      return (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2104))(
                            WdfDriverGlobals,
                            Context[35][18],
                            (unsigned int)result);
  }
  else
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(InvokeOnCancel) = *((_DWORD *)Context + 38);
      LODWORD(InvokeOnError) = *((unsigned __int8 *)v10 + 143);
      return (_UNKNOWN **)WPP_RECORDER_SF_ddq(
                            (__int64)Context[10],
                            2u,
                            0xDu,
                            0x46u,
                            (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
                            InvokeOnError,
                            InvokeOnCancel,
                            Context[35][18]);
    }
  }
  return result;
}
