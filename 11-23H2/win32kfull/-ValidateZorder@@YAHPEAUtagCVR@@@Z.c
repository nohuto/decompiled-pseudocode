/*
 * XREFs of ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C00AF84C
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F6650 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C01246F0 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     GetLastTopMostWindow @ 0x1C00EA300 (GetLastTopMostWindow.c)
 *     ?GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z @ 0x1C013619C (-GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z.c)
 *     HWInsertAfter @ 0x1C01A5BE8 (HWInsertAfter.c)
 */

__int64 __fastcall ValidateZorder(struct tagCVR *a1)
{
  unsigned int v2; // ebx
  struct tagWND *v3; // rsi
  __int64 v4; // rdx
  unsigned __int64 v5; // r9
  struct tagWND *v6; // rdi
  bool v7; // zf
  __int64 v9; // rax
  char *v10; // r10
  __int64 v11; // rcx
  char v12; // dl
  char v13; // r8
  char v14; // cl
  struct tagWND *v15; // rax
  struct tagWND *v16; // r8
  struct tagWND *i; // rdx
  struct tagWND *LastTopMostWindow; // rax
  __int64 v19; // rax
  struct tagWND *LastNonBottomMostWindow; // rax

  v2 = 0;
  v3 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)a1);
  v4 = *((_QWORD *)v3 + 5);
  if ( *(char *)(v4 + 19) < 0 )
    return 1LL;
  v5 = *((_QWORD *)a1 + 1);
  if ( v5 > 1 && v5 != -2LL && v5 != -1LL )
  {
    LOBYTE(v4) = 1;
    v9 = HMValidateHandleNoSecure(*((_QWORD *)a1 + 1), v4);
    v5 = v9;
    if ( !v9 || *(char *)(*(_QWORD *)(v9 + 40) + 19LL) < 0 || !*(_QWORD *)(v9 + 104) )
      v5 = 0LL;
  }
  if ( *((_QWORD *)a1 + 1) && !v5 )
    return 1LL;
  if ( v5 == 1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)v3 + 5) + 20LL) & 0x20) != 0 )
    {
      v7 = *((_QWORD *)v3 + 11) == 0LL;
    }
    else
    {
      v16 = 0LL;
      for ( i = *(struct tagWND **)(*((_QWORD *)v3 + 13) + 112LL);
            i && (*(_BYTE *)(*((_QWORD *)i + 5) + 20LL) & 0x20) == 0;
            i = (struct tagWND *)*((_QWORD *)i + 11) )
      {
        v16 = i;
      }
      v7 = v3 == v16;
    }
LABEL_12:
    LOBYTE(v2) = v7;
    return v2;
  }
  v6 = *(struct tagWND **)(*((_QWORD *)v3 + 13) + 112LL);
  if ( !v5 )
  {
    if ( *(_DWORD *)(*((_QWORD *)v3 + 5) + 236LL) == 1 )
    {
      while ( v6 && *(_DWORD *)(*((_QWORD *)v6 + 5) + 236LL) != 1 )
        v6 = (struct tagWND *)*((_QWORD *)v6 + 11);
    }
    v7 = v6 == v3;
    goto LABEL_12;
  }
  v10 = *(char **)(v5 + 40);
  if ( v10[19] >= 0 )
  {
    if ( (v10[20] & 0x20) != 0 )
    {
      LastNonBottomMostWindow = GetLastNonBottomMostWindow(v3, 1);
      *((_QWORD *)a1 + 1) = HWInsertAfter(LastNonBottomMostWindow);
    }
    else
    {
      v11 = *((_QWORD *)v3 + 5);
      v12 = *(_BYTE *)(v11 + 19);
      v13 = *(_BYTE *)(v11 + 24) & 8;
      v14 = v13 ^ 8;
      if ( (v12 & 4) == 0 )
        v14 = v13;
      if ( v14 != (v10[24] & 8) )
      {
        LastTopMostWindow = (struct tagWND *)GetLastTopMostWindow(v3);
        v5 = (unsigned __int64)LastTopMostWindow;
        if ( LastTopMostWindow == v3 )
          return 1LL;
        if ( LastTopMostWindow )
          v19 = *(_QWORD *)LastTopMostWindow;
        else
          v19 = 0LL;
        *((_QWORD *)a1 + 1) = v19;
      }
      if ( v6 != v3 )
      {
        if ( v6 )
        {
          while ( 1 )
          {
            v15 = (struct tagWND *)*((_QWORD *)v6 + 11);
            if ( v15 == v3 )
              break;
            v6 = (struct tagWND *)*((_QWORD *)v6 + 11);
            if ( !v15 )
              return 1LL;
          }
          v7 = v5 == (_QWORD)v6;
          goto LABEL_12;
        }
        return 1LL;
      }
    }
    return 0LL;
  }
  return 1LL;
}
