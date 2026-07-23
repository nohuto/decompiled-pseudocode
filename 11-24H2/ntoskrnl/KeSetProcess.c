/*
 * XREFs of KeSetProcess @ 0x14049A2E8
 * Callers:
 *     PspRundownSingleProcess @ 0x1408FED98 (PspRundownSingleProcess.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSetProcess(char *SystemArgument1, __int64 a2)
{
  char *v2; // rbx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v5; // r15d
  _QWORD *v6; // rdi
  _QWORD *v7; // rsi
  __int64 v8; // rax
  char v9; // cl
  __int64 v10; // r8

  v2 = SystemArgument1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(SystemArgument1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(SystemArgument1, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v2);
  v5 = *((_DWORD *)v2 + 1);
  v6 = v2 + 8;
  v7 = (_QWORD *)*((_QWORD *)v2 + 1);
  *((_DWORD *)v2 + 1) = 1;
  while ( v7 != v6 )
  {
    v8 = (__int64)v7;
    v7 = (_QWORD *)*v7;
    v9 = *(_BYTE *)(v8 + 16);
    switch ( v9 )
    {
      case 1:
        v10 = *(unsigned __int16 *)(v8 + 18);
        goto LABEL_7;
      case 2:
        *(_BYTE *)(v8 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v8 + 24), (__int64 *)v8);
        break;
      case 4:
        *(_BYTE *)(v8 + 17) = 5;
        *((_DWORD *)v2 + 1) = 0;
        KeInsertQueueDpc(*(PRKDPC *)(v8 + 24), v2, (PVOID)v8);
        break;
      default:
        v10 = 256LL;
LABEL_7:
        KiTryUnwaitThread((__int64)CurrentPrcb, v8, v10, 0LL);
        break;
    }
  }
  *((_QWORD *)v2 + 2) = v2 + 8;
  *v6 = v6;
  _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v5;
}
