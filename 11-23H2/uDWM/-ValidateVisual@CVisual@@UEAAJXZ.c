/*
 * XREFs of ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180045C90
 * Callers:
 *     ?ValidateVisual@CWindowBackgroundTreatmentVisual@@UEAAJXZ @ 0x1800073A0 (-ValidateVisual@CWindowBackgroundTreatmentVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CDWriteText@@UEAAJXZ @ 0x180030C40 (-ValidateVisual@CDWriteText@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18003DE40 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x180045C30 (-ValidateVisual@CButton@@UEAAJXZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x1800C6DC0 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x1801058F8 (-UpdateTransform@CVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CVisual::ValidateVisual(CVisual *this)
{
  int v1; // eax
  int v3; // eax
  unsigned int v4; // edi
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  unsigned int v11; // edi
  int updated; // eax
  unsigned int v13; // edi
  unsigned int v14; // [rsp+20h] [rbp-18h]
  unsigned int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_DWORD *)this + 22);
  if ( (v1 & 2) != 0 )
  {
    v3 = (*(__int64 (__fastcall **)(CVisual *, _QWORD))(*(_QWORD *)this + 96LL))(this, 0LL);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x81,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
        (const char *)(unsigned int)v3,
        v14);
      return v4;
    }
    *((_DWORD *)this + 22) &= ~2u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 8) != 0 )
  {
    v6 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 184LL))(this);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x88,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
        (const char *)(unsigned int)v6,
        v14);
      return v7;
    }
    *((_DWORD *)this + 22) &= ~8u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 0x10) != 0 )
  {
    updated = CVisual::UpdateTransform(this);
    v13 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8F,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
        (const char *)(unsigned int)updated,
        v14);
      return v13;
    }
    *((_DWORD *)this + 22) &= ~0x10u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 0x20) != 0 )
  {
    v10 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 168LL))(this);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x96,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
        (const char *)(unsigned int)v10,
        v14);
      return v11;
    }
    *((_DWORD *)this + 22) &= ~0x20u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 0x40) == 0 )
    return 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)
                                                         + 352LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
         *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
         (char *)this + 204);
  v9 = v8;
  if ( v8 >= 0 )
  {
    *((_DWORD *)this + 22) &= ~0x40u;
    return 0LL;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x3B1u, 0LL);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9D,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
    (const char *)v9,
    v15);
  return v9;
}
