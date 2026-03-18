/*
 * XREFs of ?AddValidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z @ 0x180065810
 * Callers:
 *     <none>
 * Callees:
 *     ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180066BD0 (-EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180066E70 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CSwapChainBuffer::AddValidRegion(
        CSwapChainBuffer *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  int *v3; // rbx
  const struct FastRegion::Internal::CRgnData *v4; // rdx
  int v5; // eax
  FastRegion::Internal::CRgnData *v6; // rcx
  FastRegion::Internal::CRgnData *v7; // rsi
  int v8; // edi
  int *v9; // r14
  int v10; // ebp
  int v11; // eax
  const struct FastRegion::Internal::CRgnData *v12; // r11
  int v13; // edx
  int v14; // ebx
  __int64 v15; // r9
  _DWORD *v16; // rax
  _DWORD *v17; // r10
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r9
  HANDLE ProcessHeap; // rax
  FastRegion::Internal::CRgnData *v25; // rax
  void *v26; // r12
  int v27; // [rsp+20h] [rbp-148h]
  FastRegion::Internal::CRgnData *lpMem; // [rsp+28h] [rbp-140h]
  _BYTE v29[256]; // [rsp+30h] [rbp-138h] BYREF
  void *retaddr; // [rsp+168h] [rbp+0h]

  v3 = (int *)((char *)this + 32);
  v4 = *a2;
  if ( !*(_DWORD *)v4 || !**(_DWORD **)v3 )
    return;
  v5 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(*(const struct FastRegion::Internal::CRgnData **)v3, v4);
  v6 = (FastRegion::Internal::CRgnData *)v29;
  lpMem = (FastRegion::Internal::CRgnData *)v29;
  v27 = v5;
  if ( (unsigned __int64)v5 > 0x100 )
  {
    v25 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v5);
    v6 = v25;
    if ( !v25 )
    {
      v8 = -2147024882;
      goto LABEL_19;
    }
    lpMem = v25;
  }
  FastRegion::Internal::CRgnData::Subtract(v6, *(const struct FastRegion::Internal::CRgnData **)v3, *a2);
  v7 = lpMem;
  v8 = 0;
  if ( !*(_DWORD *)lpMem )
  {
    **(_DWORD **)v3 = 0;
    goto LABEL_15;
  }
  if ( v29 != (_BYTE *)lpMem )
  {
    lpMem = (FastRegion::Internal::CRgnData *)v29;
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v3);
    *(_QWORD *)v3 = v7;
    v3[2] = v27;
    goto LABEL_15;
  }
  v9 = v3 + 2;
  v10 = *((_DWORD *)lpMem + 2 * *(_DWORD *)lpMem + 2)
      + 8 * *(_DWORD *)lpMem
      - *((_DWORD *)lpMem + 4)
      - 12
      + 8 * (*(_DWORD *)lpMem - 1)
      + 24;
  v11 = 60;
  if ( v3 + 2 != *(int **)v3 )
    v11 = *v9;
  if ( v11 < v10 )
  {
    v26 = MIDL_user_allocate(v10);
    if ( !v26 )
    {
      v8 = -2147024882;
      goto LABEL_15;
    }
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v3);
    *(_QWORD *)v3 = v26;
    *v9 = v10;
  }
  v12 = *(const struct FastRegion::Internal::CRgnData **)v3;
  v13 = *(_DWORD *)lpMem;
  v14 = 0;
  *(_DWORD *)v12 = *(_DWORD *)lpMem;
  *((_DWORD *)v12 + 1) = *((_DWORD *)lpMem + 1);
  *((_DWORD *)v12 + 2) = *((_DWORD *)lpMem + 2);
  v15 = (__int64)lpMem + *((int *)lpMem + 4) + 12;
  v16 = (_DWORD *)((char *)v12 + 8 * v13 + 12);
  if ( v13 > 0 )
  {
    v17 = (_DWORD *)((char *)v12 + 12);
    do
    {
      *v17 = *(_DWORD *)((char *)v17 + lpMem - v12);
      v18 = v14;
      v17 += 2;
      v19 = (__int64)v12 + 8 * v14++ + 12;
      *(_DWORD *)(v19 + 4) = (_DWORD)lpMem
                           + 12
                           + 8 * v18
                           + 4 * (((__int64)v16 - v15) >> 2)
                           + *((_DWORD *)lpMem + 2 * v18 + 4)
                           - v19;
    }
    while ( v14 < *(_DWORD *)v12 );
  }
  v20 = (__int64)lpMem + 8 * *(_DWORD *)lpMem + 4;
  v21 = (unsigned __int64)((int)v20 + *(_DWORD *)(v20 + 4) - *((_DWORD *)lpMem + 4) - ((int)lpMem + 12)) >> 2;
  v22 = (int)v21;
  if ( (int)v21 > 0 )
  {
    v23 = v15 - (_QWORD)v16;
    do
    {
      *v16 = *(_DWORD *)((char *)v16 + v23);
      ++v16;
      --v22;
    }
    while ( v22 );
  }
LABEL_15:
  if ( v29 != (_BYTE *)lpMem )
  {
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
  if ( v8 < 0 )
LABEL_19:
    ModuleFailFastForHRESULT(v8, retaddr);
}
