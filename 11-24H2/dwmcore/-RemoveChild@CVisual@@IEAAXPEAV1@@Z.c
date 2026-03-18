/*
 * XREFs of ?RemoveChild@CVisual@@IEAAXPEAV1@@Z @ 0x1801C9458
 * Callers:
 *     ?SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z @ 0x18028B15C (-SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800BDF3C (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::RemoveChild(CVisual *this, struct CVisual *a2, __int64 a3)
{
  __int64 v3; // rbx
  CVisual *v5; // rsi
  __int64 v6; // rdx
  struct CVisual *v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 (__fastcall *v13)(CCachedVisualImage *, __int64, __int64); // rax
  HANDLE ProcessHeap; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  __int64 v17; // rbx
  CVisual *v18; // rax

  v3 = *((_QWORD *)this + 10);
  v5 = this;
  v6 = v3 & 2;
  if ( (v3 & 2) != 0 )
  {
    v7 = (struct CVisual *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
    v8 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  else
  {
    v8 = v3 & 1;
    v7 = (struct CVisual *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  if ( v8 == 1 )
  {
    if ( a2 != v7 )
      return;
    *((_QWORD *)this + 10) = 0LL;
  }
  else
  {
    if ( !v8 )
      return;
    v15 = 0LL;
    a3 = 0LL;
    do
    {
      if ( a2 == *((struct CVisual **)v7 + a3 + 2) )
        break;
      v15 = (unsigned int)(v15 + 1);
      a3 = (unsigned int)v15;
    }
    while ( (unsigned int)v15 < v8 );
    if ( v15 >= v8 )
      return;
    if ( (v3 & 2) != 0 )
      v9 = *(_QWORD *)v7;
    else
      v9 = v3 & 1;
    if ( v15 < v9 )
    {
      v6 = 1LL;
      if ( v9 - v15 <= 1 )
        v6 = v9 - v15;
      if ( v9 == v6 )
      {
        if ( v9 > 1 && v7 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v7);
        }
        *((_QWORD *)v5 + 10) = 0LL;
      }
      else
      {
        v16 = v9 - v6;
        if ( v16 == 1 )
        {
          v17 = *((_QWORD *)v7 + (v6 & (v15 - 1)) + 2);
          operator delete(v7);
          *((_QWORD *)v5 + 10) = v17 | 1;
        }
        else
        {
          if ( v15 < v16 )
            memmove_0((char *)v7 + 8 * v15 + 16, (char *)v7 + 8 * v15 + 8 * v6 + 16, 8 * (v16 - v15));
          *(_QWORD *)v7 = v16;
        }
      }
    }
  }
  if ( (*((_BYTE *)a2 + 106) & 0x40) != 0 )
  {
    CVisual::DirtyForInvisibleChild(v5, a2);
    v10 = *((_DWORD *)a2 + 66);
    v11 = *((_DWORD *)a2 + 67);
    a3 = v10 + 1;
    if ( (*((_BYTE *)a2 + 107) & 1) == 0 )
      a3 = v10;
    v6 = v11 + 1;
    if ( (*((_BYTE *)a2 + 107) & 4) == 0 )
      v6 = v11;
    if ( (_DWORD)a3 || (_DWORD)v6 )
    {
      v18 = v5;
      do
      {
        *((_DWORD *)v5 + 66) -= a3;
        *((_DWORD *)v5 + 67) -= v6;
        if ( (*((_BYTE *)v5 + 106) & 0x40) == 0 )
          break;
        v5 = (CVisual *)*((_QWORD *)v5 + 11);
        if ( v18 )
        {
          v18 = (CVisual *)*((_QWORD *)v18 + 11);
          if ( v18 )
            v18 = (CVisual *)*((_QWORD *)v18 + 11);
        }
      }
      while ( v5 != v18 );
    }
  }
  v12 = *(_QWORD *)a2;
  *((_QWORD *)a2 + 11) = 0LL;
  v13 = *(__int64 (__fastcall **)(CCachedVisualImage *, __int64, __int64))(v12 + 16);
  if ( v13 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(a2, v6, a3);
  else
    ((void (__fastcall *)(struct CVisual *))v13)(a2);
}
