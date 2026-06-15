/*
 * XREFs of ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x1800CEB5C
 * Callers:
 *     ??1?$Module@$00VServiceModule@Internal@Windows@@@WRL@Microsoft@@UEAA@XZ @ 0x1800CC0C0 (--1-$Module@$00VServiceModule@Internal@Windows@@@WRL@Microsoft@@UEAA@XZ.c)
 *     ??1?$Module@$00VSvcHostModule@Internal@Windows@@@WRL@Microsoft@@UEAA@XZ @ 0x1800CC0F4 (--1-$Module@$00VSvcHostModule@Internal@Windows@@@WRL@Microsoft@@UEAA@XZ.c)
 *     ?UnregisterObjects@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEBG@Z @ 0x1800CEE1C (-UnregisterObjects@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEBG@Z.c)
 * Callees:
 *     ?IsServerNameEqual@Details@WRL@Microsoft@@YA_NPEBUCreatorMap@123@PEBG@Z @ 0x1800CD9EC (-IsServerNameEqual@Details@WRL@Microsoft@@YA_NPEBUCreatorMap@123@PEBG@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800CDA44 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall Microsoft::WRL::Details::TerminateMap(
        Microsoft::WRL::Details *this,
        struct Microsoft::WRL::Details::ModuleBase *a2,
        const unsigned __int16 *a3)
{
  char v3; // bp
  Microsoft::WRL::Details **v6; // rbx
  const unsigned __int16 *v7; // r8
  unsigned __int64 v8; // r14
  RTL_SRWLOCK *v9; // rax
  void **v10; // rcx
  void *v11; // rsi
  PVOID v12; // rax
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  v3 = (char)a3;
  v6 = (Microsoft::WRL::Details **)((*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 32LL))(this)
                                  + 8);
  v8 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 48LL))(this);
  while ( (unsigned __int64)v6 < v8 )
  {
    if ( *v6 && Microsoft::WRL::Details::IsServerNameEqual(*v6, a2, v7) )
    {
      if ( (*(unsigned int (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 24LL))(this) && !v3 )
        return 0;
      if ( **((_QWORD **)*v6 + 3) )
      {
        v9 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 56LL))(this);
        Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&SRWLock, v9);
        v10 = (void **)*((_QWORD *)*v6 + 3);
        v11 = *v10;
        if ( *v10 )
        {
          *v10 = 0LL;
          if ( SRWLock )
          {
            ReleaseSRWLockExclusive(SRWLock);
            SRWLock = 0LL;
          }
          v12 = DecodePointer(v11);
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v12 + 16LL))(v12);
        }
        else if ( SRWLock )
        {
          ReleaseSRWLockExclusive(SRWLock);
          SRWLock = 0LL;
        }
      }
    }
    ++v6;
  }
  return (*(unsigned int (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 24LL))(this) == 0;
}
