/*
 * XREFs of ?ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_KPEAE@Z @ 0x1400CD470
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F2030 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PAGE_TABLE::ModifyPageTable(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int8 *a7)
{
  int v8; // r8d
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // r15
  int v14; // edx
  __int64 v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rdx
  int v19; // ebx
  bool v20; // zf
  unsigned __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // ebx
  unsigned __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // r9
  __int64 v29; // rcx
  int v30; // edx

  v8 = 0;
  v10 = a4;
  if ( *((_DWORD *)a3 + 18) == -2 )
  {
    if ( a4 < a4 + a5 )
    {
      v27 = a5;
      v28 = 16LL * a4;
      do
      {
        v29 = *((_QWORD *)this + 4);
        v30 = v8 + 1;
        v28 += 16LL;
        v20 = (*(_BYTE *)(v29 + v28 - 16) & 1) == 0;
        *(_QWORD *)(v29 + v28 - 16) = *(_QWORD *)a3;
        if ( v20 )
          v30 = v8;
        v8 = v30;
        --v27;
      }
      while ( v27 );
    }
  }
  else
  {
    v11 = 0LL;
    v12 = 0LL;
    if ( (*((_DWORD *)a3 + 9) & 1) != 0 )
      v12 = *((_QWORD *)a3 + 5);
    else
      v11 = *((_QWORD *)a3 + 5);
    v14 = *(_DWORD *)this & 0x40;
    if ( (unsigned int)v10 < (unsigned int)v10 + a5 )
    {
      v15 = 16LL;
      v16 = 16 * v10;
      v17 = a5;
      if ( v11 )
      {
        if ( !v14 )
          v15 = 1LL;
        do
        {
          v18 = *((_QWORD *)this + 4);
          v19 = v8 + 1;
          v20 = (*(_BYTE *)(v18 + v16) & 1) == 0;
          *(_QWORD *)(v18 + v16) = *(_QWORD *)a3;
          v21 = *((_QWORD *)a3 + 11);
          if ( v20 )
            v19 = v8;
          if ( v21 )
            *(_QWORD *)(v16 + *((_QWORD *)this + 4) + 8) = *(_QWORD *)(v11
                                                                     + 8LL
                                                                     * ((unsigned int)*((_QWORD *)a3 + 3)
                                                                      + (unsigned int)((a6 - *((_QWORD *)a3 + 3)) % v21)));
          else
            *(_QWORD *)(v16 + *((_QWORD *)this + 4) + 8) = *(_QWORD *)(v11 + 8LL * (unsigned int)a6);
          v22 = *((_QWORD *)this + 5);
          if ( v22 )
          {
            *(_QWORD *)(v16 + v22) = *((_QWORD *)a3 + 2);
            *(_QWORD *)(v16 + *((_QWORD *)this + 5) + 8) = *((_QWORD *)a3 + 8);
          }
          a6 += v15;
          v16 += 16LL;
          v8 = v19;
          --v17;
        }
        while ( v17 );
      }
      else
      {
        if ( !v14 )
          v15 = 1LL;
        do
        {
          v23 = *((_QWORD *)this + 4);
          v24 = v8 + 1;
          v20 = (*(_BYTE *)(v23 + v16) & 1) == 0;
          *(_QWORD *)(v23 + v16) = *(_QWORD *)a3;
          v25 = *((_QWORD *)a3 + 11);
          if ( v20 )
            v24 = v8;
          if ( v25 )
            *(_QWORD *)(v16 + *((_QWORD *)this + 4) + 8) = v12
                                                         + (unsigned int)((a6 - *((_QWORD *)a3 + 3)) % v25)
                                                         + (unsigned int)*((_QWORD *)a3 + 3);
          else
            *(_QWORD *)(v16 + *((_QWORD *)this + 4) + 8) = v12 + (unsigned int)a6;
          v26 = *((_QWORD *)this + 5);
          if ( v26 )
          {
            *(_QWORD *)(v16 + v26) = *((_QWORD *)a3 + 2);
            *(_QWORD *)(v16 + *((_QWORD *)this + 5) + 8) = *((_QWORD *)a3 + 8);
          }
          a6 += v15;
          v16 += 16LL;
          v8 = v24;
          --v17;
        }
        while ( v17 );
      }
    }
  }
  *((_DWORD *)this + 1) += a5 - v8;
  if ( v8 )
    *a7 = 1;
}
