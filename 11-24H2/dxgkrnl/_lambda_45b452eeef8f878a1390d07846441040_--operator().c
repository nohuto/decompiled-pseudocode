/*
 * XREFs of _lambda_45b452eeef8f878a1390d07846441040_::operator() @ 0x14009E944
 * Callers:
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009EA58 (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 * Callees:
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x140018E68 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009E7B4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall lambda_45b452eeef8f878a1390d07846441040_::operator()(struct CFlipPresentUpdate ***a1)
{
  __int64 v2; // rcx
  __int64 Win32kImportTable; // rax
  struct CFlipPresentUpdate **v4; // rcx
  __int64 (__fastcall *v5)(_QWORD, struct CFlipPresentUpdate *); // rdi
  struct CFlipPresentUpdate *v6; // rbx
  unsigned int TracingId; // eax

  CFlipManager::ReleaseKernelPresentUpdateReferences((CFlipManager *)a1, *a1[1]);
  v2 = (__int64)*a1[1];
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
  Win32kImportTable = DxgkGetWin32kImportTable();
  v4 = *a1;
  v5 = *(__int64 (__fastcall **)(_QWORD, struct CFlipPresentUpdate *))(Win32kImportTable + 168);
  v4[21] = (struct CFlipPresentUpdate *)((char *)v4[21] - 1);
  v6 = v4[21];
  TracingId = CFlipManager::GetTracingId((CFlipManager *)v4);
  return v5(TracingId, v6);
}
