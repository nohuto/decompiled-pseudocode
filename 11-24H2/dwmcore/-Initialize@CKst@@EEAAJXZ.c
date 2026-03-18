/*
 * XREFs of ?Initialize@CKst@@EEAAJXZ @ 0x1802B76E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeMmcssTask@CKst@@AEAAJXZ @ 0x180224A10 (-InitializeMmcssTask@CKst@@AEAAJXZ.c)
 *     ?Initialize@CKstBase@@MEAAJXZ @ 0x1802B7790 (-Initialize@CKstBase@@MEAAJXZ.c)
 */

__int64 __fastcall CKst::Initialize(CKst *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CKstBase::Initialize(this);
  if ( v2 < 0 )
  {
    v3 = 47LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kst.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = CKst::InitializeMmcssTask(this);
  if ( v2 < 0 )
  {
    v3 = 50LL;
    goto LABEL_3;
  }
  return 0LL;
}
