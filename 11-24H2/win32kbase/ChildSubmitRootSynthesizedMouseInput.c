/*
 * XREFs of ChildSubmitRootSynthesizedMouseInput @ 0x1402124D8
 * Callers:
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x140216094 (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140047544 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall ChildSubmitRootSynthesizedMouseInput(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 UserSessionState; // rax

  v2 = *(_QWORD *)(W32GetUserSessionState(a1) + 19544);
  CPushLock::AcquireLockExclusive((CPushLock *)(v2 + 16));
  v4 = *(_QWORD **)(v2 + 8);
  if ( *v4 != v2 )
    __fastfail(3u);
  *a1 = v2;
  a1[1] = v4;
  *v4 = a1;
  *(_QWORD *)(v2 + 8) = a1;
  UserSessionState = W32GetUserSessionState(v3);
  KeSetEvent(*(PRKEVENT *)(UserSessionState + 19496), 1, 0);
  CPushLock::ReleaseLock((CPushLock *)(v2 + 16));
}
