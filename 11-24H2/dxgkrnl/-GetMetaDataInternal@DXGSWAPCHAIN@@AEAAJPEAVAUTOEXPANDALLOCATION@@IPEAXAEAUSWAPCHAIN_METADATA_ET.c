/*
 * XREFs of ?GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@DPEAI@Z @ 0x1402E4E48
 * Callers:
 *     ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1402E4594 (-GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall DXGSWAPCHAIN::GetMetaDataInternal(
        DXGSWAPCHAIN *this,
        const void **a2,
        unsigned int a3,
        char *a4,
        struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *a5,
        char a6,
        unsigned int *a7)
{
  __int64 v8; // rdi
  struct _KTHREAD *v10; // rcx
  size_t v11; // rsi
  const void *v12; // r12
  size_t v13; // r8
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 CurrentProcess; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax

  v8 = a3;
  v10 = (struct _KTHREAD *)*((_QWORD *)this + 3);
  if ( v10 != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3735;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_SwapChainLock.IsOwner()", 3735LL, 0LL, 0LL, 0LL, 0LL);
  }
  v11 = *((unsigned int *)a2 + 2);
  if ( (_DWORD)v8 )
  {
    if ( (unsigned int)v8 > (unsigned int)v11 )
      v8 = (unsigned int)v11;
    v12 = *a2;
    *((_QWORD *)a5 + 1) = a2;
    v13 = 16LL;
    if ( (unsigned int)v11 <= 0x10 )
      v13 = v11;
    memmove((char *)a5 + 24, v12, v13);
    if ( a6 == 1 )
    {
      v14 = (unsigned int)v8;
      if ( &a4[v8] <= a4 || (unsigned __int64)&a4[v8] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a4, v12, (unsigned int)v8);
    }
    else
    {
      v14 = (unsigned int)v8;
      memmove(a4, v12, (unsigned int)v8);
    }
    *((_DWORD *)a5 + 5) = v8;
    *a7 = v8;
    if ( (unsigned int)v11 <= (unsigned int)v8 )
      return 0LL;
    CurrentProcess = PsGetCurrentProcess(v15);
    WdLogSingleEntry2(3LL, CurrentProcess, v14);
    WdLogGlobalForLineNumber = 3789;
    return 2147483653LL;
  }
  else
  {
    if ( !a4 )
    {
      *a7 = v11;
      return 0LL;
    }
    v18 = PsGetCurrentProcess(v10);
    WdLogSingleEntry1(2LL, v18);
    WdLogGlobalForLineNumber = 3748;
    v20 = PsGetCurrentProcess(v19);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"GetSetMetadata caller (0x%I64x) passed in buffer size of zero",
      v20,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
