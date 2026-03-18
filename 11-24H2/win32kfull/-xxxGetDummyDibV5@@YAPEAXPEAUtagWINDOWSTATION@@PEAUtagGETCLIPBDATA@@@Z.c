/*
 * XREFs of ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B281C
 * Callers:
 *     xxxGetClipboardData @ 0x140104130 (xxxGetClipboardData.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x14008ED8C (HMValidateHandleNoRip.c)
 *     xxxGetClipboardData @ 0x140104130 (xxxGetClipboardData.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x140106020 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1401E8E94 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     _ConvertMemHandle @ 0x1401EF21C (_ConvertMemHandle.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x14021D99C (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@REAUtagBITMAPINFOHEADER@@K@Z @ 0x1402B2050 (-DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@REAUtagBITMAPINFOHEADER@@K@Z.c)
 *     ?SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z @ 0x1402B2288 (-SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z.c)
 */

void *__fastcall xxxGetDummyDibV5(struct tagTHREADINFO **a1, struct tagGETCLIPBDATA *a2)
{
  __int64 v2; // rbx
  struct tagCLIP *ClipFormat; // rax
  void *ClipboardData; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  struct tagBITMAPINFOHEADER *v9; // rdi
  struct tagCLIP *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  Gre::Base *v13; // rbp
  __int64 v14; // rdi
  void *result; // rax
  struct tagBITMAPINFOHEADER *v16; // rax
  struct tagBITMAPINFOHEADER *v17; // rbp
  int v18; // edx
  __int64 v19; // r8
  int biHeight; // ecx
  struct tagCLIP *v21; // rax
  __int64 v22; // rdx
  struct tagCLIP *v23; // rdi
  __int64 v24; // rax
  unsigned int v25; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  ClipFormat = FindClipFormat((unsigned __int64)a1, 8u, 1);
  if ( ClipFormat )
  {
    if ( *((_QWORD *)ClipFormat + 1) != 2LL )
    {
      ClipboardData = xxxGetClipboardData(a1, 8LL, (__int64)a2);
      if ( ClipboardData )
      {
        LOBYTE(v7) = 6;
        v8 = HMValidateHandleNoRip((__int64)ClipboardData, v7);
        if ( v8 )
        {
          v9 = (struct tagBITMAPINFOHEADER *)DIBtoDIBV5((struct tagBITMAPINFOHEADER *volatile)(v8 + 20));
          if ( v9 )
            goto LABEL_13;
        }
      }
    }
  }
  v10 = FindClipFormat((unsigned __int64)a1, 2u, 1);
  if ( !v10 )
    return (void *)v2;
  if ( *((_QWORD *)v10 + 1) == 2LL )
    return (void *)v2;
  v13 = (Gre::Base *)xxxGetClipboardData(a1, 2LL, (__int64)a2);
  if ( !v13 )
    return (void *)v2;
  v14 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v12, v11) + 19928) + 7004LL) & 1) == 0
    || (result = xxxGetClipboardData(a1, 9LL, (__int64)a2), (v14 = (__int64)result) != 0) )
  {
    v25 = 0;
    v16 = xxxBMPtoDIB(v13, v14, &v25);
    v17 = v16;
    if ( v16 )
    {
      v9 = (struct tagBITMAPINFOHEADER *)DIBtoDIBV5(v16);
      Win32FreePool(v17);
      if ( v9 )
      {
LABEL_13:
        v18 = SizeOfDibColorTable(v9);
        biHeight = -v9->biHeight;
        if ( v9->biHeight > 0 )
          biHeight = v9->biHeight;
        v2 = ConvertMemHandle(
               v9,
               v9->biSize + (((v9->biWidth * v9->biBitCount + 31) >> 3) & 0xFFFFFFFC) * biHeight + v18,
               v19);
        Win32FreePool(v9);
        if ( v2 )
        {
          v21 = FindClipFormat((unsigned __int64)a1, 0x11u, 1);
          v23 = v21;
          if ( v21 )
          {
            UT_FreeCBFormat(v21);
            *((_QWORD *)v23 + 1) = v2;
            *(_DWORD *)a2 = 17;
          }
          else
          {
            LOBYTE(v22) = 6;
            v24 = HMValidateHandleNoRip(v2, v22);
            if ( v24 )
              HMUnlockDestroyObject(v24);
            return 0LL;
          }
        }
        return (void *)v2;
      }
    }
    return (void *)v2;
  }
  return result;
}
