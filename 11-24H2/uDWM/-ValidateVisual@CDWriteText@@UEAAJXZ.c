/*
 * XREFs of ?ValidateVisual@CDWriteText@@UEAAJXZ @ 0x1800351B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180028E60 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?CreateTextBrush@CDWriteText@@IEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x1800352FC (-CreateTextBrush@CDWriteText@@IEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1838 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDWriteText::ValidateVisual(CDWriteText *this)
{
  unsigned int *v2; // rbx
  int v3; // ebp
  int v4; // eax
  unsigned int v5; // esi
  unsigned int *v6; // rsi
  int v7; // eax
  unsigned int *v8; // r14
  int v9; // eax
  unsigned int v10; // edi
  struct Windows::UI::Composition::ICompositionBrush *v11; // rcx
  struct Windows::UI::Composition::ICompositionBrush *v13; // rcx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::UI::Composition::ICompositionBrush *v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = (unsigned int *)((char *)this + 32);
  v3 = *((_DWORD *)this + 8) & 2;
  v4 = CVisual::ValidateVisual(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD6,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v4,
      v14);
    return v5;
  }
  else
  {
    if ( v3 )
    {
      v6 = v2;
    }
    else
    {
      if ( (*v2 & 0x1000) == 0 )
        return 0LL;
      v6 = (unsigned int *)((char *)this + 32);
    }
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
    v7 = CDWriteText::CreateTextBrush(this, &v16);
    v8 = v2;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xDB,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
        (const char *)(unsigned int)v7,
        v14);
      v8 = v6;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::UI::Composition::ICompositionBrush *))(**((_QWORD **)this + 18)
                                                                                                 + 56LL))(
           *((_QWORD *)this + 18),
           v16);
    v10 = v9;
    if ( v9 >= 0 )
    {
      *v8 = *v2 & 0xFFFFEFFF;
      v11 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionBrush *))(*(_QWORD *)v11 + 16LL))(v11);
      }
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDC,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v9,
      v14);
    v13 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionBrush *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    return v10;
  }
}
