/*
 * XREFs of ??0DXGDIAGNOSTICS@@QEAA@IIW4DXGK_POOL_FLAGS@@I@Z @ 0x1400724CC
 * Callers:
 *     ?InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1401899A4 (-InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401CF3EC (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1403845FC (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::DXGDIAGNOSTICS(__int64 a1, unsigned int a2, int a3, __int64 a4, unsigned int a5)
{
  size_t v8; // rdi
  __int64 v9; // r9
  void *v10; // rax
  __int64 v12; // [rsp+20h] [rbp-38h]

  *(_DWORD *)a1 = 49;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = a4;
  *(_QWORD *)(a1 + 56) = 0LL;
  v8 = a2;
  v9 = 10000000LL * a5;
  *(_QWORD *)(a1 + 24) = v9;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 47;
  *(_DWORD *)(a1 + 104) = 75;
  v10 = (void *)operator new[](a2, 0x4B677844u, a4, v9);
  *(_QWORD *)(a1 + 56) = v10;
  if ( v10 )
  {
    *(_DWORD *)(a1 + 16) = v8;
    *(_DWORD *)(a1 + 20) = a3;
    memset(v10, 0, v8);
  }
  else
  {
    WdLogSingleEntry1(6LL, *(unsigned int *)(a1 + 16));
    v12 = *(unsigned int *)(a1 + 16);
    WdLogGlobalForLineNumber = 113;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Unable to allocate diagnosability buffer of size 0x%I64x",
      v12,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return a1;
}
