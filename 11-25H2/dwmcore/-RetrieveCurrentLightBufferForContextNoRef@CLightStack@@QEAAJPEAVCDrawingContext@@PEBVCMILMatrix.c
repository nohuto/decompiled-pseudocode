/*
 * XREFs of ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180095C20
 * Callers:
 *     ?AddCpuClipAntialiasDrawList@CDrawingContext@@QEAAJPEAVCDrawListEntry@@@Z @ 0x180095260 (-AddCpuClipAntialiasDrawList@CDrawingContext@@QEAAJPEAVCDrawListEntry@@@Z.c)
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800D57D0 (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     ?IsBlackLight@CCompositionAmbientLight@@UEBA_NXZ @ 0x180096380 (-IsBlackLight@CCompositionAmbientLight@@UEBA_NXZ.c)
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800963E0 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ??9CMILMatrix@@QEBA_NAEBV0@@Z @ 0x180096900 (--9CMILMatrix@@QEBA_NAEBV0@@Z.c)
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x180097BD8 (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18012B670 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z @ 0x180204CE8 (-Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@ULightInfo@@$0A@@@QEAAJPEFBULightInfo@@I@Z @ 0x18020C85C (-AddMultipleAndSet@-$DynArray@ULightInfo@@$0A@@@QEAAJPEFBULightInfo@@I@Z.c)
 *     ?ReplaceWith@?$DynArray@PEAVCCompositionLight@@$0A@@@QEAAJPEAV1@@Z @ 0x18020D778 (-ReplaceWith@-$DynArray@PEAVCCompositionLight@@$0A@@@QEAAJPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802E8968 (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLightStack::RetrieveCurrentLightBufferForContextNoRef(
        CLightStack *this,
        struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct CHwLightCollectionBuffer **a4)
{
  unsigned int v10; // r12d
  unsigned int v11; // r13d
  __int64 v12; // r10
  char v13; // r11
  __int64 i; // r9
  unsigned int j; // ecx
  CCompositionSpotLight *v16; // rcx
  __int64 (*v17)(void); // rax
  char IsBlackLight; // al
  bool (*v19)(CCompositionSpotLight *__hidden, const struct CVisualTree *, struct CVisual *); // rax
  char v20; // al
  bool v21; // r13
  __int64 v22; // rbx
  int v23; // r12d
  int v24; // r12d
  unsigned int v25; // eax
  char v26; // [rsp+30h] [rbp-D0h]
  CCompositionSpotLight *v27; // [rsp+38h] [rbp-C8h] BYREF
  struct CVisual *CurrentVisual; // [rsp+40h] [rbp-C0h]
  struct CVisualTree *v29; // [rsp+48h] [rbp-B8h]
  void *Buf2[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+60h] [rbp-A0h]
  __int64 v32; // [rsp+64h] [rbp-9Ch]
  _BYTE v33[32]; // [rsp+70h] [rbp-90h] BYREF
  struct LightInfo *v34[2]; // [rsp+90h] [rbp-70h] BYREF
  int v35; // [rsp+A0h] [rbp-60h]
  unsigned int v36[2]; // [rsp+A4h] [rbp-5Ch]
  _BYTE v37[720]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v38[168]; // [rsp+380h] [rbp+280h] BYREF
  int v39; // [rsp+428h] [rbp+328h]
  int v40; // [rsp+46Ch] [rbp+36Ch]

  *a4 = 0LL;
  if ( *((_DWORD *)this + 57) || !*((_DWORD *)this + 8) )
    return 0LL;
  Buf2[0] = v33;
  Buf2[1] = v33;
  v10 = 0;
  v29 = (struct CVisualTree *)*((_QWORD *)a2 + 993);
  v31 = 3;
  v32 = 3LL;
  CurrentVisual = CDrawingContext::GetCurrentVisual(a2);
  v11 = 0;
  v26 = 1;
  while ( v11 < *((_DWORD *)this + 8) )
  {
    v12 = *((_QWORD *)this + 1);
    v13 = 1;
    if ( *(_DWORD *)(v12 + 16LL * v11 + 8) == 1 )
      goto LABEL_25;
    for ( i = 0LL; (unsigned int)i < v10; i = (unsigned int)(i + 1) )
    {
      if ( *((_QWORD *)Buf2[0] + i) == *(_QWORD *)(v12 + 16LL * v11) )
      {
        v13 = 0;
        break;
      }
    }
    for ( j = v11 + 1; j < *((_DWORD *)this + 8); ++j )
    {
      if ( *(_DWORD *)(v12 + 16LL * j + 8) == 1 && *(_QWORD *)(v12 + 16LL * v11) == *(_QWORD *)(v12 + 16LL * j) )
        goto LABEL_25;
    }
    if ( !v13 )
    {
LABEL_25:
      ++v11;
    }
    else
    {
      v16 = *(CCompositionSpotLight **)(v12 + 16LL * v11);
      v27 = v16;
      v17 = *(__int64 (**)(void))(*(_QWORD *)v16 + 256LL);
      if ( (char *)v17 == (char *)CCompositionAmbientLight::IsBlackLight )
        IsBlackLight = CCompositionAmbientLight::IsBlackLight(v16);
      else
        IsBlackLight = v17();
      if ( IsBlackLight
        || ((v19 = *(bool (**)(CCompositionSpotLight *__hidden, const struct CVisualTree *, struct CVisual *))(*(_QWORD *)v27 + 248LL),
             v19 != CCompositionSpotLight::AffectsVisual)
          ? (v20 = ((__int64 (__fastcall *)(CCompositionSpotLight *, struct CVisualTree *, struct CVisual *))v19)(
                     v27,
                     v29,
                     CurrentVisual))
          : (v20 = CCompositionSpotLight::AffectsVisual(v27, v29, CurrentVisual)),
            !v20) )
      {
        v26 = 0;
LABEL_24:
        v10 = HIDWORD(v32);
        goto LABEL_25;
      }
      v10 = HIDWORD(v32) + 1;
      if ( (unsigned int)(HIDWORD(v32) + 1) < HIDWORD(v32) )
      {
        v24 = -2147024362;
        v25 = 181;
LABEL_58:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, v25, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x11Au, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x8Bu, 0LL);
        DynArrayImpl<0>::~DynArrayImpl<0>(Buf2);
        return (unsigned int)v24;
      }
      if ( v10 > (unsigned int)v32 )
      {
        v24 = DynArrayImpl<0>::AddMultipleAndSet(Buf2, 8LL, 1LL, &v27);
        if ( v24 < 0 )
        {
          v25 = 192;
          goto LABEL_58;
        }
        goto LABEL_24;
      }
      ++v11;
      *((_QWORD *)Buf2[0] + HIDWORD(v32)) = v27;
      HIDWORD(v32) = v10;
    }
  }
  v21 = v26;
  if ( v10 )
    v21 = 1;
  if ( (unsigned __int8)CMILMatrix::operator!=((char *)this + 160, a3)
    || *((_DWORD *)this + 32) != v10
    || memcmp_0(*((const void **)this + 13), Buf2[0], 8LL * v10) )
  {
    ReleaseInterface<CPolygon>(this);
    v10 = HIDWORD(v32);
  }
  v22 = 0LL;
  if ( *(_QWORD *)this )
  {
LABEL_32:
    *a4 = *(struct CHwLightCollectionBuffer **)this;
  }
  else
  {
    v35 = 3;
    v34[0] = (struct LightInfo *)v37;
    v34[1] = (struct LightInfo *)v37;
    *(_QWORD *)v36 = 3LL;
    while ( (unsigned int)v22 < v10 )
    {
      v39 = 0;
      v40 = 0;
      v23 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, const struct CMILMatrix *, _BYTE *))(**((_QWORD **)Buf2[0] + v22) + 208LL))(
              *((_QWORD *)Buf2[0] + v22),
              a2,
              a3,
              v38);
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xA0u, 0LL);
LABEL_54:
        DynArrayImpl<0>::~DynArrayImpl<0>(v34);
        DynArrayImpl<0>::~DynArrayImpl<0>(Buf2);
        return (unsigned int)v23;
      }
      v23 = DynArray<LightInfo,0>::AddMultipleAndSet(v34, v38);
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xA2u, 0LL);
        goto LABEL_54;
      }
      v10 = HIDWORD(v32);
      v22 = (unsigned int)(v22 + 1);
    }
    LODWORD(v22) = CHwLightCollectionBuffer::Create(v34[0], v36[1], v21, (struct CHwLightCollectionBuffer **)this);
    if ( (int)v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xAAu, 0LL);
    }
    else
    {
      *((_OWORD *)this + 10) = *(_OWORD *)a3;
      *((_OWORD *)this + 11) = *((_OWORD *)a3 + 1);
      *((_OWORD *)this + 12) = *((_OWORD *)a3 + 2);
      *((_OWORD *)this + 13) = *((_OWORD *)a3 + 3);
      *((_DWORD *)this + 56) = *((_DWORD *)a3 + 16);
      LODWORD(v22) = DynArray<CCompositionLight *,0>::ReplaceWith((char *)this + 104, Buf2);
      if ( (int)v22 >= 0 )
      {
        DynArrayImpl<0>::~DynArrayImpl<0>(v34);
        goto LABEL_32;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xADu, 0LL);
    }
    DynArrayImpl<0>::~DynArrayImpl<0>(v34);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(Buf2);
  return (unsigned int)v22;
}
