/*
 * XREFs of NtFlipObjectOpen @ 0x140052E30
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14000AC94 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14000B474 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14000C610 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?OpenEndpoint@CFlipManager@@QEAAJHPEAPEAX@Z @ 0x1400591E0 (-OpenEndpoint@CFlipManager@@QEAAJHPEAPEAX@Z.c)
 *     RtlCopyToUser @ 0x14018AE14 (RtlCopyToUser.c)
 */

__int64 __fastcall NtFlipObjectOpen(void *a1, int a2, void *a3, void *a4)
{
  int v7; // edi
  char *v8; // rsi
  HANDLE v10; // [rsp+40h] [rbp-28h] BYREF
  PVOID Object; // [rsp+48h] [rbp-20h] BYREF
  HANDLE Src; // [rsp+70h] [rbp+8h] BYREF

  if ( a1 && a3 && a4 )
  {
    Object = 0LL;
    Src = 0LL;
    v10 = 0LL;
    v7 = FlipManagerObject::ResolveHandle(a1, 0, (__int64)a3, (struct FlipManagerObject **)&Object);
    if ( v7 >= 0 )
    {
      v8 = (char *)Object;
      v7 = CPushLock::AcquireLockExclusive((CPushLock *)((char *)Object + 40));
      if ( v7 >= 0 )
      {
        Src = (HANDLE)-1LL;
        v7 = ObOpenObjectByPointer(v8, 0x40u, 0LL, (a2 != 0) + 1, g_pDxgkCompositionObjectType, 0, &Src);
        if ( v7 >= 0 )
          v7 = CFlipManager::OpenEndpoint((CFlipManager *)(v8 + 32), a2 != 0, &v10);
        CPushLock::ReleaseLock((CPushLock *)(v8 + 40));
      }
    }
    if ( v7 >= 0 )
    {
      RtlCopyToUser(a3, &Src, 8uLL);
      RtlCopyToUser(a4, &v10, 8uLL);
      Src = 0LL;
      v10 = 0LL;
    }
    if ( Src )
      ObCloseHandle(Src, 1);
    if ( v10 )
      ObCloseHandle(v10, 1);
    if ( Object )
      ObfDereferenceObject(Object);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
