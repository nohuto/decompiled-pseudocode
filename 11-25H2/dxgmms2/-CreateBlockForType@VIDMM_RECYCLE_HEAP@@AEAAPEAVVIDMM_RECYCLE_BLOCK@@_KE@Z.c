/*
 * XREFs of ?CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z @ 0x1400ED1C8
 * Callers:
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1400ED040 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1400285FC (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     ??0VIDMM_RECYCLE_BLOCK@@QEAA@PEAVVIDMM_RECYCLE_HEAP@@@Z @ 0x1400ED300 (--0VIDMM_RECYCLE_BLOCK@@QEAA@PEAVVIDMM_RECYCLE_HEAP@@@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1400ED554 (-Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z.c)
 */

struct VIDMM_RECYCLE_BLOCK *__fastcall VIDMM_RECYCLE_HEAP::CreateBlockForType(
        VIDMM_RECYCLE_HEAP *this,
        unsigned __int64 a2,
        unsigned __int8 a3)
{
  VIDMM_RECYCLE_BLOCK *v6; // rax
  __int64 v7; // rcx
  VIDMM_RECYCLE_BLOCK *v9; // rax
  VIDMM_RECYCLE_BLOCK *v10; // rdi
  __int64 v11; // rcx

  v6 = (VIDMM_RECYCLE_BLOCK *)operator new(144LL, 0x31316956u, 256LL);
  if ( !v6 || (v9 = VIDMM_RECYCLE_BLOCK::VIDMM_RECYCLE_BLOCK(v6, this), (v10 = v9) == 0LL) )
  {
    _InterlockedIncrement(&dword_1400816F4);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 9311;
    DxgkLogInternalTriageEvent(v7, 262145LL);
    return 0LL;
  }
  if ( *((_BYTE *)this + 16) )
    a2 = (a2 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  if ( VIDMM_RECYCLE_BLOCK::Allocate(v9, a2, a3) < 0 )
  {
    _InterlockedIncrement(&dword_1400816F4);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 9329;
    DxgkLogInternalTriageEvent(v11, 262145LL);
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v10);
    return 0LL;
  }
  return v10;
}
