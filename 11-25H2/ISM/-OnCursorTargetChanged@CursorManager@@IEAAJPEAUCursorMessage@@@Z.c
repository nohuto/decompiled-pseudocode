/*
 * XREFs of ?OnCursorTargetChanged@CursorManager@@IEAAJPEAUCursorMessage@@@Z @ 0x18015EB94
 * Callers:
 *     ?OnCursorMessage@CursorManager@@IEAAJPEAUCursorMessage@@@Z @ 0x18015E9D8 (-OnCursorMessage@CursorManager@@IEAAJPEAUCursorMessage@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCursorDefaultState@@YAJW4InputType@@PEAUCursorState@@@Z @ 0x18009BC10 (-GetCursorDefaultState@@YAJW4InputType@@PEAUCursorState@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CursorManager::OnCursorTargetChanged(CursorManager *this, struct CursorMessage *a2)
{
  int CursorDefaultState; // ebx
  __int64 v5; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v10 = 0LL;
  CursorDefaultState = GetCursorDefaultState(*((_DWORD *)a2 + 4), (__int64)&v10);
  if ( CursorDefaultState < 0 )
  {
    v5 = 224LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
      (const char *)(unsigned int)CursorDefaultState);
    return (unsigned int)CursorDefaultState;
  }
  v7 = *(_QWORD *)((char *)a2 + 4);
  *((_QWORD *)a2 + 2) = *((_QWORD *)&v10 + 1);
  CursorDefaultState = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 7) + 32LL))(
                         *((_QWORD *)this + 7),
                         v7,
                         *((_QWORD *)a2 + 2));
  if ( CursorDefaultState < 0 )
  {
    v5 = 227LL;
    goto LABEL_3;
  }
  v9 = *(_QWORD *)((char *)a2 + 4);
  *((_BYTE *)a2 + 16) = BYTE1(v10);
  LOBYTE(v8) = *((_BYTE *)a2 + 16);
  CursorDefaultState = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 7) + 16LL))(
                         *((_QWORD *)this + 7),
                         v9,
                         v8);
  if ( CursorDefaultState < 0 )
  {
    v5 = 230LL;
    goto LABEL_3;
  }
  return 0LL;
}
