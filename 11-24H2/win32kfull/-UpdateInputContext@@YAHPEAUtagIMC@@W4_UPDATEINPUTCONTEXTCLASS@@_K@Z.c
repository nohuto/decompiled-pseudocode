/*
 * XREFs of ?UpdateInputContext@@YAHPEAUtagIMC@@W4_UPDATEINPUTCONTEXTCLASS@@_K@Z @ 0x1401D0A9C
 * Callers:
 *     NtUserUpdateInputContext @ 0x1401D09F0 (NtUserUpdateInputContext.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 */

__int64 __fastcall UpdateInputContext(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  __int64 v7; // rax
  int v8; // ecx

  v4 = a2;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL) != *((_QWORD *)PtiCurrent(a1, a2) + 58) )
  {
    v8 = 5;
LABEL_10:
    UserSetLastError(v8);
    return 0LL;
  }
  if ( !v4 )
  {
    v7 = *(_QWORD *)(a1 + 40);
    if ( !*(_QWORD *)(v7 + 24) )
    {
      *(_QWORD *)(v7 + 24) = a3;
      return 1LL;
    }
    v8 = 1247;
    goto LABEL_10;
  }
  if ( v4 == 1 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 32LL) = a3;
    return 1LL;
  }
  return 0LL;
}
