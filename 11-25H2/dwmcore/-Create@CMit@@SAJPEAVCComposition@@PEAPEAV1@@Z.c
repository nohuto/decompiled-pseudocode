/*
 * XREFs of ?Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1801BD204
 * Callers:
 *     ?Initialize@CInputManager@@UEAAJXZ @ 0x1801BCB80 (-Initialize@CInputManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CGlobalMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180254910 (-Create@CGlobalMit@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CMit::Create(struct CComposition *a1, struct CMit **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CGlobalMit *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v3 = CGlobalMit::Create(a1, &v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a2 = v7;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\globalmit.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
