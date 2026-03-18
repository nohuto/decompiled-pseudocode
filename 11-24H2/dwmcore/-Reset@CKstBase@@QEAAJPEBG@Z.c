/*
 * XREFs of ?Reset@CKstBase@@QEAAJPEBG@Z @ 0x180250118
 * Callers:
 *     ?Initialize@CGlobalInputManager@@UEAAJXZ @ 0x1800ECFB0 (-Initialize@CGlobalInputManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Start@CKstBase@@AEAAJPEBG@Z @ 0x1800ED884 (-Start@CKstBase@@AEAAJPEBG@Z.c)
 */

__int64 __fastcall CKstBase::Reset(CKstBase *this, const unsigned __int16 *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( ((*((_QWORD *)this + 2) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    return 0LL;
  v2 = CKstBase::Start(this, a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x25,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
