/*
 * XREFs of PerfControlCpc @ 0x1400019D0
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrEx @ 0x140001BD0 (WriteGenAddrEx.c)
 *     PerformanceFromPercentage @ 0x140002260 (PerformanceFromPercentage.c)
 */

_UNKNOWN **__fastcall PerfControlCpc(__int64 a1, __int64 a2, char a3, char a4)
{
  _UNKNOWN **result; // rax
  bool v7; // zf
  unsigned int v8; // r14d
  __int64 v9; // rsi
  __int64 v10; // rbp
  unsigned __int64 v11; // r8
  _UNKNOWN **v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a3 || a4 )
  {
    v7 = *(_BYTE *)(a1 + 125) == 0;
    result = *(_UNKNOWN ***)a2;
    v8 = *(_DWORD *)(a2 + 28);
    v9 = *(unsigned int *)(a2 + 24);
    v10 = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(a1 + 80) = *(_QWORD *)a2;
    if ( !v7 )
    {
      if ( *(_BYTE *)(a2 + 48) )
        v12 = 0LL;
      else
        v12 = *(_UNKNOWN ***)a2;
      result = (_UNKNOWN **)WriteGenAddrEx(v10 + 128, v12);
    }
    if ( *(_BYTE *)(a1 + 126) )
    {
      if ( (_DWORD)v9 == *(_DWORD *)(a1 + 100) )
      {
        v11 = *(_QWORD *)(a1 + 40);
      }
      else if ( (_DWORD)v9 == 100 )
      {
        v11 = *(_QWORD *)(a1 + 48);
      }
      else if ( *(_BYTE *)(a1 + 131) && (_DWORD)v9 == *(_DWORD *)(a1 + 116) )
      {
        v11 = *(_QWORD *)(a1 + 88);
      }
      else if ( (_DWORD)v9 == *(_DWORD *)(a1 + 108) )
      {
        v11 = *(_QWORD *)(a1 + 56);
      }
      else if ( (_DWORD)v9 == *(_DWORD *)(a1 + 112) )
      {
        v11 = *(_QWORD *)(a1 + 64);
      }
      else
      {
        v11 = (*(_QWORD *)(a1 + 48) * v9 + 50) / 0x64uLL;
      }
      result = (_UNKNOWN **)WriteGenAddrEx(v10 + 152, v11);
    }
    if ( *(_BYTE *)(a1 + 127) )
    {
      v13 = PerformanceFromPercentage(a1, v8);
      result = (_UNKNOWN **)WriteGenAddrEx(v10 + 176, v13);
    }
    if ( *(_BYTE *)(a1 + 130) )
    {
      v14 = PerformanceFromPercentage(a1, *(unsigned int *)(a2 + 32));
      result = (_UNKNOWN **)WriteGenAddrEx(v10 + 200, v14);
    }
    if ( *(_BYTE *)(a1 + 128) )
      return (_UNKNOWN **)WriteGenAddrEx(v10 + 416, 255 * *(_DWORD *)(a2 + 36) / 0x64u);
  }
  return result;
}
