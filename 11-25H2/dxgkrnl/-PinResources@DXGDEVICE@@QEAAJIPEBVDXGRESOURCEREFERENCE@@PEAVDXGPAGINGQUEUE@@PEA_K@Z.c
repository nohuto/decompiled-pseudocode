/*
 * XREFs of ?PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z @ 0x1401B8CE4
 * Callers:
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1402DF238 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 * Callees:
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004FA7C (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x140056908 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::PinResources(
        DXGDEVICE *this,
        unsigned int a2,
        const struct DXGRESOURCEREFERENCE *a3,
        struct DXGPAGINGQUEUE *a4,
        unsigned __int64 *a5)
{
  unsigned int v5; // esi
  const struct DXGRESOURCEREFERENCE *v6; // r15
  __int64 v7; // r10
  __int64 v9; // rdx
  __int64 i; // r8
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // r13
  __int64 v15; // rdi
  struct VIDMM_PAGING_QUEUE *v16; // r9
  int v17; // r14d
  __int64 v18; // rsi
  char *v19; // r14
  __int64 v20; // rdi

  v5 = 0;
  v6 = a3;
  v7 = 0LL;
LABEL_2:
  if ( (unsigned int)v7 >= a2 )
  {
    v12 = 0LL;
LABEL_13:
    v13 = (unsigned int)v12;
    if ( (unsigned int)v12 < a2 )
    {
      v14 = *((_QWORD *)v6 + v12);
      v15 = *(_QWORD *)(v14 + 24);
      while ( 1 )
      {
        if ( !v15 )
        {
          v12 = (unsigned int)(v12 + 1);
          goto LABEL_13;
        }
        v16 = a4 ? (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a4 + 4) : 0LL;
        v17 = VIDMM_EXPORT::VidMmPinAllocation(
                *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                *(struct VIDMM_MULTI_ALLOC **)(v15 + 24),
                v16,
                0LL,
                0LL,
                a5);
        if ( v17 < 0 )
          break;
        *(_DWORD *)(v15 + 72) |= 0x800u;
        v15 = *(_QWORD *)(v15 + 64);
        if ( v17 == 259 )
          v5 = 259;
      }
      v18 = *(_QWORD *)(v14 + 24);
      if ( v18 != v15 )
      {
        do
        {
          VIDMM_EXPORT::VidMmUnpinAllocation(
            *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
            *(struct VIDMM_MULTI_ALLOC **)(v18 + 24));
          v18 = *(_QWORD *)(v18 + 64);
        }
        while ( v18 != v15 );
        v6 = a3;
      }
      v5 = v17;
      if ( (_DWORD)v12 )
      {
        v19 = (char *)v6 + 8 * v12;
        do
        {
          v20 = *(_QWORD *)(*(_QWORD *)v19 + 24LL);
          if ( v20 )
          {
            do
            {
              VIDMM_EXPORT::VidMmUnpinAllocation(
                *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                *(struct VIDMM_MULTI_ALLOC **)(v20 + 24));
              v20 = *(_QWORD *)(v20 + 64);
            }
            while ( v20 );
            v19 = (char *)v6 + 8 * v12;
          }
          --v13;
        }
        while ( v13 );
      }
    }
    return v5;
  }
  else
  {
    v9 = *((_QWORD *)v6 + v7);
    for ( i = *(_QWORD *)(v9 + 24); ; i = *(_QWORD *)(i + 64) )
    {
      if ( !i )
      {
        v7 = (unsigned int)(v7 + 1);
        goto LABEL_2;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(i + 48) + 4LL) & 0x2000) != 0 )
        break;
      if ( (*(_DWORD *)(i + 72) & 0x800) != 0 )
      {
        WdLogSingleEntry2(3LL, v9, i);
        WdLogGlobalForLineNumber = 6582;
        return 3221225485LL;
      }
    }
    WdLogSingleEntry2(3LL, v9, i);
    WdLogGlobalForLineNumber = 6574;
    return 3221225485LL;
  }
}
