/*
 * XREFs of ?GetDefaultCursor@DWMCursorBroker@@UEAAJPEAPEAUICursor@@@Z @ 0x180069770
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DWMCursorBroker::GetDefaultCursor(DWMCursorBroker *this, struct ICursor **a2)
{
  __int64 v4; // r8
  unsigned __int64 i; // r9
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  struct ICursor *v10; // rbx
  __int64 result; // rax
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h]

  v4 = 0xCBF29CE484222325uLL;
  v14 = 1LL;
  for ( i = 0LL; i < 4; ++i )
  {
    v6 = *((unsigned __int8 *)&v14 + i);
    v4 = 0x100000001B3LL * (v6 ^ v4);
  }
  v7 = *((_QWORD *)this + 9);
  v8 = *(_QWORD *)(v7 + 16 * (v4 & *((_QWORD *)this + 12)) + 8);
  if ( v8 == *((_QWORD *)this + 7) )
  {
LABEL_12:
    v8 = 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(v7 + 16 * (v4 & *((_QWORD *)this + 12)));
    while ( *(_DWORD *)(v8 + 16) != 1 )
    {
      if ( v8 == v9 )
        goto LABEL_12;
      v8 = *(_QWORD *)(v8 + 8);
    }
  }
  if ( !v8 || v8 == *((_QWORD *)this + 7) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AF,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x8000FFFFLL,
      v12);
    return 2147549183LL;
  }
  else
  {
    v10 = *(struct ICursor **)(v8 + 24);
    (*(void (__fastcall **)(struct ICursor *))(*(_QWORD *)v10 + 8LL))(v10);
    result = 0LL;
    *a2 = v10;
  }
  return result;
}
