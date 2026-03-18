/*
 * XREFs of ?FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ @ 0x140097CD8
 * Callers:
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1400B3E4C (--1VIDMM_PROCESS@@QEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x14010139C (-FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PROCESS::FreeVmProcessFencePageInGlobalStorage(VIDMM_PROCESS *this)
{
  _QWORD *i; // rbx

  if ( (*(_DWORD *)(*((_QWORD *)this + 4) + 408LL) & 0x180) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1645;
    DxgkLogInternalTriageEvent(1645LL, 262146LL);
  }
  for ( i = (_QWORD *)((char *)this + 48);
        (_QWORD *)*i != i;
        VIDMM_FENCE_STORAGE_PAGE::FreeVmMapping((VIDMM_FENCE_STORAGE_PAGE *)(*i - 16LL)) )
  {
    ;
  }
}
