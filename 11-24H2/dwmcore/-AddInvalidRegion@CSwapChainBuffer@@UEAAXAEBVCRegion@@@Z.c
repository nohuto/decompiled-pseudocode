/*
 * XREFs of ?AddInvalidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z @ 0x18002A8A0
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18002AFC0 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18002B300 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x18002EC00 (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CSwapChainBuffer::AddInvalidRegion(
        CSwapChainBuffer *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  int *v2; // rbx
  FastRegion::CRegion *v3; // rdi
  int v5; // r9d
  int v6; // ebp
  int *v7; // r14
  int v8; // eax
  int v9; // esi
  int v10; // ecx
  int v11; // r10d
  const struct FastRegion::Internal::CRgnData *v12; // rdi
  __int64 v13; // r11
  _DWORD *v14; // rax
  _DWORD *v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r11
  int v22; // eax
  FastRegion::Internal::CRgnData *v23; // rcx
  void *v24; // r12
  struct FastRegion::Internal::CRgnData *v25; // rbx
  FastRegion::Internal::CRgnData *v26; // rax
  int v27; // [rsp+20h] [rbp-148h]
  struct FastRegion::Internal::CRgnData *v28; // [rsp+28h] [rbp-140h]
  _BYTE v29[256]; // [rsp+30h] [rbp-138h] BYREF
  void *retaddr; // [rsp+168h] [rbp+0h]

  v2 = (int *)*a2;
  v3 = (CSwapChainBuffer *)((char *)this + 32);
  v5 = *(_DWORD *)*a2;
  if ( !v5 )
    return;
  if ( **(_DWORD **)v3 )
  {
    v22 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*(const struct FastRegion::Internal::CRgnData **)v3, *a2);
    v23 = (FastRegion::Internal::CRgnData *)v29;
    v28 = (struct FastRegion::Internal::CRgnData *)v29;
    v27 = v22;
    if ( (unsigned __int64)v22 > 0x100 )
    {
      v26 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v22);
      v23 = v26;
      if ( !v26 )
      {
        v6 = -2147024882;
LABEL_14:
        ModuleFailFastForHRESULT(v6, retaddr);
      }
      v28 = v26;
    }
    FastRegion::Internal::CRgnData::Union(v23, *(const struct FastRegion::Internal::CRgnData **)v3, *a2);
    v6 = 0;
    if ( *(_DWORD *)v28 )
    {
      if ( v29 == (_BYTE *)v28 )
      {
        v6 = FastRegion::CRegion::CopyData(v3, v28);
      }
      else
      {
        v25 = v28;
        v28 = (struct FastRegion::Internal::CRgnData *)v29;
        FastRegion::CRegion::FreeMemory(v3);
        *(_QWORD *)v3 = v25;
        *((_DWORD *)v3 + 2) = v27;
      }
    }
    else
    {
      **(_DWORD **)v3 = 0;
    }
    if ( v29 != (_BYTE *)v28 )
      operator delete(v28);
    goto LABEL_13;
  }
  v6 = 0;
  if ( v3 != (FastRegion::CRegion *)a2 )
  {
    v7 = (int *)((char *)this + 40);
    v8 = 60;
    v9 = v2[2 * v5 + 2] + 8 * v5 - 12 - v2[4] + 8 * (v5 - 1) + 24;
    if ( (CSwapChainBuffer *)((char *)this + 40) != *(CSwapChainBuffer **)v3 )
      v8 = *v7;
    if ( v8 < v9 )
    {
      v24 = MIDL_user_allocate(v9);
      if ( !v24 )
      {
        v6 = -2147024882;
        goto LABEL_13;
      }
      FastRegion::CRegion::FreeMemory(v3);
      *(_QWORD *)v3 = v24;
      *v7 = v9;
    }
    v10 = *v2;
    v11 = 0;
    v12 = *(const struct FastRegion::Internal::CRgnData **)v3;
    *(_DWORD *)v12 = *v2;
    *((_DWORD *)v12 + 1) = v2[1];
    *((_DWORD *)v12 + 2) = v2[2];
    v13 = (__int64)v2 + v2[4] + 12;
    v14 = (_DWORD *)((char *)v12 + 8 * v10 + 12);
    if ( v10 > 0 )
    {
      v15 = (_DWORD *)((char *)v12 + 12);
      do
      {
        *v15 = *(_DWORD *)((char *)v15 + (char *)v2 - (char *)v12);
        v16 = v11;
        v15 += 2;
        v17 = (__int64)v12 + 8 * v11++ + 12;
        *(_DWORD *)(v17 + 4) = (_DWORD)v2 + 12 + 8 * v16 + 4 * (((__int64)v14 - v13) >> 2) + v2[2 * v16 + 4] - v17;
      }
      while ( v11 < *(_DWORD *)v12 );
    }
    v18 = (__int64)&v2[2 * *v2 + 1];
    v19 = (unsigned __int64)((int)v18 + *(_DWORD *)(v18 + 4) - v2[4] - ((int)v2 + 12)) >> 2;
    v20 = (int)v19;
    if ( (int)v19 > 0 )
    {
      v21 = v13 - (_QWORD)v14;
      do
      {
        *v14 = *(_DWORD *)((char *)v14 + v21);
        ++v14;
        --v20;
      }
      while ( v20 );
    }
  }
LABEL_13:
  if ( v6 < 0 )
    goto LABEL_14;
}
