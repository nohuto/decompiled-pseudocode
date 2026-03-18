/*
 * XREFs of ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B2678
 * Callers:
 *     xxxGetClipboardData @ 0x140104130 (xxxGetClipboardData.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x14008ED8C (HMValidateHandleNoRip.c)
 *     xxxGetClipboardData @ 0x140104130 (xxxGetClipboardData.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x140106020 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1401E8E94 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     _ConvertMemHandle @ 0x1401EF21C (_ConvertMemHandle.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x14021D99C (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z @ 0x1402B2288 (-SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z.c)
 */

void *__fastcall xxxGetDummyDib(struct tagTHREADINFO **a1, struct tagGETCLIPBDATA *a2)
{
  void *ClipboardData; // rbp
  struct tagCLIP *ClipFormat; // rax
  void *result; // rax
  struct tagCLIP *v7; // rax
  Gre::Base *v8; // rax
  __int64 v9; // rdi
  struct tagBITMAPINFOHEADER *v10; // rax
  struct tagBITMAPINFOHEADER *v11; // rbp
  int v12; // eax
  __int64 v13; // r8
  int biHeight; // edx
  struct tagCLIP *v15; // rax
  __int64 v16; // rdx
  struct tagCLIP *v17; // rsi
  __int64 v18; // rax

  ClipboardData = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19928) + 7004LL) & 1) != 0 )
  {
    ClipboardData = xxxGetClipboardData(a1, 9LL, (__int64)a2);
    if ( !ClipboardData )
      return 0LL;
  }
  ClipFormat = FindClipFormat((unsigned __int64)a1, 0x11u, 1);
  if ( ClipFormat )
  {
    if ( *((_QWORD *)ClipFormat + 1) != 2LL )
    {
      result = xxxGetClipboardData(a1, 17LL, (__int64)a2);
      if ( result )
      {
        *(_DWORD *)a2 = 17;
        *((_QWORD *)a2 + 1) = ClipboardData;
        return result;
      }
    }
  }
  v7 = FindClipFormat((unsigned __int64)a1, 2u, 1);
  if ( !v7 )
    return 0LL;
  if ( *((_QWORD *)v7 + 1) == 2LL )
    return 0LL;
  v8 = (Gre::Base *)xxxGetClipboardData(a1, 2LL, (__int64)a2);
  if ( !v8 )
    return 0LL;
  v9 = 0LL;
  v10 = xxxBMPtoDIB(v8, (__int64)ClipboardData, 0LL);
  v11 = v10;
  if ( v10 )
  {
    v12 = SizeOfDibColorTable(v10);
    biHeight = -v11->biHeight;
    if ( v11->biHeight > 0 )
      biHeight = v11->biHeight;
    v9 = ConvertMemHandle(
           v11,
           v11->biSize + v12 + (((v11->biWidth * v11->biBitCount + 31) >> 3) & 0xFFFFFFFC) * biHeight,
           v13);
    Win32FreePool(v11);
    if ( v9 )
    {
      v15 = FindClipFormat((unsigned __int64)a1, 8u, 1);
      v17 = v15;
      if ( v15 )
      {
        UT_FreeCBFormat(v15);
        *((_QWORD *)v17 + 1) = v9;
        *(_DWORD *)a2 = 8;
      }
      else
      {
        LOBYTE(v16) = 6;
        v18 = HMValidateHandleNoRip(v9, v16);
        if ( v18 )
          HMUnlockDestroyObject(v18);
        return 0LL;
      }
    }
  }
  return (void *)v9;
}
