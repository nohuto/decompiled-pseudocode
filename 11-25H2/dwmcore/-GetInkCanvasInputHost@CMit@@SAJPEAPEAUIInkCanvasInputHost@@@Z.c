/*
 * XREFs of ?GetInkCanvasInputHost@CMit@@SAJPEAPEAUIInkCanvasInputHost@@@Z @ 0x18026370C
 * Callers:
 *     ??1CDelegatedInkCanvas@@EEAA@XZ @ 0x1802A302C (--1CDelegatedInkCanvas@@EEAA@XZ.c)
 *     ?CreatePointQueue@CDelegatedInkCanvas@@AEAAJXZ @ 0x1802A33A4 (-CreatePointQueue@CDelegatedInkCanvas@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMit::GetInkCanvasInputHost(struct IInkCanvasInputHost **a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (**(__int64 (__fastcall ***)(struct ISystemInputHost *, GUID *, struct IInkCanvasInputHost **))CMit::s_pSystemInputHost)(
         CMit::s_pSystemInputHost,
         &GUID_b475ea0e_60ae_4626_a1ff_4a68aae4e3c2,
         a1);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\mit.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
