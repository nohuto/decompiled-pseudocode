/*
 * XREFs of ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x14009BE04
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1400CB6A8 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEG.c)
 * Callees:
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1400CAC40 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 */

struct VIDMM_RECYCLE_RANGE *__fastcall VIDMM_RECYCLE_RANGE::SplitMiddle(
        VIDMM_RECYCLE_RANGE *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // r8
  bool v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 1;
  VIDMM_RECYCLE_RANGE::SplitAt(this, a3, &v8);
  v5 = 0LL;
  if ( !v8 )
    return this;
  VIDMM_RECYCLE_RANGE::SplitAt(this, a2, &v8);
  if ( !v8 )
    return this;
  v6 = *((_QWORD *)this + 15);
  if ( v6 != *((_QWORD *)this + 9) + 72LL )
    return (struct VIDMM_RECYCLE_RANGE *)(v6 - 120);
  return (struct VIDMM_RECYCLE_RANGE *)v5;
}
