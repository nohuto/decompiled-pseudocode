/*
 * XREFs of ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX_KPEAUVIDMM_PARTITION@@@Z @ 0x1400D0D60
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x140005BFC (McTemplateK0pqx_EtwWriteTransfer.c)
 *     ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x140042A50 (-NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z @ 0x1400D1590 (-FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1400D1660 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1400D16B4 (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReleaseResource(
        VIDMM_SEGMENT *this,
        struct VIDMM_PARTITION ***a2,
        _QWORD *a3,
        unsigned __int64 a4,
        struct VIDMM_PARTITION *a5)
{
  VIDMM_SEGMENT *v8; // rbx
  _QWORD *v9; // rax
  struct _VIDMM_POOL_BLOCK *v10; // r15
  __int64 v11; // rbp
  struct _VIDMM_POOL_BLOCK *v12; // rsi
  __int64 v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rdi
  char *v21; // rdi
  char *v22; // r15
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // r10
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdi
  struct VIDMM_PARTITION **v32; // rcx
  _QWORD *v33; // rax
  unsigned __int64 v34; // rdi
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  VIDMM_SEGMENT *v38; // rdx
  VIDMM_SEGMENT **v39; // rax
  char **v40; // rbp
  char *v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rdx
  _QWORD *v44; // rcx
  struct _VIDMM_POOL_BLOCK *v45; // rdx
  struct _VIDMM_POOL_BLOCK **v46; // rcx
  struct _VIDMM_POOL_BLOCK *v47; // rdx
  struct _VIDMM_POOL_BLOCK **v48; // rcx
  char **v49; // rax
  char *v50; // rsi
  struct VIDMM_PARTITION **v51; // rsi
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  struct _VIDMM_POOL_BLOCK *v56; // [rsp+98h] [rbp+10h] BYREF
  struct _VIDMM_POOL_BLOCK *v57; // [rsp+A0h] [rbp+18h] BYREF

  v8 = this;
  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v9[3] = a2;
    v9[4] = a3;
    v9[5] = a4;
    WdLogGlobalForLineNumber = 2153;
  }
  if ( a2 )
  {
    if ( *((_DWORD *)a2 + 18) != 1 )
    {
      v51 = *a2;
      VIDMM_SEGMENT::DecrementBytesCommitted(v8, *a2[44], (unsigned __int64)(*a2)[2]);
      --*((_DWORD *)v8 + 90);
      if ( (*((_DWORD *)v8 + 26) & 0x1001) != 0 )
      {
        this = (VIDMM_SEGMENT *)a2[45];
        if ( !this || _InterlockedExchangeAdd((volatile signed __int32 *)this + 11, 0xFFFFFFFF) == 1 )
        {
          this = *a2[44];
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)this + 7, -(__int64)v51[2]) < (unsigned __int64)v51[2] )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2168;
            DxgkLogInternalTriageEvent(v52, 0x40000LL);
          }
        }
      }
    }
  }
  if ( !a3 )
  {
    *((_DWORD *)a2 + 7) &= ~0x400u;
    return;
  }
  if ( (*((_DWORD *)v8 + 26) & 0x1000) != 0 )
    goto LABEL_35;
  v10 = 0LL;
  v11 = *((_QWORD *)v8 + 26);
  v12 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a3;
    WdLogGlobalForLineNumber = 1730;
  }
  if ( *((_BYTE *)a3 + 56) == 4 )
  {
    v13 = a3[4];
    if ( v13 != v11 + 48 )
    {
      v10 = (struct _VIDMM_POOL_BLOCK *)(v13 - 24);
      v56 = (struct _VIDMM_POOL_BLOCK *)(v13 - 24);
    }
    v14 = a3 + 3;
    this = (VIDMM_SEGMENT *)a3[3];
    if ( this != (VIDMM_SEGMENT *)(v11 + 48) )
    {
      v12 = (VIDMM_SEGMENT *)((char *)this - 24);
      v57 = (VIDMM_SEGMENT *)((char *)this - 24);
    }
    if ( *((_QWORD **)this + 1) != v14 )
      goto LABEL_26;
    v15 = (_QWORD *)a3[4];
    if ( (_QWORD *)*v15 != v14 )
      goto LABEL_26;
    *v15 = this;
    *((_QWORD *)this + 1) = v15;
    *v14 = 0LL;
    a3[4] = 0LL;
    if ( !*(_DWORD *)(v11 + 16) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1757;
      DxgkLogInternalTriageEvent(v53, 0x40000LL);
    }
    --*(_DWORD *)(v11 + 16);
  }
  else
  {
    v42 = a3 + 3;
    v43 = a3[3];
    if ( *(_QWORD **)(v43 + 8) != a3 + 3 )
      goto LABEL_26;
    v44 = (_QWORD *)a3[4];
    if ( (_QWORD *)*v44 != v42 )
      goto LABEL_26;
    *v44 = v43;
    *(_QWORD *)(v43 + 8) = v44;
    *v42 = 0LL;
    a3[4] = 0LL;
    VIDMM_LINEAR_POOL::FindAdjacentBlocksOnFreeList(
      (VIDMM_LINEAR_POOL *)v11,
      (struct _VIDMM_POOL_BLOCK *)a3,
      &v56,
      &v57);
    v10 = v56;
    v12 = v57;
  }
  if ( v10 )
  {
    v16 = *((_QWORD *)v10 + 1);
    this = (VIDMM_SEGMENT *)(v16 + *(_QWORD *)v10);
    if ( this == (VIDMM_SEGMENT *)*a3 && *((_BYTE *)v10 + 56) == 2 )
    {
      *((_QWORD *)v10 + 1) = v16 + a3[1];
      v17 = a3[5];
      if ( *(_QWORD **)(v17 + 8) == a3 + 5 )
      {
        v18 = (_QWORD *)a3[6];
        if ( (_QWORD *)*v18 == a3 + 5 )
        {
          *v18 = v17;
          *(_QWORD *)(v17 + 8) = v18;
          if ( *(_BYTE *)v11 )
          {
            *((_BYTE *)a3 + 56) = 1;
            v19 = (_QWORD *)(v11 + 96);
            this = *(VIDMM_SEGMENT **)(v11 + 96);
            v20 = a3 + 3;
            if ( *((_QWORD *)this + 1) != v11 + 96 )
              goto LABEL_26;
            *v20 = this;
            v20[1] = v19;
            *((_QWORD *)this + 1) = v20;
            *v19 = v20;
          }
          else
          {
            ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v11 + 192), a3);
          }
          if ( !v12 )
            goto LABEL_35;
          v24 = *((_QWORD *)v10 + 1);
          this = (VIDMM_SEGMENT *)(v24 + *(_QWORD *)v10);
          if ( *(VIDMM_SEGMENT **)v12 != this || *((_BYTE *)v12 + 56) != 2 )
            goto LABEL_35;
          *((_QWORD *)v10 + 1) = v24 + *((_QWORD *)v12 + 1);
          v45 = (struct _VIDMM_POOL_BLOCK *)*((_QWORD *)v12 + 3);
          if ( *((struct _VIDMM_POOL_BLOCK **)v45 + 1) == (struct _VIDMM_POOL_BLOCK *)((char *)v12 + 24) )
          {
            v46 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v12 + 4);
            if ( *v46 == (struct _VIDMM_POOL_BLOCK *)((char *)v12 + 24) )
            {
              *v46 = v45;
              *((_QWORD *)v45 + 1) = v46;
              v47 = (struct _VIDMM_POOL_BLOCK *)*((_QWORD *)v12 + 5);
              if ( *((struct _VIDMM_POOL_BLOCK **)v47 + 1) == (struct _VIDMM_POOL_BLOCK *)((char *)v12 + 40) )
              {
                v48 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v12 + 6);
                if ( *v48 == (struct _VIDMM_POOL_BLOCK *)((char *)v12 + 40) )
                {
                  *v48 = v47;
                  *((_QWORD *)v47 + 1) = v48;
                  VIDMM_LINEAR_POOL::FreeBlock((VIDMM_LINEAR_POOL *)v11, v12);
                  goto LABEL_35;
                }
              }
            }
          }
        }
      }
LABEL_26:
      __fastfail(3u);
    }
  }
  if ( v12
    && (v37 = a3[1], this = (VIDMM_SEGMENT *)(v37 + *a3), *(VIDMM_SEGMENT **)v12 == this)
    && *((_BYTE *)v12 + 56) == 2 )
  {
    *((_QWORD *)v12 + 1) += v37;
    this = (VIDMM_SEGMENT *)(a3 + 5);
    *(_QWORD *)v12 = *a3;
    v38 = (VIDMM_SEGMENT *)a3[5];
    if ( *((_QWORD **)v38 + 1) != a3 + 5 )
      goto LABEL_26;
    v39 = (VIDMM_SEGMENT **)a3[6];
    if ( *v39 != this )
      goto LABEL_26;
    *v39 = v38;
    *((_QWORD *)v38 + 1) = v39;
    if ( !*(_BYTE *)v11 )
    {
      ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v11 + 192), a3);
      goto LABEL_35;
    }
    *((_BYTE *)a3 + 56) = 1;
    v21 = (char *)(a3 + 3);
    v40 = (char **)(v11 + 96);
  }
  else
  {
    *((_BYTE *)a3 + 56) = 2;
    a3[2] = 0LL;
    v21 = (char *)(a3 + 3);
    if ( v10 )
    {
      v22 = (char *)v10 + 24;
      v23 = *(_QWORD *)v22;
      if ( *(char **)(*(_QWORD *)v22 + 8LL) != v22 )
        goto LABEL_26;
      *(_QWORD *)v21 = v23;
      *((_QWORD *)v21 + 1) = v22;
      *(_QWORD *)(v23 + 8) = v21;
      *(_QWORD *)v22 = v21;
      goto LABEL_35;
    }
    if ( v12 )
    {
      v49 = (char **)*((_QWORD *)v12 + 4);
      v50 = (char *)v12 + 24;
      if ( *v49 == v50 )
      {
        *(_QWORD *)v21 = v50;
        *((_QWORD *)v21 + 1) = v49;
        *v49 = v21;
        *((_QWORD *)v50 + 1) = v21;
        goto LABEL_35;
      }
      goto LABEL_26;
    }
    v40 = (char **)(v11 + 48);
  }
  v41 = *v40;
  if ( *((char ***)*v40 + 1) != v40 )
    goto LABEL_26;
  *(_QWORD *)v21 = v41;
  *((_QWORD *)v21 + 1) = v40;
  *((_QWORD *)v41 + 1) = v21;
  *v40 = v21;
LABEL_35:
  --*((_DWORD *)v8 + 91);
  if ( a2 && (*((_DWORD *)a2 + 7) & 0x400) == 0 )
    goto LABEL_37;
  if ( g_IsInternalReleaseOrDbg )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v33[3] = a4;
    v33[4] = *((_QWORD *)v8 + 60);
    v33[5] = a2;
    WdLogGlobalForLineNumber = 2201;
  }
  *((_QWORD *)v8 + 60) -= a4;
  if ( a2 )
    *((_DWORD *)a2 + 7) &= ~0x400u;
  *((_BYTE *)v8 + 488) = 0;
  if ( a2 )
LABEL_37:
    v25 = (*((_DWORD *)a2 + 6) >> 9) & 1;
  else
    LOBYTE(v25) = 0;
  if ( *((_QWORD *)v8 + 33) < *((_QWORD *)v8 + 33) - a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 453;
    DxgkLogInternalTriageEvent(v26, 0x40000LL);
  }
  *((_QWORD *)v8 + 33) -= a4;
  if ( *((_DWORD *)v8 + 102) != -1 && !(_BYTE)v25 )
  {
    v34 = *((_QWORD *)v8 + 34);
    if ( v34 < v34 - a4 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 464;
      DxgkLogInternalTriageEvent(v35, 0x40000LL);
    }
    v36 = *((_QWORD *)v8 + 34) - a4;
    *((_QWORD *)v8 + 34) = v36;
    if ( v36 <= qword_1400815C8 && v34 > qword_1400815C8 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v8 + 3) + 40032LL))(
        *(_QWORD *)(*((_QWORD *)v8 + 3) + 40080LL),
        *((unsigned int *)v8 + 102));
    if ( !*((_QWORD *)v8 + 34) )
      VIDMM_GLOBAL::NotifyMemorySegmentIdle(*((VIDMM_GLOBAL **)v8 + 3), v8);
  }
  v27 = *((_QWORD *)v8 + 3);
  v28 = *((unsigned __int16 *)v8 + 210);
  v29 = *((int *)v8 + 129);
  v30 = *(_QWORD *)(*(_QWORD *)(v27 + 40232) + 8 * v28);
  if ( (*(_BYTE *)(v30 + 24 * v29 + 552) & 1) != 0 )
    v31 = *(_QWORD *)(384LL * *(unsigned int *)(*(_QWORD *)(v27 + 24) + 240LL) + *((_QWORD *)a5 + 5) + 24) + 344 * v28;
  else
    v31 = v30 + 344 * v29 + 584;
  if ( *(_QWORD *)(v31 + 128) < *(_QWORD *)(v31 + 128) - a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 491;
    DxgkLogInternalTriageEvent(v54, 0x40000LL);
  }
  *(_QWORD *)(v31 + 128) -= a4;
  if ( (byte_140081241 & 1) != 0 )
    McTemplateK0pqx_EtwWriteTransfer();
  if ( (*((_DWORD *)v8 + 26) & 0x1001) != 0 )
  {
    v32 = a2[45];
    if ( (!v32 || _InterlockedExchangeAdd((volatile signed __int32 *)v32 + 10, 0xFFFFFFFF) == 1)
      && _InterlockedExchangeAdd64((volatile signed __int64 *)*a2[44] + 8, -(__int64)a4) < a4 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2233;
      DxgkLogInternalTriageEvent(v55, 0x40000LL);
    }
    *(_QWORD *)(*((_QWORD *)v8 + 3) + 40216LL) -= a4;
  }
}
