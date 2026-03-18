/*
 * XREFs of NtFlipObjectPresentCancel @ 0x14009E0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14001A1D4 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14001A9A4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?PresentCancel@CFlipManager@@QEAAJ_K@Z @ 0x140064B74 (-PresentCancel@CFlipManager@@QEAAJ_K@Z.c)
 *     RtlCopyFromUser @ 0x140064F88 (RtlCopyFromUser.c)
 */

__int64 __fastcall NtFlipObjectPresentCancel(void *a1, void *a2)
{
  __int64 v3; // rsi
  __int64 v4; // r8
  int v5; // ebx
  struct FlipManagerObject *v6; // rdi
  struct FlipManagerObject *v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0LL;
  v3 = 0LL;
  if ( a2 )
  {
    v9 = 0LL;
    RtlCopyFromUser(&v9, a2, 8uLL);
    v3 = v9;
  }
  KeEnterCriticalRegion();
  v5 = FlipManagerObject::ResolveHandle(a1, 2u, v4, &v8);
  v6 = v8;
  if ( v5 >= 0 )
  {
    v5 = CPushLock::AcquireLockExclusive((struct FlipManagerObject *)((char *)v8 + 40));
    if ( v5 >= 0 )
    {
      v5 = CFlipManager::PresentCancel((struct FlipManagerObject *)((char *)v6 + 32), v3);
      CPushLock::ReleaseLock((struct FlipManagerObject *)((char *)v6 + 40));
    }
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
