/*
 * XREFs of ?VisitNode@CVisual@@QEAAXPEBVCVisualTree@@@Z @ 0x180195710
 * Callers:
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x1800ADC64 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 * Callees:
 *     ??0CTreeData@@IEAA@XZ @ 0x1800B7A78 (--0CTreeData@@IEAA@XZ.c)
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800BA7D0 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::VisitNode(CVisual *this, void **a2)
{
  unsigned int v4; // ebp
  __int64 **v5; // rax
  unsigned int **v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  _BYTE *v9; // rdx
  __int64 i; // rcx
  __int64 ****v11; // r8
  __int64 ***v12; // r8
  __int64 **j; // rdx
  unsigned int *v14; // r8
  unsigned int v15; // r10d
  __int64 v16; // r9
  _BYTE *v17; // r11
  unsigned int v18; // eax
  _BYTE *v19; // rcx
  void ****v20; // rcx
  void ***v21; // rcx
  void **v22; // rax
  void (__fastcall *v23)(CVisualTreeData *, struct CVisualTree *, struct CVisual *); // rax
  HANDLE ProcessHeap; // rax
  CTreeData *v25; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0;
  if ( !(*((unsigned __int8 (__fastcall **)(void **))*a2 + 23))(a2) )
  {
    v7 = *((_QWORD *)this + 29);
    if ( *(int *)v7 >= 0 )
    {
      v6 = (unsigned int **)((char *)this + 232);
    }
    else
    {
      v8 = *(unsigned int *)(v7 + 4);
      v9 = (_BYTE *)(v7 + 8);
      for ( i = 0LL; (unsigned int)i < (unsigned int)v8; ++v9 )
      {
        if ( *v9 == 1 )
          break;
        i = (unsigned int)(i + 1);
      }
      if ( (unsigned int)i >= (unsigned int)v8 )
        v11 = 0LL;
      else
        v11 = (__int64 ****)(v8 + 15 + 8 * i - (((_BYTE)v8 + 15) & 7) + v7);
      v12 = *v11;
      v6 = (unsigned int **)((char *)this + 232);
      if ( v12 )
      {
        for ( j = *v12; ; j = (__int64 **)*j )
        {
          v6 = (unsigned int **)((char *)this + 232);
          if ( j == (__int64 **)v12 )
            break;
          v5 = j - 43;
          if ( j[4] == (__int64 *)a2 )
            goto LABEL_3;
        }
      }
    }
    goto LABEL_15;
  }
  v5 = (__int64 **)((char *)this + 328);
LABEL_3:
  v6 = (unsigned int **)((char *)this + 232);
  if ( !v5 )
  {
LABEL_15:
    v14 = *v6;
    v15 = **v6;
    if ( (v15 & 0x10000000) == 0 )
      goto LABEL_29;
    v16 = v14[1];
    v17 = v14 + 2;
    v18 = 0;
    if ( (_DWORD)v16 )
    {
      v19 = v14 + 2;
      do
      {
        if ( *v19 == 4 )
          break;
        ++v18;
        ++v19;
      }
      while ( v18 < (unsigned int)v16 );
    }
    v20 = v18 >= (unsigned int)v16 ? 0LL : (void ****)((char *)v14 + v16 + 8LL * v18 - (((_BYTE)v16 + 15) & 7) + 15);
    v21 = *v20;
    if ( v21 )
    {
      *v14 = v15 & 0xEFFFFFFF;
      if ( (_DWORD)v16 )
      {
        do
        {
          if ( *v17 == 4 )
            break;
          ++v4;
          ++v17;
        }
        while ( v4 < (unsigned int)v16 );
      }
      if ( v4 < (unsigned int)v16 )
        *((_BYTE *)v14 + v4 + 8) = 0;
      v22 = *v21;
    }
    else
    {
LABEL_29:
      ProcessHeap = GetProcessHeap();
      v25 = (CTreeData *)HeapAlloc(ProcessHeap, 0, 0x180uLL);
      if ( !v25 )
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      CTreeData::CTreeData(v25);
      v22 = &CVisualTreeData::`vftable';
      v21[47] = 0LL;
      *v21 = &CVisualTreeData::`vftable';
    }
    v23 = (void (__fastcall *)(CVisualTreeData *, struct CVisualTree *, struct CVisual *))v22[1];
    if ( v23 == CVisualTreeData::Initialize )
    {
      v21[47] = a2;
      CTreeData::Initialize((CTreeData *)v21, 0LL, this);
    }
    else
    {
      v23((CVisualTreeData *)v21, (struct CVisualTree *)a2, this);
    }
  }
}
