/*
 * XREFs of DxgCreateContextAllocationCB @ 0x1403B41D0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x140016C90 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140016D04 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030700 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     ?VidMmCreateContextAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x14004F9B4 (-VidMmCreateContextAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATI.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

__int64 __fastcall DxgCreateContextAllocationCB(__int64 a1)
{
  struct DXGCONTEXT *v2; // r13
  __int64 DxgAdapter; // rax
  __int64 v4; // rdi
  __int64 v6; // rbx
  unsigned int ContextAllocation; // ebx
  struct DXGCONTEXT **v8; // rax
  _BYTE v10[8]; // [rsp+90h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-60h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v10);
  v2 = 0LL;
  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 175;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
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
      if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v6 + 136)) )
      {
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        if ( *(struct _KTHREAD **)(v6 + 152) != KeGetCurrentThread() && *(int *)(v6 + 160) <= 0 )
        {
          WdLogSingleEntry5(0LL, 275LL, 4LL, v6, 0LL, 0LL);
          WdLogGlobalForLineNumber = 208;
        }
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
    DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v10);
    return ContextAllocation;
  }
  else
  {
    if ( v10[0] )
      KeUnstackDetachProcess(&ApcState);
    return 3221225485LL;
  }
}
