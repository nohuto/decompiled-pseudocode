/*
 * XREFs of ?ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400CBB00
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1400CB60C (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEG.c)
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x1400F6480 (-ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z.c)
 * Callees:
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400CBBF8 (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_MULTIRANGE::ZeroIfNeeded(VIDMM_RECYCLE_MULTIRANGE *this)
{
  __int64 v2; // rax
  char v3; // cl
  __int64 v4; // rcx
  int v5; // edx
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rdx

  if ( dword_140081500 )
  {
    v2 = *((_QWORD *)this + 8);
    v3 = 0;
    while ( 1 )
    {
      if ( v3 )
        goto LABEL_4;
      if ( *(_DWORD *)(v2 + 80) == 3 )
        break;
      if ( v2 == *((_QWORD *)this + 9) )
      {
        v3 = 1;
      }
      else
      {
        v7 = *(_QWORD *)(v2 + 120);
        if ( v7 == *(_QWORD *)(v2 + 72) + 72LL )
          v2 = 0LL;
        else
          v2 = v7 - 120;
      }
    }
    VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(this);
LABEL_4:
    v4 = *((_QWORD *)this + 8);
    while ( 1 )
    {
      v5 = *(_DWORD *)(v4 + 80);
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( !v6 || v6 == 2 )
          *(_DWORD *)(v4 + 80) = 2;
      }
      else if ( dword_140081500 && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        WdLogGlobalForLineNumber = 195;
        goto LABEL_23;
      }
      if ( v4 == *((_QWORD *)this + 9) )
        return;
      v8 = *(_QWORD *)(v4 + 120);
      if ( v8 == *(_QWORD *)(v4 + 72) + 72LL )
LABEL_23:
        v4 = 0LL;
      else
        v4 = v8 - 120;
    }
  }
}
