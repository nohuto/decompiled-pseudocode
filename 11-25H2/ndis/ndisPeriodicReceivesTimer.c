/*
 * XREFs of ndisPeriodicReceivesTimer @ 0x14006A7A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisTraceWorkItemExecStart @ 0x140060930 (ndisTraceWorkItemExecStart.c)
 *     ndisTraceWorkItemExecEnd @ 0x1400609B0 (ndisTraceWorkItemExecEnd.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisPeriodicReceivesTimer(
        PVOID SystemSpecific1,
        PVOID FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  _QWORD *v4; // rdi
  char *v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 Number; // rcx
  LARGE_INTEGER v9; // rdx
  __int64 *v10; // rax

  v4 = 0LL;
  v5 = (char *)qword_140125540 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v5 + 2);
  v6 = *(__int64 **)v5;
  if ( *(char **)v5 != v5 )
  {
    v4 = *(_QWORD **)v5;
    if ( (char *)v6[1] != v5 )
      goto LABEL_16;
    v7 = *v6;
    if ( *(_QWORD **)(v7 + 8) != v4 )
      goto LABEL_16;
    *(_QWORD *)v5 = v7;
    *(_QWORD *)(v7 + 8) = v5;
    v4[1] = 0LL;
    *v4 = 0LL;
    --*((_DWORD *)v5 + 6);
  }
  Number = KeGetPcr()->Prcb.Number;
  if ( *(char **)v5 == v5 )
  {
    *((_DWORD *)qword_140125538 + Number) = 0;
  }
  else
  {
    v9.QuadPart = -1LL;
    if ( DueTime.QuadPart )
      v9 = DueTime;
    KeSetTimer(
      (PKTIMER)qword_140125530 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number,
      v9,
      (PKDPC)qword_140125530 + 2 * Number + 1);
  }
  if ( v4 == (_QWORD *)((char *)ndisPerCpuPoisonPills + 32 * KeGetPcr()->Prcb.Number) )
  {
    v10 = *(__int64 **)v5;
    if ( *(char **)(*(_QWORD *)v5 + 8LL) == v5 )
    {
      *v4 = v10;
      v4[1] = v5;
      v10[1] = (__int64)v4;
      *(_QWORD *)v5 = v4;
      ++*((_DWORD *)v5 + 6);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v5 + 2);
      return;
    }
LABEL_16:
    __fastfail(3u);
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v5 + 2);
  if ( v4 )
  {
    if ( (_BYTE)word_140127114 )
      ndisTraceWorkItemExecStart(1);
    ((void (__fastcall *)(_QWORD))v4[2])(v4[3]);
    if ( (_BYTE)word_140127114 )
      ndisTraceWorkItemExecEnd();
  }
}
