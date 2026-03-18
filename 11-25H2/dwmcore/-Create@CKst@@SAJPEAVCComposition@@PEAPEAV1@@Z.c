/*
 * XREFs of ?Create@CKst@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1801BCAB0
 * Callers:
 *     ?Initialize@CGlobalInputManager@@UEAAJXZ @ 0x1801BCA10 (-Initialize@CGlobalInputManager@@UEAAJXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VCKst@@U?$default_delete@VCKst@@@std@@@std@@QEAA@XZ @ 0x18025AC20 (--1-$unique_ptr@VCKst@@U-$default_delete@VCKst@@@std@@@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKst::Create(struct CComposition *a1, struct CKst **a2)
{
  struct CKst *v4; // rax
  struct CKst *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CKst *v10; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = (struct CKst *)MIDL_user_allocate(0x40uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_QWORD *)v4 + 1) = 0LL;
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
    *(_QWORD *)v4 = &CKst::`vftable';
    *((_QWORD *)v4 + 6) = a1;
    v10 = v4;
    v6 = ((__int64 (__fastcall *)(struct CKst *))CKst::`vftable')(v4);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v10 = 0LL;
      v7 = 0;
      *a2 = v5;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kst.cpp",
        (const char *)(unsigned int)v6);
    }
    std::unique_ptr<CKst>::~unique_ptr<CKst>(&v10);
    return v7;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kst.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
