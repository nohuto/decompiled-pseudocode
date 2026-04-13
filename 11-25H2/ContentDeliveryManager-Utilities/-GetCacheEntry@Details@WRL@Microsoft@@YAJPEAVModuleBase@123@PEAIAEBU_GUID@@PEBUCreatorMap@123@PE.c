/*
 * XREFs of ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x180043530
 * Callers:
 *     ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x1800412E4 (--$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAP.c)
 *     ??$GetClassObject@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGAEBU_GUID@@2PEAPEAX@Z @ 0x18004147C (--$GetClassObject@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGAEBU_GUID@@2PEAPEAX@Z.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180044268 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800442A0 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::GetCacheEntry(
        Microsoft::WRL::Details *this,
        struct Microsoft::WRL::Details::ModuleBase *a2,
        unsigned int *a3,
        const struct _GUID *a4,
        _QWORD *Ptr)
{
  _QWORD *v9; // r14
  __int64 v10; // rax
  void *v11; // rcx
  unsigned int v12; // ebx
  __int64 result; // rax
  PVOID v14; // rbx
  __int64 v15; // rax
  void *v16; // rcx
  PSRWLOCK v17[2]; // [rsp+30h] [rbp-10h] BYREF
  PSRWLOCK SRWLock; // [rsp+78h] [rbp+38h] BYREF

  v9 = Ptr;
  *Ptr = 0LL;
  Ptr = 0LL;
  if ( **(_QWORD **)a4[1].Data4 )
  {
    v10 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 56LL))(this);
    Microsoft::WRL::Wrappers::SRWLock::LockShared(&SRWLock, v10);
    v11 = **(void ***)a4[1].Data4;
    if ( v11 )
    {
      Ptr = DecodePointer(v11);
      v12 = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *, _QWORD *))*Ptr)(Ptr, a3, v9);
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      return v12;
    }
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
  }
  result = (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, const struct _GUID *, unsigned int *, _QWORD **))&a4->Data1)(
             a2,
             a4,
             a3,
             &Ptr);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)a2 & 4) != 0 )
      goto LABEL_17;
    v14 = 0LL;
    v15 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 56LL))(this);
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v17, v15);
    v16 = **(void ***)a4[1].Data4;
    if ( v16 )
    {
      v14 = DecodePointer(v16);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v14 + 8LL))(v14);
    }
    else
    {
      **(_QWORD **)a4[1].Data4 = EncodePointer(Ptr);
    }
    if ( v17[0] )
      ReleaseSRWLockExclusive(v17[0]);
    if ( !v14 )
    {
LABEL_17:
      v14 = Ptr;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *))(*Ptr + 16LL))(Ptr);
      (*(void (__fastcall **)(_QWORD *))(*Ptr + 16LL))(Ptr);
    }
    *v9 = v14;
    return 0LL;
  }
  return result;
}
