/*
 * XREFs of NtFlipObjectPresentCancel @ 0x14009BD60
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14000AC94 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14000B474 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14000C610 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?PresentCancel@CFlipManager@@QEAAJ_K@Z @ 0x140064F54 (-PresentCancel@CFlipManager@@QEAAJ_K@Z.c)
 *     RtlCopyFromUser @ 0x140065368 (RtlCopyFromUser.c)
 */

__int64 __fastcall NtFlipObjectPresentCancel(void *a1, void *a2)
{
  __int64 v3; // rsi
  __int64 v4; // r8
  int v5; // ebx
  struct FlipManagerObject *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  struct FlipManagerObject *v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0LL;
  v3 = 0LL;
  if ( a2 )
  {
    v11 = 0LL;
    RtlCopyFromUser(&v11, a2, 8uLL);
    v3 = v11;
  }
  KeEnterCriticalRegion();
  v5 = FlipManagerObject::ResolveHandle(a1, 2u, v4, &v10);
  v6 = v10;
  if ( v5 >= 0 )
  {
    v5 = CPushLock::AcquireLockExclusive((struct FlipManagerObject *)((char *)v10 + 40));
    if ( v5 >= 0 )
    {
      v5 = CFlipManager::PresentCancel((struct FlipManagerObject *)((char *)v6 + 32), v3, v7, v8);
      CPushLock::ReleaseLock((struct FlipManagerObject *)((char *)v6 + 40));
    }
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
