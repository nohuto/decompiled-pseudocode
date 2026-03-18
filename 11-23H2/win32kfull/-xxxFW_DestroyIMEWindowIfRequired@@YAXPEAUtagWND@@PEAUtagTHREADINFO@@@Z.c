/*
 * XREFs of ?xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C013C1C0
 * Callers:
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     ?ImeCanDestroyDefIMEforChild@@YAHPEAUtagWND@@0@Z @ 0x1C009244C (-ImeCanDestroyDefIMEforChild@@YAHPEAUtagWND@@0@Z.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00B7028 (zzzEndDeferWinEventNotify.c)
 *     ?zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z @ 0x1C00E352C (-zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z.c)
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxFW_DestroyIMEWindowIfRequired(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  int v4; // ecx
  __int64 v5; // rdx
  int CanDestroyDefIME; // ebx
  __int64 *v7; // rcx
  int v8; // eax
  __int64 *v9; // rcx

  v4 = *(_BYTE *)(_HMPheFromObject(a1) + 25) & 1;
  if ( (*gpsi & 4) == 0
    || (*((_DWORD *)a2 + 122) & 1) != 0
    || !*((_QWORD *)a2 + 98)
    || (v5 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL), (*(_BYTE *)(v5 + 10) & 1) != 0)
    || *(_WORD *)v5 == *(_WORD *)(gpsi + 898LL) )
  {
    if ( v4 )
      return;
    goto LABEL_15;
  }
  if ( v4 )
    return;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) != 0 )
  {
    if ( !*((_QWORD *)a1 + 13) || !(unsigned int)ImeCanDestroyDefIMEforChild(*((struct tagWND **)a2 + 98), a1) )
      goto LABEL_15;
    v7 = (__int64 *)*((_QWORD *)a2 + 98);
  }
  else
  {
    ++gdwDeferWinEvent;
    CanDestroyDefIME = zzzImeCanDestroyDefIME(*((struct tagWND **)a2 + 98), a1);
    zzzEndDeferWinEventNotify();
    if ( !CanDestroyDefIME )
      goto LABEL_15;
    v7 = (__int64 *)*((_QWORD *)a2 + 98);
    if ( !v7 )
      goto LABEL_15;
  }
  xxxDestroyWindow(v7);
LABEL_15:
  v8 = *((_DWORD *)a1 + 80);
  if ( (v8 & 0x10000000) != 0 )
  {
    *((_DWORD *)a1 + 80) = v8 & 0xEFFFFFFF;
    --*((_DWORD *)a2 + 228);
  }
  v9 = (__int64 *)*((_QWORD *)a2 + 98);
  if ( v9 && !*((_DWORD *)a2 + 228) && a1 != (struct tagWND *)v9 )
    xxxDestroyWindow(v9);
}
