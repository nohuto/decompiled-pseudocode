/*
 * XREFs of ?ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x18012E610
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800E433C (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8F0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E910 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::ProcessRemoveChild(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_REMOVECHILD *a3)
{
  unsigned int v3; // r9d
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  char v11; // al
  __int64 v12; // rdi
  __int64 v13; // rbx
  unsigned __int64 *v14; // rsi
  unsigned __int64 v15; // rax
  char v16; // r9
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  int v21; // r8d
  int v22; // edx
  unsigned __int64 v23; // rax
  __int64 (__fastcall *v24)(CResource *); // rax
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rbx
  CVisual *v27; // rax

  v3 = *((_DWORD *)a3 + 2);
  if ( !v3
    || v3 >= *((_DWORD *)a2 + 7)
    || (v5 = *((_QWORD *)a2 + 5), !*(_DWORD *)(*((_DWORD *)a2 + 6) * v3 + v5))
    || (v8 = v5 + *((_DWORD *)a2 + 6) * v3, (v9 = *(_QWORD *)(v8 + 8)) == 0)
    || ((v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 64LL), v10 == CKeyframeAnimation::IsOfType)
      ? (v11 = CKeyframeAnimation::IsOfType(v9, 182LL))
      : v10 != CVisual::IsOfType
      ? (v10 != CSharedSection::IsOfType
       ? (v11 = v10(v9, 182LL))
       : (v11 = CSharedSection::IsOfType(v9, 182LL)))
      : (v11 = CVisual::IsOfType(v9, 182LL)),
        !v11 || (v12 = *(_QWORD *)(v8 + 8)) == 0) )
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0xBFAu, 0LL);
    return v6;
  }
  v13 = *((_QWORD *)this + 10);
  if ( (v13 & 2) != 0 )
  {
    v14 = (unsigned __int64 *)(v13 & 0xFFFFFFFFFFFFFFFCuLL);
    v15 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  else
  {
    v15 = v13 & 1;
    v14 = (unsigned __int64 *)(v13 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  v16 = 0;
  if ( v15 == 1 )
  {
    if ( (unsigned __int64 *)v12 == v14 )
    {
      *((_QWORD *)this + 10) = 0LL;
      v16 = 1;
    }
LABEL_18:
    v6 = 0;
    if ( !v16 )
      return v6;
    goto LABEL_34;
  }
  if ( !v15 )
    goto LABEL_18;
  v17 = 0LL;
  v18 = 0LL;
  do
  {
    if ( v12 == v14[v18 + 2] )
      break;
    v17 = (unsigned int)(v17 + 1);
    v18 = (unsigned int)v17;
  }
  while ( (unsigned int)v17 < v15 );
  if ( v17 >= v15 )
    goto LABEL_18;
  if ( (*((_QWORD *)this + 10) & 2LL) != 0 )
    v19 = *v14;
  else
    v19 = v13 & 1;
  if ( v17 < v19 )
  {
    v20 = 1LL;
    if ( v19 - v17 <= 1 )
      v20 = v19 - v17;
    if ( v19 == v20 )
    {
      if ( v19 > 1 )
        operator delete(v14);
      *((_QWORD *)this + 10) = 0LL;
    }
    else
    {
      v25 = v19 - v20;
      if ( v25 == 1 )
      {
        v26 = v14[(v20 & (v17 - 1)) + 2];
        operator delete(v14);
        *((_QWORD *)this + 10) = v26 | 1;
      }
      else
      {
        if ( v17 < v25 )
          memmove_0(&v14[v17 + 2], &v14[v17 + 2 + v20], 8 * (v25 - v17));
        *v14 = v25;
      }
    }
  }
LABEL_34:
  if ( (*(_BYTE *)(v12 + 106) & 0x40) != 0 )
  {
    CVisual::DirtyForInvisibleChild((CComposition **)this, (struct CVisual *)v12);
    v21 = *(_DWORD *)(v12 + 264) + 1;
    if ( (*(_BYTE *)(v12 + 107) & 1) == 0 )
      v21 = *(_DWORD *)(v12 + 264);
    v22 = *(_DWORD *)(v12 + 268) + 1;
    if ( (*(_BYTE *)(v12 + 107) & 4) == 0 )
      v22 = *(_DWORD *)(v12 + 268);
    if ( v21 || v22 )
    {
      v27 = this;
      do
      {
        *((_DWORD *)this + 66) -= v21;
        *((_DWORD *)this + 67) -= v22;
        if ( (*((_BYTE *)this + 106) & 0x40) == 0 )
          break;
        this = (CVisual *)*((_QWORD *)this + 11);
        if ( v27 )
        {
          v27 = (CVisual *)*((_QWORD *)v27 + 11);
          if ( v27 )
            v27 = (CVisual *)*((_QWORD *)v27 + 11);
        }
      }
      while ( this != v27 );
    }
  }
  v23 = *(_QWORD *)v12;
  *(_QWORD *)(v12 + 88) = 0LL;
  v24 = *(__int64 (__fastcall **)(CResource *))(v23 + 16);
  if ( v24 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease((CResource *)v12);
  else
    v24((CResource *)v12);
  return 0;
}
