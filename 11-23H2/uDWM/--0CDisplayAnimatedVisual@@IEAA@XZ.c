/*
 * XREFs of ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x180020A70
 * Callers:
 *     ??0CDisplayDisconnectAnimatedVisual@@IEAA@XZ @ 0x180020A1C (--0CDisplayDisconnectAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplayDuplicateAnimatedVisual@@IEAA@XZ @ 0x1800B8C64 (--0CDisplayDuplicateAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplayDuplicateToExtendAnimatedVisual@@IEAA@XZ @ 0x1800B946C (--0CDisplayDuplicateToExtendAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplayExtendAnimatedVisual@@IEAA@XZ @ 0x1800BA360 (--0CDisplayExtendAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplayExtendToDuplicateAnimatedVisual@@IEAA@XZ @ 0x1800BADF8 (--0CDisplayExtendToDuplicateAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplayMixedModeAnimatedVisual@@IEAA@XZ @ 0x1800BB6E8 (--0CDisplayMixedModeAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplayBlackCurtainAnimatedVisual@@IEAA@XZ @ 0x1800BD438 (--0CDisplayBlackCurtainAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplaySecondaryOnlyAnimatedVisual@@IEAA@XZ @ 0x1800BD808 (--0CDisplaySecondaryOnlyAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@IEAA@XZ @ 0x1800BE020 (--0CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@IEAA@XZ.c)
 *     ??0CDisplaySecondaryOnlyToExtendAnimatedVisual@@IEAA@XZ @ 0x1800BE6B0 (--0CDisplaySecondaryOnlyToExtendAnimatedVisual@@IEAA@XZ.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180020BCC (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180032448 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180036E6C (--0CRenderDataVisual@@IEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
CDisplayAnimatedVisual *__fastcall CDisplayAnimatedVisual::CDisplayAnimatedVisual(CDisplayAnimatedVisual *this)
{
  __int64 v2; // rcx
  __int64 *v3; // rbx
  __int64 size_of; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  int SystemMetrics; // edi
  int v9; // esi
  int v10; // eax

  CRenderDataVisual::CRenderDataVisual(this);
  *(_QWORD *)v2 = &CDisplayAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *(_QWORD *)(v2 + 288) = &CDisplayDisconnectAnimatedVisual::`vftable'{for `IAnimationListener'};
  *(_WORD *)(v2 + 312) = 0;
  *(_QWORD *)(v2 + 328) = 0LL;
  *(_QWORD *)(v2 + 336) = 0LL;
  *(_QWORD *)(v2 + 344) = 0LL;
  v3 = (__int64 *)(v2 + 384);
  *(_QWORD *)(v2 + 384) = 0LL;
  *(_QWORD *)(v2 + 392) = 0LL;
  size_of = std::_Get_size_of_n<40>(1LL);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  *v3 = v5;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  v6 = std::_Get_size_of_n<40>(1LL);
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(v6);
  *(_QWORD *)v7 = v7;
  *(_QWORD *)(v7 + 8) = v7;
  *(_QWORD *)(v7 + 16) = v7;
  *(_WORD *)(v7 + 24) = 257;
  *((_QWORD *)this + 50) = v7;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_WORD *)this + 216) = 0;
  *((_BYTE *)this + 434) = 0;
  SystemMetrics = GetSystemMetrics(76);
  v9 = GetSystemMetrics(77);
  LODWORD(v3) = GetSystemMetrics(78);
  v10 = GetSystemMetrics(79);
  *((_DWORD *)this + 74) = SystemMetrics;
  *((_DWORD *)this + 76) = SystemMetrics + (_DWORD)v3;
  *((_DWORD *)this + 75) = v9;
  *((_DWORD *)this + 77) = v9 + v10;
  return this;
}
