/*
 * XREFs of ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x180044F50
 * Callers:
 *     ??1?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ @ 0x180042584 (--1-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ.c)
 *     DllCanUnloadNow @ 0x180045480 (DllCanUnloadNow.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180044268 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall Microsoft::WRL::Details::TerminateMap(
        Microsoft::WRL::Details *this,
        RTL_SRWLOCK *a2,
        const unsigned __int16 *a3)
{
  char v3; // bp
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r14
  RTL_SRWLOCK *v7; // rax
  void **v8; // rcx
  void *v9; // rsi
  PVOID v10; // rax
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF

  SRWLock = a2;
  v3 = (char)a3;
  v5 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 32LL))(this) + 8;
  v6 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 48LL))(this);
  while ( v5 < v6 )
  {
    if ( *(_QWORD *)v5 )
    {
      if ( (*(unsigned int (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 24LL))(this) && !v3 )
        return 0;
      if ( **(_QWORD **)(*(_QWORD *)v5 + 24LL) )
      {
        v7 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 56LL))(this);
        Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&SRWLock, v7);
        v8 = *(void ***)(*(_QWORD *)v5 + 24LL);
        v9 = *v8;
        if ( *v8 )
        {
          *v8 = 0LL;
          if ( SRWLock )
          {
            ReleaseSRWLockExclusive(SRWLock);
            SRWLock = 0LL;
          }
          v10 = DecodePointer(v9);
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v10 + 16LL))(v10);
        }
        else if ( SRWLock )
        {
          ReleaseSRWLockExclusive(SRWLock);
          SRWLock = 0LL;
        }
      }
    }
    v5 += 8LL;
  }
  return (*(unsigned int (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 24LL))(this) == 0;
}
