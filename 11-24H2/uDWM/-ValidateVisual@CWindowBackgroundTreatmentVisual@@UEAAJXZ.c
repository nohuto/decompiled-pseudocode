/*
 * XREFs of ?ValidateVisual@CWindowBackgroundTreatmentVisual@@UEAAJXZ @ 0x180072760
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180028E60 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?GetTreatmentBrush@CWindowBackgroundTreatmentVisual@@CAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x180072890 (-GetTreatmentBrush@CWindowBackgroundTreatmentVisual@@CAPEAUICompositionBrush@Composition@UI@Wind.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowBackgroundTreatmentVisual::ValidateVisual(CWindowBackgroundTreatmentVisual *this)
{
  struct Windows::UI::Composition::ICompositionBrush *TreatmentBrush; // rsi
  __int64 v3; // r8
  int v4; // eax
  unsigned int v5; // edi
  int v7; // eax
  int v8; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  CVisual::ValidateVisual(this);
  if ( (*((_DWORD *)this + 8) & 0x1000) != 0 )
  {
    TreatmentBrush = CWindowBackgroundTreatmentVisual::GetTreatmentBrush();
    v3 = *((_QWORD *)this + 2);
    v11 = 0LL;
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**(_QWORD **)(*(_QWORD *)(v3 + 16) + 16LL)
                                                                      + 112LL))(
           *(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL),
           *(unsigned int *)(*(_QWORD *)(v3 + 16) + 24LL),
           &GUID_01dc794b_4ff5_4491_9942_b9e7b8893be4,
           &v11);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x78,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\Resource.h",
        (const char *)(unsigned int)v4,
        v8);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowbackgroundtreatmentvisual.cpp",
        (const char *)v5,
        v9);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      return v5;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, struct Windows::UI::Composition::ICompositionBrush *))(*(_QWORD *)v11 + 48LL))(
           v11,
           TreatmentBrush);
    v5 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowbackgroundtreatmentvisual.cpp",
        (const char *)(unsigned int)v7,
        v8);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      return v5;
    }
    *((_DWORD *)this + 8) &= ~0x1000u;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return 0LL;
}
