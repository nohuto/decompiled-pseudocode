/*
 * XREFs of ?Remove@DXGFIXEDQUEUE@@QEAAJPEAI@Z @ 0x140048F30
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z @ 0x1401F6E08 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGFIXEDQUEUE::Remove(DXGFIXEDQUEUE *this, unsigned int *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rdx
  int v6; // eax
  bool v7; // zf
  int v9; // edx
  __int64 v10; // r8

  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    v5 = *((unsigned int *)this + 3);
    if ( *((_DWORD *)this + 2) == (_DWORD)v5 )
    {
      return 2147483674LL;
    }
    else
    {
      v6 = v5 + 1;
      v7 = (_DWORD)v5 + 1 == *((_DWORD *)this + 1);
      *a2 = *(_DWORD *)(v3 + 4 * v5);
      if ( v7 )
        v6 = 0;
      *((_DWORD *)this + 3) = v6;
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 99;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        99,
        v9,
        v10,
        0LL,
        0,
        -1,
        L"Queue Init function not called or failed",
        99LL,
        0LL,
        0LL,
        0LL,
        0LL);
    return 3221225495LL;
  }
}
