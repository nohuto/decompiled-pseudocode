/*
 * XREFs of ?ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSURFACE@@@Z @ 0x180133B60
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18003DB50 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x180079C30 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F680 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BF1E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800C0810 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?FindCommonRenderStrategy@CSurfaceBrush@@KAPEBVCSurfaceRenderStrategy@1@PEBVCResource@@@Z @ 0x180134180 (-FindCommonRenderStrategy@CSurfaceBrush@@KAPEBVCSurfaceRenderStrategy@1@PEBVCResource@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceBrush::ProcessSetSurface(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SURFACEBRUSH_SETSURFACE *a3)
{
  unsigned int v3; // r9d
  __int64 v5; // rax
  CMILRefCountImpl *v6; // r15
  void **CommonRenderStrategy; // r13
  float v8; // xmm7_4
  float v9; // xmm4_4
  float v10; // xmm12_4
  float v11; // xmm11_4
  float v12; // xmm8_4
  float v13; // xmm6_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm10_4
  float v21; // xmm2_4
  float v22; // xmm9_4
  float v23; // xmm1_4
  float v24; // xmm5_4
  int v25; // ebx
  char v26; // r12
  char v27; // si
  struct D2D_RECT_F *v28; // rcx
  unsigned int v29; // edx
  unsigned __int64 Count; // rax
  CPtrArrayBase *v32; // rcx
  int v33; // eax
  int v34; // edi
  __int64 (__fastcall *v35)(CMILRefCountImpl *); // rax
  const struct D2D_RECT_F *v36; // [rsp+38h] [rbp-D0h]
  struct D2D_RECT_F *v37[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v38; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v39[5]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v40[16]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-68h] BYREF

  v3 = *((_DWORD *)a3 + 2);
  if ( v3 && v3 < *((_DWORD *)a2 + 7) && (v5 = *((_QWORD *)a2 + 5), *(_DWORD *)(*((_DWORD *)a2 + 6) * v3 + v5)) )
    v6 = *(CMILRefCountImpl **)(*((_DWORD *)a2 + 6) * v3 + v5 + 8);
  else
    v6 = 0LL;
  CommonRenderStrategy = 0LL;
  v8 = FLOAT_N3_4028235e38;
  v9 = FLOAT_3_4028235e38;
  v10 = (float)*((int *)a3 + 3);
  v36 = 0LL;
  v11 = (float)*((int *)a3 + 4);
  v12 = (float)*((int *)a3 + 5);
  v13 = (float)*((int *)a3 + 6);
  *(float *)v37 = v10;
  *(struct D2D_RECT_F **)((char *)v37 + 4) = (struct D2D_RECT_F *)__PAIR64__(LODWORD(v12), LODWORD(v11));
  *((float *)&v37[1] + 1) = v13;
  v38 = 0LL;
  if ( *((_BYTE *)a3 + 44) )
  {
    CommonRenderStrategy = &off_1802FA2F0;
    v14 = (float)*((int *)a3 + 7);
    v15 = (float)*((int *)a3 + 8);
    v16 = (float)*((int *)a3 + 9);
    v17 = (float)*((int *)a3 + 10);
    if ( v14 <= -3.4028235e38 )
    {
      *(float *)&v38 = FLOAT_N3_4028235e38;
      v18 = FLOAT_N3_4028235e38;
    }
    else
    {
      v18 = v14 - 0.5;
      *(float *)&v38 = v18;
    }
    if ( v15 <= -3.4028235e38 )
    {
      *((float *)&v38 + 1) = FLOAT_N3_4028235e38;
      v19 = FLOAT_N3_4028235e38;
      v20 = FLOAT_N3_4028235e38;
    }
    else
    {
      v19 = v15 - 0.5;
      *((float *)&v38 + 1) = v19;
      v20 = v19;
    }
    if ( v16 >= 3.4028235e38 )
    {
      *((float *)&v38 + 2) = FLOAT_3_4028235e38;
      v21 = FLOAT_3_4028235e38;
      v22 = FLOAT_3_4028235e38;
    }
    else
    {
      v21 = v16 + 0.5;
      *((float *)&v38 + 2) = v21;
      v22 = v21;
    }
    if ( v17 >= 3.4028235e38 )
    {
      *((float *)&v38 + 3) = FLOAT_3_4028235e38;
      v23 = FLOAT_3_4028235e38;
      v24 = FLOAT_3_4028235e38;
    }
    else
    {
      v23 = v17 + 0.5;
      *((float *)&v38 + 3) = v23;
      v24 = v23;
    }
    if ( v10 > v18 )
    {
      v18 = v10;
      *(float *)&v38 = v10;
    }
    if ( v11 > v20 )
    {
      v19 = v11;
      v20 = v11;
      *((float *)&v38 + 1) = v11;
    }
    if ( v22 > v12 )
    {
      v21 = v12;
      v22 = v12;
      *((float *)&v38 + 2) = v12;
    }
    if ( v24 > v13 )
    {
      *((float *)&v38 + 3) = v13;
      v23 = v13;
      v24 = v13;
    }
    if ( v22 <= v18 || v24 <= v20 )
    {
      v38 = 0uLL;
    }
    else if ( (v18 != v10 || v19 != v11 || v21 != v12 || v23 != v13)
           && (v21 > v18 && v23 > v19 || v12 > v10 && v13 > v11)
           && ((v18 > -3.4028235e38 || v21 < 3.4028235e38) && (v19 > -3.4028235e38 || v23 < 3.4028235e38)
            || !TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite((float *)v37)) )
    {
      v36 = (const struct D2D_RECT_F *)&v38;
    }
  }
  v25 = 0;
  v26 = 0;
  v27 = 0;
  if ( v6 != this[16] )
  {
    v27 = 1;
    if ( CommonRenderStrategy || (CommonRenderStrategy = (void **)CSurfaceBrush::FindCommonRenderStrategy(v6)) != 0LL )
    {
      if ( !v6 )
      {
LABEL_32:
        CResource::UnRegisterNotifierInternal((CResource *)this, this[16]);
        this[16] = v6;
        this[17] = (struct CResource *)CommonRenderStrategy;
        if ( v12 <= v10 || v13 <= v11 )
          v26 = 1;
        v9 = FLOAT_3_4028235e38;
        v8 = FLOAT_N3_4028235e38;
        goto LABEL_35;
      }
      Count = CPtrArray<CVisual>::GetCount((_QWORD *)v6 + 4);
      v33 = CPtrArrayBase::InsertAt(v32, (unsigned __int64)this, Count);
      v34 = v33;
      v25 = v33;
      if ( v33 >= 0 )
      {
        v35 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v6 + 8LL);
        if ( v35 == CMILRefCountImpl::AddReference )
          CMILRefCountImpl::AddReference(v6);
        else
          v35(v6);
        goto LABEL_32;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, 0xD9u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v34, 0x160u, 0LL);
    }
    else
    {
      v25 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x15Bu, 0LL);
    }
LABEL_70:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0xCAu, 0LL);
    return (unsigned int)v25;
  }
LABEL_35:
  v28 = (struct D2D_RECT_F *)(this + 22);
  if ( (v10 != *((float *)this + 44)
     || v11 != *((float *)this + 45)
     || v12 != *((float *)this + 46)
     || v13 != *((float *)this + 47))
    && (v12 > v10 && v13 > v11 || !IsEmpty(v28))
    && ((v8 < v10 || v12 < v9) && (v8 < v11 || v13 < v9)
     || !TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(&v28->left)) )
  {
    if ( (float)(v12 - v10) != (float)(*((float *)this + 46) - v28->left)
      || (float)(v13 - v11) != (float)(*((float *)this + 47) - *((float *)this + 45)) )
    {
      v26 = 1;
    }
    v27 = 1;
    *v28 = *(struct D2D_RECT_F *)v37;
  }
  if ( v26 || v27 || v36 )
  {
    v39[1] = 0LL;
    v41 = 0LL;
    v39[0] = &CRectanglesShape::`vftable';
    v39[2] = v40;
    v39[3] = v40;
    v39[4] = &v41;
    if ( v26 )
    {
      v29 = 0;
    }
    else
    {
      if ( v36 )
      {
        CRectanglesShape::SetSingleRect((CRectanglesShape *)v39, v36, (__int64)a3);
        this[24] = (struct CResource *)v39;
      }
      v29 = v27 != 0 ? 6 : 1;
    }
    CBrush::NotifyOnChanged((__int64)this, v29, (__int64)this);
    this[24] = 0LL;
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v39);
  }
  if ( v25 < 0 )
    goto LABEL_70;
  return (unsigned int)v25;
}
