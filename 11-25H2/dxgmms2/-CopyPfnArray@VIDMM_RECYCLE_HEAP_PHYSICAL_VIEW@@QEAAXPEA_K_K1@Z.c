/*
 * XREFs of ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z @ 0x1400EAA80
 * Callers:
 *     ?GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z @ 0x1400EA8FC (-GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z.c)
 * Callees:
 *     memmove @ 0x140056480 (memmove.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::CopyPfnArray(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v4; // rax
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v5; // r11
  char v6; // r10
  _QWORD *v10; // rbx
  _QWORD *v11; // rcx
  unsigned __int64 v12; // rdx
  char v13; // bp
  __int64 v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rax

  v4 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)*((_QWORD *)this + 1);
  v5 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8);
  v6 = 0;
  v10 = 0LL;
  if ( v4 == (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8) )
    goto LABEL_19;
  do
  {
    if ( v6 )
      break;
    v11 = (_QWORD *)((char *)v4 - 24);
    v4 = *(VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **)v4;
    if ( v11[2] > a3 )
    {
      v6 = 1;
      v10 = v11;
    }
  }
  while ( v4 != v5 );
  if ( !v10 || v10[1] > a3 )
  {
LABEL_19:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 17LL, v10, 0LL);
    WdLogGlobalForLineNumber = 195;
    JUMPOUT(0x1400EAC47LL);
  }
  v12 = a3;
  v13 = 0;
  v14 = 0LL;
  while ( 1 )
  {
    v15 = v10[1];
    v16 = v10[2];
    v17 = (v12 - v15) >> 12;
    if ( a4 <= v16 )
    {
      v16 = a4;
      v13 = 1;
    }
    v18 = ((v16 - v15) >> 12) - v17;
    memmove(&a2[v14], (const void *)(*v10 + 48LL + 8 * v17), 8 * v18);
    v19 = v10[3];
    v14 += v18;
    v12 = v10[2];
    v20 = v10[5] + 8LL;
    v10 = (_QWORD *)(v19 - 24);
    if ( v19 == v20 )
      v10 = 0LL;
    if ( v13 )
      break;
    if ( v10[1] != v12 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 52LL, 18LL, v10, 0LL);
      WdLogGlobalForLineNumber = 195;
      break;
    }
  }
  if ( v14 != (a4 - a3) >> 12 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 19LL, v14, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
}
