/*
 * XREFs of ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1402E49D8
 * Callers:
 *     ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1402E4594 (-GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x140379498 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1402E52F0 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::SetMetaDataInternal(
        struct _KTHREAD **this,
        struct AUTOEXPANDALLOCATION *a2,
        int *a3,
        unsigned int a4,
        size_t Size,
        char *Src,
        struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *a7,
        char a8)
{
  unsigned int v8; // r15d
  DXGSWAPCHAIN *v10; // r14
  __int64 v11; // rbx
  unsigned int v12; // eax
  size_t v13; // r14
  __int64 v14; // rbx
  void *v15; // r14
  size_t v16; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  bool v21; // dl
  unsigned int v22; // ebx
  void *v23; // rax
  void *v24; // r15
  int v25; // eax
  void *v26; // rax
  __int64 CurrentProcess; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  bool v33; // dl
  int *v35; // [rsp+90h] [rbp+18h]

  v35 = a3;
  v8 = a4;
  v10 = (DXGSWAPCHAIN *)this;
  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3825;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_SwapChainLock.IsOwner()", 3825LL, 0LL, 0LL, 0LL, 0LL);
    a3 = v35;
  }
  if ( !(_DWORD)Size )
  {
    CurrentProcess = PsGetCurrentProcess(this);
    WdLogSingleEntry1(2LL, CurrentProcess);
    WdLogGlobalForLineNumber = 3830;
    v29 = PsGetCurrentProcess(v28);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"SetMetaDataInternal caller (0x%I64x) passed in buffer size of zero",
      v29,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( v8 + (unsigned int)Size < v8 )
  {
    v30 = PsGetCurrentProcess(this);
    WdLogSingleEntry1(2LL, v30);
    WdLogGlobalForLineNumber = 3838;
    v32 = PsGetCurrentProcess(v31);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"SetMetaDataInternal caller (0x%I64x) overflow when calc used size",
      v32,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGSWAPCHAIN::MarkAbandoned(v10, v33);
    return 3221225485LL;
  }
  v11 = v8 + (unsigned int)Size;
  v12 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)v11 <= v12 )
    v11 = v12;
  if ( (unsigned int)v11 > 0x2000 )
  {
    v18 = PsGetCurrentProcess(this);
    WdLogSingleEntry3(2LL, v18, v11, 0x2000LL);
    WdLogGlobalForLineNumber = 3847;
    v20 = PsGetCurrentProcess(v19);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"SetMetaDataInternal caller (0x%I64x) provided metadata of size 0x%I64x which is bigger than max 0x%I64x",
      v20,
      v11,
      0x2000LL,
      0LL,
      0LL);
    v22 = -1073741811;
LABEL_25:
    DXGSWAPCHAIN::MarkAbandoned(v10, v21);
    return v22;
  }
  if ( *((_DWORD *)a2 + 3) >= (unsigned int)v11 )
  {
    *((_DWORD *)a2 + 2) = v11;
    v13 = (unsigned int)v11;
    goto LABEL_10;
  }
  if ( *a3 )
  {
    v13 = (unsigned int)v11;
    v26 = (void *)operator new[]((unsigned int)v11, 0x674D444Fu, 256LL);
    v24 = v26;
    if ( v26 )
    {
      memmove(v26, *(const void **)a2, *((unsigned int *)a2 + 2));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)a2);
      goto LABEL_31;
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)a2);
    goto LABEL_34;
  }
  if ( *(_QWORD *)a2 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)a2);
  v13 = (unsigned int)v11;
  v23 = (void *)operator new[]((unsigned int)v11, 0x674D444Fu, 256LL);
  v24 = v23;
  if ( !v23 )
  {
LABEL_34:
    v24 = 0LL;
    goto LABEL_31;
  }
  memset(v23, 0, (unsigned int)v11);
LABEL_31:
  *(_QWORD *)a2 = v24;
  v25 = v24 != 0LL ? v11 : 0;
  *((_DWORD *)a2 + 2) = v25;
  *((_DWORD *)a2 + 3) = v25;
  v8 = a4;
  a3 = v35;
LABEL_10:
  v14 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
  {
    WdLogSingleEntry1(6LL, v13);
    WdLogGlobalForLineNumber = 3856;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to expand metadata buffer size to 0x%lx",
      v13,
      0LL,
      0LL,
      0LL,
      0LL);
    v22 = -1073741801;
    v10 = (DXGSWAPCHAIN *)this;
    goto LABEL_25;
  }
  if ( !*a3 && v8 )
    memset(*(void **)a2, 0, v13);
  v15 = (void *)(v14 + v8);
  if ( a8 == 1 )
  {
    v16 = (unsigned int)Size;
    if ( &Src[(unsigned int)Size] < Src || (unsigned __int64)&Src[(unsigned int)Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v15, Src, (unsigned int)Size);
  }
  else
  {
    v16 = (unsigned int)Size;
    memmove(v15, Src, (unsigned int)Size);
  }
  *v35 = 1;
  *((_DWORD *)a7 + 5) = Size;
  *((_QWORD *)a7 + 1) = a2;
  *((_DWORD *)a7 + 4) = v8;
  if ( (unsigned int)Size > 0x10 )
    v16 = 16LL;
  memmove((char *)a7 + 24, v15, v16);
  return 0LL;
}
