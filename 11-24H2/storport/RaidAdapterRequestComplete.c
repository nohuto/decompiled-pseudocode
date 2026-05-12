/*
 * XREFs of RaidAdapterRequestComplete @ 0x140025020
 * Callers:
 *     RaidpAdapterContinueScatterGather @ 0x140012460 (RaidpAdapterContinueScatterGather.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140012900 (RaidAdapterPostScatterGatherExecute.c)
 *     StorTickEventQueue @ 0x14002EE90 (StorTickEventQueue.c)
 *     StorPortNotification @ 0x14004B4F0 (StorPortNotification.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x140066780 (RaidpAdapterContinueDataBufferScatterGather.c)
 *     RaidAdapterProgramCryptoKeyRoutine @ 0x14006A0A0 (RaidAdapterProgramCryptoKeyRoutine.c)
 *     RaidUnitAbortSrbCompletion @ 0x14009DE70 (RaidUnitAbortSrbCompletion.c)
 * Callees:
 *     RaidLogMiniportCompletion @ 0x140025210 (RaidLogMiniportCompletion.c)
 *     RaidpIsPerProcessorCompletionsFlushSet @ 0x140025590 (RaidpIsPerProcessorCompletionsFlushSet.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1400351C0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140035A60 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

char __fastcall RaidAdapterRequestComplete(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rcx
  char v6; // al
  PSLIST_ENTRY v7; // rax
  bool v8; // cf
  struct _PROCESSOR_NUMBER v9; // eax
  void *v10; // rdx
  struct _KDPC *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // r8d
  int v15; // r9d
  int v17; // [rsp+20h] [rbp-B8h]
  int v18; // [rsp+28h] [rbp-B0h]
  char v19; // [rsp+40h] [rbp-98h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+44h] [rbp-94h] BYREF
  int v21; // [rsp+4Ch] [rbp-8Ch] BYREF
  __int64 v22[8]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v23[16]; // [rsp+90h] [rbp-48h] BYREF
  char *v24; // [rsp+A0h] [rbp-38h]
  __int64 v25; // [rsp+A8h] [rbp-30h]
  _BYTE v26[16]; // [rsp+B0h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(a1 + 624) & 4) != 0 && !a3 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 5088));
  if ( a3 )
    goto LABEL_7;
  if ( (qword_140170460 & 8) != 0 )
    RaidLogMiniportCompletion(a2);
  if ( *(_DWORD *)a1 != 1094997074
    || (*(_BYTE *)(a1 + 604) & 0x10) == 0
    || (LODWORD(v7) = _InterlockedExchange((volatile __int32 *)(a2 + 776), 4), (_DWORD)v7 != 1) )
  {
LABEL_7:
    v5 = *(_QWORD *)(a2 + 160);
    if ( v5 )
    {
      v6 = *(_BYTE *)(v5 + 141);
      v8 = v6 == -85;
      LOBYTE(v7) = v6 + 85;
      if ( v8 || (_BYTE)v7 == 1 )
      {
        if ( (unsigned int)dword_140170178 > 5 )
        {
          LOBYTE(v7) = tlgKeywordOn(v5, 0x400000000000LL);
          if ( (_BYTE)v7 )
          {
            v12 = *(_QWORD *)(a1 + 4720);
            v22[4] = a1 + 5064;
            v21 = *(_DWORD *)(a1 + 56);
            v22[6] = (__int64)&v21;
            v22[5] = 16LL;
            v22[7] = 4LL;
            tlgCreate1Sz_wchar_t(v23, v12);
            v13 = *(_QWORD *)(a1 + 4728);
            v19 = *(_BYTE *)(a1 + 4276);
            v24 = &v19;
            v25 = 1LL;
            tlgCreate1Sz_wchar_t(v26, v13);
            LOBYTE(v7) = tlgWriteEx_EtwWriteEx((int)v22, (int)&dword_14015E15E, v14, v15, v17, v18, 7u, (__int64)v22);
          }
        }
        return (char)v7;
      }
      *(_BYTE *)(v5 + 141) = -85;
    }
    *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0x10;
    v9 = *(struct _PROCESSOR_NUMBER *)(a2 + 20);
    ProcNumber = v9;
    if ( v9.Group == 0xFFFF )
      goto LABEL_24;
    if ( (*(_BYTE *)(a1 + 4371) & 2) != 0 )
    {
      KeGetCurrentProcessorNumberEx(&ProcNumber);
      v9.Group = ProcNumber.Group;
    }
    if ( v9.Group >= (unsigned int)g_RaidPerfRedirectGroupCount
      || (unsigned int)ProcNumber.Number >= *((_DWORD *)g_RaidDPCRedirectionProcessors + v9.Group) )
    {
LABEL_24:
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 256), (PSLIST_ENTRY)(a2 + 32));
      v11 = (struct _KDPC *)(*(_QWORD *)(a1 + 8) + 200LL);
      v10 = 0LL;
      goto LABEL_18;
    }
    v7 = ExpInterlockedPushEntrySList(
           (PSLIST_HEADER)g_RaidPerProcessorState + 8 * (unsigned __int64)(ProcNumber.Number + (v9.Group << 6)) + 4,
           (PSLIST_ENTRY)(a2 + 32));
    if ( !v7 )
    {
      LOBYTE(v7) = RaidpIsPerProcessorCompletionsFlushSet(&ProcNumber);
      if ( !(_BYTE)v7 )
      {
        v10 = *(void **)(a1 + 8);
        v11 = (struct _KDPC *)((char *)g_RaidPerProcessorState
                             + 128 * (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)));
LABEL_18:
        LOBYTE(v7) = KeInsertQueueDpc(v11, v10, 0LL);
      }
    }
  }
  return (char)v7;
}
