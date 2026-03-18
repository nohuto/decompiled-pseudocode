/*
 * XREFs of ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18002AB70
 * Callers:
 *     ?AddRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x18027EE20 (-AddRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     ?NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802D2EF0 (-NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18002AFC0 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18002B300 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall FastRegion::CRegion::Union(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  int *v2; // rdi
  int v5; // r8d
  _DWORD *v6; // rbx
  unsigned int v7; // r15d
  int *v8; // r12
  int v9; // eax
  int v10; // ebp
  int v11; // ecx
  int v12; // r10d
  __int64 v13; // r11
  _DWORD *v14; // rax
  _DWORD *v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r11
  int v22; // eax
  FastRegion::Internal::CRgnData *v23; // rcx
  const struct FastRegion::Internal::CRgnData *v24; // rbx
  _DWORD *v25; // rdi
  int *v26; // r14
  int v27; // ebp
  int v28; // eax
  int v29; // ecx
  int v30; // r11d
  __int64 v31; // r9
  _DWORD *v32; // r8
  _DWORD *v33; // r10
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r9
  HANDLE v39; // rax
  HANDLE ProcessHeap; // rax
  FastRegion::Internal::CRgnData *v41; // rax
  int v42; // [rsp+20h] [rbp-148h]
  FastRegion::Internal::CRgnData *lpMem; // [rsp+28h] [rbp-140h]
  _BYTE v44[256]; // [rsp+30h] [rbp-138h] BYREF

  v2 = (int *)*a2;
  v5 = *(_DWORD *)*a2;
  if ( !v5 )
    return 0LL;
  v6 = *this;
  if ( !*(_DWORD *)*this )
  {
    v7 = 0;
    if ( this != a2 )
    {
      v8 = (int *)(this + 1);
      v9 = 60;
      v10 = v2[2 * v5 + 2] + 8 * v5 - 12 - v2[4] + 8 * (v5 - 1) + 24;
      if ( this + 1 != (const struct FastRegion::Internal::CRgnData **)v6 )
        v9 = *v8;
      if ( v9 >= v10 )
        goto LABEL_7;
      ProcessHeap = GetProcessHeap();
      v6 = HeapAlloc(ProcessHeap, 0, v10);
      if ( v6 )
      {
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
        *this = (const struct FastRegion::Internal::CRgnData *)v6;
        *v8 = v10;
LABEL_7:
        v11 = *v2;
        v12 = 0;
        *v6 = *v2;
        v6[1] = v2[1];
        v6[2] = v2[2];
        v13 = (__int64)v2 + v2[4] + 12;
        v14 = &v6[2 * v11 + 3];
        if ( v11 > 0 )
        {
          v15 = v6 + 3;
          do
          {
            *v15 = *(_DWORD *)((char *)v15 + (char *)v2 - (char *)v6);
            v15 += 2;
            v16 = v12++;
            v6[2 * v16 + 4] = 4 * (((__int64)v14 - v13) >> 2)
                            + (_DWORD)v2
                            + 8 * v16
                            + v2[2 * v16 + 4]
                            - ((_DWORD)v6
                             + 8 * v16);
          }
          while ( v12 < *v6 );
        }
        v17 = (__int64)&v2[2 * *v2 + 1];
        v18 = (unsigned __int64)((int)v17 + *(_DWORD *)(v17 + 4) - v2[4] - ((int)v2 + 12)) >> 2;
        v19 = (int)v18;
        if ( (int)v18 > 0 )
        {
          v20 = v13 - (_QWORD)v14;
          do
          {
            *v14 = *(_DWORD *)((char *)v14 + v20);
            ++v14;
            --v19;
          }
          while ( v19 );
        }
        return v7;
      }
      return (unsigned int)-2147024882;
    }
    return v7;
  }
  v22 = FastRegion::Internal::CRgnData::EstimateSizeUnion(
          (const struct FastRegion::Internal::CRgnData *)v6,
          (const struct FastRegion::Internal::CRgnData *)v2);
  v23 = (FastRegion::Internal::CRgnData *)v44;
  lpMem = (FastRegion::Internal::CRgnData *)v44;
  v42 = v22;
  if ( (unsigned __int64)v22 <= 0x100 )
  {
LABEL_15:
    FastRegion::Internal::CRgnData::Union(v23, *this, *a2);
    v24 = lpMem;
    v7 = 0;
    if ( *(_DWORD *)lpMem )
    {
      if ( v44 == (_BYTE *)lpMem )
      {
        v25 = *this;
        v26 = (int *)(this + 1);
        v27 = *((_DWORD *)lpMem + 2 * *(_DWORD *)lpMem + 2)
            + 8 * *(_DWORD *)lpMem
            - *((_DWORD *)lpMem + 4)
            - 12
            + 8 * (*(_DWORD *)lpMem - 1)
            + 24;
        v28 = 60;
        if ( this + 1 != (const struct FastRegion::Internal::CRgnData **)*this )
          v28 = *v26;
        if ( v28 >= v27 )
          goto LABEL_20;
        v25 = MIDL_user_allocate(v27);
        if ( v25 )
        {
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
          *this = (const struct FastRegion::Internal::CRgnData *)v25;
          *v26 = v27;
LABEL_20:
          v29 = *(_DWORD *)lpMem;
          v30 = 0;
          *v25 = *(_DWORD *)lpMem;
          v25[1] = *((_DWORD *)lpMem + 1);
          v25[2] = *((_DWORD *)lpMem + 2);
          v31 = (__int64)lpMem + *((int *)lpMem + 4) + 12;
          v32 = &v25[2 * v29 + 3];
          if ( v29 > 0 )
          {
            v33 = v25 + 3;
            do
            {
              *v33 = *(_DWORD *)((char *)v33 + lpMem - (FastRegion::Internal::CRgnData *)v25);
              v33 += 2;
              v34 = v30++;
              v25[2 * v34 + 4] = 4 * (((__int64)v32 - v31) >> 2)
                               + (_DWORD)lpMem
                               + 8 * v34
                               + *((_DWORD *)lpMem + 2 * v34 + 4)
                               - ((_DWORD)v25
                                + 8 * v34);
            }
            while ( v30 < *v25 );
          }
          v35 = (__int64)lpMem + 8 * *(_DWORD *)lpMem + 4;
          v36 = (unsigned __int64)((int)v35 + *(_DWORD *)(v35 + 4) - *((_DWORD *)lpMem + 4) - ((int)lpMem + 12)) >> 2;
          v37 = (int)v36;
          if ( (int)v36 > 0 )
          {
            v38 = v31 - (_QWORD)v32;
            do
            {
              *v32 = *(_DWORD *)((char *)v32 + v38);
              ++v32;
              --v37;
            }
            while ( v37 );
          }
          goto LABEL_26;
        }
        v7 = -2147024882;
      }
      else
      {
        lpMem = (FastRegion::Internal::CRgnData *)v44;
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
        *this = v24;
        *((_DWORD *)this + 2) = v42;
      }
    }
    else
    {
      *(_DWORD *)*this = 0;
    }
LABEL_26:
    if ( v44 != (_BYTE *)lpMem && lpMem )
    {
      v39 = GetProcessHeap();
      HeapFree(v39, 0, lpMem);
    }
    return v7;
  }
  v41 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v22);
  v23 = v41;
  if ( v41 )
  {
    lpMem = v41;
    goto LABEL_15;
  }
  return 2147942414LL;
}
