/*
 * XREFs of ??0DXGDIAGNOSTICS@@QEAA@IIW4DXGK_POOL_FLAGS@@I@Z @ 0x140072E60
 * Callers:
 *     ?InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x14018BBF4 (-InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401D4724 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x14036B9EC (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::DXGDIAGNOSTICS(__int64 a1, unsigned int a2, int a3, __int64 a4, unsigned int a5)
{
  size_t v7; // rdi
  void *v8; // rax
  __int64 v10; // [rsp+20h] [rbp-38h]

  *(_DWORD *)a1 = 49;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = a4;
  *(_QWORD *)(a1 + 56) = 0LL;
  v7 = a2;
  *(_QWORD *)(a1 + 24) = 10000000LL * a5;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 47;
  *(_DWORD *)(a1 + 104) = 75;
  v8 = (void *)operator new[](a2, 0x4B677844u, a4);
  *(_QWORD *)(a1 + 56) = v8;
  if ( v8 )
  {
    *(_DWORD *)(a1 + 16) = v7;
    *(_DWORD *)(a1 + 20) = a3;
    memset(v8, 0, v7);
  }
  else
  {
    WdLogSingleEntry1(6LL, *(unsigned int *)(a1 + 16));
    v10 = *(unsigned int *)(a1 + 16);
    WdLogGlobalForLineNumber = 113;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Unable to allocate diagnosability buffer of size 0x%I64x",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return a1;
}
