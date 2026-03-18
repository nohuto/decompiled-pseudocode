/*
 * XREFs of ?Add@DXGFIXEDQUEUE@@QEAAJI@Z @ 0x140047BBC
 * Callers:
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x140379498 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall DXGFIXEDQUEUE::Add(DXGFIXEDQUEUE *this, int a2)
{
  char *v2; // rdi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  int v13; // ecx

  v2 = (char *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    v5 = *((_DWORD *)this + 2);
    v6 = *((_DWORD *)this + 1);
    v7 = v5 + 1;
    if ( v7 == v6 )
      v7 = 0;
    if ( v7 == *((_DWORD *)this + 3) )
    {
      v12 = 4LL * (unsigned int)(v6 + *(_DWORD *)this);
      if ( !is_mul_ok((unsigned int)(v6 + *(_DWORD *)this), 4uLL) )
        v12 = -1LL;
      v2 = (char *)operator new[](v12, 0x4B677844u, 256LL);
      if ( !v2 )
      {
        WdLogSingleEntry1(2LL, this);
        WdLogGlobalForLineNumber = 63;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Queue 0x%I64x has run out of space",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225507LL;
      }
      memmove(
        v2,
        (const void *)(*((_QWORD *)this + 2) + 4LL * *((unsigned int *)this + 3)),
        4LL * (unsigned int)(*((_DWORD *)this + 1) - *((_DWORD *)this + 3)));
      v13 = *((_DWORD *)this + 3);
      if ( v13 )
      {
        memmove(&v2[4 * (*((_DWORD *)this + 1) - v13)], *((const void **)this + 2), 4LL * *((unsigned int *)this + 2));
        *((_QWORD *)this + 1) = (unsigned int)(*((_DWORD *)this + 1) - 1);
      }
      *((_DWORD *)this + 1) += *(_DWORD *)this;
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 2));
      *((_QWORD *)this + 2) = v2;
    }
    *(_DWORD *)&v2[4 * *((unsigned int *)this + 2)] = a2;
    v8 = *((_DWORD *)this + 2) + 1;
    if ( v8 == *((_DWORD *)this + 1) )
      v8 = 0;
    *((_DWORD *)this + 2) = v8;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 52;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        52LL,
        v10,
        v11,
        0LL,
        0,
        -1,
        L"Queue Init function not called or failed",
        52,
        0,
        0,
        0,
        0);
    return 3221225495LL;
  }
}
