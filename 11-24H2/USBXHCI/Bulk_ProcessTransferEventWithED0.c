/*
 * XREFs of Bulk_ProcessTransferEventWithED0 @ 0x1400038CC
 * Callers:
 *     Bulk_EP_TransferEventHandler @ 0x140002E20 (Bulk_EP_TransferEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_dddqLddi @ 0x140002260 (WPP_RECORDER_SF_dddqLddi.c)
 *     Endpoint_HaltedCompletionCode @ 0x140003C70 (Endpoint_HaltedCompletionCode.c)
 *     Bulk_FindStage @ 0x140003CBC (Bulk_FindStage.c)
 *     Bulk_ProcessTransferEventWithStoppedCompletion @ 0x140003F00 (Bulk_ProcessTransferEventWithStoppedCompletion.c)
 *     Endpoint_StoppedCompletionCode @ 0x140003FA0 (Endpoint_StoppedCompletionCode.c)
 *     Bulk_Stage_CalculateBytesTransferred @ 0x140003FB8 (Bulk_Stage_CalculateBytesTransferred.c)
 *     WPP_RECORDER_SF_DDDD @ 0x140004124 (WPP_RECORDER_SF_DDDD.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1400042A0 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1400049B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEsmEvent @ 0x140005BC0 (ESM_AddEsmEvent.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x140012D68 (WPP_RECORDER_SF_DDDDD.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x14004D17C (Bulk_ValidateED0TrbPointerOnMismatch.c)
 */

char __fastcall Bulk_ProcessTransferEventWithED0(__int64 a1, __int64 a2)
{
  char v2; // bl
  unsigned __int8 *v5; // rbp
  _DWORD *v6; // r13
  volatile signed __int32 **v7; // rsi
  __int64 v8; // rcx
  KSPIN_LOCK *v9; // r12
  KIRQL *v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r13
  unsigned int v13; // eax
  unsigned int v14; // r8d
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // r10d
  int v18; // edx
  volatile signed __int32 *v19; // r10
  int v21; // edx
  int v22; // [rsp+20h] [rbp-98h]
  unsigned int v23; // [rsp+C0h] [rbp+8h]
  int v24; // [rsp+C8h] [rbp+10h] BYREF
  _DWORD *v25; // [rsp+D0h] [rbp+18h]
  __int64 v26; // [rsp+D8h] [rbp+20h] BYREF

  v2 = 0;
  v24 = 0;
  v26 = 0LL;
  v5 = (unsigned __int8 *)(a1 + 11);
  v6 = (_DWORD *)(a2 + 64);
  v7 = (volatile signed __int32 **)(a2 + 56);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dddqLddi(
      *((_QWORD *)*v7 + 10),
      *v5,
      *(unsigned __int8 *)(a1 + 15),
      *(_DWORD *)(a1 + 8) & 0xFFFFFF,
      v22);
  v8 = *v5;
  v25 = v6;
  if ( !(unsigned __int8)Endpoint_StoppedCompletionCode(v8) )
  {
LABEL_6:
    v9 = (KSPIN_LOCK *)(a2 + 96);
    v10 = (KIRQL *)(a2 + 104);
    *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    if ( (unsigned __int8)Bulk_FindStage(a2, *(_QWORD *)a1, &v26, &v24) )
    {
      v12 = v26;
      if ( v26 )
      {
        v13 = Bulk_Stage_CalculateBytesTransferred(v11, v26, a1);
        v14 = *(_DWORD *)(v12 + 40);
        v23 = v13;
        if ( v13 > v14 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v21 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 143LL);
            LOBYTE(v21) = 3;
            WPP_RECORDER_SF_DDDDD(
              *((_QWORD *)*v7 + 10),
              v21,
              v14,
              53,
              (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids,
              *(_BYTE *)(*(_QWORD *)(a2 + 48) + 143LL),
              *((_DWORD *)*v7 + 38),
              *v25,
              v13,
              v14);
            v7 = (volatile signed __int32 **)(a2 + 56);
          }
          v23 = 0;
          v10 = (KIRQL *)(a2 + 104);
          v9 = (KSPIN_LOCK *)(a2 + 96);
          v5 = (unsigned __int8 *)(a1 + 11);
        }
        v25 = (_DWORD *)(a2 + 64);
      }
      else
      {
        v23 = 0;
      }
      if ( (unsigned __int8)Endpoint_HaltedCompletionCode(*v7, *(unsigned __int8 *)(a1 + 11)) )
      {
        KeReleaseSpinLock(v9, *v10);
        if ( v12 )
          Bulk_ProcessTransferEventWithHaltedCompletion(a2, v12, *v5, v23);
        return 1;
      }
      if ( (unsigned __int8)Endpoint_StoppedCompletionCode(v15) )
      {
        Bulk_ProcessTransferEventWithStoppedCompletion(a2, v12, v16, v17);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 143LL);
          LOBYTE(v18) = 4;
          WPP_RECORDER_SF_DDDD(
            *((_QWORD *)*v7 + 10),
            v18,
            14,
            54,
            (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids,
            *(_BYTE *)(*(_QWORD *)(a2 + 48) + 143LL),
            *((_DWORD *)*v7 + 38),
            *v25,
            *(_DWORD *)(a2 + 360));
        }
        *(_DWORD *)(a2 + 332) |= 8u;
        KeReleaseSpinLock(v9, *v10);
        v19 = *v7;
        _m_prefetchw((const void *)(*v7 + 8));
        if ( (_InterlockedOr(v19 + 8, 0x10u) & 0x10) != 0 )
        {
          Controller_HwVerifierBreakIfEnabled(
            *(_QWORD *)v19,
            *((_QWORD *)v19 + 1),
            *((_QWORD *)v19 + 3),
            0x2000000,
            (__int64)"Received duplicate Stopped Transfer Events",
            0LL,
            0LL);
        }
        else
        {
          _m_prefetchw((const void *)(v19 + 8));
          if ( (_InterlockedXor(v19 + 8, 8u) & 8) != 0 )
            ESM_AddEsmEvent(v19, 118LL);
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
  if ( ((*v7)[8] & 0x40) == 0 )
  {
    v25 = (_DWORD *)(a2 + 64);
    v7 = (volatile signed __int32 **)(a2 + 56);
    v5 = (unsigned __int8 *)(a1 + 11);
    goto LABEL_6;
  }
  return 1;
}
