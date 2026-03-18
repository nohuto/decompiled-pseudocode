/*
 * XREFs of ?RecordUse@CColorKeyBitmapRealization@@UEAAJPEAVCDrawingContext@@@Z @ 0x1802035C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::RecordUse(CColorKeyBitmapRealization *this, struct CDrawingContext *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 16LL))((char *)a2 + 24);
  v4 = *(_QWORD *)this;
  v9 = 0LL;
  v5 = (*(__int64 (__fastcall **)(CColorKeyBitmapRealization *, __int64, __int64 *))(v4 + 96))(this, v3, &v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\colorkeybitmaprealization.cpp",
      (const char *)(unsigned int)v5);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    return v6;
  }
  else
  {
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    return 0LL;
  }
}
