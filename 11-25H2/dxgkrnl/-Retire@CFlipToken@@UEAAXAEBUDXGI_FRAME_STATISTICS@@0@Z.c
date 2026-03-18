/*
 * XREFs of ?Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@0@Z @ 0x14000E0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x14000F050 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipToken::Retire(
        CFlipToken *this,
        const struct DXGI_FRAME_STATISTICS *a2,
        const struct DXGI_FRAME_STATISTICS *a3)
{
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rbx
  char v9; // bp
  __int64 **v10; // rsi
  __int64 *i; // rax
  __int128 v12; // xmm0
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rdi
  __int64 *j; // rax
  HANDLE CurrentThreadId; // rax
  __int64 v18; // rcx
  __int128 v19; // [rsp+30h] [rbp-38h]

  *((_DWORD *)this + 6) = 5;
  CFlipToken::TraceStateChanged(this);
  if ( !(*(unsigned __int8 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 144LL))(this) )
  {
    v6 = *((_QWORD *)this + 6);
    v7 = *((_QWORD *)this + 7);
    KeEnterCriticalRegion();
    v8 = v6 + 48;
    ExAcquirePushLockSharedEx(v6 + 48, 0LL);
    v9 = 0;
    if ( *(_DWORD *)(v6 + 136) )
    {
      v10 = (__int64 **)(v6 + 120);
      for ( i = *v10; i != (__int64 *)v10; i = (__int64 *)*i )
      {
        if ( *(i - 1) == v7 )
        {
          v9 = *((_BYTE *)i + 17);
          break;
        }
      }
    }
    if ( PsGetCurrentThreadId() == *(HANDLE *)(v8 + 8) )
    {
      *(_QWORD *)(v8 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v8, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v8, 0LL);
    }
    KeLeaveCriticalRegion();
    if ( v9 )
    {
      v19 = *(_OWORD *)a3;
      v12 = *((_OWORD *)a3 + 1);
    }
    else
    {
      v19 = *(_OWORD *)a2;
      v12 = *((_OWORD *)a2 + 1);
    }
    v13 = *((_QWORD *)this + 6);
    v14 = *((_DWORD *)this + 31);
    v15 = *((_QWORD *)this + 7);
    LODWORD(v19) = v14;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v13 + 48, 0LL);
    *(_QWORD *)(v13 + 56) = PsGetCurrentThreadId();
    if ( *(_DWORD *)(v13 + 136) )
    {
      for ( j = *(__int64 **)(v13 + 120); j != (__int64 *)(v13 + 120); j = (__int64 *)*j )
      {
        if ( *(j - 1) == v15 )
        {
          *((_DWORD *)j + 46) = 0;
          *((_DWORD *)j + 56) = 0;
          *((_OWORD *)j + 12) = v19;
          *((_BYTE *)j + 18) = 1;
          *((_OWORD *)j + 13) = v12;
          break;
        }
      }
    }
    CurrentThreadId = PsGetCurrentThreadId();
    v18 = v13 + 48;
    if ( CurrentThreadId == *(HANDLE *)(v13 + 56) )
    {
      *(_QWORD *)(v13 + 56) = 0LL;
      ExReleasePushLockExclusiveEx(v18, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v18, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
