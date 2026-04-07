/*
 * XREFs of ?SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z @ 0x1800D61B8
 * Callers:
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x1801073F8 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCLinearGradientLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCLinearGradientLegacyMilBrushProxy@@@Z @ 0x1800AD454 (--$CreateProxy@VCLinearGradientLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCLinearGradientLeg.c)
 *     ?Update@CLinearGradientLegacyMilBrushProxy@@QEAAJNAEBUMilPoint2D@@0W4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x1800C5E3C (-Update@CLinearGradientLegacyMilBrushProxy@@QEAAJNAEBUMilPoint2D@@0W4Enum@MilColorInterpolationM.c)
 */

__int64 __fastcall CRectangleInstruction::SetLinearGradientFill(
        CRectangleInstruction *this,
        __int64 a2,
        const struct _D3DCOLORVALUE *a3,
        const struct _D3DCOLORVALUE *a4)
{
  CBaseObject *v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-98h]
  __int64 v12; // [rsp+28h] [rbp-90h]
  __int64 v13; // [rsp+30h] [rbp-88h]
  __int128 v14; // [rsp+50h] [rbp-68h] BYREF
  __int128 v15; // [rsp+60h] [rbp-58h] BYREF
  __int64 v16; // [rsp+70h] [rbp-48h] BYREF
  __int128 v17; // [rsp+78h] [rbp-40h]
  double v18; // [rsp+88h] [rbp-30h]
  __int128 v19; // [rsp+90h] [rbp-28h]

  v5 = (CBaseObject *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = *((_QWORD *)this + 3);
  if ( !v6 )
  {
    v7 = CCompositor::CreateProxy<CLinearGradientLegacyMilBrushProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
           (CBaseObject **)this + 3);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x6Bu);
      return v8;
    }
    v6 = *((_QWORD *)this + 3);
  }
  v16 = 0LL;
  v17 = xmmword_18012AFD0;
  v18 = DOUBLE_1_0;
  v14 = _xmm;
  v19 = xmmword_18012AFE0;
  v15 = 0LL;
  v9 = CLinearGradientLegacyMilBrushProxy::Update(v6, a2, (__int64)&v15, (__int64)&v14, v11, v12, v13, (__int64)&v16);
  v8 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x89u);
  return v8;
}
