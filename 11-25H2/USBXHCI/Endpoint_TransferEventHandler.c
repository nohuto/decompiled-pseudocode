/*
 * XREFs of Endpoint_TransferEventHandler @ 0x140021020
 * Callers:
 *     UsbDevice_TransferEventHandler @ 0x140020F10 (UsbDevice_TransferEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001103C (Controller_HwVerifierBreakIfEnabled.c)
 *     Control_EP_TransferEventHandler @ 0x140012510 (Control_EP_TransferEventHandler.c)
 *     Controller_ReportFatalError @ 0x140013068 (Controller_ReportFatalError.c)
 *     ESM_AddEvent @ 0x1400130A4 (ESM_AddEvent.c)
 *     Endpoint_StoppedCompletionCode @ 0x140015010 (Endpoint_StoppedCompletionCode.c)
 *     Endpoint_HaltedCompletionCode @ 0x140016470 (Endpoint_HaltedCompletionCode.c)
 *     Bulk_EP_TransferEventHandler @ 0x1400199D0 (Bulk_EP_TransferEventHandler.c)
 *     WPP_RECORDER_SF_ddqL @ 0x1400216DC (WPP_RECORDER_SF_ddqL.c)
 *     WPP_RECORDER_SF_ddi @ 0x14002F914 (WPP_RECORDER_SF_ddi.c)
 *     Endpoint_Stream_IsTransferEventLikelyDuplicate @ 0x140047928 (Endpoint_Stream_IsTransferEventLikelyDuplicate.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

void __fastcall Endpoint_TransferEventHandler(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r10
  char v6; // al
  __int64 v7; // rdx
  signed __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rax
  signed __int64 v11; // rdx
  unsigned int i; // esi
  char v13; // al
  __int64 v14; // rax
  int v15; // r9d
  int v16; // edx
  const char *v17; // rax
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  char v21; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)a2;
  v21 = 0;
  if ( (*(_QWORD *)(v3 + 744) & 4) != 0 && *(_BYTE *)(a1 + 11) == 2 && (*(_DWORD *)(a1 + 12) & 4) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddqL(*(_QWORD *)(a2 + 80), a2, a3, 89);
    return;
  }
  v6 = *(_BYTE *)(a1 + 11);
  if ( (!_bittest64((const signed __int64 *)(v3 + 736), 0x3Eu) || v6 != -57)
    && ((*(_QWORD *)(v3 + 744) & 0x20) == 0 || v6 != -58)
    && ((unsigned __int8)(v6 + 64) <= 0x1Fu || v6 == 5 || v6 == 33) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v3 + 72),
        2u,
        0xDu,
        0x5Au,
        (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 135LL),
        *(_DWORD *)(a2 + 144),
        *(unsigned __int8 *)(a1 + 11));
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)a2,
      *(_QWORD *)(a2 + 8),
      *(_QWORD *)(a2 + 24),
      2048LL,
      "Unrecognized completion code in Transfer Event TRB",
      0LL,
      (__int128 *)(a2 + 184));
    Controller_ReportFatalError(*(_QWORD *)a2, 2, 4112, *(unsigned __int8 *)(a1 + 11), *(_QWORD *)(a2 + 16), a2, 0LL);
    return;
  }
  if ( !*(_BYTE *)(a2 + 37) )
  {
    v7 = *(_QWORD *)(a2 + 88);
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v7 + 32) + 88LL))(a1);
    }
    else if ( (*(_DWORD *)a1 & 3) != 0 )
    {
      if ( (*(_DWORD *)a1 & 3) != 1LL && (unsigned __int64)(*(_DWORD *)a1 & 3) - 2 <= 1 )
        Bulk_EP_TransferEventHandler(a1, 0LL);
    }
    else
    {
      Control_EP_TransferEventHandler(a1);
    }
    return;
  }
  v8 = *(_QWORD *)a1;
  v9 = *(_QWORD *)(a2 + 136);
  if ( !*(_QWORD *)a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = *(_QWORD *)(a2 + 16);
      v15 = 91;
LABEL_32:
      WPP_RECORDER_SF_ddqL(*(_QWORD *)(a2 + 80), *(unsigned __int8 *)(v14 + 135), a3, v15);
    }
LABEL_34:
    if ( Endpoint_HaltedCompletionCode(a2, *(unsigned __int8 *)(a1 + 11)) )
    {
      _m_prefetchw((const void *)(a2 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(a2 + 32), 0x20u) & 0x20) == 0 )
      {
        *(_DWORD *)(*(_QWORD *)(a2 + 136) + 24LL) = v16;
        _InterlockedOr((volatile signed __int32 *)(a2 + 32), 4u);
        ESM_AddEvent((KSPIN_LOCK *)(a2 + 296), 154);
        return;
      }
      v17 = "Received duplicate Transfer Event TRB with Halted Completion Code";
    }
    else
    {
      if ( !Endpoint_StoppedCompletionCode(v16) )
        return;
      _m_prefetchw((const void *)(a2 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(a2 + 32), 0x10u) & 0x10) == 0 )
      {
        _m_prefetchw((const void *)(a2 + 32));
        if ( (_InterlockedXor((volatile signed __int32 *)(a2 + 32), 8u) & 8) != 0 )
          ESM_AddEvent((KSPIN_LOCK *)(a2 + 296), 118);
        return;
      }
      v17 = "Received duplicate Stopped Transfer Events";
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)a2,
      *(_QWORD *)(a2 + 8),
      *(_QWORD *)(a2 + 24),
      0x2000000LL,
      v17,
      0LL,
      0LL);
    return;
  }
  v10 = *(_QWORD *)(v9 + 32);
  v11 = *(_QWORD *)(v10 + 24);
  if ( v8 >= v11 && v8 < v11 + *(unsigned int *)(v10 + 44) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_34;
    v14 = *(_QWORD *)(a2 + 16);
    v15 = 92;
    goto LABEL_32;
  }
  for ( i = 1; i <= *(_DWORD *)(v9 + 8); ++i )
  {
    v11 = *(_QWORD *)(104LL * (i - 1) + *(_QWORD *)(a2 + 136) + 48);
    if ( v11 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v11 + 32) + 88LL))(a1);
    }
    else if ( (*(_DWORD *)a1 & 3) != 0 )
    {
      if ( (*(_DWORD *)a1 & 3) == 1LL || (unsigned __int64)(*(_DWORD *)a1 & 3) - 2 > 1 )
        continue;
      v13 = Bulk_EP_TransferEventHandler(a1, 0LL);
    }
    else
    {
      v13 = Control_EP_TransferEventHandler(a1);
    }
    if ( v13 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(a2 + 80),
          5u,
          0xDu,
          0x5Du,
          (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 135LL),
          *(_DWORD *)(a2 + 144),
          i + 1);
      return;
    }
  }
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_ddi(*(_QWORD *)(a2 + 80), v11, a3, 94);
    }
    Controller_ReportFatalError(*(_QWORD *)a2, 2, 4126, 0, *(_QWORD *)(a2 + 16), a2, 0LL);
    return;
  }
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 11) - 26) <= 2u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a2 + 80),
        2u,
        0xDu,
        0x5Fu,
        (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 135LL),
        *(_DWORD *)(a2 + 144));
    goto LABEL_34;
  }
  if ( (unsigned __int8)Endpoint_Stream_IsTransferEventLikelyDuplicate(a1, a2, &v21) )
  {
    if ( _bittest64((const signed __int64 *)(*(_QWORD *)a2 + 736LL), 0x26u) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v20 = 96;
LABEL_65:
      LOBYTE(v18) = 3;
      WPP_RECORDER_SF_ddi(*(_QWORD *)(a2 + 80), v18, v19, v20);
      return;
    }
    if ( v21 && Endpoint_StoppedCompletionCode(*(unsigned __int8 *)(a1 + 11)) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v20 = 97;
      goto LABEL_65;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_ddi(*(_QWORD *)(a2 + 80), v18, v19, 98);
    }
    Controller_ReportFatalError(*(_QWORD *)a2, 2, 4128, 0, *(_QWORD *)(a2 + 16), a2, 0LL);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_ddi(*(_QWORD *)(a2 + 80), v18, v19, 99);
    }
    Controller_ReportFatalError(*(_QWORD *)a2, 2, 4127, 0, *(_QWORD *)(a2 + 16), a2, 0LL);
  }
}
