/*
 * XREFs of sub_1400015F0 @ 0x1400015F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000170C @ 0x14000170C (sub_14000170C.c)
 *     sub_140001A00 @ 0x140001A00 (sub_140001A00.c)
 */

_UNKNOWN **__fastcall sub_1400015F0(__int64 a1, __int64 a2, char a3, char a4)
{
  _UNKNOWN **result; // rax
  bool v7; // zf
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _UNKNOWN **v14; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a3 || a4 )
  {
    v7 = *(_BYTE *)(a1 + 125) == 0;
    result = *(_UNKNOWN ***)a2;
    v8 = *(_DWORD *)(a2 + 28);
    v9 = *(_DWORD *)(a2 + 24);
    v10 = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(a1 + 80) = *(_QWORD *)a2;
    if ( !v7 )
    {
      if ( *(_BYTE *)(a2 + 48) )
        v14 = 0LL;
      else
        v14 = *(_UNKNOWN ***)a2;
      result = (_UNKNOWN **)sub_14000170C(v10 + 128, v14);
    }
    if ( *(_BYTE *)(a1 + 126) )
    {
      v11 = sub_140001A00(a1, v9);
      result = (_UNKNOWN **)sub_14000170C(v10 + 152, v11);
    }
    if ( *(_BYTE *)(a1 + 127) )
    {
      v12 = sub_140001A00(a1, v8);
      result = (_UNKNOWN **)sub_14000170C(v10 + 176, v12);
    }
    if ( *(_BYTE *)(a1 + 130) )
    {
      v13 = sub_140001A00(a1, *(unsigned int *)(a2 + 32));
      result = (_UNKNOWN **)sub_14000170C(v10 + 200, v13);
    }
    if ( *(_BYTE *)(a1 + 128) )
      return (_UNKNOWN **)sub_14000170C(v10 + 416, 255 * *(_DWORD *)(a2 + 36) / 0x64u);
  }
  return result;
}
