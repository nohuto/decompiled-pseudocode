/*
 * XREFs of ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1400CB6A8
 * Callers:
 *     ?LockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1400CB560 (-LockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_.c)
 * Callees:
 *     ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x14009BE04 (-SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z.c)
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1400C5218 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1400C80B0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1400CAC40 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400CD6B0 (-ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400F4508 (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Lock(
        VIDMM_RECYCLE_MULTIRANGE *this,
        const struct VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        enum _LOCK_OPERATION a5,
        struct VIDMM_SEGMENT *a6,
        unsigned __int8 a7)
{
  VIDMM_RECYCLE_RANGE *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v12; // rcx
  char v13; // bp
  __int64 result; // rax
  VIDMM_RECYCLE_RANGE *v15; // rdi
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rax
  __int64 v19; // r12
  VIDMM_RECYCLE_RANGE *v20; // rcx
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  VIDMM_RECYCLE_RANGE *v28; // rsi
  __int64 v29; // r13
  int v30; // ebp
  enum _LOCK_OPERATION v31; // r8d
  _QWORD *v32; // rdx
  __int64 v33; // rcx
  int v34; // r13d
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  VIDMM_RECYCLE_RANGE *v38; // rbx
  _QWORD *v39; // rdx
  __int64 v40; // r8
  VIDMM_RECYCLE_RANGE *v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  VIDMM_RECYCLE_RANGE *v45; // rbx
  __int64 v46; // r8
  __int64 v47; // rdx
  bool v48; // [rsp+70h] [rbp+8h] BYREF
  __int64 v49; // [rsp+80h] [rbp+18h]
  __int64 v50; // [rsp+88h] [rbp+20h]

  v50 = a4;
  v49 = a3;
  v8 = a4;
  v9 = a3;
  if ( *((_BYTE *)this + 130) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 12LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
    goto LABEL_60;
  }
  if ( !a3 )
  {
    v12 = *((_QWORD *)this + 6);
    if ( a4 == *((_QWORD *)this + 5) - v12 && v12 == *((_QWORD *)this + 4) )
    {
      v7 = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
      v13 = 0;
      while ( 1 )
      {
        if ( v13 )
        {
          ++*((_DWORD *)this + 23);
          if ( a7 )
            *((_BYTE *)this + 129) = 1;
          else
            *((_BYTE *)this + 128) = 1;
          VIDMM_RECYCLE_MULTIRANGE::ZeroIfNeeded(this);
          WdLogSingleEntry3(4LL, this, 0LL, v50);
          WdLogGlobalForLineNumber = 3062;
          goto LABEL_13;
        }
        LODWORD(v8) = VIDMM_RECYCLE_RANGE::Lock(v7, a2, (enum _LOCK_OPERATION)a3, a6);
        if ( (int)v8 < 0 )
          break;
        if ( v7 == *((VIDMM_RECYCLE_RANGE **)this + 9) )
        {
          v13 = 1;
        }
        else
        {
          v25 = *((_QWORD *)v7 + 15);
          if ( v25 == *((_QWORD *)v7 + 9) + 72LL )
            v7 = 0LL;
          else
            v7 = (VIDMM_RECYCLE_RANGE *)(v25 - 120);
        }
      }
      while ( v7 != *((VIDMM_RECYCLE_RANGE **)this + 8) )
      {
LABEL_60:
        v35 = *((_QWORD *)v7 + 16);
        v36 = *((_QWORD *)v7 + 9);
        v7 = 0LL;
        if ( v35 != v36 + 72 )
          v7 = (VIDMM_RECYCLE_RANGE *)(v35 - 120);
        VIDMM_RECYCLE_RANGE::Unlock(v7);
      }
      return (unsigned int)v8;
    }
  }
  v15 = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  v16 = a3 + *((_QWORD *)this + 6);
  v17 = v16 + a4;
  while ( v15 && *((_QWORD *)v15 + 5) <= v16 )
  {
    v23 = *((_QWORD *)v15 + 15);
    v24 = *((_QWORD *)v15 + 9);
    v15 = 0LL;
    if ( v23 != v24 + 72 )
      v15 = (VIDMM_RECYCLE_RANGE *)(v23 - 120);
  }
  v18 = *((_QWORD *)v15 + 5);
  v19 = *((_QWORD *)v15 + 4);
  if ( v18 >= v17 )
  {
    v20 = v15;
    if ( v16 == v19 )
    {
      if ( v18 == v17 )
        goto LABEL_29;
      LOBYTE(a5) = 1;
      VIDMM_RECYCLE_RANGE::SplitAt(v15, (_QWORD *)(v17 - v19), (bool *)&a5, a4);
    }
    else
    {
      v21 = (_QWORD *)(v16 - v19);
      if ( v18 != v17 )
      {
        v20 = VIDMM_RECYCLE_RANGE::SplitMiddle(v15, (unsigned __int64)v21, v17 - v19);
LABEL_29:
        result = VIDMM_RECYCLE_RANGE::Lock(v20, a2, (enum _LOCK_OPERATION)a3, a6);
        if ( (int)result >= 0 )
        {
LABEL_30:
          ++*((_DWORD *)this + 23);
          if ( a7 )
            *((_BYTE *)this + 129) = 1;
          else
            *((_BYTE *)this + 128) = 1;
          VIDMM_RECYCLE_MULTIRANGE::ZeroIfNeeded(this);
          WdLogSingleEntry3(4LL, this, v9, v8);
          WdLogGlobalForLineNumber = 2995;
LABEL_13:
          *((_DWORD *)this + 50) = 4;
          VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(this);
          return 0LL;
        }
        return result;
      }
      LOBYTE(a5) = 1;
      VIDMM_RECYCLE_RANGE::SplitAt(v15, v21, (bool *)&a5, a4);
      if ( (_BYTE)a5 )
      {
        v22 = *((_QWORD *)v15 + 15);
        if ( v22 == *((_QWORD *)v15 + 9) + 72LL )
          v15 = 0LL;
        else
          v15 = (VIDMM_RECYCLE_RANGE *)(v22 - 120);
      }
    }
    v20 = v15;
    goto LABEL_29;
  }
  v26 = *((_QWORD *)v15 + 15);
  v27 = *((_QWORD *)v15 + 9) + 72LL;
  while ( 1 )
  {
    v28 = 0LL;
    if ( v26 != v27 )
      v28 = (VIDMM_RECYCLE_RANGE *)(v26 - 120);
    if ( !v28 || *((_QWORD *)v28 + 5) >= v17 )
      break;
    v34 = VIDMM_RECYCLE_RANGE::Lock(v28, a2, (enum _LOCK_OPERATION)a3, a6);
    v27 = *((_QWORD *)v28 + 9) + 72LL;
    if ( v34 < 0 )
    {
      v37 = *((_QWORD *)v28 + 16);
      while ( 1 )
      {
        v38 = 0LL;
        if ( v37 != v27 )
          v38 = (VIDMM_RECYCLE_RANGE *)(v37 - 120);
        if ( v38 == v15 )
          break;
        VIDMM_RECYCLE_RANGE::Unlock(v38);
        v37 = *((_QWORD *)v38 + 16);
        v27 = *((_QWORD *)v38 + 9) + 72LL;
      }
      return (unsigned int)v34;
    }
    v26 = *((_QWORD *)v28 + 15);
  }
  v29 = *((_QWORD *)v28 + 5);
  if ( v16 != v19 )
  {
    v32 = (_QWORD *)(v16 - *((_QWORD *)v15 + 4));
    LOBYTE(a5) = 1;
    VIDMM_RECYCLE_RANGE::SplitAt(v15, v32, (bool *)&a5, a4);
    if ( (_BYTE)a5 )
    {
      v33 = *((_QWORD *)v15 + 15);
      if ( v33 == *((_QWORD *)v15 + 9) + 72LL )
        v15 = 0LL;
      else
        v15 = (VIDMM_RECYCLE_RANGE *)(v33 - 120);
    }
  }
  if ( v29 != v17 )
  {
    v39 = (_QWORD *)(v17 - *((_QWORD *)v28 + 4));
    v48 = 1;
    VIDMM_RECYCLE_RANGE::SplitAt(v28, v39, &v48, a4);
  }
  v30 = VIDMM_RECYCLE_RANGE::Lock(v15, a2, (enum _LOCK_OPERATION)a3, a6);
  if ( v30 < 0 )
  {
    v40 = *((_QWORD *)v28 + 16);
    v41 = 0LL;
    if ( v40 != *((_QWORD *)v28 + 9) + 72LL )
      v41 = (VIDMM_RECYCLE_RANGE *)(v40 - 120);
    while ( v41 != v15 )
    {
      VIDMM_RECYCLE_RANGE::Unlock(v41);
      v42 = *((_QWORD *)v41 + 16);
      v43 = *((_QWORD *)v41 + 9);
      v41 = 0LL;
      if ( v42 != v43 + 72 )
        v41 = (VIDMM_RECYCLE_RANGE *)(v42 - 120);
    }
  }
  else
  {
    v30 = VIDMM_RECYCLE_RANGE::Lock(v28, a2, v31, a6);
    if ( v30 >= 0 )
    {
      v8 = v50;
      v9 = v49;
      goto LABEL_30;
    }
    v44 = *((_QWORD *)v28 + 16);
    v45 = 0LL;
    if ( v44 != *((_QWORD *)v28 + 9) + 72LL )
      v45 = (VIDMM_RECYCLE_RANGE *)(v44 - 120);
    while ( v45 != v15 )
    {
      VIDMM_RECYCLE_RANGE::Unlock(v45);
      v46 = *((_QWORD *)v45 + 16);
      v47 = *((_QWORD *)v45 + 9);
      v45 = 0LL;
      if ( v46 != v47 + 72 )
        v45 = (VIDMM_RECYCLE_RANGE *)(v46 - 120);
    }
    VIDMM_RECYCLE_RANGE::Unlock(v15);
  }
  return (unsigned int)v30;
}
