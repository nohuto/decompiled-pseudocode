/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@VCZOrderedRect@@$0A@@@QEAAJPEFBVCZOrderedRect@@I@Z @ 0x1801CC0F0
 * Callers:
 *     ?Add@CArrayBasedCoverageSet@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@PEBVCVisual@@@Z @ 0x1802846F0 (-Add@CArrayBasedCoverageSet@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CZOrderedRect,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2)
{
  __int64 v2; // r8
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 result; // rax
  unsigned int v8; // edi

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
    return 2147942934LL;
  }
  else if ( v4 > *(_DWORD *)(a1 + 20) )
  {
    result = DynArrayImpl<0>::AddMultipleAndSet(a1, 48, 1, a2);
    v8 = result;
    if ( (int)result < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, result, 0xC0u, 0LL);
      return v8;
    }
  }
  else
  {
    v5 = *(_QWORD *)a1;
    v6 = 6 * v2;
    *(_OWORD *)(v5 + 8 * v6) = *a2;
    *(_OWORD *)(v5 + 8 * v6 + 16) = a2[1];
    *(_OWORD *)(v5 + 8 * v6 + 32) = a2[2];
    *(_DWORD *)(a1 + 24) = v4;
    return 0LL;
  }
  return result;
}
