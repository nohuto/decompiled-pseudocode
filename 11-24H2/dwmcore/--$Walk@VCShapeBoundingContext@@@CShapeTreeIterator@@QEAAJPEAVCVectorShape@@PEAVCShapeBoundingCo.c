/*
 * XREFs of ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x180135248
 * Callers:
 *     ?GetBounds@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180135100 (-GetBounds@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POIN.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PostSubgraph@CShapeBoundingContext@@QEAAJPEA_N@Z @ 0x180135494 (-PostSubgraph@CShapeBoundingContext@@QEAAJPEA_N@Z.c)
 *     ?GetChildrenCount@CContainerVectorShape@@UEBAIXZ @ 0x1801357D0 (-GetChildrenCount@CContainerVectorShape@@UEBAIXZ.c)
 *     ?IsOfType@CContainerVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801357F0 (-IsOfType@CContainerVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetChildAt@CContainerVectorShape@@UEBAPEAVCVectorShape@@I@Z @ 0x180135810 (-GetChildAt@CContainerVectorShape@@UEBAPEAVCVectorShape@@I@Z.c)
 *     ?GotoFirstChild@?$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@@Z @ 0x180135830 (-GotoFirstChild@-$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV-$vector@PEAVCVect.c)
 *     ?IsOfType@CSpriteVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180136900 (-IsOfType@CSpriteVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Optimize@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@QEAAXXZ @ 0x180143610 (-Optimize@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@QEAAXXZ.c)
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x18014BD2C (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapeTreeIterator::Walk<CShapeBoundingContext>(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  _WORD *v6; // rsi
  __int64 (__fastcall *v7)(_WORD *, __int64); // rax
  char v8; // al
  int v9; // eax
  int v10; // esi
  int v11; // eax
  CContainerVectorShape *v12; // rcx
  unsigned int (__fastcall *v13)(CContainerVectorShape *__hidden); // rax
  unsigned int ChildrenCount; // eax
  int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // esi
  CContainerVectorShape *v18; // rcx
  struct CVectorShape *(__fastcall *v19)(CContainerVectorShape *__hidden, unsigned int); // rax
  struct CVectorShape *ChildAt; // rax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // edx
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v29; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  do
  {
LABEL_2:
    v6 = *(_WORD **)(a3 + 8);
    *(_BYTE *)(a3 + 64) = 0;
    if ( !*((_BYTE *)v6 + 96) )
      break;
    *(_BYTE *)(a3 + 64) = 1;
    v7 = *(__int64 (__fastcall **)(_WORD *, __int64))(*(_QWORD *)v6 + 64LL);
    if ( (char *)v7 == (char *)CContainerVectorShape::IsOfType )
    {
      v8 = CContainerVectorShape::IsOfType(v6, 165LL);
    }
    else if ( (char *)v7 == (char *)CSpriteVectorShape::IsOfType )
    {
      v8 = CSpriteVectorShape::IsOfType(v6, 165LL);
    }
    else
    {
      v8 = v7(v6, 165LL);
    }
    if ( v8 )
    {
      CSpriteVectorShape::ComputeBounds((CSpriteVectorShape *)v6);
      break;
    }
    v6[48] = 0;
    v29 = 0LL;
    v9 = CGraphWalker<CVectorShape>::GotoFirstChild(a1, &v29);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x29u, 0LL);
      goto LABEL_35;
    }
  }
  while ( v29 );
  while ( 1 )
  {
    LOBYTE(v29) = 1;
    v11 = CShapeBoundingContext::PostSubgraph((CShapeBoundingContext *)a3, (bool *)&v29);
    v10 = v11;
    if ( v11 < 0 )
      break;
    if ( (_BYTE)v29 )
    {
      v12 = *(CContainerVectorShape **)(a1 + 16);
      if ( v12
        && (*(_DWORD *)(a1 + 28) == 1
         && *(_DWORD *)(a1 + 24) != -1
         && ((v13 = *(unsigned int (__fastcall **)(CContainerVectorShape *__hidden))(*(_QWORD *)v12 + 312LL),
              v13 != CContainerVectorShape::GetChildrenCount)
           ? (ChildrenCount = ((__int64 (*)(void))v13)())
           : (ChildrenCount = CContainerVectorShape::GetChildrenCount(v12)),
             v15 = *(_DWORD *)(a1 + 24),
             v15 + 1 < ChildrenCount)
         || !*(_DWORD *)(a1 + 28) && (v15 = *(_DWORD *)(a1 + 24)) != 0) )
      {
        v16 = v15 - 1;
        v17 = v15 + 1;
        v18 = *(CContainerVectorShape **)(a1 + 16);
        if ( *(_DWORD *)(a1 + 28) != 1 )
          v17 = v16;
        v19 = *(struct CVectorShape *(__fastcall **)(CContainerVectorShape *__hidden, unsigned int))(*(_QWORD *)v18 + 320LL);
        if ( v19 == CContainerVectorShape::GetChildAt )
          ChildAt = CContainerVectorShape::GetChildAt(v18, v17);
        else
          ChildAt = v19(v18, v17);
        *(_DWORD *)(a1 + 24) = v17;
        v10 = 0;
        *(_QWORD *)(a1 + 8) = ChildAt;
        if ( ChildAt )
          goto LABEL_2;
      }
      else
      {
        v10 = 1;
      }
    }
    if ( *(_DWORD *)(a1 + 4) )
    {
      v21 = *(_DWORD *)(a1 + 40);
      v22 = 0LL;
      v23 = 0;
      if ( v21 )
      {
        v24 = v21 - 1;
        *(_DWORD *)(a1 + 40) = v24;
        v25 = v24;
        v26 = *(_QWORD *)(a1 + 32);
        v25 *= 2LL;
        v23 = *(_DWORD *)(v26 + 8 * v25 + 8);
        v22 = *(_QWORD *)(v26 + 8 * v25);
      }
      v27 = *(_QWORD *)(a1 + 16);
      --*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 8) = v27;
      *(_QWORD *)(a1 + 16) = v22;
      *(_DWORD *)(a1 + 24) = v23;
      if ( v27 )
        continue;
    }
    goto LABEL_35;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x34u, 0LL);
LABEL_35:
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  CWatermarkStack<CGraphWalker<CVectorShape>::CFrame,64,2,10>::Optimize(a1 + 32);
  if ( v10 < 0 )
    return (unsigned int)v10;
  return v3;
}
