/*
 * XREFs of ?ComputeOcclusion@CMegaRectCollection@@QEAAXXZ @ 0x18002D120
 * Callers:
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180108FE0 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18002D890 (-EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18002DB30 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CMegaRectCollection::ComputeOcclusion(CMegaRectCollection *this)
{
  CMegaRectCollection *v1; // r14
  unsigned __int64 v2; // rdi
  _QWORD *v3; // r15
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rbp
  const struct FastRegion::Internal::CRgnData *v13; // rdx
  const struct FastRegion::Internal::CRgnData *v14; // rcx
  int v15; // eax
  FastRegion::Internal::CRgnData *v16; // rcx
  int *v17; // r9
  int v18; // ebp
  int *v19; // rbp
  int v20; // ecx
  int v21; // eax
  int *v22; // rbp
  int v23; // r12d
  int v24; // ecx
  __int64 v25; // r10
  int *v26; // r8
  _DWORD *v27; // r11
  __int64 v28; // rax
  int *v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r10
  HANDLE ProcessHeap; // rax
  FastRegion::Internal::CRgnData *v34; // rax
  int v35; // [rsp+20h] [rbp-188h]
  int *v36; // [rsp+28h] [rbp-180h]
  void *v37; // [rsp+28h] [rbp-180h]
  _QWORD *v39; // [rsp+40h] [rbp-168h]
  __int64 v40; // [rsp+48h] [rbp-160h]
  _QWORD *v41; // [rsp+50h] [rbp-158h]
  int v42; // [rsp+60h] [rbp-148h]
  int *lpMem; // [rsp+68h] [rbp-140h]
  _BYTE v44[256]; // [rsp+70h] [rbp-138h] BYREF
  void *retaddr; // [rsp+1A8h] [rbp+0h]

  v1 = this;
  v2 = *((_QWORD *)this + 6);
  v3 = *(_QWORD **)this;
  if ( v2 >= (unsigned int)CCommonRegistryData::MegaRectSearchCount )
    v2 = (unsigned int)CCommonRegistryData::MegaRectSearchCount;
  v4 = *((_QWORD *)this + 3) + *((_QWORD *)this + 5);
  v39 = *(_QWORD **)this;
  if ( v2 )
  {
    while ( 1 )
    {
      v5 = v3 ? *v3 : 0LL;
      v6 = 8 * (v4 & 1);
      v40 = v6;
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 8 * ((v4 >> 1) & (*(_QWORD *)(v5 + 16) - 1LL))) + v6)
                     + 84LL) == 5 )
        break;
LABEL_20:
      ++v4;
      if ( !v2 )
        return;
    }
    v7 = *(_QWORD **)v1;
    v8 = *((_QWORD *)v1 + 3);
    v41 = *(_QWORD **)v1;
    while ( 1 )
    {
      if ( v8 == v4 )
      {
        --v2;
        goto LABEL_20;
      }
      v9 = v7 ? *v7 : 0LL;
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 8 * ((*(_QWORD *)(v9 + 16) - 1LL) & (v8 >> 1))) + 8 * (v8 & 1));
      v11 = v3 ? *v3 : 0LL;
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8 * ((v4 >> 1) & (*(_QWORD *)(v11 + 16) - 1LL))) + v6);
      v13 = *(const struct FastRegion::Internal::CRgnData **)(v12 + 96);
      if ( *(_DWORD *)v13 )
      {
        v14 = *(const struct FastRegion::Internal::CRgnData **)(v10 + 96);
        if ( *(_DWORD *)v14 )
          break;
      }
LABEL_49:
      v7 = v41;
      ++v8;
    }
    v15 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(v14, v13);
    v16 = (FastRegion::Internal::CRgnData *)v44;
    lpMem = (int *)v44;
    v42 = v15;
    if ( (unsigned __int64)v15 > 0x100 )
    {
      v34 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v15);
      v16 = v34;
      if ( !v34 )
      {
        v18 = -2147024882;
LABEL_37:
        ModuleFailFastForHRESULT(v18, retaddr);
      }
      lpMem = (int *)v34;
    }
    FastRegion::Internal::CRgnData::Subtract(
      v16,
      *(const struct FastRegion::Internal::CRgnData **)(v10 + 96),
      *(const struct FastRegion::Internal::CRgnData **)(v12 + 96));
    v17 = lpMem;
    v18 = 0;
    if ( *lpMem )
    {
      if ( v44 == (_BYTE *)lpMem )
      {
        v19 = (int *)(v10 + 104);
        v20 = lpMem[2 * *lpMem + 2] + 8 * *lpMem - lpMem[4] - 12 + 8 * (*lpMem - 1) + 24;
        v21 = 60;
        v35 = v20;
        if ( v10 + 104 != *(_QWORD *)(v10 + 96) )
          v21 = *v19;
        if ( v21 < v20 )
        {
          v37 = MIDL_user_allocate(v20);
          if ( !v37 )
          {
            v18 = -2147024882;
            goto LABEL_33;
          }
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)(v10 + 96));
          v17 = lpMem;
          *(_QWORD *)(v10 + 96) = v37;
          *v19 = v35;
        }
        v22 = *(int **)(v10 + 96);
        v23 = 0;
        v24 = *v17;
        *v22 = *v17;
        v22[1] = v17[1];
        v22[2] = v17[2];
        v25 = (__int64)v17 + v17[4] + 12;
        v26 = &v22[2 * v24 + 3];
        if ( v24 > 0 )
        {
          v27 = v22 + 3;
          do
          {
            *v27 = *(_DWORD *)((char *)v27 + (char *)v17 - (char *)v22);
            v27 += 2;
            v28 = v23++;
            v22[2 * v28 + 4] = 4 * (((__int64)v26 - v25) >> 2)
                             + (_DWORD)v17
                             + 8 * v28
                             + v17[2 * v28 + 4]
                             - ((_DWORD)v22
                              + 8 * v28);
          }
          while ( v23 < *v22 );
          v1 = this;
          v3 = v39;
        }
        v29 = &v17[2 * *v17 + 1];
        v30 = (unsigned __int64)((int)v29 + v29[1] - v17[4] - ((int)v17 + 12)) >> 2;
        v31 = (int)v30;
        if ( (int)v30 > 0 )
        {
          v32 = v25 - (_QWORD)v26;
          do
          {
            *v26 = *(int *)((char *)v26 + v32);
            ++v26;
            --v31;
          }
          while ( v31 );
        }
        v18 = 0;
        goto LABEL_33;
      }
      v36 = lpMem;
      lpMem = (int *)v44;
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)(v10 + 96));
      *(_QWORD *)(v10 + 96) = v36;
      *(_DWORD *)(v10 + 104) = v42;
    }
    else
    {
      **(_DWORD **)(v10 + 96) = 0;
    }
LABEL_33:
    if ( v44 != (_BYTE *)lpMem )
    {
      if ( lpMem )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, lpMem);
      }
    }
    if ( v18 < 0 )
      goto LABEL_37;
    v6 = v40;
    goto LABEL_49;
  }
}
