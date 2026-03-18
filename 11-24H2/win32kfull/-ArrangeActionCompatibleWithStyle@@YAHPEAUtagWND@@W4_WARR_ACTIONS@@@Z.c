/*
 * XREFs of ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1402A5524
 * Callers:
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402A7510 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 * Callees:
 *     ?IsGhostWindowClass@@YA_NPEBUtagWND@@@Z @ 0x14016DFE0 (-IsGhostWindowClass@@YA_NPEBUtagWND@@@Z.c)
 */

__int64 __fastcall ArrangeActionCompatibleWithStyle(const struct tagWND *a1, __int64 a2)
{
  char *v2; // r8
  unsigned int v4; // ebx
  int v6; // edx
  int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rdx
  bool v10; // zf
  __int64 v11; // rcx

  v2 = (char *)*((_QWORD *)a1 + 5);
  v4 = 1;
  if ( v2[24] < 0 )
    return 0LL;
  if ( (_DWORD)a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( !v7 )
      {
        if ( (v2[31] & 1) == 0 || (v2[30] & 4) != 0 )
          return v4;
        return 0;
      }
      v8 = (unsigned int)(v7 - 1);
      if ( (_DWORD)v8 )
      {
        v9 = (unsigned int)(v8 - 1);
        if ( (unsigned int)v9 <= 1 )
          return !IsGhostWindowClass(a1, v9);
        return v4;
      }
      if ( (v2[30] & 4) == 0 )
        return 0;
      v10 = !IsGhostWindowClass(a1, v8);
    }
    else
    {
      if ( (v2[30] & 2) == 0 )
        return 0;
      v10 = (v2[31] & 0x20) == 0;
    }
  }
  else
  {
    if ( IsGhostWindowClass(a1, a2) )
      return 0;
    v11 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v11 + 30) & 1) == 0 )
      return 0;
    v10 = (*(_BYTE *)(v11 + 31) & 1) == 0;
  }
  if ( !v10 )
    return 0;
  return v4;
}
