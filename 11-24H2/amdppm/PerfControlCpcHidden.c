/*
 * XREFs of PerfControlCpcHidden @ 0x1400068F0
 * Callers:
 *     <none>
 * Callees:
 *     PerformanceFromPercentage @ 0x140002260 (PerformanceFromPercentage.c)
 *     WriteGenAddrHiddenEx @ 0x140003D74 (WriteGenAddrHiddenEx.c)
 */

char __fastcall PerfControlCpcHidden(__int64 a1, __int64 a2, char a3, char a4)
{
  _UNKNOWN **v4; // rax
  bool v7; // zf
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  char *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v4 = &retaddr;
  if ( a3 || a4 )
  {
    v7 = *(_BYTE *)(a1 + 125) == 0;
    v4 = *(_UNKNOWN ***)a2;
    v8 = *(_DWORD *)(a2 + 28);
    v9 = *(_DWORD *)(a2 + 24);
    v10 = *(char **)(a1 + 144);
    *(_QWORD *)(a1 + 80) = *(_QWORD *)a2;
    if ( !v7 )
    {
      v11 = *(unsigned int *)(*(_QWORD *)a1 + 84LL);
      if ( *(_BYTE *)(a2 + 48) )
        v12 = 0LL;
      else
        v12 = *(_QWORD *)a2;
      LOBYTE(v4) = WriteGenAddrHiddenEx(v11, v10 + 128, v12);
    }
    if ( *(_BYTE *)(a1 + 126) )
    {
      v13 = PerformanceFromPercentage(a1, v9);
      LOBYTE(v4) = WriteGenAddrHiddenEx(*(unsigned int *)(*(_QWORD *)a1 + 84LL), v10 + 152, v13);
    }
    if ( *(_BYTE *)(a1 + 127) )
    {
      v14 = PerformanceFromPercentage(a1, v8);
      LOBYTE(v4) = WriteGenAddrHiddenEx(*(unsigned int *)(*(_QWORD *)a1 + 84LL), v10 + 176, v14);
    }
    if ( *(_BYTE *)(a1 + 130) )
    {
      v15 = PerformanceFromPercentage(a1, *(_DWORD *)(a2 + 32));
      LOBYTE(v4) = WriteGenAddrHiddenEx(*(unsigned int *)(*(_QWORD *)a1 + 84LL), v10 + 200, v15);
    }
    if ( *(_BYTE *)(a1 + 128) )
      LOBYTE(v4) = WriteGenAddrHiddenEx(
                     *(unsigned int *)(*(_QWORD *)a1 + 84LL),
                     v10 + 416,
                     255 * *(_DWORD *)(a2 + 36) / 0x64u);
  }
  return (char)v4;
}
