/*
 * XREFs of KeSetProcess @ 0x1404A8088
 * Callers:
 *     PspRundownSingleProcess @ 0x1408E0448 (PspRundownSingleProcess.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSetProcess(char *SystemArgument1)
{
  char *v1; // rbx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v4; // r15d
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  __int64 v7; // rax
  char v8; // cl
  __int64 v9; // r8

  v1 = SystemArgument1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(SystemArgument1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(SystemArgument1);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v1);
  v4 = *((_DWORD *)v1 + 1);
  v5 = v1 + 8;
  v6 = (_QWORD *)*((_QWORD *)v1 + 1);
  *((_DWORD *)v1 + 1) = 1;
  while ( v6 != v5 )
  {
    v7 = (__int64)v6;
    v6 = (_QWORD *)*v6;
    v8 = *(_BYTE *)(v7 + 16);
    switch ( v8 )
    {
      case 1:
        v9 = *(unsigned __int16 *)(v7 + 18);
        goto LABEL_7;
      case 2:
        *(_BYTE *)(v7 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v7 + 24), (__int64 *)v7);
        break;
      case 4:
        *(_BYTE *)(v7 + 17) = 5;
        *((_DWORD *)v1 + 1) = 0;
        KeInsertQueueDpc(*(PRKDPC *)(v7 + 24), v1, (PVOID)v7);
        break;
      default:
        v9 = 256LL;
LABEL_7:
        KiTryUnwaitThread((__int64)CurrentPrcb, v7, v9, 0LL);
        break;
    }
  }
  *((_QWORD *)v1 + 2) = v1 + 8;
  *v5 = v5;
  _InterlockedAnd((volatile signed __int32 *)v1, 0xFFFFFF7F);
  KiExitDispatcher(CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v4;
}
