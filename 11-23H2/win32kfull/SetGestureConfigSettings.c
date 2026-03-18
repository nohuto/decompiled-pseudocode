/*
 * XREFs of SetGestureConfigSettings @ 0x1C003716C
 * Callers:
 *     NtUserSetGestureConfig @ 0x1C003A710 (NtUserSetGestureConfig.c)
 * Callees:
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C00370F8 (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C003A44C (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 *     ?SortGestureConfigArray@@YAHPEAUtagGESTURECONFIG@@H@Z @ 0x1C003A660 (-SortGestureConfigArray@@YAHPEAUtagGESTURECONFIG@@H@Z.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C0042BA8 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     ?FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z @ 0x1C009DD54 (-FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     FreeWindowGCData @ 0x1C013C484 (FreeWindowGCData.c)
 */

__int64 __fastcall SetGestureConfigSettings(struct tagWND *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rsi
  _BYTE *v9; // rax
  struct tagVWPLGESTUREDATA *GCData; // rsi
  int v11; // ecx
  _BYTE *v12; // rcx
  void *v13; // rbx
  __int64 v15; // rcx
  int v16; // [rsp+20h] [rbp-18h]

  if ( !(unsigned int)SortGestureConfigArray((struct tagGESTURECONFIG *)a4, a3) )
    goto LABEL_16;
  if ( !GetGCData(a1) )
  {
    v7 = Win32AllocPoolWithQuotaZInit(24LL, 1684501333LL);
    v8 = (_QWORD *)v7;
    if ( !v7
      || (*(_DWORD *)(v7 + 12) = 0,
          *(_DWORD *)(v7 + 8) = 0,
          v9 = (_BYTE *)Win32AllocPoolWithQuotaZInit(1LL, 1835168597LL),
          (*v8 = v9) == 0LL) )
    {
      v15 = 14LL;
      goto LABEL_18;
    }
    *v9 = 0;
    v8[2] = 0LL;
    VWPLAddBase(
      (struct tagVWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 888LL),
      (unsigned __int64)v8,
      a1,
      5u,
      v16);
  }
  GCData = GetGCData(a1);
  if ( *(_DWORD *)a4 )
    return _StoreGestureConfig(a1, a3, (struct tagGESTURECONFIG *)a4);
  if ( !*(_DWORD *)(a4 + 4) && !*(_DWORD *)(a4 + 8) )
    FreeWindowGCData(a1);
  v11 = *(_DWORD *)(a4 + 4);
  if ( (v11 | *(_DWORD *)(a4 + 8)) != 1 || v11 == *(_DWORD *)(a4 + 8) )
  {
LABEL_16:
    v15 = 87LL;
LABEL_18:
    UserSetLastError(v15);
    return 0LL;
  }
  *((_DWORD *)GCData + 2) = v11;
  v12 = *(_BYTE **)GCData;
  *((_DWORD *)GCData + 3) = *(_DWORD *)(a4 + 8);
  *v12 = 0;
  v13 = (void *)*((_QWORD *)GCData + 2);
  if ( v13 )
  {
    FreeWindowGCList(*((struct tagGESTURECONFIGLIST ***)GCData + 2));
    Win32FreePool(v13);
    *((_QWORD *)GCData + 2) = 0LL;
  }
  return 1LL;
}
