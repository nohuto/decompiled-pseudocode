/*
 * XREFs of RaidAdapterResetBusNoLock @ 0x14005E034
 * Callers:
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 * Callees:
 *     RaidPauseAdapterQueue @ 0x1400078E0 (RaidPauseAdapterQueue.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     StorGetOutstandingIoCount @ 0x140055E34 (StorGetOutstandingIoCount.c)
 *     RaCallMiniportResetBus @ 0x140058EB4 (RaCallMiniportResetBus.c)
 *     RaidAdapterSetPauseTimer @ 0x14006179C (RaidAdapterSetPauseTimer.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1400664A8 (RaidResumeAndRestartAdapterQueues.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterResetBusNoLock(__int64 a1)
{
  int OutstandingIoCount; // r15d
  ULONGLONG UnbiasedInterruptTime; // rbx
  unsigned int v5; // esi
  ULONGLONG v6; // rax
  unsigned int v7; // r8d
  int v8; // r12d
  ULONGLONG v9; // r14
  __int64 v10; // r9
  __int64 v11; // rcx
  KIRQL v12; // bl
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // [rsp+30h] [rbp-89h] BYREF
  int v16; // [rsp+34h] [rbp-85h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-81h] BYREF
  int v18; // [rsp+3Ch] [rbp-7Dh] BYREF
  int v19; // [rsp+40h] [rbp-79h] BYREF
  ULONGLONG v20; // [rsp+48h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+50h] [rbp-69h] BYREF
  __int64 v22; // [rsp+70h] [rbp-49h]
  int v23; // [rsp+78h] [rbp-41h]
  int v24; // [rsp+7Ch] [rbp-3Dh]
  int *v25; // [rsp+80h] [rbp-39h]
  int v26; // [rsp+88h] [rbp-31h]
  int v27; // [rsp+8Ch] [rbp-2Dh]
  char *v28; // [rsp+90h] [rbp-29h]
  int v29; // [rsp+98h] [rbp-21h]
  int v30; // [rsp+9Ch] [rbp-1Dh]
  int *v31; // [rsp+A0h] [rbp-19h]
  int v32; // [rsp+A8h] [rbp-11h]
  int v33; // [rsp+ACh] [rbp-Dh]
  ULONGLONG *v34; // [rsp+B0h] [rbp-9h]
  int v35; // [rsp+B8h] [rbp-1h]
  int v36; // [rsp+BCh] [rbp+3h]
  int *v37; // [rsp+C0h] [rbp+7h]
  int v38; // [rsp+C8h] [rbp+Fh]
  int v39; // [rsp+CCh] [rbp+13h]
  int *v40; // [rsp+D0h] [rbp+17h]
  int v41; // [rsp+D8h] [rbp+1Fh]
  int v42; // [rsp+DCh] [rbp+23h]

  if ( KeGetCurrentIrql() >= 2u )
    return 3221225800LL;
  if ( !*(_BYTE *)(a1 + 456) )
    return 3221225485LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 324), 1, 0) == 1 )
    return 3221226614LL;
  RaidPauseAdapterQueue(a1);
  *(_DWORD *)(a1 + 5088) = 0;
  OutstandingIoCount = StorGetOutstandingIoCount(a1);
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v5 = RaCallMiniportResetBus(a1 + 376, 0);
  v6 = KeQueryUnbiasedInterruptTime();
  v7 = *(_DWORD *)(a1 + 600);
  v8 = *(_DWORD *)(a1 + 5088);
  v9 = v6 - UnbiasedInterruptTime;
  if ( v7 )
  {
    v10 = v7 / 0xF4240 + 1;
    if ( v7 == 1000000 * (v7 / 0xF4240) )
      v10 = v7 / 0xF4240;
    RaidAdapterSetPauseTimer(a1, a1 + 4136, a1 + 4200, v10);
  }
  else
  {
    v12 = KfRaiseIrql(2u);
    RaidResumeAndRestartAdapterQueues(a1);
    KeLowerIrql(v12);
  }
  if ( (unsigned int)dword_140170178 > 5 )
  {
    if ( tlgKeywordOn(v11, 0x400000000000LL) )
    {
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v42 = 0;
      v22 = a1 + 5064;
      v16 = *(_DWORD *)(a1 + 56);
      v25 = &v16;
      v28 = &v15;
      v31 = (int *)&v17;
      v34 = &v20;
      v37 = &v18;
      v40 = &v19;
      v23 = 16;
      v26 = 4;
      v15 = 0;
      v29 = 1;
      v17 = v5;
      v32 = 4;
      v20 = v9;
      v35 = 8;
      v18 = OutstandingIoCount;
      v38 = 4;
      v19 = v8;
      v41 = 4;
      tlgWriteTransfer_EtwWriteTransfer(4LL, (unsigned __int8 *)dword_14015DFBA, v13, v14, 9u, &v21);
    }
  }
  *(_DWORD *)(a1 + 324) = 0;
  return v5;
}
