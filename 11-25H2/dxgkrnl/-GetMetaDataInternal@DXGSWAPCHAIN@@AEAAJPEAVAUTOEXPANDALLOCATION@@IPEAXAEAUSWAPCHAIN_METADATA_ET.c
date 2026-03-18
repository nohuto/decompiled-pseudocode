/*
 * XREFs of ?GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@DPEAI@Z @ 0x1403085F8
 * Callers:
 *     ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x140307D3C (-GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

__int64 __fastcall DXGSWAPCHAIN::GetMetaDataInternal(
        struct _KTHREAD **this,
        const void **a2,
        unsigned int a3,
        char *a4,
        struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *a5,
        char a6,
        unsigned int *a7)
{
  __int64 v8; // rdi
  size_t v10; // rsi
  const void *v11; // r12
  size_t v12; // r8
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 CurrentProcess; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax

  v8 = a3;
  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3656;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_SwapChainLock.IsOwner()", 3656LL, 0LL, 0LL, 0LL, 0LL);
  }
  v10 = *((unsigned int *)a2 + 2);
  if ( (_DWORD)v8 )
  {
    if ( (unsigned int)v8 > (unsigned int)v10 )
      v8 = (unsigned int)v10;
    v11 = *a2;
    *((_QWORD *)a5 + 1) = a2;
    v12 = 16LL;
    if ( (unsigned int)v10 <= 0x10 )
      v12 = v10;
    memmove((char *)a5 + 24, v11, v12);
    if ( a6 == 1 )
    {
      v13 = (unsigned int)v8;
      if ( &a4[v8] <= a4 || (unsigned __int64)&a4[v8] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a4, v11, (unsigned int)v8);
    }
    else
    {
      v13 = (unsigned int)v8;
      memmove(a4, v11, (unsigned int)v8);
    }
    *((_DWORD *)a5 + 5) = v8;
    *a7 = v8;
    if ( (unsigned int)v10 <= (unsigned int)v8 )
      return 0LL;
    CurrentProcess = PsGetCurrentProcess(v14);
    WdLogSingleEntry2(3LL, CurrentProcess, v13);
    WdLogGlobalForLineNumber = 3710;
    return 2147483653LL;
  }
  else
  {
    if ( !a4 )
    {
      *a7 = v10;
      return 0LL;
    }
    v17 = PsGetCurrentProcess(this);
    WdLogSingleEntry1(2LL, v17);
    WdLogGlobalForLineNumber = 3669;
    v19 = PsGetCurrentProcess(v18);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"GetSetMetadata caller (0x%I64x) passed in buffer size of zero",
      v19,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
