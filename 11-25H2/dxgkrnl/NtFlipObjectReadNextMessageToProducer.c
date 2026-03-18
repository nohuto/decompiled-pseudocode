/*
 * XREFs of NtFlipObjectReadNextMessageToProducer @ 0x14000AB40
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x14000A8B4 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14000AC94 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14000B474 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14000C610 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ @ 0x140046E18 (-Dequeue@-$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ.c)
 *     CFlipPropertySetBase::WriteSerializedProperties__lambda_2ad1fa16415b29e006cebd519cba1c33___ @ 0x14009B8DC (CFlipPropertySetBase--WriteSerializedProperties__lambda_2ad1fa16415b29e006cebd519cba1c33___.c)
 */

__int64 __fastcall NtFlipObjectReadNextMessageToProducer(void *a1, int a2, __int64 a3)
{
  CFlipPropertySetBase *v6; // rdi
  char v7; // r8
  __int64 v8; // rdx
  int v9; // ebx
  _QWORD *v10; // rsi
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // r10
  _QWORD *v14; // r11
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  if ( a1 && a2 && a3 )
  {
    Object = 0LL;
    v6 = 0LL;
    KeEnterCriticalRegion();
    v9 = FlipManagerObject::ResolveHandle(a1, 2u, v7, (struct FlipManagerObject **)&Object);
    if ( v9 >= 0 )
    {
      v10 = Object;
      v9 = CPushLock::AcquireLockExclusive((CPushLock *)((char *)Object + 40));
      if ( v9 >= 0 )
      {
        v11 = v10[32];
        v9 = 0;
        v12 = *(_QWORD *)(v11 + 8);
        if ( v12 == v11 + 8 )
          v9 = -1073741823;
        if ( v9 >= 0 )
        {
          v6 = (CFlipPropertySetBase *)((v12 - 48) & -(__int64)(v12 != 0));
          CFlipObjectQueue<CFlipConsumerMessage>::Dequeue(v11 + 8);
          --*(_DWORD *)(v13 + 24);
          if ( (_QWORD *)*v14 == v14 )
            KeResetEvent(*(PRKEVENT *)(v13 + 32));
        }
        CPushLock::ReleaseLock((CPushLock *)(v10 + 5));
      }
    }
    if ( v9 >= 0 )
    {
      if ( a2 != *((_DWORD *)v6 + 8) )
        v9 = -1073741811;
      if ( v9 >= 0 )
        CFlipPropertySetBase::WriteSerializedProperties__lambda_2ad1fa16415b29e006cebd519cba1c33___(v6, v8, a3);
    }
    if ( v6 )
      CFlipPropertySetBase::Release(v6);
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
