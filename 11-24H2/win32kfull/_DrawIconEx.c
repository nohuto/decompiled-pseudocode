/*
 * XREFs of _DrawIconEx @ 0x140078A10
 * Callers:
 *     xxxRealDrawMenuItem @ 0x14003B17C (xxxRealDrawMenuItem.c)
 *     NtUserDrawIconEx @ 0x140076F70 (NtUserDrawIconEx.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1401FFBD8 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 * Callees:
 *     GreCreateCompatibleBitmapEx @ 0x1400135CC (GreCreateCompatibleBitmapEx.c)
 *     GreBitBltInternal @ 0x14001970C (GreBitBltInternal.c)
 *     GrePolyPatBlt @ 0x1400382E8 (GrePolyPatBlt.c)
 *     GreSetBrushOrg @ 0x1400384E8 (GreSetBrushOrg.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 *     BltIcon @ 0x140079FFC (BltIcon.c)
 *     GreGetBrushOrg @ 0x1402024B8 (GreGetBrushOrg.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1402711D0 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z @ 0x140271274 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z.c)
 */

__int64 __fastcall DrawIconEx(HDC a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, __int64 a8, int a9)
{
  char v9; // r12
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // edi
  struct tagCURSOR *AnimatedCursorFrame; // rsi
  int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int DpiDependentMetric; // r15d
  int v20; // eax
  int v21; // r14d
  __int64 v22; // rcx
  int v23; // eax
  __int64 UserSessionState; // rax
  HDC v25; // rdx
  int v26; // eax
  int v27; // r12d
  int v28; // ecx
  int v30; // eax
  unsigned int DpiForSystem; // eax
  unsigned int v32; // eax
  HDC v33; // r12
  HBITMAP CompatibleBitmap; // rax
  int v35; // ecx
  int v36; // eax
  int v37; // [rsp+68h] [rbp-41h]
  __int64 v38; // [rsp+78h] [rbp-31h]
  HBITMAP v39; // [rsp+80h] [rbp-29h]
  __int64 v40; // [rsp+88h] [rbp-21h] BYREF
  int v41; // [rsp+90h] [rbp-19h]
  int v42; // [rsp+94h] [rbp-15h]
  __int64 v43; // [rsp+98h] [rbp-11h]
  HDC CompatibleDC; // [rsp+110h] [rbp+67h] BYREF

  v9 = a9;
  v10 = 0;
  v11 = *(_DWORD *)(a4 + 80);
  v12 = a9 & 0x10;
  v37 = 0;
  a9 = 0;
  AnimatedCursorFrame = (struct tagCURSOR *)a4;
  LODWORD(CompatibleDC) = 0;
  v14 = 0;
  if ( (v11 & 8) == 0 || (AnimatedCursorFrame = GetAnimatedCursorFrame((struct tagACON *const)a4, a7)) != 0LL )
  {
    if ( *((_QWORD *)AnimatedCursorFrame + 16) )
    {
      if ( (v9 & 3) == 3 )
        v14 = 1;
      v37 = v14;
    }
    GetVirtualizedCursorSize(AnimatedCursorFrame, &a9, (volatile int *)&CompatibleDC);
    DpiDependentMetric = a5;
    v20 = v9 & 8;
    if ( !a5 )
    {
      if ( (v9 & 8) != 0 )
      {
        DpiForSystem = GetDpiForSystem(v16, v15, v17, v18);
        DpiDependentMetric = GetDpiDependentMetric(5, DpiForSystem);
        v20 = v9 & 8;
      }
      else
      {
        DpiDependentMetric = a9;
      }
    }
    v21 = a6;
    v22 = 2LL;
    if ( !a6 )
    {
      if ( v20 )
      {
        v32 = GetDpiForSystem(2LL, v15, v17, v18);
        v23 = GetDpiDependentMetric(6, v32);
      }
      else
      {
        v15 = (unsigned int)((int)CompatibleDC >> 31);
        LODWORD(v15) = (int)CompatibleDC % 2;
        v23 = (int)CompatibleDC / 2;
      }
      v21 = v23;
    }
    UserSessionState = W32GetUserSessionState(v22, v15);
    CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 64LL));
    v25 = CompatibleDC;
    if ( CompatibleDC )
    {
      if ( a8 )
      {
        v33 = (HDC)GreCreateCompatibleDC(a1);
        if ( v33 )
        {
          CompatibleBitmap = GreCreateCompatibleBitmapEx(a1, DpiDependentMetric, v21, 0, 0LL, 0LL);
          v39 = CompatibleBitmap;
          if ( CompatibleBitmap )
          {
            v38 = GreSelectBitmap(v33, CompatibleBitmap);
            GreGetBrushOrg(a1);
            GreSetBrushOrg(v33, 0, 0, 0LL);
            v43 = a8;
            v40 = 0LL;
            v41 = DpiDependentMetric;
            v42 = v21;
            GrePolyPatBlt(v33, 15728673, (struct _POLYPATBLT *)&v40, 1);
            if ( v37 )
            {
              v35 = 3;
              v36 = v12 != 0 ? -2134114272 : 13369376;
            }
            else
            {
              BltIcon(v33, v21, CompatibleDC, (__int64)AnimatedCursorFrame, 1, v12 != 0 ? -2138570554 : 8913094);
              v35 = 2;
              v36 = v12 != 0 ? -2140798906 : 6684742;
            }
            BltIcon(v33, v21, CompatibleDC, (__int64)AnimatedCursorFrame, v35, v36);
            GreBitBltInternal(a1, a2, a3, DpiDependentMetric, v21, v33, 0, 0, 0xCC0020u, 0xFFFFFFFF, 0);
            GreSelectBitmap(v33, v38);
            GreDeleteObject(v39);
            v10 = 1;
          }
          GreDeleteDC(v33);
        }
      }
      else
      {
        if ( v14 )
        {
          BltIcon(a1, v21, CompatibleDC, (__int64)AnimatedCursorFrame, 3, v12 != 0 ? -2134114272 : 13369376);
        }
        else
        {
          v26 = v9 & 1;
          v27 = v9 & 2;
          a9 = v26;
          if ( v26 )
          {
            if ( v27 )
              v28 = v12 != 0 ? -2138570554 : 8913094;
            else
              v28 = v12 != 0 ? -2134114272 : 13369376;
            BltIcon(a1, v21, CompatibleDC, (__int64)AnimatedCursorFrame, 1, v28);
            v25 = CompatibleDC;
            v26 = a9;
          }
          if ( v27 )
          {
            if ( v26 )
              v30 = v12 != 0 ? -2140798906 : 6684742;
            else
              v30 = v12 != 0 ? -2134114272 : 13369376;
            BltIcon(a1, v21, v25, (__int64)AnimatedCursorFrame, 2, v30);
          }
        }
        v10 = 1;
      }
      GreDeleteDC(CompatibleDC);
    }
  }
  else
  {
    UserSetLastError(87);
  }
  return v10;
}
