/*
 * XREFs of ?Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x1801022EC
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180101BC0 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_N4PEAVCDecodeBitmap@@@Z @ 0x180102B18 (--0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18018A134 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::Create(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned __int64 *a6)
{
  LPVOID v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  CDxHandleBitmapRealization *v13; // rdi
  int v14; // eax
  unsigned int v15; // esi

  v10 = operator new(0x190uLL);
  if ( v10 )
  {
    v11 = CDxHandleBitmapRealization::CDxHandleBitmapRealization(v10, a1, a2, a3, a4, a5, 1, 0LL);
    v12 = v11;
    v13 = (CDxHandleBitmapRealization *)v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  }
  else
  {
    v13 = 0LL;
    v12 = 0LL;
  }
  v14 = CDxHandleBitmapRealization::Initialize(v13);
  v15 = v14;
  if ( v14 >= 0 )
  {
    *a6 = ((unsigned __int64)v13 + 328) & -(__int64)(v13 != 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x1Eu, 0LL);
    if ( v13 )
      *((_QWORD *)v13 + 32) = 0LL;
    *a6 = 0LL;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v15;
}
