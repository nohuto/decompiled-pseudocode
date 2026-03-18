/*
 * XREFs of wil::details::lambda_call__lambda_88f3ed85026e62755ea077db9998d4dd___::reset @ 0x14009F4B4
 * Callers:
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x140050018 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 * Callees:
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x140018E68 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009E7B4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall wil::details::lambda_call__lambda_88f3ed85026e62755ea077db9998d4dd___::reset(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 Win32kImportTable; // rax
  __int64 v4; // rcx
  void (__fastcall *v5)(_QWORD, __int64); // rdi
  __int64 v6; // rbx
  unsigned int TracingId; // eax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    CFlipManager::ReleaseKernelPresentUpdateReferences((CFlipManager *)a1, (struct CFlipPresentUpdate *)a1[1]);
    v2 = a1[1];
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
    Win32kImportTable = DxgkGetWin32kImportTable();
    v4 = *a1;
    v5 = *(void (__fastcall **)(_QWORD, __int64))(Win32kImportTable + 168);
    v6 = --*(_QWORD *)(v4 + 168);
    TracingId = CFlipManager::GetTracingId((CFlipManager *)*a1);
    v5(TracingId, v6);
  }
}
