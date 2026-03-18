/*
 * XREFs of Isoch_ProcessTransferEventWithED0 @ 0x140016760
 * Callers:
 *     Isoch_EP_TransferEventHandler @ 0x140016AE0 (Isoch_EP_TransferEventHandler.c)
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001103C (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEsmEvent @ 0x140012218 (ESM_AddEsmEvent.c)
 *     Endpoint_StoppedCompletionCode @ 0x140015010 (Endpoint_StoppedCompletionCode.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x140015CC8 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x140015EC0 (Isoch_Transfer_CompleteStaleStages.c)
 *     Isoch_CompleteStaleTransfers @ 0x140016500 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_Stage_CompleteTD @ 0x140018460 (Isoch_Stage_CompleteTD.c)
 *     Isoch_FindTrbMatch @ 0x140029CC8 (Isoch_FindTrbMatch.c)
 *     WPP_RECORDER_SF_DDLDDi @ 0x14002D0C4 (WPP_RECORDER_SF_DDLDDi.c)
 *     WPP_RECORDER_SF_DDL @ 0x14004D318 (WPP_RECORDER_SF_DDL.c)
 *     WPP_RECORDER_SF_DDLi @ 0x14004D414 (WPP_RECORDER_SF_DDLi.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

char __fastcall Isoch_ProcessTransferEventWithED0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // si
  __int64 v5; // rdi
  unsigned __int8 *v7; // r14
  __int64 v8; // r13
  unsigned __int8 *v9; // r12
  bool v11; // al
  KIRQL v12; // dl
  KSPIN_LOCK *v13; // rcx
  unsigned __int8 *v14; // r14
  __int64 ***v15; // rbx
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rax
  __int64 *v19; // r10
  __int64 ****v20; // [rsp+60h] [rbp-18h] BYREF
  char v21; // [rsp+C0h] [rbp+48h] BYREF
  int v22; // [rsp+C8h] [rbp+50h] BYREF
  int v23; // [rsp+D0h] [rbp+58h] BYREF
  int v24; // [rsp+D8h] [rbp+60h] BYREF

  v4 = 0;
  v5 = a2;
  v23 = 0;
  v22 = 0;
  v24 = 0;
  v21 = 0;
  v20 = 0LL;
  v7 = (unsigned __int8 *)(a1 + 11);
  v8 = a2 + 56;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = *(unsigned __int8 *)(a1 + 15);
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_DDLDDi(*(_QWORD *)(*(_QWORD *)v8 + 80LL), v17, *v7, 40);
  }
  v9 = v7;
  if ( *v7 == 14 || *v7 == 15 )
  {
    Isoch_ProcessTransferRingEmptyEvent(v5, a1);
    return v4;
  }
  if ( *v7 != 20 )
  {
    if ( *v7 == 23 )
    {
      ++*(_DWORD *)(v5 + 272);
      if ( !*(_QWORD *)a1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 4;
          WPP_RECORDER_SF_DDL(*(_QWORD *)(*(_QWORD *)v8 + 80LL), a2, *v7, 41);
        }
        return v4;
      }
    }
LABEL_9:
    *(_BYTE *)(v5 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
    if ( *v7 == 36 )
    {
      *(_DWORD *)(v5 + 336) |= 0x80u;
      v18 = *(_QWORD *)(v5 + 40);
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 916));
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 960));
      *(_BYTE *)(v18 + 872) = 1;
    }
    if ( (*(_DWORD *)(v5 + 336) & 0x40) != 0 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
      return v4;
    }
    Isoch_FindTrbMatch(v5, a1, (unsigned int)&v20, (unsigned int)&v24, (__int64)&v22);
    v11 = Endpoint_StoppedCompletionCode(*v9);
    v13 = (KSPIN_LOCK *)(v5 + 96);
    if ( v11 )
    {
      *(_DWORD *)(v5 + 336) |= 0x40u;
      KeReleaseSpinLock(v13, v12);
      if ( v20 )
        Isoch_Stage_CompleteTD((_DWORD)v20, *v9, v22, 0, (__int64)&v21, (__int64)&v23);
      v19 = *(__int64 **)(v5 + 56);
      _m_prefetchw(v19 + 4);
      if ( (_InterlockedOr((volatile signed __int32 *)v19 + 8, 0x10u) & 0x10) != 0 )
      {
        Controller_HwVerifierBreakIfEnabled(
          *v19,
          v19[1],
          v19[3],
          0x2000000LL,
          "Received duplicate Stopped Transfer Events",
          0LL,
          0LL);
      }
      else
      {
        _m_prefetchw(v19 + 4);
        if ( (_InterlockedXor((volatile signed __int32 *)v19 + 8, 8u) & 8) != 0 )
          ESM_AddEsmEvent((__int64)v19);
      }
    }
    else
    {
      KeReleaseSpinLock(v13, v12);
      v14 = (unsigned __int8 *)v20;
      if ( !v20 )
        return v4;
      v15 = *v20;
      Isoch_CompleteStaleTransfers(v5, *v20);
      Isoch_Transfer_CompleteStaleStages(v16, (unsigned __int8 *)v15, v14);
      Isoch_Stage_CompleteTD((_DWORD)v14, *v9, v22, 0, (__int64)&v21, (__int64)&v23);
    }
    return 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDLi(*(_QWORD *)(*(_QWORD *)v8 + 80LL), *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL), *v7, a4);
    v9 = (unsigned __int8 *)(a1 + 11);
  }
  ((void (__fastcall *)(__int64, _QWORD))qword_14006BE10)(UcxDriverGlobals, *(_QWORD *)(*(_QWORD *)v8 + 24LL));
  if ( *(_QWORD *)a1 )
    goto LABEL_9;
  return v4;
}
