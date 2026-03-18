/*
 * XREFs of ?InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z @ 0x1400953B8
 * Callers:
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1400FB1E8 (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x140036650 (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x140036ED8 (--0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x14009AE04 (-EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitializePartitionForAllAdapters(struct VIDMM_PARTITION *this)
{
  unsigned int v2; // edi
  PVOID *i; // rbx
  int v4; // eax
  __int64 v5; // rcx
  _BYTE v7[32]; // [rsp+50h] [rbp-28h] BYREF

  v2 = 0;
  DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
    (DXGAUTOEXPUSHLOCKSHARED *)v7,
    (struct _EX_PUSH_LOCK *const)&VIDMM_GLOBAL::_AdapterListLock);
  for ( i = (PVOID *)VIDMM_GLOBAL::_AdapterListHead; i != &VIDMM_GLOBAL::_AdapterListHead; i = (PVOID *)*i )
  {
    v4 = VIDMM_PARTITION::EnsureAdapter(this, (struct VIDMM_GLOBAL *)(i - 5599));
    v2 = v4;
    if ( v4 < 0 )
    {
      WdLogSingleEntry3(1LL, i - 5599, this, v4);
      WdLogGlobalForLineNumber = 29171;
      DxgkLogInternalTriageEvent(v5, 0x40000LL);
      break;
    }
  }
  DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v7);
  return v2;
}
