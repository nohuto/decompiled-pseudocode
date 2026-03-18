/*
 * XREFs of ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x14001E4D0
 * Callers:
 *     ?Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@0@Z @ 0x14001D580 (-Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@0@Z.c)
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z @ 0x14001DAE0 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z.c)
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x140034AD0 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ?Confirm@CFlipToken@@UEAAXXZ @ 0x140059C00 (-Confirm@CFlipToken@@UEAAXXZ.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x14005F2B0 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 *     ?CanReleaseAnalogToken@CFlipToken@@UEAAJPEA_N@Z @ 0x14009BC10 (-CanReleaseAnalogToken@CFlipToken@@UEAAJPEA_N@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipToken::TraceStateChanged(CFlipToken *this)
{
  char *v1; // rdi
  __int64 v3; // r14
  __int64 v4; // rbp
  _QWORD *i; // rax
  unsigned __int8 v6; // bp
  HANDLE CurrentThreadId; // rax
  __int64 v8; // rcx
  int *v9; // r14
  __int64 v10; // r12
  char v11; // di
  int v12; // ebp
  int v13; // r14d
  __int64 v14; // r15
  void (__fastcall *v15)(_QWORD, _QWORD, _QWORD, __int64, int, int, bool, __int64, __int64, int); // r13
  __int64 v16; // rsi
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // [rsp+90h] [rbp+8h]

  v1 = (char *)this + 24;
  v21 = 0;
  if ( *((_DWORD *)this + 6) == 3 )
  {
    v3 = *((_QWORD *)this + 6);
    v4 = *((_QWORD *)this + 7);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v3 + 48, 0LL);
    if ( *(_DWORD *)(v3 + 176) )
    {
      for ( i = *(_QWORD **)(v3 + 160); i != (_QWORD *)(v3 + 160); i = (_QWORD *)*i )
      {
        if ( *(i - 1) == v4 )
        {
          v6 = (*(__int64 (__fastcall **)(_QWORD *))(*(i - 3) + 40LL))(i - 3);
          goto LABEL_7;
        }
      }
    }
    v6 = 0;
LABEL_7:
    CurrentThreadId = PsGetCurrentThreadId();
    v8 = v3 + 48;
    if ( CurrentThreadId == *(HANDLE *)(v3 + 56) )
    {
      *(_QWORD *)(v3 + 56) = 0LL;
      ExReleasePushLockExclusiveEx(v8, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v8, 0LL);
    }
    KeLeaveCriticalRegion();
    v1 = (char *)this + 24;
    v21 = v6;
  }
  v9 = (int *)v1;
  if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2605;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
      {
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(v19, v18, v20, 0LL, 2, -1, L"m_pGlobal != NULL", 45, 0, 0, 0, 0);
        v9 = (int *)((char *)this + 24);
      }
    }
  }
  v10 = *((_QWORD *)this + 7);
  v11 = *((_BYTE *)this + 582);
  v12 = *((unsigned __int8 *)this + 579);
  v13 = *v9;
  v14 = *((_QWORD *)this + 13);
  v15 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int, int, bool, __int64, __int64, int))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304952LL) + 432LL);
  v16 = *(_QWORD *)(*((_QWORD *)this + 6) + 24LL);
  v17 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 112LL))(this);
  v15(*((_QWORD *)this + 6), *((unsigned int *)this + 30), v17, v14, v13, v12, v11 == 0, v16, v10, v21);
}
