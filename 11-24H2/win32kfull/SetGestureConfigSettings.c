/*
 * XREFs of SetGestureConfigSettings @ 0x1401B2654
 * Callers:
 *     NtUserSetGestureConfig @ 0x140246270 (NtUserSetGestureConfig.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     FreeWindowGCData @ 0x140196640 (FreeWindowGCData.c)
 *     ?FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z @ 0x1401969B0 (-FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z.c)
 *     ?SortGestureConfigArray@@YAHPEAUtagGESTURECONFIG@@H@Z @ 0x1401B27BC (-SortGestureConfigArray@@YAHPEAUtagGESTURECONFIG@@H@Z.c)
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1401B2B94 (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1401B2E24 (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1401B2FF8 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall SetGestureConfigSettings(struct tagWND *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rsi
  int v9; // ecx
  _BYTE *v11; // rax
  unsigned __int64 v12; // rdx
  struct tagVWPLGESTUREDATA *GCData; // rsi
  __int64 v14; // r8
  int v15; // r9d
  int v16; // ecx
  _BYTE *v17; // rcx
  void *v18; // rbx
  int v19; // [rsp+20h] [rbp-18h]

  if ( !(unsigned int)SortGestureConfigArray((struct tagGESTURECONFIG *)a4, a3) )
    goto LABEL_10;
  if ( !GetGCData(a1) )
  {
    v7 = Win32AllocPoolWithQuotaZInit(24LL, 1684501333LL);
    v8 = (_QWORD *)v7;
    if ( !v7
      || (*(_DWORD *)(v7 + 12) = 0,
          *(_DWORD *)(v7 + 8) = 0,
          v11 = (_BYTE *)Win32AllocPoolWithQuotaZInit(1LL, 1835168597LL),
          (*v8 = v11) == 0LL) )
    {
      v9 = 14;
LABEL_5:
      UserSetLastError(v9);
      return 0LL;
    }
    *v11 = 0;
    v8[2] = 0LL;
    VWPLAddBase(
      (struct tagVWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 864LL),
      (unsigned __int64)v8,
      a1,
      5u,
      v19);
  }
  GCData = GetGCData(a1);
  if ( *(_DWORD *)a4 )
    return _StoreGestureConfig(a1, a3, (struct tagGESTURECONFIG *)a4);
  if ( !*(_DWORD *)(a4 + 4) && !*(_DWORD *)(a4 + 8) )
    FreeWindowGCData(a1, v12, v14, v15);
  v16 = *(_DWORD *)(a4 + 4);
  if ( (v16 | *(_DWORD *)(a4 + 8)) != 1 || v16 == *(_DWORD *)(a4 + 8) )
  {
LABEL_10:
    v9 = 87;
    goto LABEL_5;
  }
  *((_DWORD *)GCData + 2) = v16;
  v17 = *(_BYTE **)GCData;
  *((_DWORD *)GCData + 3) = *(_DWORD *)(a4 + 8);
  *v17 = 0;
  v18 = (void *)*((_QWORD *)GCData + 2);
  if ( v18 )
  {
    FreeWindowGCList(*((struct tagGESTURECONFIGLIST ***)GCData + 2));
    Win32FreePool(v18);
    *((_QWORD *)GCData + 2) = 0LL;
  }
  return 1LL;
}
