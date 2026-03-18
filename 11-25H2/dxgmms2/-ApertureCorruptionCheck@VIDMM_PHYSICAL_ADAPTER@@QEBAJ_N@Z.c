/*
 * XREFs of ?ApertureCorruptionCheck@VIDMM_PHYSICAL_ADAPTER@@QEBAJ_N@Z @ 0x14004B334
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x14000779C (VidSchDdiNotifyDpcWorker.c)
 *     VidSchDdiNotifyDpc @ 0x1400079E0 (VidSchDdiNotifyDpc.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEBAJ_N@Z @ 0x140045BE8 (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEBAJ_N@Z.c)
 * Callees:
 *     ?CheckForApertureGuardPageCorruption@VIDMM_SEGMENT@@QEAAJPEAPEAKE@Z @ 0x14004DF48 (-CheckForApertureGuardPageCorruption@VIDMM_SEGMENT@@QEAAJPEAPEAKE@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_PHYSICAL_ADAPTER::ApertureCorruptionCheck(VIDMM_PHYSICAL_ADAPTER *this, unsigned __int8 a2)
{
  unsigned __int16 i; // bx
  __int64 v5; // rax
  VIDMM_SEGMENT *v6; // rsi
  int v7; // ecx
  __int64 v8; // r9
  unsigned int *v10; // [rsp+50h] [rbp+8h] BYREF

  for ( i = 0; ; ++i )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 16) )
      return 0LL;
    v5 = *((_QWORD *)this + 206);
    v10 = 0LL;
    v6 = *(VIDMM_SEGMENT **)(v5 + 8LL * i);
    v7 = VIDMM_SEGMENT::CheckForApertureGuardPageCorruption(v6, &v10, a2);
    if ( v7 < 0 )
      break;
  }
  if ( (VIDMM_GLOBAL::_Config & 0x10) != 0 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 6) + 24LL);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 37LL, v8, v6, v10);
    WdLogGlobalForLineNumber = 195;
  }
  return (unsigned int)v7;
}
