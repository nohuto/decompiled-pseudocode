/*
 * XREFs of ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x14001E8EC
 * Callers:
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z @ 0x14001DAE0 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z.c)
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x140034AD0 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x14005F2B0 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipToken::SignalGpuFenceAndPresentLimitSemaphore(CFlipToken *this, char a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbx
  _QWORD **v8; // rdi
  _QWORD *j; // rax
  char v10; // r14
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // r8
  _QWORD *i; // rax
  HANDLE CurrentThreadId; // rax
  __int64 v16; // rcx

  if ( !*((_BYTE *)this + 64) )
  {
    v3 = *((_QWORD *)this + 13);
    if ( v3 > 1 )
    {
      v4 = v3 - 1;
      v10 = 1;
      v11 = *((_QWORD *)this + 6);
      v12 = *((_QWORD *)this + 7);
      if ( !*((_BYTE *)this + 65) )
        v10 = a2;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v11 + 48, 0LL);
      if ( *(_DWORD *)(v11 + 176) )
      {
        for ( i = *(_QWORD **)(v11 + 160); i != (_QWORD *)(v11 + 160); i = (_QWORD *)*i )
        {
          if ( *(i - 1) == v12 )
          {
            LOBYTE(v13) = v10;
            (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(*(i - 3) + 112LL))(i - 3, v4, v13);
            break;
          }
        }
      }
      CurrentThreadId = PsGetCurrentThreadId();
      v16 = v11 + 48;
      if ( CurrentThreadId == *(HANDLE *)(v11 + 56) )
      {
        *(_QWORD *)(v11 + 56) = 0LL;
        ExReleasePushLockExclusiveEx(v16, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v16, 0LL);
      }
      KeLeaveCriticalRegion();
    }
  }
  *((_QWORD *)this + 13) = 0LL;
  if ( !*((_BYTE *)this + 578) )
  {
    v5 = *((_QWORD *)this + 6);
    v6 = *((_QWORD *)this + 7);
    *((_BYTE *)this + 578) = 1;
    KeEnterCriticalRegion();
    v7 = v5 + 48;
    ExAcquirePushLockSharedEx(v5 + 48, 0LL);
    if ( *(_DWORD *)(v5 + 176) )
    {
      v8 = (_QWORD **)(v5 + 160);
      for ( j = *v8; j != v8; j = (_QWORD *)*j )
      {
        if ( *(j - 1) == v6 )
        {
          (*(void (__fastcall **)(_QWORD *))(*(j - 3) + 120LL))(j - 3);
          break;
        }
      }
    }
    if ( PsGetCurrentThreadId() == *(HANDLE *)(v7 + 8) )
    {
      *(_QWORD *)(v7 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v7, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v7, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
