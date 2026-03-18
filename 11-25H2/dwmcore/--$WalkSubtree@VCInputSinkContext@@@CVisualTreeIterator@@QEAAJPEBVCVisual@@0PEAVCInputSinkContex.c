/*
 * XREFs of ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x1800ADC64
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x1800ACB80 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z @ 0x1800B4150 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x180137B90 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?GotoFirstChild@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x180175C90 (-GotoFirstChild@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV-$vector@PEAVCVisual@@V-$all.c)
 *     ?VisitNode@CVisual@@QEAAXPEBVCVisualTree@@@Z @ 0x180195710 (-VisitNode@CVisual@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?GetParentInputSink@CInputSinkContext@@KAPEAXPEBVCVisual@@@Z @ 0x1801959A4 (-GetParentInputSink@CInputSinkContext@@KAPEAXPEBVCVisual@@@Z.c)
 *     ?HasInputSink@CVisual@@QEBA_NXZ @ 0x180195A00 (-HasInputSink@CVisual@@QEBA_NXZ.c)
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEBVCVisual@@@Z @ 0x1801BD4F0 (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEBVCVisual@@@Z.c)
 *     IsNotifyInputSinkParentedPresent @ 0x18025D410 (IsNotifyInputSinkParentedPresent.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CInputSinkContext>(
        __int64 a1,
        CVisual *a2,
        const void *a3,
        __int64 a4)
{
  int v8; // eax
  unsigned int v9; // esi
  CVisual *v10; // rdi
  const struct CVisualTree *v11; // rdx
  __int64 v12; // rsi
  int *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // r9d
  int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // r10
  unsigned __int64 v21; // rax
  __int64 v22; // r8
  unsigned __int64 v23; // rdx
  int v24; // r8d
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // rax
  int v29; // eax
  void *InputHandle; // rax
  __int64 v31; // r10
  CVisual *v32; // [rsp+70h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 64) = 1;
  if ( a3 && (v8 = CThreadContext::RegisterGraphWalkRoot(a3), v9 = v8, v8 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x3Eu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xD6u, 0LL);
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
    v10 = a2;
    *(_QWORD *)(a1 + 8) = a2;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = 0;
LABEL_4:
    while ( (*((_BYTE *)v10 + 106) & 0x40) != 0 || v10 == a2 )
    {
      v11 = *(const struct CVisualTree **)(a1 + 56);
      if ( v11 )
        CVisual::VisitNode(v10, v11);
      v12 = *(_QWORD *)(a4 + 8);
      if ( CVisual::HasInputSink((CVisual *)v12) )
      {
        if ( !*(_QWORD *)(a4 + 72) )
        {
          if ( (unsigned __int8)IsNotifyInputSinkParentedPresent() )
          {
            CInputSinkContext::GetParentInputSink((const struct CVisual *)v12);
            InputHandle = CVisual::GetInputHandle((CVisual *)v12);
            NotifyInputSinkParented(InputHandle, v31);
          }
          *(_QWORD *)(a4 + 72) = v12;
        }
        *(_BYTE *)(v12 + 104) |= 0x20u;
      }
      if ( (*(_DWORD *)(v12 + 96) & 0x2000) == 0 )
        break;
      v32 = 0LL;
      v29 = CGraphWalker<CVisual>::GotoFirstChild(a1, &v32);
      v9 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xFFu, 0LL);
        goto LABEL_41;
      }
      if ( !v32 )
        break;
      v10 = v32;
    }
    v13 = (int *)(a1 + 24);
    do
    {
      if ( (*((_BYTE *)v10 + 106) & 0x40) != 0 || v10 == a2 )
      {
        v14 = *(_QWORD *)(a4 + 8);
        if ( v14 == *(_QWORD *)(a4 + 72) )
          *(_QWORD *)(a4 + 72) = 0LL;
        *(_BYTE *)(v14 + 96) &= ~0x20u;
        v13 = (int *)(a1 + 24);
      }
      v15 = *(_QWORD *)(a1 + 16);
      if ( v15
        && ((v16 = *(_DWORD *)(a1 + 28), v16 == 1)
         && (v13 = (int *)(a1 + 24), v17 = *(_DWORD *)(a1 + 24), v17 != -1)
         && ((v18 = *(_QWORD *)(v15 + 80), (v18 & 2) == 0)
           ? (LODWORD(v18) = v18 & 1)
           : (v18 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCuLL)),
             v17 + 1 < (unsigned int)v18)
         || !v16 && (v17 = *v13) != 0) )
      {
        v19 = *(_QWORD *)(v15 + 80);
        v20 = (unsigned int)(v17 + 1);
        if ( v16 != 1 )
          v20 = (unsigned int)(v17 - 1);
        v21 = v19 & 1;
        v22 = v19 & 2;
        v10 = (CVisual *)(v19 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( v22 )
          v23 = *(_QWORD *)v10;
        else
          v23 = v21;
        if ( v23 <= (unsigned int)v20 )
          goto LABEL_33;
        if ( v22 )
          v21 = *(_QWORD *)v10;
        if ( (unsigned int)v20 >= v21 )
        {
LABEL_33:
          v10 = 0LL;
        }
        else if ( v21 != 1 )
        {
          v10 = (CVisual *)*((_QWORD *)v10 + v20 + 2);
        }
        *(_QWORD *)(a1 + 8) = v10;
        v13 = (int *)(a1 + 24);
        *(_DWORD *)(a1 + 24) = v20;
        v9 = 0;
        if ( v10 )
          goto LABEL_4;
      }
      else
      {
        v9 = 1;
      }
      if ( !*(_DWORD *)(a1 + 4) )
        break;
      v24 = *(_DWORD *)(a1 + 40);
      v25 = 0LL;
      v26 = 0;
      if ( v24 )
      {
        *(_DWORD *)(a1 + 40) = v24 - 1;
        v27 = *(_QWORD *)(a1 + 32);
        v26 = *(_DWORD *)(v27 + 16LL * (unsigned int)(v24 - 1) + 8);
        v25 = *(_QWORD *)(v27 + 16LL * (unsigned int)(v24 - 1));
      }
      v10 = *(CVisual **)(a1 + 16);
      --*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 8) = v10;
      *(_QWORD *)(a1 + 16) = v25;
      *v13 = v26;
    }
    while ( v10 );
    if ( v9 == 1 )
      v9 = 0;
LABEL_41:
    CGraphWalker<CVisual>::EndWalk(a1, a3);
  }
  return v9;
}
