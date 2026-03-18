/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x140033450
 * Callers:
 *     <none>
 * Callees:
 *     TR_Disable_Internal @ 0x140004708 (TR_Disable_Internal.c)
 *     TR_Enable_Internal @ 0x140004C30 (TR_Enable_Internal.c)
 *     Endpoint_GetDequeuePointer @ 0x14000A01C (Endpoint_GetDequeuePointer.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x140035038 (XilEndpoint_AllocateStreamContextArray.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x14003A6E4 (UsbDevice_ReconfigureEndpoint.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x14003CB1C (XilEndpoint_CommitStreamContextArrayUpdates.c)
 *     WPP_RECORDER_SF_dddd @ 0x140044934 (WPP_RECORDER_SF_dddd.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x140046CE4 (XilEndpoint_FreeStreamContextArray.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsEnable(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v4; // ax
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned int *v8; // r15
  _DWORD *v9; // rdi
  __int64 v10; // r14
  __int64 *v11; // r12
  __int64 v12; // r12
  int StreamContextArray; // edi
  unsigned int v14; // r14d
  int v15; // edx
  __int64 DequeuePointer; // rax
  __int64 v17; // rdx
  int v19; // edx
  unsigned int i; // r14d
  __int64 v21; // [rsp+28h] [rbp-41h]
  __int64 v22; // [rsp+30h] [rbp-39h]
  __int64 v23; // [rsp+38h] [rbp-31h]
  int v24; // [rsp+50h] [rbp-19h] BYREF
  int v25; // [rsp+54h] [rbp-15h] BYREF
  __int64 v26; // [rsp+58h] [rbp-11h]
  _OWORD v27[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v28; // [rsp+80h] [rbp+17h]

  v26 = a3;
  v25 = 0;
  v24 = 0;
  v28 = 0LL;
  memset(v27, 0, sizeof(v27));
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v27[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v4 = -1;
  }
  else
  {
    v4 = 40;
  }
  LOWORD(v27[0]) = v4;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a3,
    v27);
  v5 = *((_QWORD *)&v27[0] + 1);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a2,
         off_14006B1A0);
  v7 = *(_QWORD *)v6;
  v8 = (unsigned int *)(v6 + 8);
  v9 = (_DWORD *)(*(_QWORD *)v6 + 152LL);
  v10 = *(_QWORD *)v6 + 16LL;
  v11 = (__int64 *)(*(_QWORD *)v6 + 80LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddL(
      *v11,
      4u,
      0xDu,
      0x6Eu,
      (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)v10 + 143LL),
      *v9,
      *v8);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD))(WdfFunctions_01033 + 1304))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)(v7 + 88) + 72LL),
    0LL,
    0LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, int *, int *))(WdfFunctions_01033 + 1224))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)(v7 + 88) + 72LL),
    &v25,
    &v24);
  if ( v25 || v24 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = *(unsigned __int8 *)(*(_QWORD *)v10 + 143LL);
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_dddd(
        *v11,
        v19,
        13,
        111,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(_BYTE *)(*(_QWORD *)v10 + 143LL),
        *v9,
        v25,
        v24);
    }
    goto LABEL_27;
  }
  if ( !*v8 || *v8 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 88LL) + 116LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v23) = *v8;
      LODWORD(v22) = *v9;
      LODWORD(v21) = *(unsigned __int8 *)(*(_QWORD *)v10 + 143LL);
      WPP_RECORDER_SF_ddL(
        *v11,
        2u,
        0xDu,
        0x70u,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        v21,
        v22,
        v23);
    }
LABEL_27:
    v12 = v26;
    StreamContextArray = -1073741811;
    *(_DWORD *)(v5 + 4) = -2147482880;
    goto LABEL_28;
  }
  v12 = v26;
  *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
               WdfDriverGlobals,
               v26,
               off_14006AE88) = v6;
  StreamContextArray = XilEndpoint_AllocateStreamContextArray(v6);
  if ( StreamContextArray < 0 )
  {
LABEL_14:
    *(_DWORD *)(v5 + 4) = -1073737728;
    goto LABEL_28;
  }
  v14 = 1;
  *(_QWORD *)(v7 + 144) = v6;
  if ( *v8 )
  {
    while ( 1 )
    {
      StreamContextArray = TR_Enable_Internal(*(_QWORD **)(104LL * (v14 - 1) + *(_QWORD *)(v7 + 144) + 48));
      if ( StreamContextArray < 0 )
        break;
      DequeuePointer = Endpoint_GetDequeuePointer(v7, v14);
      v17 = v14++;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 144) + 32LL) + 16LL) + 16 * v17) = DequeuePointer;
      if ( v14 > *v8 )
        goto LABEL_18;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(v7 + 80),
        v15,
        13,
        113,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v7 + 16) + 143LL),
        *(_DWORD *)(v7 + 152),
        v14,
        StreamContextArray);
    }
    goto LABEL_14;
  }
LABEL_18:
  StreamContextArray = XilEndpoint_CommitStreamContextArrayUpdates(v6);
  if ( StreamContextArray >= 0 )
    return UsbDevice_ReconfigureEndpoint(*(_QWORD *)(v7 + 16), v7, Endpoint_EndpointStaticStreamsEnableCompletion, v12);
  *(_DWORD *)(v5 + 4) = -2147481600;
LABEL_28:
  for ( i = 1; i <= *(_DWORD *)(v6 + 8); ++i )
    TR_Disable_Internal(*(_QWORD *)(104LL * (i - 1) + v6 + 48), 1);
  *(_QWORD *)(v7 + 144) = *(_QWORD *)(v7 + 136);
  XilEndpoint_FreeStreamContextArray(v6);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 1232))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)(v7 + 88) + 72LL));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           v12,
           (unsigned int)StreamContextArray);
}
