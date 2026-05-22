/*
 * XREFs of ?SuppressCursor@CursorSuppressionProcessor@@AEAAX_N@Z @ 0x1801455F8
 * Callers:
 *     ?UnsuppressForDeviceArrivalImpl@CursorSuppressionProcessor@@AEAAXK@Z @ 0x18009AC78 (-UnsuppressForDeviceArrivalImpl@CursorSuppressionProcessor@@AEAAXK@Z.c)
 *     ?OnCursorDestroyed@SystemCursorService2@@UEAAJUCursorId@@UCursorDestroyData@@@Z @ 0x1800F8900 (-OnCursorDestroyed@SystemCursorService2@@UEAAJUCursorId@@UCursorDestroyData@@@Z.c)
 *     ?OnHitTest@CursorSuppressionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180145260 (-OnHitTest@CursorSuppressionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualPro.c)
 *     ?OnInput@CursorSuppressionProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180145410 (-OnInput@CursorSuppressionProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CursorSuppressionProcessor::SuppressCursor(CursorSuppressionProcessor *this, char a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8

  v3 = *(_QWORD *)(*((_QWORD *)this + 10) + 248LL) + 8LL;
  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 232LL))(v3) + 80);
  if ( v4 )
  {
    LOBYTE(v5) = a2;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, 2LL, v5);
  }
}
