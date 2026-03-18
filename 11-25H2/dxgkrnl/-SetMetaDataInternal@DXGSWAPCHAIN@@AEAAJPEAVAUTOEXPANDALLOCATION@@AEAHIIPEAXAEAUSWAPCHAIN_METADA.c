/*
 * XREFs of ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x140308180
 * Callers:
 *     ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x140307D3C (-GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x14038CD38 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x140309198 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::SetMetaDataInternal(
        struct _KTHREAD **this,
        struct AUTOEXPANDALLOCATION *a2,
        int *a3,
        __int64 a4,
        size_t Size,
        char *Src,
        struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *a7,
        char a8)
{
  DXGSWAPCHAIN *v9; // r15
  __int64 v10; // rbx
  unsigned int v11; // eax
  size_t v12; // r14
  __int64 v13; // rbx
  void *v14; // r14
  size_t v15; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  bool v20; // dl
  unsigned int v21; // ebx
  void *v22; // rax
  void *v23; // r15
  int v24; // eax
  void *v25; // rax
  __int64 CurrentProcess; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  bool v32; // dl
  int *v34; // [rsp+90h] [rbp+18h]
  unsigned int v35; // [rsp+98h] [rbp+20h]

  v35 = a4;
  v34 = a3;
  v9 = (DXGSWAPCHAIN *)this;
  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3746;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_SwapChainLock.IsOwner()", 3746LL, 0LL, 0LL, 0LL, 0LL);
    a4 = v35;
    a3 = v34;
  }
  if ( !(_DWORD)Size )
  {
    CurrentProcess = PsGetCurrentProcess(this);
    WdLogSingleEntry1(2LL, CurrentProcess);
    WdLogGlobalForLineNumber = 3751;
    v28 = PsGetCurrentProcess(v27);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"SetMetaDataInternal caller (0x%I64x) passed in buffer size of zero",
      v28,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( (int)a4 + (int)Size < (unsigned int)a4 )
  {
    v29 = PsGetCurrentProcess(this);
    WdLogSingleEntry1(2LL, v29);
    WdLogGlobalForLineNumber = 3759;
    v31 = PsGetCurrentProcess(v30);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"SetMetaDataInternal caller (0x%I64x) overflow when calc used size",
      v31,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGSWAPCHAIN::MarkAbandoned(v9, v32);
    return 3221225485LL;
  }
  v10 = (unsigned int)(a4 + Size);
  v11 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)v10 <= v11 )
    v10 = v11;
  if ( (unsigned int)v10 > 0x2000 )
  {
    v17 = PsGetCurrentProcess(this);
    WdLogSingleEntry3(2LL, v17, v10, 0x2000LL);
    WdLogGlobalForLineNumber = 3768;
    v19 = PsGetCurrentProcess(v18);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"SetMetaDataInternal caller (0x%I64x) provided metadata of size 0x%I64x which is bigger than max 0x%I64x",
      v19,
      v10,
      0x2000LL,
      0LL,
      0LL);
    v21 = -1073741811;
LABEL_25:
    DXGSWAPCHAIN::MarkAbandoned(v9, v20);
    return v21;
  }
  if ( *((_DWORD *)a2 + 3) >= (unsigned int)v10 )
  {
    *((_DWORD *)a2 + 2) = v10;
    v12 = (unsigned int)v10;
    goto LABEL_10;
  }
  if ( *a3 )
  {
    v12 = (unsigned int)v10;
    v25 = (void *)operator new[]((unsigned int)v10, 0x674D444Fu, 256LL, a4);
    v23 = v25;
    if ( v25 )
    {
      memmove(v25, *(const void **)a2, *((unsigned int *)a2 + 2));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)a2);
      goto LABEL_31;
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)a2);
    goto LABEL_34;
  }
  if ( *(_QWORD *)a2 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)a2);
  v12 = (unsigned int)v10;
  v22 = (void *)operator new[]((unsigned int)v10, 0x674D444Fu, 256LL, a4);
  v23 = v22;
  if ( !v22 )
  {
LABEL_34:
    v23 = 0LL;
    goto LABEL_31;
  }
  memset(v22, 0, (unsigned int)v10);
LABEL_31:
  *(_QWORD *)a2 = v23;
  v24 = v23 != 0LL ? v10 : 0;
  *((_DWORD *)a2 + 2) = v24;
  *((_DWORD *)a2 + 3) = v24;
  v9 = (DXGSWAPCHAIN *)this;
  LODWORD(a4) = v35;
  a3 = v34;
LABEL_10:
  v13 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
  {
    WdLogSingleEntry1(6LL, v12);
    WdLogGlobalForLineNumber = 3777;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to expand metadata buffer size to 0x%lx",
      v12,
      0LL,
      0LL,
      0LL,
      0LL);
    v21 = -1073741801;
    goto LABEL_25;
  }
  if ( !*a3 && (_DWORD)a4 )
    memset(*(void **)a2, 0, v12);
  v14 = (void *)(v13 + v35);
  if ( a8 == 1 )
  {
    v15 = (unsigned int)Size;
    if ( &Src[(unsigned int)Size] < Src || (unsigned __int64)&Src[(unsigned int)Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v14, Src, (unsigned int)Size);
  }
  else
  {
    v15 = (unsigned int)Size;
    memmove(v14, Src, (unsigned int)Size);
  }
  *v34 = 1;
  *((_DWORD *)a7 + 5) = Size;
  *((_QWORD *)a7 + 1) = a2;
  *((_DWORD *)a7 + 4) = v35;
  if ( (unsigned int)Size > 0x10 )
    v15 = 16LL;
  memmove((char *)a7 + 24, v14, v15);
  return 0LL;
}
