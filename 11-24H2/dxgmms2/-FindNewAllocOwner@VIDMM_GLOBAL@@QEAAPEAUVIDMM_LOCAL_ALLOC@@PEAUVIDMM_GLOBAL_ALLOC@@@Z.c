/*
 * XREFs of ?FindNewAllocOwner@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D9844
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1400D98E4 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@PEAVVIDMM.c)
 */

struct VIDMM_LOCAL_ALLOC *__fastcall VIDMM_GLOBAL::FindNewAllocOwner(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // rsi
  _QWORD **v4; // rdx
  _QWORD *v6; // r8
  _QWORD *v7; // rbx
  __int64 v8; // r9

  v2 = *(_QWORD *)a2;
  v4 = (_QWORD **)((char *)a2 + 112);
  v6 = *v4;
  do
  {
    if ( v6 == v4 )
      return 0LL;
    v7 = v6 - 6;
    v6 = (_QWORD *)*v6;
  }
  while ( (v7[3] & 1) != 0 );
  v8 = *(_QWORD *)(v2 + 64);
  if ( v8 )
  {
    VidMmRecordAlloc(this, a2, *((_QWORD *)a2 + 6), v8, *(_QWORD *)(v2 + 16), 1);
    VidMmRecordAlloc(this, a2, v7, *(_QWORD *)(v2 + 64), *(_QWORD *)(v2 + 16), 0);
  }
  return (struct VIDMM_LOCAL_ALLOC *)v7;
}
