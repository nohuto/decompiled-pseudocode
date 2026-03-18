/*
 * XREFs of EtwpStackTraceDispatcher @ 0x140309B20
 * Callers:
 *     EtwpLogSystemEventUnsafe @ 0x14030BF40 (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x14042A060 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 *     EtwpTraceStackWalk @ 0x140309D40 (EtwpTraceStackWalk.c)
 *     MmCanThreadFault @ 0x140348130 (MmCanThreadFault.c)
 *     EtwpQueueApc @ 0x1404309F0 (EtwpQueueApc.c)
 */

void __fastcall EtwpStackTraceDispatcher(__int64 a1, unsigned int *a2, _KTHREAD *a3, unsigned int a4)
{
  unsigned int v5; // ebx
  _KTHREAD *CurrentThread; // r8
  unsigned __int8 CurrentIrql; // r13
  char v10; // r12
  struct _KTHREAD *v11; // r14
  int v12; // ecx
  char v13; // al
  unsigned int v14; // r14d
  unsigned __int8 NestingLevel; // cl

  v5 = a4;
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  if ( (a4 & 0x4000) == 0 || KeGetCurrentPrcb()->IdleThread != CurrentThread )
  {
    if ( !a3 )
      a3 = CurrentThread;
    if ( (a4 & 0x1000) == 0 )
      goto LABEL_21;
    v10 = 0;
    if ( (a4 & 0x2000) != 0 )
      goto LABEL_21;
    v11 = KeGetCurrentThread();
    v12 = a4 & 0x4000000;
    if ( v11 != a3 )
    {
      LOBYTE(v12) = 0;
      goto LABEL_16;
    }
    if ( (v11->MiscFlags & 0x400) != 0 )
    {
      LOBYTE(v12) = 0;
      goto LABEL_16;
    }
    if ( (*(_DWORD *)(&v11[1].SwapListEntry + 1) & 1) != 0 && !v12 )
      goto LABEL_16;
    if ( KeAreInterruptsEnabled() && KeGetCurrentIrql() < 2u )
    {
      if ( (unsigned int)MmCanThreadFault()
        && !BYTE6(v11[1].Queue)
        && KeGetCurrentThread()->ApcStateIndex != 1
        && (v11->SameThreadTransientFlags & 4) == 0 )
      {
        LOBYTE(v12) = 1;
        goto LABEL_16;
      }
    }
    else
    {
      NestingLevel = KeGetCurrentPrcb()->NestingLevel;
      if ( NestingLevel && (NestingLevel != 1 || (v5 & 0x8000) == 0) )
      {
        LOBYTE(v12) = 0;
        goto LABEL_16;
      }
    }
    LOBYTE(v12) = 1;
    v10 = 1;
LABEL_16:
    v13 = v10;
    if ( (v5 & 0x1000000) != 0 )
      v13 = 1;
    if ( (_BYTE)v12 )
    {
      if ( v13 )
      {
        v5 &= ~0x1000u;
        v14 = (*(_WORD *)(a1 + 818) & 7) + 24;
        if ( !_interlockedbittestandset((volatile signed __int32 *)&a3->116 + 1, v14)
          && (int)EtwpQueueApc(
                    (int)a1 + 832,
                    (_DWORD)a3,
                    CurrentIrql,
                    (unsigned int)EtwpStackWalkApc,
                    (__int64)EtwpCancelStackWalkApc,
                    0LL,
                    a2[1],
                    *a2) < 0 )
        {
          _interlockedbittestandreset((volatile signed __int32 *)&a3->116 + 1, v14);
        }
      }
    }
    else
    {
      v5 &= ~0x1000u;
    }
LABEL_21:
    if ( (v5 & 0x1800) != 0 )
      EtwpTraceStackWalk(a1, v5, a3, a2);
  }
}
