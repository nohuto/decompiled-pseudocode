/*
 * XREFs of NtFlipObjectConsumerEndProcessPresent @ 0x140007B30
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeCurrentUpdates@CFlipManager@@AEAAXXZ @ 0x140007BCC (-FreeCurrentUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14000AC94 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14000B474 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14000C610 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall NtFlipObjectConsumerEndProcessPresent(void *a1)
{
  char v2; // r8
  int v3; // eax
  char *v4; // rbx
  int v5; // edi
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  KeEnterCriticalRegion();
  v3 = FlipManagerObject::ResolveHandle(a1, 1u, v2, (struct FlipManagerObject **)&Object);
  v4 = (char *)Object;
  v5 = v3;
  if ( v3 >= 0 )
  {
    v5 = CPushLock::AcquireLockExclusive((CPushLock *)((char *)Object + 40));
    if ( v5 >= 0 )
    {
      CFlipManager::FreeCurrentUpdates((CFlipManager *)(v4 + 32));
      CPushLock::ReleaseLock((CPushLock *)(v4 + 40));
    }
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
