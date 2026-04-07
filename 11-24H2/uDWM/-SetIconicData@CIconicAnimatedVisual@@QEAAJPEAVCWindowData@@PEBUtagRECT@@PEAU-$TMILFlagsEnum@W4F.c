/*
 * XREFs of ?SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@@Z @ 0x1800C4EC0
 * Callers:
 *     ?WindowDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18001D074 (-WindowDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimationComponent@@PEBUtagRECT@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAPEAVCVisual@@@Z @ 0x1800DD83C (-GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimat.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CIconicAnimatedVisual::SetIconicData(__int64 a1, __int64 a2, _OWORD *a3, _DWORD *a4)
{
  _OWORD *v8; // rbx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // eax

  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, 256LL);
  *(_QWORD *)(a1 + 256) = a2;
  v8 = (_OWORD *)(a1 + 312);
  SetRectEmpty((LPRECT)(a1 + 312));
  SetRectEmpty((LPRECT)(a1 + 328));
  if ( a3 )
  {
    *v8 = *a3;
    if ( *(int *)a3 < 0 )
    {
      if ( (*a4 & 0x2000) == 0 )
      {
        v9 = *(_DWORD *)(a1 + 320);
        v10 = *(_DWORD *)v8;
        *(_OWORD *)(a1 + 328) = *a3;
        v11 = *(_DWORD *)a3 + v9;
        v12 = v10 - *(_DWORD *)a3;
        *(_DWORD *)(a1 + 320) = v11;
        if ( v12 >= v11 )
          v12 = v11;
        *(_DWORD *)v8 = v12;
      }
      goto LABEL_8;
    }
  }
  if ( a4 )
LABEL_8:
    *(_DWORD *)(a1 + 344) = *a4;
  return 0LL;
}
