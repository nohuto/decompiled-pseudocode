/*
 * XREFs of ?TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1801BAACC
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1801449F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18002AFC0 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18002B300 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x18002EC00 (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CRegion::TryAddRectangle(
        const struct FastRegion::Internal::CRgnData **this,
        const struct tagRECT *a2)
{
  LONG right; // r9d
  LONG left; // r10d
  LONG top; // r8d
  _DWORD *v6; // rdi
  int v7; // esp
  int v8; // edx
  int v9; // ecx
  unsigned int v10; // edx
  int v11; // r11d
  signed int v12; // r14d
  int *v13; // r15
  int v14; // eax
  int v15; // esi
  signed int v16; // edx
  char *v17; // r9
  char *v18; // r8
  _DWORD *v19; // r11
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r9
  unsigned int v24; // edi
  void *v25; // rsi
  HANDLE ProcessHeap; // rax
  int v28; // eax
  FastRegion::Internal::CRgnData *v29; // rcx
  int v30; // r15d
  struct FastRegion::Internal::CRgnData *v31; // r14
  struct FastRegion::Internal::CRgnData *v32; // rax
  LPVOID lpMem; // [rsp+28h] [rbp-E0h] BYREF
  int v34; // [rsp+30h] [rbp-D8h] BYREF
  LONG v35; // [rsp+34h] [rbp-D4h]
  LONG v36; // [rsp+38h] [rbp-D0h]
  LONG v37; // [rsp+3Ch] [rbp-CCh] BYREF
  signed int v38; // [rsp+40h] [rbp-C8h]
  LONG bottom; // [rsp+44h] [rbp-C4h]
  int v40; // [rsp+48h] [rbp-C0h]
  LONG v41; // [rsp+4Ch] [rbp-BCh]
  LONG v42; // [rsp+50h] [rbp-B8h]
  __int64 v43; // [rsp+78h] [rbp-90h]
  struct FastRegion::Internal::CRgnData *v44; // [rsp+80h] [rbp-88h]
  _BYTE v45[256]; // [rsp+88h] [rbp-80h] BYREF

  right = a2->right;
  left = a2->left;
  top = a2->top;
  lpMem = &v34;
  if ( left >= right || top >= a2->bottom )
    return 0;
  v6 = *this;
  bottom = a2->bottom;
  v8 = v7 + 68;
  v37 = top;
  v9 = v8 - (v7 + 60);
  v35 = left;
  v36 = right;
  v41 = left;
  v11 = 2;
  v38 = v7 + 68 - (unsigned int)&v37;
  v34 = 2;
  v40 = v9 + 8;
  v42 = right;
  if ( *v6 )
  {
    v28 = FastRegion::Internal::CRgnData::EstimateSizeUnion(
            (const struct FastRegion::Internal::CRgnData *)v6,
            (const struct FastRegion::Internal::CRgnData *)&v34);
    v29 = (FastRegion::Internal::CRgnData *)v45;
    v44 = (struct FastRegion::Internal::CRgnData *)v45;
    LODWORD(v43) = v28;
    if ( (unsigned __int64)v28 > 0x100 )
    {
      v32 = (struct FastRegion::Internal::CRgnData *)MIDL_user_allocate(v28);
      v29 = v32;
      if ( !v32 )
      {
        if ( v45 != (_BYTE *)v44 )
          operator delete(v44);
        goto LABEL_27;
      }
      v44 = v32;
    }
    FastRegion::Internal::CRgnData::Union(v29, *this, (const struct FastRegion::Internal::CRgnData *)lpMem);
    v24 = 0;
    if ( *(_DWORD *)v44 )
    {
      if ( v45 == (_BYTE *)v44 )
      {
        v24 = FastRegion::CRegion::CopyData(this, v44);
      }
      else
      {
        v30 = v43;
        v31 = v44;
        LODWORD(v43) = 0;
        v44 = (struct FastRegion::Internal::CRgnData *)v45;
        FastRegion::CRegion::FreeMemory(this);
        *this = v31;
        *((_DWORD *)this + 2) = v30;
      }
    }
    else
    {
      *(_DWORD *)*this = 0;
    }
    if ( v45 != (_BYTE *)v44 )
      operator delete(v44);
    goto LABEL_16;
  }
  if ( this != (const struct FastRegion::Internal::CRgnData **)&lpMem )
  {
    v10 = v7 + 68 - (unsigned int)&v37;
    v12 = v9 - v10 - (unsigned int)&v37 + v7 + 96;
    v13 = (int *)(this + 1);
    v14 = 60;
    if ( this + 1 != (const struct FastRegion::Internal::CRgnData **)v6 )
      v14 = *v13;
    if ( v14 >= v12 )
      goto LABEL_8;
    v6 = MIDL_user_allocate(v12);
    if ( v6 )
    {
      FastRegion::CRegion::FreeMemory(this);
      v11 = v34;
      *this = (const struct FastRegion::Internal::CRgnData *)v6;
      *v13 = v12;
LABEL_8:
      *v6 = v11;
      v15 = 0;
      v6[1] = v35;
      v6[2] = v36;
      v16 = v38;
      v17 = (char *)&v37 + v38;
      v18 = (char *)&v6[2 * v11 + 3];
      if ( v11 > 0 )
      {
        v19 = v6 + 3;
        do
        {
          *v19 = *(_DWORD *)((char *)v19 + (char *)&v34 - (char *)v6);
          v19 += 2;
          v20 = v15++;
          v6[2 * v20 + 4] = (unsigned int)(&v37 + 2 * v20)
                          + 4 * ((v18 - v17) >> 2)
                          + *(&v37 + 2 * v20 + 1)
                          - ((_DWORD)v6
                           + 8 * v20
                           + 12);
        }
        while ( v15 < *v6 );
        v16 = v38;
      }
      v21 = (unsigned __int64)(int)(*(&v37 + 2 * v34 - 1) - v16 - (unsigned int)&v37 + (unsigned int)&v37
                                                                                     + 8 * (v34 - 1)) >> 2;
      v22 = (int)v21;
      if ( (int)v21 > 0 )
      {
        v23 = v17 - v18;
        do
        {
          *(_DWORD *)v18 = *(_DWORD *)&v18[v23];
          v18 += 4;
          --v22;
        }
        while ( v22 );
      }
      goto LABEL_15;
    }
LABEL_27:
    v24 = -2147024882;
    goto LABEL_16;
  }
LABEL_15:
  v24 = 0;
LABEL_16:
  v25 = lpMem;
  if ( &v34 != lpMem && lpMem )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v25);
  }
  return v24;
}
