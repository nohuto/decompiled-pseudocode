/*
 * XREFs of VidSchInsertContextAllocation @ 0x1400DB2F4
 * Callers:
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x1400DB434 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall VidSchInsertContextAllocation(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _QWORD *a5)
{
  __int64 v9; // rax
  _QWORD *v10; // rbx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  _QWORD *v15; // rax

  v9 = operator new(32LL, 0x31366956u, 256LL);
  v10 = (_QWORD *)v9;
  if ( v9 )
  {
    *(_QWORD *)(v9 + 24) = a4;
    v12 = a2 + 840;
    v13 = *a4;
    v14 = a2 + 808;
    if ( (*(_DWORD *)(*(_QWORD *)v13 + 24LL) & 0x20000000) == 0 )
    {
      v12 = a3 + 336;
      v14 = a3 + 304;
    }
    v10[2] = v14;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v14, 0LL);
    *(_QWORD *)(v14 + 8) = KeGetCurrentThread();
    v15 = *(_QWORD **)(v12 + 8);
    if ( *v15 != v12 )
      __fastfail(3u);
    *v10 = v12;
    v10[1] = v15;
    *v15 = v10;
    *(_QWORD *)(v12 + 8) = v10;
    *(_QWORD *)(v14 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v14, 0LL);
    KeLeaveCriticalRegion();
    *(_BYTE *)(a1 + 52) = 1;
    *a5 = v10;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 12790;
    *a5 = 0LL;
    return 3221225495LL;
  }
}
