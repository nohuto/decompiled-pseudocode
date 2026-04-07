/*
 * XREFs of ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x1800A14F8
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18002D2A0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180050650 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180037010 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@K_NPEBN@Z @ 0x1800A0DAC (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@K_NPEBN@Z.c)
 */

__int64 __fastcall CAccent::_UpdateAcrylicBlurBehind(CAccent *this)
{
  unsigned int v1; // edi
  struct CVisual *v3; // rdx
  CBaseObject *v4; // rcx
  unsigned int v5; // r8d
  int updated; // eax
  struct CVisual *v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  int inserted; // eax
  int v12; // [rsp+20h] [rbp-18h]

  v1 = 0;
  if ( *((_QWORD *)this + 43) && *((_BYTE *)this + 381) )
  {
    CRenderDataVisual::ClearInstructions(this);
    v3 = (struct CVisual *)*((_QWORD *)this + 41);
    if ( v3 )
    {
      VisualCollection::Remove((CAccent *)((char *)this + 32), v3);
      v4 = (CBaseObject *)*((_QWORD *)this + 41);
      if ( v4 )
      {
        CBaseObject::Release(v4);
        *((_QWORD *)this + 41) = 0LL;
      }
    }
    *(_OWORD *)(*((_QWORD *)this + 43) + 360LL) = *(_OWORD *)((char *)this + 584);
    if ( *((_DWORD *)this + 72) == 3 )
      v5 = 0;
    else
      v5 = *((_DWORD *)this + 74);
    updated = CAccentAcrylicBlurBehind::UpdateAcrylicBlurBehind(
                *((CAccentAcrylicBlurBehind **)this + 43),
                (CAccent *)((char *)this + 288),
                v5,
                1,
                0LL);
    v1 = updated;
    if ( updated >= 0 )
    {
      v7 = (struct CVisual *)*((_QWORD *)this + 43);
      v8 = *((_QWORD *)v7 + 3);
      if ( (CAccent *)v8 != this )
      {
        if ( v8 && (v9 = VisualCollection::Remove((VisualCollection *)(v8 + 32), v7), v1 = v9, v9 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x484u);
        }
        else
        {
          inserted = VisualCollection::InsertRelative(
                       (CAccent *)((char *)this + 32),
                       *((_QWORD *)this + 43),
                       0LL,
                       0,
                       v12);
          v1 = inserted;
          if ( inserted < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x486u);
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x47Cu);
    }
  }
  return v1;
}
