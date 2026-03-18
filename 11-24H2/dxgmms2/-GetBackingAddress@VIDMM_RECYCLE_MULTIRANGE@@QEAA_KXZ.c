/*
 * XREFs of ?GetBackingAddress@VIDMM_RECYCLE_MULTIRANGE@@QEAA_KXZ @ 0x1400F0A1C
 * Callers:
 *     ?GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x1400FF6B0 (-GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAUVIDMM_HEAP_ALLOC@@@Z.c)
 * Callees:
 *     memmove @ 0x140056040 (memmove.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::GetBackingAddress(VIDMM_RECYCLE_MULTIRANGE *this)
{
  unsigned __int64 v1; // rsi
  __int64 v2; // r14
  char v3; // r15
  unsigned __int64 v4; // rbp
  char v5; // r8
  _QWORD **v6; // rcx
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 4);
  v5 = 0;
  v6 = (_QWORD **)(*((_QWORD *)this + 10) + 96LL);
  v17 = 0LL;
  v7 = 0LL;
  v8 = *v6;
  if ( *v6 == v6 )
    goto LABEL_20;
  do
  {
    if ( v5 )
      break;
    v9 = v8 - 3;
    v8 = (_QWORD *)*v8;
    if ( v9[2] > v4 )
    {
      v5 = 1;
      v7 = v9;
    }
  }
  while ( v8 != v6 );
  if ( !v7 || v7[1] > v4 )
  {
LABEL_20:
    g_DxgMmsBugcheckExportIndex = 1;
    v10 = WdLogSingleEntry5(0LL, 270LL, 52LL, 17LL, v7, 0LL);
    WdLogGlobalForLineNumber = 195;
    goto LABEL_21;
  }
  v3 = 0;
  v1 = v4;
  v2 = 0LL;
  while ( 1 )
  {
    v10 = v7[1];
    v11 = (v1 - v10) >> 12;
    v1 = v7[2];
    if ( v4 + 4096 > v1 )
    {
LABEL_21:
      v12 = v1;
    }
    else
    {
      v12 = v4 + 4096;
      v3 = 1;
    }
    v13 = ((v12 - v10) >> 12) - v11;
    memmove(&v17 + v2, (const void *)(*v7 + 8 * (v11 + 6)), 8 * v13);
    v14 = v7[3];
    v2 += v13;
    v15 = v7[5] + 8LL;
    v7 = (_QWORD *)(v14 - 24);
    if ( v14 == v15 )
      v7 = 0LL;
    if ( v3 )
      break;
    if ( v7[1] != v1 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 52LL, 18LL, v7, 0LL);
      WdLogGlobalForLineNumber = 195;
      break;
    }
  }
  if ( v2 != 1 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 19LL, v2, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
  if ( !v17 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 20LL, v4, 0LL);
    WdLogGlobalForLineNumber = 195;
    JUMPOUT(0x1400F0C41LL);
  }
  return v17 << 12;
}
