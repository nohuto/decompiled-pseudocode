/*
 * XREFs of DxgCreateContextAllocationCB @ 0x1403A5DB0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     DpiGetDxgAdapter @ 0x1400107F0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140010864 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030E00 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     ?VidMmCreateContextAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x14004F434 (-VidMmCreateContextAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATI.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

__int64 __fastcall DxgCreateContextAllocationCB(__int64 a1)
{
  struct DXGCONTEXT *v2; // r13
  __int64 DxgAdapter; // rax
  __int64 v4; // rsi
  __int64 v6; // rdi
  unsigned int ContextAllocation; // ebx
  struct DXGCONTEXT **v8; // rax
  _BYTE v9[8]; // [rsp+88h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-68h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v9);
  v2 = 0LL;
  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 175;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"KeGetCurrentIrql() == PASSIVE_LEVEL",
      175LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DxgAdapter = DpiGetDxgAdapter(*(_QWORD *)(a1 + 8));
  v4 = DxgAdapter;
  if ( DxgAdapter )
  {
    if ( !*(_QWORD *)(DxgAdapter + 3128) )
    {
      WdLogSingleEntry5(0LL, 275LL, 7LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 191;
    }
    v6 = *(_QWORD *)(a1 + 16);
    if ( v6 )
    {
      if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v6 + 136))
        && *(struct _KTHREAD **)(v6 + 152) != KeGetCurrentThread()
        && *(int *)(v6 + 160) <= 0 )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v6, 0LL, 0LL);
        WdLogGlobalForLineNumber = 208;
      }
      v8 = *(struct DXGCONTEXT ***)(a1 + 24);
      if ( v8 )
      {
        if ( *(int *)(v4 + 2736) < 9472 )
          v2 = *(struct DXGCONTEXT **)(a1 + 24);
        else
          v2 = *v8;
      }
      ContextAllocation = VIDMM_EXPORT::VidMmCreateContextAllocation(
                            *(VIDMM_EXPORT **)(*(_QWORD *)(v4 + 3128) + 760LL),
                            *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v4 + 3128) + 768LL),
                            *(_DWORD *)(a1 + 80),
                            *(struct _DXGK_CREATECONTEXTALLOCATIONFLAGS *)a1,
                            (struct DXGDEVICE *)v6,
                            v2,
                            *(void **)(a1 + 32),
                            *(_QWORD *)(a1 + 40),
                            *(_DWORD *)(a1 + 48),
                            *(_DWORD *)(a1 + 52),
                            *(_DWORD *)(a1 + 56),
                            *(struct _D3DDDI_SEGMENTPREFERENCE *)(a1 + 60),
                            *(struct _DXGK_SEGMENTBANKPREFERENCE *)(a1 + 64),
                            *(struct _DXGK_ALLOCATIONINFOFLAGS *)(a1 + 68),
                            (struct VIDMM_CONTEXT_ALLOC **)(a1 + 72));
    }
    else
    {
      ContextAllocation = -1073741811;
    }
    DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v9);
    return ContextAllocation;
  }
  else
  {
    if ( v9[0] )
      KeUnstackDetachProcess(&ApcState);
    return 3221225485LL;
  }
}
