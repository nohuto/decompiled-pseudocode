/*
 * XREFs of _PnpCtxCloseMachine @ 0x1408171F0
 * Callers:
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14072A318 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PipMigratePnpState @ 0x140C215B4 (PipMigratePnpState.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ExDeleteResourceLite @ 0x1402CD920 (ExDeleteResourceLite.c)
 *     _PnpCtxDestroyNode @ 0x140817430 (_PnpCtxDestroyNode.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpCtxCloseMachine(PERESOURCE *P)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // esi
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rax
  struct _ERESOURCE *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(P[30], 1u);
  do
  {
    if ( P[1] == (PERESOURCE)(P + 1) )
      break;
    v4 = P[2];
    v5 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) == v4 )
    {
      v6 = (_QWORD *)v4[1];
      if ( (_QWORD *)*v6 == v4 )
        continue;
    }
    __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    v3 = PnpCtxDestroyNode(v4);
  }
  while ( v3 >= 0 );
  ExReleaseResourceLite(P[30]);
  KeLeaveCriticalRegion();
  if ( v3 >= 0 )
  {
    v7 = P[30];
    ExDeleteResourceLite(v7);
    ExFreePoolWithTag(v7, 0);
    ExFreePoolWithTag(P, 0);
  }
  return (unsigned int)v3;
}
