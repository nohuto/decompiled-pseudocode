/*
 * XREFs of NtFlipObjectQueryLostEvent @ 0x14009BE50
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14000AC94 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14000B474 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14000C610 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     RtlCopyToUser @ 0x14018AE14 (RtlCopyToUser.c)
 */

__int64 __fastcall NtFlipObjectQueryLostEvent(void *a1, void *a2)
{
  int v4; // ebx
  PVOID *v5; // rdi
  __int64 v6; // r8
  HANDLE Src; // [rsp+60h] [rbp+8h] BYREF
  struct FlipManagerObject *v9; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0LL;
  v9 = 0LL;
  Src = 0LL;
  KeEnterCriticalRegion();
  if ( !a1 || !a2 )
    v4 = -1073741811;
  if ( v4 >= 0 )
  {
    v4 = FlipManagerObject::ResolveHandle(a1, 0, v6, &v9);
    v5 = (PVOID *)v9;
    if ( v4 >= 0 )
    {
      v4 = CPushLock::AcquireLockExclusive((struct FlipManagerObject *)((char *)v9 + 40));
      if ( v4 >= 0 )
      {
        v4 = ObOpenObjectByPointer(v5[44], 0, 0LL, 0x100001u, (POBJECT_TYPE)ExEventObjectType, 1, &Src);
        CPushLock::ReleaseLock((CPushLock *)(v5 + 5));
      }
      if ( v4 >= 0 )
      {
        RtlCopyToUser(a2, &Src, 8uLL);
        Src = 0LL;
      }
    }
  }
  if ( Src )
    ObCloseHandle(Src, 1);
  if ( v5 )
    ObfDereferenceObject(v5);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
