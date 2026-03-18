/*
 * XREFs of ?GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ @ 0x1400E8200
 * Callers:
 *     ?GetFullMDL@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAUVIDMM_HEAP_ALLOC@@@Z @ 0x1400FBA60 (-GetFullMDL@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAUVIDMM_HEAP_ALLOC@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x140056040 (memmove.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct _MDL *__fastcall VIDMM_RECYCLE_MULTIRANGE::GetFullMDL(VIDMM_RECYCLE_MULTIRANGE *this)
{
  struct _MDL *result; // rax
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r15
  __int64 v5; // rdi
  __int64 Pool2; // rax
  char v7; // dl
  unsigned __int64 v8; // r9
  _QWORD **v9; // r8
  _QWORD *v10; // rax
  unsigned __int64 v11; // r13
  _QWORD *v12; // rbx
  _QWORD *v13; // rcx
  char v14; // bp
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // [rsp+80h] [rbp+8h]

  if ( *((_DWORD *)this + 50) != 4 || !*((_BYTE *)this + 128) )
    return 0LL;
  result = (struct _MDL *)*((_QWORD *)this + 12);
  if ( result )
    return result;
  v3 = *((_QWORD *)this + 5) - *((_QWORD *)this + 6);
  v4 = v3 >> 12;
  v5 = 8 * (v3 >> 12) + 48;
  Pool2 = ExAllocatePool2(64LL, v5, 892561750LL);
  *((_QWORD *)this + 12) = Pool2;
  if ( !Pool2 )
  {
    _InterlockedIncrement(&dword_14008178C);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 4306;
    DxgkLogInternalTriageEvent(v22, 262145LL);
    return 0LL;
  }
  *(_DWORD *)(Pool2 + 40) = v3;
  v7 = 0;
  *(_WORD *)(*((_QWORD *)this + 12) + 8LL) = v5;
  *(_QWORD *)(*((_QWORD *)this + 12) + 32LL) = *((_QWORD *)this + 6);
  *(_QWORD *)(*((_QWORD *)this + 12) + 16LL) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL)
                                                           + 8LL);
  v8 = *((_QWORD *)this + 6);
  v9 = (_QWORD **)(*((_QWORD *)this + 10) + 96LL);
  v23 = *((_QWORD *)this + 12) + 48LL;
  v10 = *v9;
  v11 = v8 + v3;
  v12 = 0LL;
  if ( *v9 == v9 )
    goto LABEL_24;
  do
  {
    if ( v7 )
      break;
    v13 = v10 - 3;
    v10 = (_QWORD *)*v10;
    if ( v13[2] > v8 )
    {
      v7 = 1;
      v12 = v13;
    }
  }
  while ( v10 != v9 );
  if ( !v12 || v12[1] > v8 )
  {
LABEL_24:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 17LL, v12, 0LL);
    WdLogGlobalForLineNumber = 195;
    return 0LL;
  }
  v14 = 0;
  v15 = 0LL;
  while ( 1 )
  {
    v16 = v12[1];
    v17 = v12[2];
    v18 = (v8 - v16) >> 12;
    if ( v11 <= v17 )
    {
      v17 = v11;
      v14 = 1;
    }
    v19 = ((v17 - v16) >> 12) - v18;
    memmove((void *)(v23 + 8 * v15), (const void *)(*v12 + 8 * (v18 + 6)), 8 * v19);
    v20 = v12[3];
    v15 += v19;
    v8 = v12[2];
    v21 = v12[5] + 8LL;
    v12 = (_QWORD *)(v20 - 24);
    if ( v20 == v21 )
      v12 = 0LL;
    if ( v14 )
      break;
    if ( v12[1] != v8 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 52LL, 18LL, v12, 0LL);
      WdLogGlobalForLineNumber = 195;
      break;
    }
  }
  if ( v15 != v4 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 19LL, v15, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
  return (struct _MDL *)*((_QWORD *)this + 12);
}
