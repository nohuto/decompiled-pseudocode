/*
 * XREFs of NtGdiGetRasterizerCaps @ 0x140337C90
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtGdiGetRasterizerCaps(char *a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int16 Src; // [rsp+40h] [rbp+8h] BYREF
  __int16 v8; // [rsp+42h] [rbp+Ah]
  __int16 v9; // [rsp+44h] [rbp+Ch]

  v2 = (unsigned int)a2;
  v4 = 0;
  if ( a1 && (_DWORD)a2 )
  {
    if ( (unsigned int)a2 >= 6 )
      v2 = 6LL;
    Src = 6;
    v5 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96);
    v8 = (*(_DWORD *)(v5 + 20368) != 0) + 2;
    v9 = *(_WORD *)(v5 + 20360);
    if ( (unsigned __int64)&a1[v2] > MmUserProbeAddress || &a1[v2] <= a1 || ((unsigned __int8)a1 & 3) != 0 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(a1, &Src, (unsigned int)v2);
    return 1;
  }
  return v4;
}
