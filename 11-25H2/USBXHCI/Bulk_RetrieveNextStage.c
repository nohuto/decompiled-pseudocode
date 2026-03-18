/*
 * XREFs of Bulk_RetrieveNextStage @ 0x14001ADD0
 * Callers:
 *     Bulk_MapTransfers @ 0x14001AB60 (Bulk_MapTransfers.c)
 * Callees:
 *     Bulk_TransferData_DetermineTransferMechanism @ 0x140004060 (Bulk_TransferData_DetermineTransferMechanism.c)
 *     McTemplateK0uqqq_EtwWriteTransfer @ 0x140006B40 (McTemplateK0uqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DDDq @ 0x140010614 (WPP_RECORDER_SF_DDDq.c)
 *     Bulk_Transfer_Complete @ 0x1400121B4 (Bulk_Transfer_Complete.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1400159CC (WPP_RECORDER_SF_DDDD.c)
 *     Bulk_Transfer_PrepareForCompletion @ 0x140017530 (Bulk_Transfer_PrepareForCompletion.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x140018F80 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_TransferData_ConfigureBuffer @ 0x140022490 (Bulk_TransferData_ConfigureBuffer.c)
 *     Bulk_Stage_Acquire @ 0x140022EE0 (Bulk_Stage_Acquire.c)
 *     WPP_RECORDER_SF_DDDqq @ 0x140023030 (WPP_RECORDER_SF_DDDqq.c)
 *     TR_ValidateSecureTransferType @ 0x140023D80 (TR_ValidateSecureTransferType.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x140030330 (WPP_RECORDER_SF_DDDqd.c)
 *     WPP_RECORDER_SF_DDDd @ 0x14004BE90 (WPP_RECORDER_SF_DDDd.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

_BOOL8 __fastcall Bulk_RetrieveNextStage(__int64 a1)
{
  __int16 v1; // r12
  int v3; // edi
  KIRQL v4; // al
  int v5; // r8d
  _DWORD *v6; // r11
  unsigned int v7; // ecx
  int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // r8d
  __int64 v16; // r14
  char v17; // cl
  _DWORD *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // r8d
  int v24; // r8d
  KIRQL v25; // di
  __int64 v26; // rdx
  int v27; // r8d
  __int64 v28; // rdx
  int v29; // r8d
  int v30; // edx
  int v31; // r8d
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // edx
  __int64 *v35; // rdx
  int v36; // edx
  __int64 v38; // [rsp+20h] [rbp-98h]
  __int64 v39; // [rsp+28h] [rbp-90h]
  __int64 v40; // [rsp+30h] [rbp-88h]
  __int64 v41; // [rsp+50h] [rbp-68h] BYREF
  _OWORD v42[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v43; // [rsp+78h] [rbp-40h]

  v1 = 0;
  *(_QWORD *)(a1 + 368) = 0LL;
  v3 = 0;
  v41 = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v5 = *(_DWORD *)(a1 + 352);
  *(_BYTE *)(a1 + 104) = v4;
  if ( *(_DWORD *)(a1 + 356) == v5 )
  {
    v3 = -1073741823;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        5u,
        0xEu,
        0x14u,
        (__int64)&WPP_af203940883a35574f6554fa7269ecc3_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_DWORD *)(a1 + 64),
        v5);
    goto LABEL_5;
  }
  if ( *(_QWORD *)(a1 + 376) != a1 + 376 )
  {
    v6 = *(_DWORD **)(a1 + 384);
    v7 = v6[26];
    if ( v6[28] < v7 )
    {
      if ( *(_DWORD *)(a1 + 340) != 3 )
      {
        v12 = Bulk_Stage_Acquire(*(_QWORD *)(a1 + 384));
        *(_QWORD *)(a1 + 368) = v12;
        if ( v12 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v14 = *(_QWORD *)(a1 + 48);
            v15 = *(unsigned __int8 *)(v14 + 135);
            LOBYTE(v14) = 4;
            WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v14, v15, 21);
          }
        }
        else
        {
          v3 = -1073741823;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_DDDq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), 5u, v13, 0x16u, v38);
          }
        }
        goto LABEL_5;
      }
      if ( v6[30] != v6[29] )
      {
        v6[28] = v7;
LABEL_5:
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
        return v3 >= 0;
      }
      Bulk_Transfer_CompleteCancelable(a1, *(__int64 **)(a1 + 384), -1073737728, 1);
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  while ( 1 )
  {
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01033 + 1264))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 72),
           &v41);
    if ( v3 < 0 )
      break;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
           WdfDriverGlobals,
           v41,
           off_14006AE88);
    v10 = v41;
    v11 = v9;
    memset(v42, 0, sizeof(v42));
    v43 = 0LL;
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount <= 0x33 )
        LOWORD(v42[0]) = -1;
      else
        LOWORD(v42[0]) = *(_WORD *)(WdfStructures + 408);
    }
    else
    {
      LOWORD(v42[0]) = 40;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
      WdfDriverGlobals,
      v41,
      v42);
    if ( !*(_BYTE *)(v11 + 16) )
    {
      v16 = *((_QWORD *)&v42[0] + 1);
      switch ( *(_WORD *)(*((_QWORD *)&v42[0] + 1) + 2LL) )
      {
        case '9':
        case ':':
          v17 = 1;
          break;
        default:
          v17 = 0;
          break;
      }
      v18 = (_DWORD *)(*((_QWORD *)&v42[0] + 1) + 52LL);
      if ( !v17 )
        v18 = (_DWORD *)(*((_QWORD *)&v42[0] + 1) + 36LL);
      *(_DWORD *)(v11 + 17) = 0;
      *(_WORD *)(v11 + 21) = 0;
      *(_BYTE *)(v11 + 23) = 0;
      *(_OWORD *)(v11 + 32) = 0LL;
      memset((void *)(v11 + 104), 0, 0xF8uLL);
      *(_QWORD *)(v11 + 8) = v11;
      *(_QWORD *)v11 = v11;
      *(_QWORD *)(v11 + 24) = v10;
      *(_QWORD *)(v11 + 48) = v16;
      *(_QWORD *)(v11 + 64) = 0LL;
      *(_QWORD *)(v11 + 72) = 259LL;
      *(_BYTE *)(v11 + 16) = 1;
      *(_QWORD *)(v11 + 56) = a1;
      *(_QWORD *)(v11 + 80) = 0LL;
      *(_QWORD *)(v11 + 88) = 0LL;
      *(_QWORD *)(v11 + 96) = 0LL;
      *(_DWORD *)(v11 + 104) = *v18;
      *(_DWORD *)(v11 + 128) = 464;
      *(_WORD *)(v11 + 132) = 0;
      *(_BYTE *)(v11 + 134) = 0;
      *(_QWORD *)(v11 + 108) = 0LL;
      *(_QWORD *)(v11 + 116) = 0LL;
      *v18 = 0;
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      {
        v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2280))(
                WdfDriverGlobals,
                v10);
        if ( (int)IoGetActivityIdIrp(v19, v11 + 32) < 0 )
          EtwActivityIdControl(3u, (LPGUID)(v11 + 32));
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
        {
          v21 = *(_QWORD *)(a1 + 56);
          LODWORD(v40) = *(_DWORD *)(v11 + 104);
          LODWORD(v39) = *(_DWORD *)(a1 + 64);
          LODWORD(v38) = *(_DWORD *)(v21 + 144);
          McTemplateK0uqqq_EtwWriteTransfer(v21, v20, v11 + 32, *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL), v38, v39, v40);
        }
      }
    }
    if ( (int)TR_ValidateSecureTransferType(a1, *(_QWORD *)(v11 + 48)) < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = *(_QWORD *)(a1 + 48);
        v23 = *(unsigned __int8 *)(v22 + 135);
        LOBYTE(v22) = 2;
        WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v22, v23, 24);
      }
      v24 = -2147482880;
      goto LABEL_40;
    }
    Bulk_TransferData_DetermineTransferMechanism(v11);
    if ( (int)Bulk_TransferData_ConfigureBuffer(v11) >= 0 )
    {
      v28 = *(_QWORD *)(v11 + 24);
      *(_DWORD *)(v11 + 64) = 1;
      v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void (__fastcall *)(__int64)))(WdfFunctions_01033
                                                                                                 + 3144))(
             WdfDriverGlobals,
             v28,
             Bulk_WdfEvtRequestCancel);
      if ( v3 >= 0 )
      {
        *(_QWORD *)(a1 + 368) = Bulk_Stage_Acquire(v11);
        if ( !*(_DWORD *)(a1 + 356) )
        {
          v32 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
          if ( *(_DWORD *)(v32 + 24) > 1u )
          {
            v33 = *(unsigned int *)(*(_QWORD *)(v11 + 48) + 64LL);
            if ( (unsigned int)v33 < *(_DWORD *)(v32 + 48) )
              v1 = *(_WORD *)(*(_QWORD *)(v32 + 56) + 2 * v33);
          }
          *(_WORD *)(a1 + 112) = v1;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v34 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          LOBYTE(v34) = 4;
          WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v34, v31, 27);
        }
        *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
        v35 = *(__int64 **)(a1 + 384);
        if ( *v35 != a1 + 376 )
          __fastfail(3u);
        *(_QWORD *)v11 = a1 + 376;
        *(_QWORD *)(v11 + 8) = v35;
        *v35 = v11;
        *(_QWORD *)(a1 + 384) = v11;
        goto LABEL_5;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v30 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v30) = 3;
        WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v30, v29, 26);
      }
      *(_DWORD *)(v11 + 64) = 3;
      v24 = -1073676288;
LABEL_40:
      Bulk_Transfer_PrepareForCompletion(a1, v11, v24);
      v25 = KfRaiseIrql(2u);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2104))(
        WdfDriverGlobals,
        *(_QWORD *)(v11 + 24),
        *(unsigned int *)(v11 + 72));
      KeLowerIrql(v25);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = *(_QWORD *)(a1 + 48);
        v27 = *(unsigned __int8 *)(v26 + 135);
        LOBYTE(v26) = 3;
        WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v26, v27, 25);
      }
      Bulk_Transfer_Complete(a1, v11);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v36 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    LOBYTE(v36) = 5;
    WPP_RECORDER_SF_DDDd(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v36,
      v8,
      23,
      (__int64)&WPP_af203940883a35574f6554fa7269ecc3_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_DWORD *)(a1 + 64),
      v3);
  }
  return v3 >= 0;
}
