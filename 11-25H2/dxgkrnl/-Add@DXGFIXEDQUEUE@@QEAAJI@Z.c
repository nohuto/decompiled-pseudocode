/*
 * XREFs of ?Add@DXGFIXEDQUEUE@@QEAAJI@Z @ 0x1400482E0
 * Callers:
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x14038CD38 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

__int64 __fastcall DXGFIXEDQUEUE::Add(DXGFIXEDQUEUE *this, int a2, __int64 a3, __int64 a4)
{
  char *v4; // rdi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v12; // edx
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  int v15; // ecx

  v4 = (char *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    v7 = *((_DWORD *)this + 2);
    v8 = *((_DWORD *)this + 1);
    v9 = v7 + 1;
    if ( v9 == v8 )
      v9 = 0;
    if ( v9 == *((_DWORD *)this + 3) )
    {
      v14 = 4LL * (unsigned int)(v8 + *(_DWORD *)this);
      if ( !is_mul_ok((unsigned int)(v8 + *(_DWORD *)this), 4uLL) )
        v14 = -1LL;
      v4 = (char *)operator new[](v14, 0x4B677844u, 256LL, a4);
      if ( !v4 )
      {
        WdLogSingleEntry1(2LL, this);
        WdLogGlobalForLineNumber = 63;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
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
        v4,
        (const void *)(*((_QWORD *)this + 2) + 4LL * *((unsigned int *)this + 3)),
        4LL * (unsigned int)(*((_DWORD *)this + 1) - *((_DWORD *)this + 3)));
      v15 = *((_DWORD *)this + 3);
      if ( v15 )
      {
        memmove(&v4[4 * (*((_DWORD *)this + 1) - v15)], *((const void **)this + 2), 4LL * *((unsigned int *)this + 2));
        *((_QWORD *)this + 1) = (unsigned int)(*((_DWORD *)this + 1) - 1);
      }
      *((_DWORD *)this + 1) += *(_DWORD *)this;
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 2));
      *((_QWORD *)this + 2) = v4;
    }
    *(_DWORD *)&v4[4 * *((unsigned int *)this + 2)] = a2;
    v10 = *((_DWORD *)this + 2) + 1;
    if ( v10 == *((_DWORD *)this + 1) )
      v10 = 0;
    *((_DWORD *)this + 2) = v10;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 52;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        52,
        v12,
        v13,
        0LL,
        0,
        -1,
        L"Queue Init function not called or failed",
        52LL,
        0LL,
        0LL,
        0LL,
        0LL);
    return 3221225495LL;
  }
}
