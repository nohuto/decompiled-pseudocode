/*
 * XREFs of ?EnumerateCursorsForShell@SystemCursorService2@@AEAAJXZ @ 0x1800F83EC
 * Callers:
 *     ?Initialize@SystemCursorService2@@QEAAJK@Z @ 0x1800F86B4 (-Initialize@SystemCursorService2@@QEAAJK@Z.c)
 *     ?OnCursorCreated@SystemCursorService2@@UEAAJUCursorId@@UCursorCreateData@@@Z @ 0x1800F87B0 (-OnCursorCreated@SystemCursorService2@@UEAAJUCursorId@@UCursorCreateData@@@Z.c)
 *     ?ResetForNewShellInstance@SystemCursorService2@@UEAAJK@Z @ 0x1800F8F10 (-ResetForNewShellInstance@SystemCursorService2@@UEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SystemCursorService2::EnumerateCursorsForShell(SystemCursorService2 *this)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  _QWORD *i; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebp
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (_QWORD *)*((_QWORD *)this + 8);
  v3 = (_QWORD *)*v1;
  while ( 2 )
  {
    if ( v3 == v1 )
      return 0LL;
    v4 = (_QWORD *)*((_QWORD *)this + 24);
    for ( i = (_QWORD *)*v4; ; i = (_QWORD *)*i )
    {
      if ( i == v4 )
        goto LABEL_11;
      if ( i[3] == v3[2] )
        break;
    }
    v6 = v3[3];
    if ( *(_BYTE *)(v6 + 36) )
    {
LABEL_11:
      v3 = (_QWORD *)*v3;
      continue;
    }
    break;
  }
  v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 64LL);
  if ( !v7
    || (v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v7 + 8) + 24LL))(v7 + 8, v6 + 8), v9 = v8, v8 >= 0) )
  {
    *(_BYTE *)(v3[3] + 36LL) = 1;
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x137,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorcontroller2.cpp",
    (const char *)(unsigned int)v8);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1AD,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice2.cpp",
    (const char *)v9);
  return v9;
}
