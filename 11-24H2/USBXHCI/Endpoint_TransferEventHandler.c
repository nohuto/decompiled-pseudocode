/*
 * XREFs of Endpoint_TransferEventHandler @ 0x140002700
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x140025820 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     WPP_RECORDER_SF_ddqL @ 0x140002428 (WPP_RECORDER_SF_ddqL.c)
 *     Bulk_EP_TransferEventHandler @ 0x140002E20 (Bulk_EP_TransferEventHandler.c)
 *     Endpoint_HaltedCompletionCode @ 0x140003C70 (Endpoint_HaltedCompletionCode.c)
 *     Endpoint_StoppedCompletionCode @ 0x140003FA0 (Endpoint_StoppedCompletionCode.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1400049B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Control_EP_TransferEventHandler @ 0x140005EB0 (Control_EP_TransferEventHandler.c)
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     ESM_AddEvent @ 0x140006A44 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_ddi @ 0x14002EC64 (WPP_RECORDER_SF_ddi.c)
 *     Endpoint_Stream_IsTransferEventLikelyDuplicate @ 0x140047C38 (Endpoint_Stream_IsTransferEventLikelyDuplicate.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall Endpoint_TransferEventHandler(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r10
  char v6; // al
  __int64 v7; // rdx
  unsigned __int64 result; // rax
  signed __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rax
  signed __int64 v12; // rdx
  unsigned int i; // esi
  __int64 v14; // rax
  unsigned __int16 v15; // r9
  unsigned int v16; // edx
  const char *v17; // rax
  int v18; // edx
  int v19; // edx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rdx
  char v23; // r8
  int v24; // [rsp+20h] [rbp-38h]
  char v25; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)a2;
  v25 = 0;
  if ( (*(_QWORD *)(v3 + 744) & 4) != 0 && *(_BYTE *)(a1 + 11) == 2 )
  {
    result = *(unsigned int *)(a1 + 12);
    if ( (result & 4) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return WPP_RECORDER_SF_ddqL(*(_QWORD *)(a2 + 80), a2, a3, 0x5Cu, v24);
      return result;
    }
  }
  v6 = *(_BYTE *)(a1 + 11);
  if ( (!_bittest64((const signed __int64 *)(v3 + 736), 0x3Eu) || v6 != -57)
    && ((*(_QWORD *)(v3 + 744) & 0x20) == 0 || v6 != -58)
    && ((unsigned __int8)(v6 + 64) <= 0x1Fu || v6 == 5 || v6 == 33) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = *(_QWORD *)(a2 + 16);
      v23 = *(_BYTE *)(v22 + 143);
      LOBYTE(v22) = 2;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v3 + 72),
        v22,
        13,
        93,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        v23,
        *(_DWORD *)(a2 + 152),
        v6);
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)a2,
      *(_QWORD *)(a2 + 8),
      *(_QWORD *)(a2 + 24),
      2048,
      (__int64)"Unrecognized completion code in Transfer Event TRB",
      0LL,
      a2 + 192);
    return Controller_ReportFatalError(
             *(_QWORD *)a2,
             2,
             4112,
             *(unsigned __int8 *)(a1 + 11),
             *(_QWORD *)(a2 + 16),
             a2,
             0LL);
  }
  if ( !*(_BYTE *)(a2 + 37) )
  {
    v7 = *(_QWORD *)(a2 + 88);
    if ( v7 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v7 + 32) + 88LL))(a1);
    if ( (*(_DWORD *)a1 & 3) == 0 )
      return Control_EP_TransferEventHandler(a1, 0LL);
    result = (*(_DWORD *)a1 & 3) - 1LL;
    if ( (*(_DWORD *)a1 & 3) != 1LL )
    {
      result = (*(_DWORD *)a1 & 3) - 2LL;
      if ( result <= 1 )
        return Bulk_EP_TransferEventHandler(a1, 0LL);
    }
    return result;
  }
  v9 = *(_QWORD *)a1;
  v10 = *(_QWORD *)(a2 + 144);
  if ( !*(_QWORD *)a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = *(_QWORD *)(a2 + 16);
      v15 = 94;
LABEL_32:
      WPP_RECORDER_SF_ddqL(*(_QWORD *)(a2 + 80), *(unsigned __int8 *)(v14 + 143), a3, v15, v24);
    }
LABEL_34:
    if ( (unsigned __int8)Endpoint_HaltedCompletionCode(a2, *(unsigned __int8 *)(a1 + 11)) )
    {
      _m_prefetchw((const void *)(a2 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(a2 + 32), 0x20u) & 0x20) == 0 )
      {
        *(_DWORD *)(*(_QWORD *)(a2 + 144) + 24LL) = v16;
        _InterlockedOr((volatile signed __int32 *)(a2 + 32), 4u);
        return ESM_AddEvent((PVOID)(a2 + 304));
      }
      v17 = "Received duplicate Transfer Event TRB with Halted Completion Code";
    }
    else
    {
      result = Endpoint_StoppedCompletionCode(v16);
      if ( !(_BYTE)result )
        return result;
      _m_prefetchw((const void *)(a2 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(a2 + 32), 0x10u) & 0x10) == 0 )
      {
        _m_prefetchw((const void *)(a2 + 32));
        result = (unsigned int)_InterlockedXor((volatile signed __int32 *)(a2 + 32), 8u);
        if ( (result & 8) != 0 )
          return ESM_AddEvent((PVOID)(a2 + 304));
        return result;
      }
      v17 = "Received duplicate Stopped Transfer Events";
    }
    return Controller_HwVerifierBreakIfEnabled(
             *(_QWORD *)a2,
             *(_QWORD *)(a2 + 8),
             *(_QWORD *)(a2 + 24),
             0x2000000,
             (__int64)v17,
             0LL,
             0LL);
  }
  v11 = *(_QWORD *)(v10 + 32);
  v12 = *(_QWORD *)(v11 + 24);
  if ( v9 >= v12 && v9 < v12 + *(unsigned int *)(v11 + 44) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_34;
    v14 = *(_QWORD *)(a2 + 16);
    v15 = 95;
    goto LABEL_32;
  }
  for ( i = 1; i <= *(_DWORD *)(v10 + 8); ++i )
  {
    v12 = *(_QWORD *)(104LL * (i - 1) + *(_QWORD *)(a2 + 144) + 48);
    if ( v12 )
    {
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v12 + 32) + 88LL))(a1);
    }
    else if ( (*(_DWORD *)a1 & 3) != 0 )
    {
      if ( (*(_DWORD *)a1 & 3) == 1LL || (unsigned __int64)(*(_DWORD *)a1 & 3) - 2 > 1 )
        continue;
      result = Bulk_EP_TransferEventHandler(a1, 0LL);
    }
    else
    {
      result = Control_EP_TransferEventHandler(a1, 0LL);
    }
    if ( (_BYTE)result )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        result = (unsigned __int64)WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v18 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 143LL);
          LOBYTE(v18) = 5;
          return WPP_RECORDER_SF_ddL(
                   *(_QWORD *)(a2 + 80),
                   v18,
                   13,
                   96,
                   (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
                   *(_BYTE *)(*(_QWORD *)(a2 + 16) + 143LL),
                   *(_DWORD *)(a2 + 152),
                   (unsigned __int8)i + 1);
        }
      }
      return result;
    }
  }
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_ddi(*(_QWORD *)(a2 + 80), v12, a3, 97);
    }
    return Controller_ReportFatalError(*(_QWORD *)a2, 2, 4126, 0, *(_QWORD *)(a2 + 16), a2, 0LL);
  }
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 11) - 26) <= 2u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a2 + 80),
        v12,
        13,
        98,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a2 + 16) + 143LL),
        *(_DWORD *)(a2 + 152));
    }
    goto LABEL_34;
  }
  if ( (unsigned __int8)Endpoint_Stream_IsTransferEventLikelyDuplicate(a1, a2, &v25) )
  {
    result = *(_QWORD *)a2;
    if ( _bittest64((const signed __int64 *)(*(_QWORD *)a2 + 736LL), 0x26u) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return result;
      v21 = 99;
LABEL_65:
      LOBYTE(v19) = 3;
      return WPP_RECORDER_SF_ddi(*(_QWORD *)(a2 + 80), v19, v20, v21);
    }
    if ( v25 )
    {
      result = Endpoint_StoppedCompletionCode(*(unsigned __int8 *)(a1 + 11));
      if ( (_BYTE)result )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return result;
        v21 = 100;
        goto LABEL_65;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_ddi(*(_QWORD *)(a2 + 80), v19, v20, 101);
    }
    return Controller_ReportFatalError(*(_QWORD *)a2, 2, 4128, 0, *(_QWORD *)(a2 + 16), a2, 0LL);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_ddi(*(_QWORD *)(a2 + 80), v19, v20, 102);
    }
    return Controller_ReportFatalError(*(_QWORD *)a2, 2, 4127, 0, *(_QWORD *)(a2 + 16), a2, 0LL);
  }
}
