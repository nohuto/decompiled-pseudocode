/*
 * XREFs of PopFxNotifyPostDIrpCompletion @ 0x1403587D0
 * Callers:
 *     PopHandleDevicePowerIrpCompletion @ 0x140358230 (PopHandleDevicePowerIrpCompletion.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopFxIdleComponent @ 0x14034C3F8 (PopFxIdleComponent.c)
 *     PopFxNextParentRelationSafe @ 0x140443774 (PopFxNextParentRelationSafe.c)
 */

void __fastcall PopFxNotifyPostDIrpCompletion(__int64 a1, int a2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v5; // al
  __int64 v6; // r14
  __int64 v7; // rdx
  KIRQL v8; // bp
  __int64 v9; // rbx
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 != 1 )
  {
    v2 = (KSPIN_LOCK *)(a1 + 1280);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1280));
    v10 = 0LL;
    v6 = a1 + 1304;
    v7 = 0LL;
    v8 = v5;
    while ( (unsigned __int8)PopFxNextParentRelationSafe(v6, v7, &v10) )
    {
      v9 = v10;
      if ( a2 >= ((*(_DWORD *)(v10 + 16) >> 4) & 3) )
      {
        PopFxIdleComponent(
          *(_QWORD *)(*(_QWORD *)(v10 + 24) + 80LL),
          *(unsigned int *)(*(_QWORD *)(v10 + 24) + 16LL),
          2,
          0LL);
        *(_DWORD *)(v9 + 16) &= ~2u;
      }
      v7 = v9;
    }
    KeReleaseSpinLock(v2, v8);
  }
}
