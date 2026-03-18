/*
 * XREFs of ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x18018F54C
 * Callers:
 *     ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18018F244 (-s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800C0AF0 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 *     ?Grow@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x180195C60 (-Grow@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 */

__int64 __fastcall CHitTestContext::HitTestTreeWalk(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // xmm2_4
  int v6; // xmm3_4
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // eax
  unsigned __int64 *v12; // r8
  int v13; // eax
  unsigned int v14; // ebx
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_DWORD *)(a1 + 216) = a5;
  *(_DWORD *)(a1 + 80) = v5;
  *(_DWORD *)(a1 + 84) = v6;
  *(_BYTE *)(a1 + 120) = 0;
  v9 = *(_QWORD *)(a1 + 128);
  if ( v9 != *(_QWORD *)(a1 + 136) )
    *(_QWORD *)(a1 + 136) = v9;
  *(_QWORD *)(a1 + 152) = 0LL;
  v10 = a1 + 168;
  *(_QWORD *)(a1 + 160) = 0LL;
  if ( *(_DWORD *)(a1 + 176) == *(_DWORD *)(a1 + 180)
    && (v16 = CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Grow(a1 + 168, a2, a3, a4, v10), v16 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)(unsigned int)v16);
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)v10 + 4LL * *(unsigned int *)(v10 + 8)) = 0;
    v11 = *(_DWORD *)(v10 + 20);
    if ( v11 <= ++*(_DWORD *)(v10 + 8) )
      v11 = *(_DWORD *)(v10 + 8);
    *(_DWORD *)(v10 + 20) = v11;
  }
  v12 = *(unsigned __int64 **)(a2 + 72);
  *(_QWORD *)(a1 + 64) = a2;
  v13 = CVisualTreeIterator::WalkSubtree<CHitTestContext>(a1 + 8, *(__int64 **)(a2 + 72), v12, (CHitTestContext *)a1);
  v14 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x22Fu, 0LL);
  return v14;
}
