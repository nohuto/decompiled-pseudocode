/*
 * XREFs of ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x14008C8D4
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14022B0AC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     GetLastTopMostWindow @ 0x14008D348 (GetLastTopMostWindow.c)
 *     ?GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z @ 0x140196E1C (-GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z.c)
 *     HWInsertAfter @ 0x14019A69C (HWInsertAfter.c)
 */

__int64 __fastcall ValidateZorder(struct tagCVR *a1)
{
  unsigned int v2; // ebx
  struct tagWND *v3; // rsi
  __int64 v4; // rdx
  struct tagWND *v5; // r9
  __int64 v6; // rax
  struct tagWND *v7; // r8
  struct tagWND *i; // rdx
  bool v9; // zf
  struct tagWND *v11; // rdi
  char *v12; // r10
  __int64 v13; // rcx
  char v14; // dl
  char v15; // r8
  char v16; // cl
  struct tagWND *LastTopMostWindow; // rax
  __int64 v18; // rax
  struct tagWND *LastNonBottomMostWindow; // rax

  v2 = 0;
  v3 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)a1);
  v4 = *((_QWORD *)v3 + 5);
  if ( *(char *)(v4 + 19) < 0 )
    return 1LL;
  v5 = (struct tagWND *)*((_QWORD *)a1 + 1);
  if ( v5 )
  {
    if ( v5 != (struct tagWND *)-2LL && v5 != (struct tagWND *)1 && v5 != (struct tagWND *)-1LL )
    {
      LOBYTE(v4) = 1;
      v6 = HMValidateHandleNoSecure(*((_QWORD *)a1 + 1), v4);
      v5 = (struct tagWND *)v6;
      if ( !v6 || *(char *)(*(_QWORD *)(v6 + 40) + 19LL) < 0 || !*(_QWORD *)(v6 + 104) )
        v5 = 0LL;
    }
  }
  if ( *((_QWORD *)a1 + 1) && !v5 )
    return 1LL;
  if ( v5 == (struct tagWND *)1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)v3 + 5) + 20LL) & 0x20) != 0 )
    {
      v9 = *((_QWORD *)v3 + 11) == 0LL;
    }
    else
    {
      v7 = 0LL;
      for ( i = *(struct tagWND **)(*((_QWORD *)v3 + 13) + 112LL);
            i && (*(_BYTE *)(*((_QWORD *)i + 5) + 20LL) & 0x20) == 0;
            i = (struct tagWND *)*((_QWORD *)i + 11) )
      {
        v7 = i;
      }
      v9 = v3 == v7;
    }
LABEL_18:
    LOBYTE(v2) = v9;
    return v2;
  }
  v11 = *(struct tagWND **)(*((_QWORD *)v3 + 13) + 112LL);
  if ( !v5 )
  {
    if ( *(_DWORD *)(*((_QWORD *)v3 + 5) + 236LL) == 1 )
    {
      while ( v11 && *(_DWORD *)(*((_QWORD *)v11 + 5) + 236LL) != 1 )
        v11 = (struct tagWND *)*((_QWORD *)v11 + 11);
    }
    v9 = v11 == v3;
    goto LABEL_18;
  }
  v12 = (char *)*((_QWORD *)v5 + 5);
  if ( v12[19] >= 0 )
  {
    if ( (v12[20] & 0x20) != 0 )
    {
      LastNonBottomMostWindow = GetLastNonBottomMostWindow(v3, 1);
      *((_QWORD *)a1 + 1) = HWInsertAfter(LastNonBottomMostWindow);
      return 0LL;
    }
    v13 = *((_QWORD *)v3 + 5);
    v14 = *(_BYTE *)(v13 + 19);
    v15 = *(_BYTE *)(v13 + 24) & 8;
    v16 = v15 ^ 8;
    if ( (v14 & 4) == 0 )
      v16 = v15;
    if ( v16 == (v12[24] & 8) )
    {
LABEL_25:
      if ( v11 != v3 )
      {
        while ( v11 )
        {
          if ( *((struct tagWND **)v11 + 11) == v3 )
          {
            v9 = v5 == v11;
            goto LABEL_18;
          }
          v11 = (struct tagWND *)*((_QWORD *)v11 + 11);
        }
        return 1LL;
      }
      return 0LL;
    }
    LastTopMostWindow = (struct tagWND *)GetLastTopMostWindow(v3);
    v5 = LastTopMostWindow;
    if ( LastTopMostWindow != v3 )
    {
      if ( LastTopMostWindow )
        v18 = *(_QWORD *)LastTopMostWindow;
      else
        v18 = 0LL;
      *((_QWORD *)a1 + 1) = v18;
      goto LABEL_25;
    }
  }
  return 1LL;
}
