/*
 * XREFs of ?AccessZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400F12FC
 * Callers:
 *     ?MarkNoZeroNeed@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x1400FD2A0 (-MarkNoZeroNeed@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_RANGE::AccessZeroTransition(VIDMM_RECYCLE_RANGE *this)
{
  int v1; // edx
  int v2; // edx

  v1 = *((_DWORD *)this + 20);
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( !v2 || v2 == 2 )
      *((_DWORD *)this + 20) = 2;
  }
  else if ( dword_140081500 && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
    JUMPOUT(0x1400F1373LL);
  }
}
