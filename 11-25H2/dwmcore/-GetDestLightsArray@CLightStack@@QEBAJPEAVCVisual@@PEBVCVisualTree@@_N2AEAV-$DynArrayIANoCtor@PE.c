/*
 * XREFs of ?GetDestLightsArray@CLightStack@@QEBAJPEAVCVisual@@PEBVCVisualTree@@_N2AEAV?$DynArrayIANoCtor@PEAVCCompositionLight@@$02$0A@@@PEA_N@Z @ 0x18009611C
 * Callers:
 *     ?GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x18020C9AC (-GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z.c)
 * Callees:
 *     ?IsBlackLight@CCompositionAmbientLight@@UEBA_NXZ @ 0x180096380 (-IsBlackLight@CCompositionAmbientLight@@UEBA_NXZ.c)
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800963E0 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?IsOfType@CCompositionAmbientLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180096A10 (-IsOfType@CCompositionAmbientLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLightStack::GetDestLightsArray(
        __int64 a1,
        struct CVisual *a2,
        const struct CVisualTree *a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _BYTE *a7)
{
  _BYTE *v7; // rdi
  __int64 v11; // rsi
  unsigned int i; // ebp
  __int64 v13; // r10
  char v14; // r11
  __int64 j; // r8
  unsigned int k; // ecx
  CCompositionSpotLight *v17; // rcx
  __int64 (*v18)(void); // rax
  char IsBlackLight; // al
  bool (*v20)(CCompositionSpotLight *__hidden, const struct CVisualTree *, struct CVisual *); // rax
  char v21; // al
  unsigned int v22; // eax
  unsigned int v23; // r8d
  unsigned int v24; // edi
  __int64 (__fastcall *v26)(CCompositionSpotLight *, __int64); // rax
  char v27; // al
  int v28; // ebx
  unsigned int v29; // eax
  CCompositionSpotLight *v30; // [rsp+60h] [rbp+8h] BYREF

  v7 = a7;
  if ( a7 )
    *a7 = 1;
  v11 = a6;
  for ( i = 0; i < *(_DWORD *)(a1 + 32); ++i )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v14 = 1;
    if ( *(_DWORD *)(v13 + 16LL * i + 8) != 1 )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v11 + 24); j = (unsigned int)(j + 1) )
      {
        if ( *(_QWORD *)(*(_QWORD *)v11 + 8 * j) == *(_QWORD *)(v13 + 16LL * i) )
        {
          v14 = 0;
          break;
        }
      }
      for ( k = i + 1; k < *(_DWORD *)(a1 + 32); ++k )
      {
        if ( *(_DWORD *)(v13 + 16LL * k + 8) == 1 && *(_QWORD *)(v13 + 16LL * i) == *(_QWORD *)(v13 + 16LL * k) )
          goto LABEL_26;
      }
      if ( v14 )
      {
        v17 = *(CCompositionSpotLight **)(v13 + 16LL * i);
        v30 = v17;
        if ( !a5 )
        {
          v26 = *(__int64 (__fastcall **)(CCompositionSpotLight *, __int64))(*(_QWORD *)v17 + 64LL);
          if ( (char *)v26 == (char *)CCompositionAmbientLight::IsOfType )
            v27 = CCompositionAmbientLight::IsOfType(v17, 32LL);
          else
            v27 = v26(v17, 32LL);
          if ( v27 )
          {
LABEL_24:
            if ( v7 )
              *v7 = 0;
            continue;
          }
          v17 = v30;
        }
        v18 = *(__int64 (**)(void))(*(_QWORD *)v17 + 256LL);
        if ( (char *)v18 == (char *)CCompositionAmbientLight::IsBlackLight )
          IsBlackLight = CCompositionAmbientLight::IsBlackLight(v17);
        else
          IsBlackLight = v18();
        if ( IsBlackLight )
          goto LABEL_24;
        v20 = *(bool (**)(CCompositionSpotLight *__hidden, const struct CVisualTree *, struct CVisual *))(*(_QWORD *)v30 + 248LL);
        v21 = v20 == CCompositionSpotLight::AffectsVisual
            ? CCompositionSpotLight::AffectsVisual(v30, a3, a2)
            : ((__int64 (__fastcall *)(CCompositionSpotLight *, const struct CVisualTree *, struct CVisual *))v20)(
                v30,
                a3,
                a2);
        if ( !v21 )
          goto LABEL_24;
        v22 = *(_DWORD *)(v11 + 24);
        v23 = v22 + 1;
        if ( v22 + 1 < v22 )
        {
          v28 = -2147024362;
          v29 = 181;
LABEL_41:
          v24 = v28;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, v29, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x11Au, 0LL);
          return v24;
        }
        if ( v23 > *(_DWORD *)(v11 + 20) )
        {
          v28 = DynArrayImpl<0>::AddMultipleAndSet(v11, 8LL, 1LL, &v30);
          if ( v28 < 0 )
          {
            v29 = 192;
            goto LABEL_41;
          }
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)v11 + 8LL * v22) = v30;
          *(_DWORD *)(v11 + 24) = v23;
        }
      }
    }
LABEL_26:
    ;
  }
  if ( *(_DWORD *)(v11 + 24) && v7 )
    *v7 = 1;
  return 0;
}
