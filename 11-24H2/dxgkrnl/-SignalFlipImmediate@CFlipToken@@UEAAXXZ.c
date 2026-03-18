/*
 * XREFs of ?SignalFlipImmediate@CFlipToken@@UEAAXXZ @ 0x14001B500
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipToken::SignalFlipImmediate(CFlipToken *this)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  char v4; // bl
  bool v5; // cl
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rsi
  CPushLock *v10; // rdi
  _QWORD **v11; // rbx
  _QWORD *j; // rax
  __int64 v13; // rbx
  __int64 v14; // r15
  char v15; // r14
  __int64 v16; // r8
  _QWORD *i; // rax

  v1 = *((_QWORD *)this + 6);
  KeEnterCriticalRegion();
  v3 = v1 + 48;
  ExAcquirePushLockSharedEx(v1 + 48, 0LL);
  v4 = *(_BYTE *)(v1 + 209);
  if ( PsGetCurrentThreadId() == *(HANDLE *)(v3 + 8) )
  {
    *(_QWORD *)(v3 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v3, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v3, 0LL);
  }
  KeLeaveCriticalRegion();
  v5 = v4 != 0;
  if ( !*((_BYTE *)this + 64) )
  {
    v6 = *((_QWORD *)this + 13);
    if ( v6 > 1 )
    {
      v7 = v6 - 1;
      v13 = *((_QWORD *)this + 6);
      v14 = *((_QWORD *)this + 7);
      v15 = v5;
      if ( *((_BYTE *)this + 65) )
        v15 = 1;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v13 + 48, 0LL);
      if ( *(_DWORD *)(v13 + 176) )
      {
        for ( i = *(_QWORD **)(v13 + 160); i != (_QWORD *)(v13 + 160); i = (_QWORD *)*i )
        {
          if ( *(i - 1) == v14 )
          {
            LOBYTE(v16) = v15;
            (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(*(i - 3) + 112LL))(i - 3, v7, v16);
            break;
          }
        }
      }
      CPushLock::ReleaseLock((CPushLock *)(v13 + 48));
    }
  }
  *((_QWORD *)this + 13) = 0LL;
  if ( !*((_BYTE *)this + 578) )
  {
    v8 = *((_QWORD *)this + 6);
    v9 = *((_QWORD *)this + 7);
    *((_BYTE *)this + 578) = 1;
    KeEnterCriticalRegion();
    v10 = (CPushLock *)(v8 + 48);
    ExAcquirePushLockSharedEx(v8 + 48, 0LL);
    if ( *(_DWORD *)(v8 + 176) )
    {
      v11 = (_QWORD **)(v8 + 160);
      for ( j = *v11; j != v11; j = (_QWORD *)*j )
      {
        if ( *(j - 1) == v9 )
        {
          (*(void (__fastcall **)(_QWORD *))(*(j - 3) + 120LL))(j - 3);
          break;
        }
      }
    }
    CPushLock::ReleaseLock(v10);
  }
}
