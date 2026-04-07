/*
 * XREFs of ?Create@CDisplayBlackCurtainAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800C0DA8
 * Callers:
 *     ?CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDisplayAnimatedVisual@@@Z @ 0x18007F32C (-CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDis.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CDisplayBlackCurtainAnimatedVisual@@IEAA@XZ @ 0x1800C1558 (--0CDisplayBlackCurtainAnimatedVisual@@IEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayBlackCurtainAnimatedVisual::Create(struct CDisplayBlackCurtainAnimatedVisual **a1)
{
  int v2; // edi
  CDisplayBlackCurtainAnimatedVisual *v3; // rax
  struct CDisplayBlackCurtainAnimatedVisual *v4; // rbx

  if ( a1 )
  {
    v3 = (CDisplayBlackCurtainAnimatedVisual *)DefaultHeap::AllocClear(0x198uLL);
    if ( v3 )
      v4 = CDisplayBlackCurtainAnimatedVisual::CDisplayBlackCurtainAnimatedVisual(v3);
    else
      v4 = 0LL;
    if ( v4 )
    {
      v2 = (*(__int64 (__fastcall **)(struct CDisplayBlackCurtainAnimatedVisual *))(*(_QWORD *)v4 + 8LL))(v4);
      if ( v2 >= 0 )
      {
        *a1 = v4;
        return 0;
      }
    }
    else
    {
      v2 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x10u, 0LL);
    *a1 = 0LL;
    if ( v4 )
      CBaseObject::Release(v4);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x10u, 0LL);
  }
  return (unsigned int)v2;
}
