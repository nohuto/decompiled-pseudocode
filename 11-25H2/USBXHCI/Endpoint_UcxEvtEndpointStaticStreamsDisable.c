/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x140047F20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     TR_GetDequeuePointer @ 0x140010580 (TR_GetDequeuePointer.c)
 *     TR_Enable_Internal @ 0x140011210 (TR_Enable_Internal.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x140036AE4 (XilEndpoint_AllocateStreamContextArray.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x14003ADB8 (UsbDevice_ReconfigureEndpoint.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x14003CB9C (XilEndpoint_CommitStreamContextArrayUpdates.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1400469D4 (XilEndpoint_FreeStreamContextArray.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsDisable(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v5; // ax
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 *v8; // rbx
  _DWORD *v9; // r14
  __int64 *v10; // rsi
  __int64 **Pool2; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r9d
  int StreamContextArray; // edi
  _QWORD *v16; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // [rsp+28h] [rbp-70h]
  __int64 v21; // [rsp+30h] [rbp-68h]
  __int64 v22; // [rsp+38h] [rbp-60h]
  _OWORD v23[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v24; // [rsp+60h] [rbp-38h]

  v24 = 0LL;
  memset(v23, 0, sizeof(v23));
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v23[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v5 = -1;
  }
  else
  {
    v5 = 40;
  }
  LOWORD(v23[0]) = v5;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a3,
    v23);
  v6 = *((_QWORD *)&v23[0] + 1);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a2,
         off_14006B1A0);
  v8 = *(__int64 **)v7;
  v9 = (_DWORD *)(*(_QWORD *)v7 + 144LL);
  v10 = (__int64 *)(*(_QWORD *)v7 + 16LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddL(
      v8[10],
      4u,
      0xDu,
      0x71u,
      (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
      *(unsigned __int8 *)(*v10 + 135),
      *v9,
      *(_DWORD *)(v7 + 8),
      *(_QWORD *)&v23[0]);
  *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
               WdfDriverGlobals,
               a3,
               off_14006AE88) = v7;
  Pool2 = (__int64 **)ExAllocatePool2(64LL, 152LL, 1229146200LL);
  v8[16] = (__int64)Pool2;
  if ( Pool2 )
  {
    *Pool2 = v8;
    *(_DWORD *)(v8[16] + 8) = 1;
    *(_DWORD *)(v8[16] + 12) = 1;
    StreamContextArray = XilEndpoint_AllocateStreamContextArray(v8[16], v12, v13, v14);
    if ( StreamContextArray >= 0 )
    {
      v18 = v8[16];
      v19 = v8[11];
      v8[17] = v18;
      *(_QWORD *)(v18 + 48) = v19;
      StreamContextArray = TR_Enable_Internal((_QWORD *)v8[11]);
      if ( StreamContextArray >= 0 )
      {
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8[17] + 32) + 16LL) + 16LL) = TR_GetDequeuePointer(v8[11]);
        StreamContextArray = XilEndpoint_CommitStreamContextArrayUpdates(v8[17]);
        if ( StreamContextArray >= 0 )
          return UsbDevice_ReconfigureEndpoint(
                   *v10,
                   (__int64)v8,
                   (__int64 (__fastcall *)(__int64, __int64))Endpoint_EndpointStaticStreamsDisableCompletion,
                   a3);
        *(_DWORD *)(v6 + 4) = -2147481600;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v22) = StreamContextArray;
          LODWORD(v21) = *v9;
          LODWORD(v20) = *(unsigned __int8 *)(*v10 + 135);
          WPP_RECORDER_SF_ddL(
            v8[10],
            2u,
            0xDu,
            0x72u,
            (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
            v20,
            v21,
            v22);
        }
        *(_DWORD *)(v6 + 4) = -1073737728;
      }
    }
  }
  else
  {
    *(_DWORD *)(v6 + 4) = -1073737728;
    StreamContextArray = -1073741670;
  }
  v16 = (_QWORD *)v8[16];
  if ( v16 )
  {
    XilEndpoint_FreeStreamContextArray(v16);
    ExFreePoolWithTag((PVOID)v8[16], 0x49434858u);
    v8[16] = 0LL;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           a3,
           (unsigned int)StreamContextArray);
}
