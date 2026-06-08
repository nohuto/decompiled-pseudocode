/*
 * XREFs of sub_140009400 @ 0x140009400
 * Callers:
 *     <none>
 * Callees:
 *     sub_140001A00 @ 0x140001A00 (sub_140001A00.c)
 *     sub_140008E98 @ 0x140008E98 (sub_140008E98.c)
 */

_UNKNOWN **__fastcall sub_140009400(_BYTE *a1, __int64 a2, char a3, char a4)
{
  _UNKNOWN **result; // rax
  bool v7; // zf
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  char *v10; // rsi
  unsigned int v11; // ecx
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a3 || a4 )
  {
    v7 = a1[125] == 0;
    result = *(_UNKNOWN ***)a2;
    v8 = *(_DWORD *)(a2 + 28);
    v9 = *(_DWORD *)(a2 + 24);
    v10 = (char *)*((_QWORD *)a1 + 18);
    *((_QWORD *)a1 + 10) = *(_QWORD *)a2;
    if ( !v7 )
    {
      v11 = *(_DWORD *)(*(_QWORD *)a1 + 84LL);
      if ( *(_BYTE *)(a2 + 48) )
        v12 = 0LL;
      else
        v12 = *(_QWORD *)a2;
      result = (_UNKNOWN **)sub_140008E98(v11, v10 + 128, v12);
    }
    if ( a1[126] )
    {
      v13 = sub_140001A00((__int64)a1, v9);
      result = (_UNKNOWN **)sub_140008E98(*(_DWORD *)(*(_QWORD *)a1 + 84LL), v10 + 152, v13);
    }
    if ( a1[127] )
    {
      v14 = sub_140001A00((__int64)a1, v8);
      result = (_UNKNOWN **)sub_140008E98(*(_DWORD *)(*(_QWORD *)a1 + 84LL), v10 + 176, v14);
    }
    if ( a1[130] )
    {
      v15 = sub_140001A00((__int64)a1, *(_DWORD *)(a2 + 32));
      result = (_UNKNOWN **)sub_140008E98(*(_DWORD *)(*(_QWORD *)a1 + 84LL), v10 + 200, v15);
    }
    if ( a1[128] )
      return (_UNKNOWN **)sub_140008E98(
                            *(_DWORD *)(*(_QWORD *)a1 + 84LL),
                            v10 + 416,
                            255 * *(_DWORD *)(a2 + 36) / 0x64u);
  }
  return result;
}
