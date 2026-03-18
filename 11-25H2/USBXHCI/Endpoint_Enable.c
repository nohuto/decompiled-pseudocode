/*
 * XREFs of Endpoint_Enable @ 0x140011530
 * Callers:
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x14000F6F4 (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_UcxEvtEnable @ 0x14002FFD0 (UsbDevice_UcxEvtEnable.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     Endpoint_GetDequeuePointer @ 0x14001053C (Endpoint_GetDequeuePointer.c)
 *     TR_GetDequeuePointer @ 0x140010580 (TR_GetDequeuePointer.c)
 *     Endpoint_Disable_Internal @ 0x140010904 (Endpoint_Disable_Internal.c)
 *     RtlStringCchPrintfA @ 0x140011198 (RtlStringCchPrintfA.c)
 *     TR_Enable_Internal @ 0x140011210 (TR_Enable_Internal.c)
 *     Endpoint_IsCandidateForSplitTransactionHSIIWorkaround @ 0x1400112A8 (Endpoint_IsCandidateForSplitTransactionHSIIWorkaround.c)
 *     ESM_AddEvent @ 0x1400130A4 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_ddq @ 0x140021C28 (WPP_RECORDER_SF_ddq.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x140036AE4 (XilEndpoint_AllocateStreamContextArray.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x14003CB9C (XilEndpoint_CommitStreamContextArrayUpdates.c)
 *     Controller_SetHSIIWorkaround @ 0x14004253C (Controller_SetHSIIWorkaround.c)
 *     WPP_RECORDER_SF_dddd @ 0x140044E38 (WPP_RECORDER_SF_dddd.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Endpoint_Enable(__int64 a1)
{
  void *v2; // rdx
  __int64 v3; // rax
  __int64 v4; // r15
  int StreamContextArray; // edi
  int v6; // r8d
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned int i; // esi
  __int64 DequeuePointer; // rax
  __int64 v18; // rdx
  int v19; // ecx
  __int64 v20; // rsi
  __int64 Pool2; // rax
  unsigned __int16 v22; // r9
  __int64 v23; // rcx
  int v24; // edx
  __int64 v25; // [rsp+28h] [rbp-31h]
  __int64 v26; // [rsp+30h] [rbp-29h]
  __int64 v27; // [rsp+38h] [rbp-21h]
  __int128 v28; // [rsp+50h] [rbp-9h] BYREF
  __int128 v29; // [rsp+60h] [rbp+7h]
  char pszDest[16]; // [rsp+70h] [rbp+17h] BYREF
  __int64 v31; // [rsp+80h] [rbp+27h]

  v28 = 0LL;
  v31 = 0LL;
  v29 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  v2 = &WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_ddq(
      *(_QWORD *)(*(_QWORD *)a1 + 72LL),
      (_DWORD)v2,
      13,
      23,
      (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL),
      *(_DWORD *)(a1 + 144),
      *(_QWORD *)(a1 + 24));
  }
  if ( (*(_QWORD *)(*(_QWORD *)a1 + 744LL) & 0x10000LL) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 16);
    if ( *(_DWORD *)(v11 + 36) == 1 && ((*(_DWORD *)(a1 + 120) - 3) & 0xFFFFFFFB) == 0 )
    {
      v12 = 120LL * (unsigned int)(*(_DWORD *)(v11 + 44) - 1);
      v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 152LL) + 48LL);
      if ( *(_BYTE *)(v12 + v13 + 13) == 3 )
        _InterlockedAdd((volatile signed __int32 *)(v12 + v13 + 108), 1u);
    }
  }
  if ( Endpoint_IsCandidateForSplitTransactionHSIIWorkaround(a1) && !*(_BYTE *)(a1 + 38) )
  {
    v10 = *(_QWORD *)a1;
    *(_BYTE *)(a1 + 38) = 1;
    if ( _InterlockedIncrement((volatile signed __int32 *)(v10 + 1064)) == 1 )
      Controller_SetHSIIWorkaround();
  }
  v3 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 (__fastcall *)(_QWORD)))qword_14006BDD8)(
         UcxDriverGlobals,
         *(_QWORD *)(a1 + 24),
         Endpoint_Enable);
  v4 = v3;
  if ( *(_BYTE *)(a1 + 37) )
  {
    if ( v3 )
    {
      v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
              WdfDriverGlobals,
              v3,
              off_14006B1A0);
      *(_QWORD *)(a1 + 136) = v14;
      v15 = v14;
      if ( *(_QWORD *)(v14 + 32)
        || (StreamContextArray = XilEndpoint_AllocateStreamContextArray(v14), StreamContextArray >= 0) )
      {
        for ( i = 1; ; ++i )
        {
          if ( i > *(_DWORD *)(v15 + 8) )
          {
            v19 = v15;
            goto LABEL_30;
          }
          StreamContextArray = TR_Enable_Internal(*(_QWORD **)(104LL * (i - 1) + *(_QWORD *)(a1 + 136) + 48));
          if ( StreamContextArray < 0 )
            break;
          DequeuePointer = Endpoint_GetDequeuePointer(a1, i);
          v18 = 2LL * i;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 32LL) + 16LL) + 8 * v18) = DequeuePointer;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v24 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL);
          LOBYTE(v24) = 2;
          WPP_RECORDER_SF_dddd(
            *(_QWORD *)(*(_QWORD *)a1 + 72LL),
            v24,
            13,
            25,
            (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
            *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL),
            *(_DWORD *)(a1 + 144),
            i + 1,
            StreamContextArray);
        }
      }
      goto LABEL_15;
    }
    v20 = *(_QWORD *)(a1 + 128);
    if ( !v20 )
    {
      Pool2 = ExAllocatePool2(64LL, 152LL, 1229146200LL);
      *(_QWORD *)(a1 + 128) = Pool2;
      LODWORD(v20) = Pool2;
      if ( !Pool2 )
      {
        StreamContextArray = -1073741670;
        goto LABEL_15;
      }
      *(_QWORD *)(a1 + 136) = Pool2;
      *(_QWORD *)Pool2 = a1;
      *(_DWORD *)(Pool2 + 8) = 1;
      *(_DWORD *)(Pool2 + 12) = 1;
      *(_QWORD *)(*(_QWORD *)(a1 + 136) + 48LL) = *(_QWORD *)(a1 + 88);
      StreamContextArray = XilEndpoint_AllocateStreamContextArray(Pool2);
      if ( StreamContextArray < 0 )
        goto LABEL_15;
    }
    StreamContextArray = TR_Enable_Internal(*(_QWORD **)(a1 + 88));
    if ( StreamContextArray >= 0 )
    {
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 32LL) + 16LL) + 16LL) = TR_GetDequeuePointer(*(_QWORD *)(a1 + 88));
      v19 = v20;
LABEL_30:
      StreamContextArray = XilEndpoint_CommitStreamContextArrayUpdates(v19);
      if ( StreamContextArray >= 0 )
        goto LABEL_7;
LABEL_15:
      Endpoint_Disable_Internal((__int64 *)a1, 1, v6);
      goto LABEL_11;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_15;
    v22 = 24;
    LODWORD(v27) = StreamContextArray;
    LODWORD(v26) = *(_DWORD *)(a1 + 144);
    LODWORD(v25) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL);
    v23 = *(_QWORD *)(*(_QWORD *)a1 + 72LL);
LABEL_45:
    WPP_RECORDER_SF_ddL(v23, 2u, 0xDu, v22, (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids, v25, v26, v27);
    goto LABEL_15;
  }
  StreamContextArray = TR_Enable_Internal(*(_QWORD **)(a1 + 88));
  if ( StreamContextArray < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_15;
    v22 = 26;
    LODWORD(v27) = StreamContextArray;
    v23 = *(_QWORD *)(*(_QWORD *)a1 + 72LL);
    LODWORD(v26) = *(_DWORD *)(a1 + 144);
    LODWORD(v25) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL);
    goto LABEL_45;
  }
LABEL_7:
  v7 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)&v29 = 0LL;
  v8 = *(_QWORD *)a1;
  *(_QWORD *)&v28 = 56LL;
  pszDest[0] = 0;
  HIDWORD(v29) = 16;
  BYTE8(v29) = 0;
  v31 = 0x200000002LL;
  *((_QWORD *)&v28 + 1) = 0xC800000400LL;
  if ( RtlStringCchPrintfA(
         pszDest,
         0x10uLL,
         "%02d SLT%02d DCI%02d",
         *(_DWORD *)(v8 + 176),
         *(unsigned __int8 *)(v7 + 135),
         *(_DWORD *)(a1 + 144)) < 0
    || (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v28, a1 + 80) < 0 )
  {
    *(_QWORD *)(a1 + 80) = *(_QWORD *)(*(_QWORD *)a1 + 72LL);
  }
  StreamContextArray = 0;
  ESM_AddEvent((PVOID)(a1 + 296));
LABEL_11:
  if ( v4 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(_QWORD), __int64, const char *))(WdfFunctions_01033 + 1648))(
      WdfDriverGlobals,
      v4,
      Endpoint_Enable,
      1222LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.c");
  return (unsigned int)StreamContextArray;
}
