/*
 * XREFs of NvmeAdapterDpcRoutine @ 0x1400CF8C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall NvmeAdapterDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rdi
  unsigned __int8 v5; // bl
  unsigned int v6; // r14d
  char v7; // si
  __int64 v8; // rbp
  PSLIST_ENTRY v9; // rax
  __int64 v10; // rax
  USHORT CurrentNodeNumber; // ax
  unsigned __int64 Mask; // rdx
  unsigned __int8 v13; // cl
  unsigned __int8 v14; // cf
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-30h] BYREF

  v4 = DeferredContext[8];
  v5 = 0;
  ProcNumber = 0;
  Affinity = 0LL;
  v6 = 0;
  v7 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 1096), 1, 0) != 1 )
  {
    v8 = *(_QWORD *)(v4 + 1120);
    if ( DpcCompletionLimit )
    {
      do
      {
        v9 = *(PSLIST_ENTRY *)(v4 + 1120);
        if ( !v9 )
        {
          if ( v7 )
            break;
          v9 = ExpInterlockedFlushSList((PSLIST_HEADER)(v4 + 1104));
          *(_QWORD *)(v4 + 1120) = v9;
          v7 = 1;
          if ( !v9 )
            break;
        }
        *(_QWORD *)(v4 + 1120) = v9->Next;
        ((void (__fastcall *)(struct _SLIST_ENTRY *, _QWORD *, PVOID, PVOID, struct _PROCESSOR_NUMBER))v9[39].Next)(
          &v9[-2],
          DeferredContext,
          SystemArgument1,
          SystemArgument2,
          ProcNumber);
        ++v6;
      }
      while ( v6 < DpcCompletionLimit );
    }
    v10 = *(_QWORD *)(v4 + 1120);
    *(_DWORD *)(v4 + 1096) = 0;
    if ( v10 )
    {
      CurrentNodeNumber = KeGetCurrentNodeNumber();
      KeQueryNodeActiveAffinity(CurrentNodeNumber, &Affinity, 0LL);
      KeGetCurrentProcessorNumberEx(&ProcNumber);
      Mask = Affinity.Mask;
      v13 = ProcNumber.Number + 1;
      ProcNumber.Number = v13;
      if ( v13 >= 0x40u )
        goto LABEL_16;
      do
      {
        if ( _bittest64((const __int64 *)&Mask, v13) )
          break;
        ++v13;
      }
      while ( v13 < 0x40u );
      ProcNumber.Number = v13;
      if ( v13 >= 0x40u )
      {
LABEL_16:
        ProcNumber.Number = 0;
        if ( (Affinity.Mask & 1) == 0 )
        {
          do
          {
            v14 = _bittest64((const __int64 *)&Mask, ++v5);
            ProcNumber.Number = v5;
          }
          while ( !v14 );
        }
      }
      KeSetTargetProcessorDpcEx((PKDPC)(*(_QWORD *)(v4 + 8) + 200LL), &ProcNumber);
      goto LABEL_19;
    }
    if ( !v8 )
      *(_WORD *)(*(_QWORD *)(v4 + 8) + 202LL) = 0;
    if ( FirstEntrySList((PSLIST_HEADER)(v4 + 1104)) )
LABEL_19:
      KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(v4 + 8) + 200LL), 0LL, 0LL);
  }
}
