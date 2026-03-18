/*
 * XREFs of NtFlipObjectConsumerAcquirePresent @ 0x14004CA70
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x140019DE8 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14001A1D4 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14001A9A4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     CFlipPropertySetBase::WriteSerializedProperties__lambda_2ad1fa16415b29e006cebd519cba1c33___ @ 0x14009DC3C (CFlipPropertySetBase--WriteSerializedProperties__lambda_2ad1fa16415b29e006cebd519cba1c33___.c)
 *     RtlCopyToUser @ 0x14018D054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtFlipObjectConsumerAcquirePresent(void *a1, size_t Size, int a3, void *a4, __int64 a5)
{
  size_t v7; // r14
  signed int v9; // ebx
  void *v10; // r13
  CFlipPropertySetBase *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rdx
  _QWORD *v14; // rsi
  int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // rdx
  PVOID Object; // [rsp+20h] [rbp-38h] BYREF
  CFlipPropertySetBase *v20; // [rsp+28h] [rbp-30h]

  v7 = (unsigned int)Size;
  if ( (!(_DWORD)Size || a4) && (!a3 || a5) )
  {
    Object = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v20 = 0LL;
    KeEnterCriticalRegion();
    v9 = FlipManagerObject::ResolveHandle(a1, 1u, v12, (struct FlipManagerObject **)&Object);
    if ( v9 >= 0 )
    {
      v14 = Object;
      v9 = CPushLock::AcquireLockExclusive((CPushLock *)((char *)Object + 40));
      if ( v9 >= 0 )
      {
        v15 = 0;
        v16 = v14[39];
        v9 = v16 == 0 ? 0xC0000001 : 0;
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 56);
          if ( v17 )
            v15 = *(_DWORD *)(v17 + 32);
          if ( *(_DWORD *)(v16 + 40) != (_DWORD)v7 || v15 != a3 )
            v9 = -1073741811;
        }
        if ( v9 >= 0 )
        {
          v10 = *(void **)(v16 + 48);
          v11 = *(CFlipPropertySetBase **)(v16 + 56);
          v20 = v11;
          if ( v11 )
            ++*((_DWORD *)v11 + 2);
        }
        CPushLock::ReleaseLock((CPushLock *)((char *)Object + 40));
      }
    }
    if ( v9 >= 0 )
    {
      if ( (_DWORD)v7 )
        RtlCopyToUser(a4, v10, v7);
      if ( a3 )
        CFlipPropertySetBase::WriteSerializedProperties__lambda_2ad1fa16415b29e006cebd519cba1c33___(v11, v13, a5);
    }
    if ( v11 )
      CFlipPropertySetBase::Release(v11);
    if ( Object )
      ObfDereferenceObject(Object);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
