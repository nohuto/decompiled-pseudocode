/*
 * XREFs of NtFlipObjectQueryEndpointConnected @ 0x1400428B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14000B474 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14000C610 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x14018AE14 (RtlCopyToUser.c)
 */

__int64 __fastcall NtFlipObjectQueryEndpointConnected(HANDLE Handle, int a2, void *a3)
{
  char *v6; // r14
  NTSTATUS v7; // esi
  char *v8; // rbx
  __int64 v9; // rbx
  BOOL Src; // [rsp+70h] [rbp+8h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  if ( Handle && a3 )
  {
    KeEnterCriticalRegion();
    v6 = 0LL;
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(Handle, 0, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
    v8 = (char *)Object;
    if ( v7 >= 0 )
    {
      if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == 4 )
      {
        v6 = v8;
      }
      else
      {
        ObfDereferenceObject(v8);
        v7 = -1073741788;
      }
    }
    if ( v7 >= 0 )
    {
      v7 = CPushLock::AcquireLockExclusive((CPushLock *)(v6 + 40));
      if ( v7 >= 0 )
      {
        v9 = *(_QWORD *)&v6[(-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 80];
        CPushLock::ReleaseLock((CPushLock *)(v6 + 40));
        Src = v9 != 0;
        RtlCopyToUser(a3, &Src, 4uLL);
      }
    }
    else
    {
      v6 = 0LL;
    }
    if ( v6 )
      ObfDereferenceObject(v6);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
