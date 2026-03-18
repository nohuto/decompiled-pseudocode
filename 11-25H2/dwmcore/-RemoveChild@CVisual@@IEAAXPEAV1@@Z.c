/*
 * XREFs of ?RemoveChild@CVisual@@IEAAXPEAV1@@Z @ 0x1801D8550
 * Callers:
 *     ?SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z @ 0x1802965A0 (-SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800E433C (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::RemoveChild(CVisual *this, struct CVisual *a2)
{
  __int64 v2; // rbx
  CVisual *v4; // rsi
  struct CVisual *v5; // rdi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rax
  __int64 (__fastcall *v12)(CResource *); // rax
  HANDLE ProcessHeap; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rbx
  __int64 v17; // rbx
  CVisual *v18; // rax

  v2 = *((_QWORD *)this + 10);
  v4 = this;
  if ( (v2 & 2) != 0 )
  {
    v5 = (struct CVisual *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
    v6 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  else
  {
    v6 = v2 & 1;
    v5 = (struct CVisual *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  if ( v6 == 1 )
  {
    if ( a2 != v5 )
      return;
    *((_QWORD *)this + 10) = 0LL;
  }
  else
  {
    if ( !v6 )
      return;
    v14 = 0LL;
    v15 = 0LL;
    do
    {
      if ( a2 == *((struct CVisual **)v5 + v15 + 2) )
        break;
      v14 = (unsigned int)(v14 + 1);
      v15 = (unsigned int)v14;
    }
    while ( (unsigned int)v14 < v6 );
    if ( v14 >= v6 )
      return;
    if ( (v2 & 2) != 0 )
      v7 = *(_QWORD *)v5;
    else
      v7 = v2 & 1;
    if ( v14 < v7 )
    {
      v8 = 1LL;
      if ( v7 - v14 <= 1 )
        v8 = v7 - v14;
      if ( v7 == v8 )
      {
        if ( v7 > 1 && v5 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v5);
        }
        *((_QWORD *)v4 + 10) = 0LL;
      }
      else
      {
        v16 = v7 - v8;
        if ( v16 == 1 )
        {
          v17 = *((_QWORD *)v5 + (v8 & (v14 - 1)) + 2);
          operator delete(v5);
          *((_QWORD *)v4 + 10) = v17 | 1;
        }
        else
        {
          if ( v14 < v16 )
            memmove_0((char *)v5 + 8 * v14 + 16, (char *)v5 + 8 * v14 + 8 * v8 + 16, 8 * (v16 - v14));
          *(_QWORD *)v5 = v16;
        }
      }
    }
  }
  if ( (*((_BYTE *)a2 + 106) & 0x40) != 0 )
  {
    CVisual::DirtyForInvisibleChild((CComposition **)v4, a2);
    v9 = *((_DWORD *)a2 + 66) + 1;
    if ( (*((_BYTE *)a2 + 107) & 1) == 0 )
      v9 = *((_DWORD *)a2 + 66);
    v10 = *((_DWORD *)a2 + 67) + 1;
    if ( (*((_BYTE *)a2 + 107) & 4) == 0 )
      v10 = *((_DWORD *)a2 + 67);
    if ( v9 || v10 )
    {
      v18 = v4;
      do
      {
        *((_DWORD *)v4 + 66) -= v9;
        *((_DWORD *)v4 + 67) -= v10;
        if ( (*((_BYTE *)v4 + 106) & 0x40) == 0 )
          break;
        v4 = (CVisual *)*((_QWORD *)v4 + 11);
        if ( v18 )
        {
          v18 = (CVisual *)*((_QWORD *)v18 + 11);
          if ( v18 )
            v18 = (CVisual *)*((_QWORD *)v18 + 11);
        }
      }
      while ( v4 != v18 );
    }
  }
  v11 = *(_QWORD *)a2;
  *((_QWORD *)a2 + 11) = 0LL;
  v12 = *(__int64 (__fastcall **)(CResource *))(v11 + 16);
  if ( v12 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(a2);
  else
    v12(a2);
}
