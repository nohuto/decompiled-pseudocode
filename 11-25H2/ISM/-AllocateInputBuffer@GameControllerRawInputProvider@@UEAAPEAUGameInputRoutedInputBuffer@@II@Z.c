/*
 * XREFs of ?AllocateInputBuffer@GameControllerRawInputProvider@@UEAAPEAUGameInputRoutedInputBuffer@@II@Z @ 0x180061220
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E558 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800CBEC8 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

struct GameInputRoutedInputBuffer *__fastcall GameControllerRawInputProvider::AllocateInputBuffer(
        GameControllerRawInputProvider *this,
        int a2,
        unsigned int a3)
{
  unsigned int v5; // ebx
  _DWORD *v6; // rax
  unsigned int v7; // r8d
  const char *v8; // r9
  char *v9; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = a3 + 88;
  v6 = operator new(a3 + 88LL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v6[6] = v5;
    v9 = (char *)(v6 + 22);
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *((_QWORD *)v6 + 6) = 0LL;
    *((_QWORD *)v6 + 7) = 0LL;
    *((_QWORD *)v6 + 8) = 0LL;
    *((_QWORD *)v6 + 9) = 0LL;
    *((_BYTE *)v6 + 80) = 0;
    v6[2] = 0;
    *((_QWORD *)v6 + 2) = 0LL;
    *v6 = 64;
    v6[1] = a2;
    memset_0(v6 + 22, 0, a3);
    return (struct GameInputRoutedInputBuffer *)v9;
  }
  else
  {
    wil::details::in1diag3::_Log_NullAlloc(retaddr, (void *)0x138, v7, v8);
    return 0LL;
  }
}
