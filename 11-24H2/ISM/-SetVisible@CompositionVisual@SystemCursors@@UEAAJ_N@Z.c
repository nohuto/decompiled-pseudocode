/*
 * XREFs of ?SetVisible@CompositionVisual@SystemCursors@@UEAAJ_N@Z @ 0x18015FEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Commit@WindowsCompositionGlobals@SystemCursors@@QEAAJXZ @ 0x18015FC10 (-Commit@WindowsCompositionGlobals@SystemCursors@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SystemCursors::CompositionVisual::SetVisible(SystemCursors::CompositionVisual *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 152LL))(*((_QWORD *)this + 2));
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( *((_BYTE *)this + 33)
      && (v5 = SystemCursors::WindowsCompositionGlobals::Commit(*((SystemCursors::WindowsCompositionGlobals **)this + 1)),
          v6 = v5,
          v5 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorwc.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorwc.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
