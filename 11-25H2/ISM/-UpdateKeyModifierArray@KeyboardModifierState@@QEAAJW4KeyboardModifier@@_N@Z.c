/*
 * XREFs of ?UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z @ 0x18002CBF8
 * Callers:
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18002BD80 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ @ 0x18002D23C (-InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall KeyboardModifierState::UpdateKeyModifierArray(__int64 a1, int a2, char a3)
{
  __int64 v4; // rcx
  unsigned __int64 i; // r10
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // ecx
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v17; // [rsp+38h] [rbp+10h]

  v17 = a2;
  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v7 = *((unsigned __int8 *)&v17 + i);
    v4 = 0x100000001B3LL * (v7 ^ v4);
  }
  v8 = v4 & *(_QWORD *)(a1 + 64);
  v9 = *(_QWORD *)(a1 + 40);
  v10 = 2 * v8;
  v11 = *(_QWORD *)(v9 + 8 * v10 + 8);
  if ( v11 == *(_QWORD *)(a1 + 24) )
  {
LABEL_8:
    v11 = 0LL;
  }
  else
  {
    v12 = *(_QWORD *)(v9 + 8 * v10);
    while ( a2 != *(_DWORD *)(v11 + 16) )
    {
      if ( v11 == v12 )
        goto LABEL_8;
      v11 = *(_QWORD *)(v11 + 8);
    }
  }
  if ( !v11 )
    v11 = *(_QWORD *)(a1 + 24);
  if ( v11 == *(_QWORD *)(a1 + 24) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x92,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\utilities\\keyboardmodifierstate\\lib\\ke"
                    "yboardmodifierstate.cpp",
      (const char *)0x80004005LL,
      v15);
    return 2147500037LL;
  }
  else
  {
    v13 = *(_DWORD *)(v11 + 20);
    if ( a3 )
    {
      ++v13;
      *(_DWORD *)(a1 + 80) |= a2;
    }
    else if ( v13 )
    {
      if ( !--v13 )
        *(_DWORD *)(a1 + 80) &= ~a2;
    }
    *(_DWORD *)(v11 + 20) = v13;
    return 0LL;
  }
}
