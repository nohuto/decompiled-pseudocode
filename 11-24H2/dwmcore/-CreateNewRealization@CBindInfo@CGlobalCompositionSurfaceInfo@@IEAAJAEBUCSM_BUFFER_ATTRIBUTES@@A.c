/*
 * XREFs of ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x1801A59B4
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@I@Z @ 0x1801A5624 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRI.c)
 *     ?CreateAndAddSingleBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z @ 0x180291358 (-CreateAndAddSingleBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTE.c)
 * Callees:
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x180029D60 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1801A5D30 (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCS.c)
 *     ?Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x1801A60E0 (-Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTE.c)
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1801A6F44 (-Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIB.c)
 *     ?GetPrimaryYUVRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEBAPEAVIYUVSwapChainRealization@@XZ @ 0x18021DB58 (-GetPrimaryYUVRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEBAPEAVIYUVSwapChainRealizat.c)
 *     ?CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x180225D60 (-CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUC.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVISwapChainRealization@@@Z @ 0x1802D8AB4 (-Create@CDxHandleStereoBitmapRealization@@SAHW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::CreateNewRealization(
        struct CDecodeBitmap **this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        char a4,
        struct ISwapChainRealization **a5)
{
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // ebx
  int SubResource; // eax
  struct CDecodeBitmap *v14; // r12
  struct _LUID v15; // rbx
  int v16; // r9d
  struct IYUVSwapChainRealization *PrimaryYUVRealization; // rax
  int v18; // [rsp+20h] [rbp-E0h]
  unsigned int v19; // [rsp+20h] [rbp-E0h]
  FastRegion::CRegion *v20; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  struct tagRECT v22; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v23; // [rsp+120h] [rbp+20h]

  memset_0(&v22, 0, 0xA4uLL);
  *a5 = 0LL;
  v9 = NtOpenCompositionSurfaceDirtyRegion(*((_QWORD *)*this + 4), this + 3, a3, &v22);
  v10 = v23;
  if ( v9 < 0 )
    v10 = -1;
  v23 = v10;
  if ( *(_DWORD *)a3 == 1 )
  {
    v11 = -2003292287;
    v19 = 1773;
    goto LABEL_29;
  }
  if ( *(_DWORD *)a3 != 2 )
  {
    if ( *(_DWORD *)a3 == 3 )
    {
      SubResource = CDxHandleStereoBitmapRealization::Create(
                      *((unsigned int *)this + 8),
                      *((_QWORD *)*this + 5),
                      a2,
                      a3,
                      a5);
      v11 = SubResource;
      if ( SubResource >= 0 )
        goto LABEL_7;
      v19 = 1804;
      goto LABEL_19;
    }
    if ( *(_DWORD *)a3 == 4 )
    {
      v14 = this[1];
      v15 = (struct _LUID)*((_QWORD *)*this + 5);
      if ( *((_DWORD *)a3 + 8) )
      {
        PrimaryYUVRealization = CGlobalCompositionSurfaceInfo::CBindInfo::GetPrimaryYUVRealization((CGlobalCompositionSurfaceInfo::CBindInfo *)this);
        SubResource = CDxHandleYUVBitmapRealization::CreateSubResource(PrimaryYUVRealization, v15, a2, a3, v14, a5);
        v11 = SubResource;
        if ( SubResource >= 0 )
          goto LABEL_7;
        v19 = 1830;
      }
      else
      {
        SubResource = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))CDxHandleYUVBitmapRealization::Create)(
                        *((unsigned int *)this + 8),
                        v15,
                        a2,
                        a3,
                        v14,
                        a5);
        v11 = SubResource;
        if ( SubResource >= 0 )
          goto LABEL_7;
        v19 = 1818;
      }
      goto LABEL_19;
    }
    v11 = -2147024809;
    v19 = 1836;
LABEL_29:
    v16 = v11;
    goto LABEL_20;
  }
  v11 = CDxHandleAdvancedDirectFlipBitmapRealization::Create(
          *((unsigned int *)this + 8),
          *((_QWORD *)*this + 5),
          a2,
          a3,
          this[1],
          a5);
  if ( v11 < 0 )
  {
    LOBYTE(v18) = a4;
    SubResource = CDxHandleBitmapRealization::Create(
                    *((unsigned int *)this + 8),
                    *((_QWORD *)*this + 5),
                    a2,
                    a3,
                    v18,
                    a5);
    v11 = SubResource;
    if ( SubResource < 0 )
    {
      v19 = 1793;
LABEL_19:
      v16 = SubResource;
LABEL_20:
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032FBA8, 3u, v16, v19, 0LL);
      return (unsigned int)v11;
    }
  }
LABEL_7:
  if ( v23 && *a5 )
  {
    v21 = 0;
    v20 = (FastRegion::CRegion *)&v21;
    if ( v23 == -1 || (int)CRegion::TryAddRectangles(&v20, &v22, v23) < 0 )
      (*(void (__fastcall **)(char *))(*((_QWORD *)*a5 + 1) + 80LL))((char *)*a5 + 8);
    else
      (*(void (__fastcall **)(char *, FastRegion::CRegion **))(*((_QWORD *)*a5 + 1) + 72LL))((char *)*a5 + 8, &v20);
    FastRegion::CRegion::FreeMemory(&v20);
  }
  return (unsigned int)v11;
}
