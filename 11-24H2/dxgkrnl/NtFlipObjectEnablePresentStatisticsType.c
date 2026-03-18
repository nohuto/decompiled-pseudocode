/*
 * XREFs of NtFlipObjectEnablePresentStatisticsType @ 0x14009DFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14001A1D4 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14001A9A4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtFlipObjectEnablePresentStatisticsType(void *a1, unsigned int a2, int a3)
{
  __int64 v6; // r8
  int v7; // ebx
  int v8; // eax
  _QWORD **v9; // rdi
  __int64 v10; // r8
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  Object = 0LL;
  KeEnterCriticalRegion();
  if ( a1 )
  {
    v8 = FlipManagerObject::ResolveHandle(a1, 2u, v6, (struct FlipManagerObject **)&Object);
    v9 = (_QWORD **)Object;
    v7 = v8;
    if ( v8 >= 0 )
    {
      v7 = CPushLock::AcquireLockExclusive((CPushLock *)((char *)Object + 40));
      if ( v7 >= 0 )
      {
        LOBYTE(v10) = a3 != 0;
        v7 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*v9[32] + 16LL))(v9[32], a2, v10);
        CPushLock::ReleaseLock((CPushLock *)(v9 + 5));
      }
    }
    if ( v9 )
      ObfDereferenceObject(v9);
  }
  else
  {
    v7 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
