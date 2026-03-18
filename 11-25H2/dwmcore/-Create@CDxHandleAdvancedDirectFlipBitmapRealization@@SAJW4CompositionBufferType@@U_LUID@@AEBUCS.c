/*
 * XREFs of ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x180101F3C
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180101BC0 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18018A134 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ??0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1802E0B44 (--0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_B.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::Create(
        unsigned int a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        void *a5,
        _QWORD *a6)
{
  CDxHandleBitmapRealization *v6; // rdi
  unsigned int v11; // ebx
  LPVOID v13; // rax
  __int64 v14; // rax
  int v15; // eax

  v6 = 0LL;
  if ( (a3[34] & 0x100) != 0 )
  {
    if ( a3[12] || *a3 != 3 )
    {
      v11 = -2003292288;
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180337368, 3u, -2003292288, 0x2Bu, 0LL);
    }
    else
    {
      v13 = operator new(0x1B8uLL);
      if ( v13
        && (v14 = CDxHandleAdvancedDirectFlipBitmapRealization::CDxHandleAdvancedDirectFlipBitmapRealization(
                    v13,
                    a1,
                    a2,
                    a3,
                    a4,
                    a5),
            (v6 = (CDxHandleBitmapRealization *)v14) != 0LL) )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        v15 = CDxHandleBitmapRealization::Initialize(v6);
        v11 = v15;
        if ( v15 >= 0 )
        {
          *a6 = (char *)v6 + 328;
          return v11;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180337368, 3u, v15, 0x34u, 0LL);
        *((_QWORD *)v6 + 32) = 0LL;
      }
      else
      {
        v11 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180337368, 3u, -2147024882, 0x33u, 0LL);
      }
    }
  }
  else
  {
    v11 = -2003292287;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180337368, 3u, -2003292287, 0x25u, 0LL);
  }
  *a6 = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v6 + 16LL))(v6);
  return v11;
}
