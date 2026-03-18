/*
 * XREFs of Bulk_ProcessTransferEventWithED0 @ 0x140017A48
 * Callers:
 *     Bulk_EP_TransferEventHandler @ 0x1400199D0 (Bulk_EP_TransferEventHandler.c)
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001103C (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEsmEvent @ 0x140012218 (ESM_AddEsmEvent.c)
 *     Endpoint_StoppedCompletionCode @ 0x140015010 (Endpoint_StoppedCompletionCode.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x14001588C (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1400159CC (WPP_RECORDER_SF_DDDD.c)
 *     Bulk_FindStage @ 0x140016194 (Bulk_FindStage.c)
 *     Endpoint_HaltedCompletionCode @ 0x140016470 (Endpoint_HaltedCompletionCode.c)
 *     Bulk_Stage_CalculateBytesTransferred @ 0x14002B5F0 (Bulk_Stage_CalculateBytesTransferred.c)
 *     WPP_RECORDER_SF_dddqLddi @ 0x14002E264 (WPP_RECORDER_SF_dddqLddi.c)
 *     Bulk_ProcessTransferEventWithStoppedCompletion @ 0x14002E42C (Bulk_ProcessTransferEventWithStoppedCompletion.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x14002E4C4 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x14004DA4C (Bulk_ValidateED0TrbPointerOnMismatch.c)
 */

char __fastcall Bulk_ProcessTransferEventWithED0(__int64 a1, __int64 a2)
{
  char v2; // bl
  unsigned __int8 *v5; // rbp
  _DWORD *v6; // r13
  __int64 *v7; // rsi
  int v8; // ecx
  KSPIN_LOCK *v9; // r12
  KIRQL *v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r13
  unsigned int v13; // eax
  __int64 v14; // r8
  int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // r10d
  __int64 *v18; // r10
  __int64 v20; // [rsp+28h] [rbp-90h]
  __int64 v21; // [rsp+30h] [rbp-88h]
  __int64 v22; // [rsp+38h] [rbp-80h]
  __int64 v23; // [rsp+40h] [rbp-78h]
  unsigned int v24; // [rsp+C0h] [rbp+8h]
  int v25; // [rsp+C8h] [rbp+10h] BYREF
  _DWORD *v26; // [rsp+D0h] [rbp+18h]
  __int64 v27; // [rsp+D8h] [rbp+20h] BYREF

  v2 = 0;
  v25 = 0;
  v27 = 0LL;
  v5 = (unsigned __int8 *)(a1 + 11);
  v6 = (_DWORD *)(a2 + 64);
  v7 = (__int64 *)(a2 + 56);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v23) = HIDWORD(a1);
    WPP_RECORDER_SF_dddqLddi(*(_QWORD *)(*v7 + 80), *v5, *(unsigned __int8 *)(a1 + 15), *(_DWORD *)(a1 + 8) & 0xFFFFFF);
  }
  v8 = *v5;
  v26 = v6;
  if ( !Endpoint_StoppedCompletionCode(v8) )
  {
LABEL_6:
    v9 = (KSPIN_LOCK *)(a2 + 96);
    v10 = (KIRQL *)(a2 + 104);
    *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    if ( Bulk_FindStage(a2, *(_QWORD *)a1, &v27, &v25) )
    {
      v12 = v27;
      if ( v27 )
      {
        v13 = Bulk_Stage_CalculateBytesTransferred(v11, v27, a1);
        v14 = *(unsigned int *)(v12 + 40);
        v24 = v13;
        if ( v13 > (unsigned int)v14 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v23) = v13;
            WPP_RECORDER_SF_DDDDD(
              *(_QWORD *)(*v7 + 80),
              3u,
              v14,
              0x34u,
              (__int64)&WPP_af203940883a35574f6554fa7269ecc3_Traceguids,
              *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL),
              *(_DWORD *)(*v7 + 144),
              *v26,
              v23,
              v14);
            v7 = (__int64 *)(a2 + 56);
          }
          v24 = 0;
          v10 = (KIRQL *)(a2 + 104);
          v9 = (KSPIN_LOCK *)(a2 + 96);
          v5 = (unsigned __int8 *)(a1 + 11);
        }
        v26 = (_DWORD *)(a2 + 64);
      }
      else
      {
        v24 = 0;
      }
      if ( Endpoint_HaltedCompletionCode(*v7, *(unsigned __int8 *)(a1 + 11)) )
      {
        KeReleaseSpinLock(v9, *v10);
        if ( v12 )
          Bulk_ProcessTransferEventWithHaltedCompletion(a2, v12, *v5, v24);
        return 1;
      }
      if ( Endpoint_StoppedCompletionCode(v15) )
      {
        Bulk_ProcessTransferEventWithStoppedCompletion(a2, v12, v16, v17, v25);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v23) = *(_DWORD *)(a2 + 360);
          LODWORD(v22) = *v26;
          LODWORD(v21) = *(_DWORD *)(*v7 + 144);
          LODWORD(v20) = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL);
          WPP_RECORDER_SF_DDDD(
            *(_QWORD *)(*v7 + 80),
            4u,
            0xEu,
            0x35u,
            (__int64)&WPP_af203940883a35574f6554fa7269ecc3_Traceguids,
            v20,
            v21,
            v22,
            v23);
        }
        *(_DWORD *)(a2 + 332) |= 8u;
        KeReleaseSpinLock(v9, *v10);
        v18 = (__int64 *)*v7;
        _m_prefetchw((const void *)(*v7 + 32));
        if ( (_InterlockedOr((volatile signed __int32 *)v18 + 8, 0x10u) & 0x10) != 0 )
        {
          Controller_HwVerifierBreakIfEnabled(
            *v18,
            v18[1],
            v18[3],
            0x2000000LL,
            "Received duplicate Stopped Transfer Events",
            0LL,
            0LL);
        }
        else
        {
          _m_prefetchw(v18 + 4);
          if ( (_InterlockedXor((volatile signed __int32 *)v18 + 8, 8u) & 8) != 0 )
            ESM_AddEsmEvent((__int64)v18);
        }
        return 1;
      }
    }
    else if ( !*v6 )
    {
      Bulk_ValidateED0TrbPointerOnMismatch(a2, a1);
    }
    KeReleaseSpinLock(v9, *v10);
    return v2;
  }
  if ( (*(_DWORD *)(*v7 + 32) & 0x40) == 0 )
  {
    v26 = (_DWORD *)(a2 + 64);
    v7 = (__int64 *)(a2 + 56);
    v5 = (unsigned __int8 *)(a1 + 11);
    goto LABEL_6;
  }
  return 1;
}
