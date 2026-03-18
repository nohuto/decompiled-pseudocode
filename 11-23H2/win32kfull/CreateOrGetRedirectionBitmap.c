/*
 * XREFs of CreateOrGetRedirectionBitmap @ 0x1C0024A64
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0021F8C (zzzDwmStartRedirection.c)
 *     RecreateRedirectionBitmap @ 0x1C00229DC (RecreateRedirectionBitmap.c)
 *     SetRedirectedWindow @ 0x1C00B4DF0 (SetRedirectedWindow.c)
 * Callees:
 *     GreGetDxSharedSurface @ 0x1C000AE98 (GreGetDxSharedSurface.c)
 *     GreSetRedirection @ 0x1C0024D98 (GreSetRedirection.c)
 *     GreSetBitmapContentOwner @ 0x1C0024E1C (GreSetBitmapContentOwner.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0024FB0 (GreCreateCompatibleBitmapInternal.c)
 *     GreReferenceObject @ 0x1C00260F4 (GreReferenceObject.c)
 *     GetWindowMonitorAdapterLuid @ 0x1C002617C (GetWindowMonitorAdapterLuid.c)
 *     GreGetSpriteAttributes @ 0x1C00261DC (GreGetSpriteAttributes.c)
 *     DesktopFromDesktopWindow @ 0x1C002743C (DesktopFromDesktopWindow.c)
 *     GreDereferenceObject @ 0x1C0049FA8 (GreDereferenceObject.c)
 *     _GetTopLevelWindow @ 0x1C00AE7B0 (_GetTopLevelWindow.c)
 *     IsDesktopWindow @ 0x1C00B3188 (IsDesktopWindow.c)
 *     IsWindowContentProtected @ 0x1C00B5400 (IsWindowContentProtected.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall CreateOrGetRedirectionBitmap(__int64 a1, int a2, int a3, HSURF *a4)
{
  __int64 v5; // rcx
  int v7; // edi
  int v9; // eax
  int v10; // ebx
  int v11; // r12d
  HWND v12; // rdx
  _DWORD *v13; // rdx
  int v14; // r15d
  __int64 v15; // rcx
  int v16; // eax
  bool v17; // zf
  HSURF CompatibleBitmapInternal; // rbx
  __int64 TopLevelWindow; // r14
  __int64 v20; // rcx
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  struct _BLENDFUNCTION v22; // [rsp+48h] [rbp-18h] BYREF
  int v23; // [rsp+4Ch] [rbp-14h] BYREF
  __int64 v24; // [rsp+50h] [rbp-10h] BYREF
  __int64 v25; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v26; // [rsp+A0h] [rbp+40h] BYREF
  HSURF *v27; // [rsp+B8h] [rbp+58h]

  v27 = a4;
  v5 = *(_QWORD *)(a1 + 40);
  v24 = 0LL;
  v7 = 0;
  LODWORD(v21) = 0;
  if ( (*(_BYTE *)(v5 + 26) & 0x20) != 0 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  v9 = *(_DWORD *)(a1 + 320);
  v10 = 0x4000000;
  if ( (v9 & 0x20000) != 0 )
    goto LABEL_43;
  if ( a3 )
  {
    *(_DWORD *)(a1 + 320) = v9 | 0x20000;
LABEL_43:
    v10 = 201326592;
  }
  v11 = 1;
  if ( (*(_BYTE *)(v5 + 26) & 8) == 0
    || (unsigned int)IsDesktopWindow(a1)
    || (v12 = *(HWND *)a1,
        v22 = 0,
        v26 = 0,
        (unsigned int)GreGetSpriteAttributes(*(HDEV *)(gpDispInfo + 40LL), v12, &v22, &v26, 1))
    && (v26 & 1) != 0 )
  {
    v10 |= 0x1000000u;
  }
  v13 = *(_DWORD **)(a1 + 40);
  v14 = 1;
  if ( v13[24] - v13[22] > 1 )
    v14 = v13[24] - v13[22];
  if ( v13[25] - v13[23] > 1 )
    v11 = v13[25] - v13[23];
  if ( !a2 && (unsigned int)IsDesktopWindow(a1) )
  {
    CompatibleBitmapInternal = *(HSURF *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) + 120LL);
  }
  else
  {
    LOWORD(v26) = 96;
    if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
    {
      if ( *((_QWORD *)PtiCurrentShared() + 57) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) != 0 )
        {
          v15 = *(_QWORD *)(a1 + 40);
          v16 = *(_DWORD *)(v15 + 288);
          if ( (v16 & 0xF) == 0 && (v16 & 0x40000000) != 0 )
          {
            v20 = *(unsigned __int16 *)(v15 + 284);
            if ( (_WORD)v20 != 96 )
              LOWORD(v26) = GreGetScaledLogPixels(v20);
          }
        }
      }
    }
    if ( (v10 & 0x1000000) == 0 )
    {
      v17 = (*(_DWORD *)(a1 + 320) & 0x20000) == 0;
      v22 = 0;
      if ( v17 || (int)GreGetDxSharedSurface(*(HWND *)a1, &v25, &v24, &v23, &v22, &v21) < 0 )
        GetWindowMonitorAdapterLuid(a1, &v24);
    }
    CompatibleBitmapInternal = (HSURF)GreCreateCompatibleBitmapInternal(
                                        *(_QWORD *)(gpDispInfo + 56LL),
                                        v14,
                                        v11,
                                        v10,
                                        (__int64)&v24,
                                        (__int64)&v26);
    LODWORD(v21) = 1;
  }
  if ( !CompatibleBitmapInternal )
  {
    v7 = -2143354872;
    goto LABEL_37;
  }
  TopLevelWindow = GetTopLevelWindow(a1);
  if ( (unsigned int)IsWindowContentProtected(a1)
    || !TopLevelWindow
    || a1 == TopLevelWindow
    || !(unsigned int)IsWindowContentProtected(TopLevelWindow)
    || *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 16) + 424LL) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) )
  {
    if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) == 0x29D )
      DesktopFromDesktopWindow(a1);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( (_DWORD)v21 )
    {
      v7 = GreReferenceObject(CompatibleBitmapInternal);
      if ( v7 < 0 )
        goto LABEL_35;
    }
    if ( (unsigned int)GreMarkUndeletableBitmap(CompatibleBitmapInternal) )
    {
      if ( !(unsigned int)GreSetRedirection(CompatibleBitmapInternal)
        || !(unsigned int)GreSetBitmapContentOwner(CompatibleBitmapInternal) )
      {
        GreMarkDeletableBitmap(CompatibleBitmapInternal);
        v7 = -2143354871;
      }
      if ( v7 >= 0 )
        goto LABEL_35;
    }
    else
    {
      v7 = -2143354871;
    }
    GreDereferenceObject(CompatibleBitmapInternal);
LABEL_35:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( v7 < 0 )
    {
      GreDeleteObject(CompatibleBitmapInternal);
      CompatibleBitmapInternal = 0LL;
    }
    goto LABEL_37;
  }
  GreDeleteObject(CompatibleBitmapInternal);
  CompatibleBitmapInternal = 0LL;
  v7 = -1073741790;
LABEL_37:
  *v27 = CompatibleBitmapInternal;
  return (unsigned int)v7;
}
