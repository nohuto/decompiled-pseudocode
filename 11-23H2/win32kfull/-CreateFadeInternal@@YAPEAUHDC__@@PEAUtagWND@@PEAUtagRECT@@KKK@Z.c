/*
 * XREFs of ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01BB7B0
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00D7ED0 (xxxTooltipWndProc.c)
 *     zzzStartSonar @ 0x1C01BCDFC (zzzStartSonar.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0215C28 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C0219F60 (xxxMenuWindowProc.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0024FB0 (GreCreateCompatibleBitmapInternal.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     GreCreateSprite @ 0x1C00AB61C (GreCreateSprite.c)
 *     xxxSetLayeredWindow @ 0x1C00ABE84 (xxxSetLayeredWindow.c)
 *     _MonitorFromRect @ 0x1C00AE960 (_MonitorFromRect.c)
 *     ScaleDPIRect @ 0x1C00B1710 (ScaleDPIRect.c)
 *     GreDwmNotifySpriteMonitorChange @ 0x1C00B3334 (GreDwmNotifySpriteMonitorChange.c)
 *     InitializeMonitorInfo @ 0x1C00B44FC (InitializeMonitorInfo.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     DeleteFadeSprite @ 0x1C01BC4A0 (DeleteFadeSprite.c)
 */

// write access to const memory has been detected, the output may be wrong!
HDC __fastcall CreateFadeInternal(struct tagWND *a1, struct tagRECT *a2, unsigned int a3, int a4, unsigned int a5)
{
  __int64 v9; // rcx
  struct tagRECT v10; // xmm6
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int32 v19; // r10d
  __int32 v20; // r8d
  LONG top; // r9d
  __int32 v22; // edx
  LONG left; // eax
  __int32 v24; // ecx
  struct tagMINIWINDOWINFO *v25; // r9
  Gre::Base *v26; // rcx
  HSPRITE Sprite; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned int v41; // r14d
  unsigned int v42; // r15d
  __int64 v43; // rdx
  unsigned __int16 v45[2]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v46[4]; // [rsp+6Ch] [rbp-9Ch] BYREF
  __m128i v47; // [rsp+70h] [rbp-98h] BYREF
  _QWORD *v48; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v49[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v50; // [rsp+90h] [rbp-78h]
  _BYTE v51[80]; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v52[3]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v53; // [rsp+118h] [rbp+10h]

  if ( *(_QWORD *)&gfade[4] )
    return 0LL;
  if ( *(_QWORD *)&gfade[2] )
  {
    GreCleanDC();
    GreSetLayout(*(_QWORD *)&gfade[2], 0xFFFFFFFFLL, 0LL);
  }
  else
  {
    *(_QWORD *)&gfade[2] = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
    v9 = *(_QWORD *)&gfade[2];
    if ( !v9 )
      return 0LL;
    GreSetDCOwnerEx(v9, 0LL, 0LL, 0LL);
  }
  if ( a1 )
    a2 = (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  v45[0] = 96;
  if ( a1 )
  {
    gfade[12] |= 8u;
    *(_QWORD *)gfade = *(_QWORD *)a1;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    {
      if ( *((_QWORD *)PtiCurrentShared(v29, v28, v30, v31) + 57) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v33, v32, v34, v35) + 57) + 8LL) + 64LL) & 1) != 0 )
        {
          v36 = *((_QWORD *)a1 + 5);
          v37 = *(_DWORD *)(v36 + 288);
          if ( (v37 & 0xF) == 0 && (v37 & 0x40000000) != 0 )
          {
            v38 = *(unsigned __int16 *)(v36 + 284);
            if ( (_WORD)v38 != 96 )
              v45[0] = GreGetScaledLogPixels(v38);
          }
        }
      }
    }
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v46);
    xxxSetLayeredWindow((struct tagWND **)a1, 0, 0LL);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v46, v39, v40);
  }
  else
  {
    v10 = *a2;
    v48 = 0LL;
    v47 = (__m128i)v10;
    if ( (a5 & 0xF) == 2 )
    {
      v48 = (_QWORD *)MonitorFromRect((__int64)a2, 2LL, a5);
    }
    else
    {
      v49[0] = 0;
      v49[1] = 0;
      LogicalToPhysicalDPIPoint(v49, a2, a5, &v48);
      if ( *(_WORD *)(v48[5] + 60LL) != 96 )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *((_QWORD *)PtiCurrentShared(v12, v11, v13, v14) + 57)
          && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v16, v15, v17, v18) + 57) + 8LL) + 64LL) & 1) != 0
          && (a5 & 0xF) == 0
          && (a5 & 0x40000000) != 0 )
        {
          v50 = 0LL;
          v45[0] = GreGetScaledLogPixels(*(unsigned __int16 *)(v48[5] + 60LL));
          ScaleDPIRect(&v47, &v47, v45[0], 0x60u, 0LL, 0LL);
          v19 = v47.m128i_i32[1];
          v20 = v47.m128i_i32[0];
          top = a2->top;
          v22 = v47.m128i_i32[1] - top;
          left = a2->left;
          v24 = v47.m128i_i32[0] - a2->left;
          v47.m128i_i32[2] += v47.m128i_i32[0];
          a2->right += v24;
          a2->bottom += v22;
          v47.m128i_i32[3] += v19;
          a2->left = v24 + left;
          a2->top = top + v22;
          v47.m128i_i32[0] = 2 * v20;
          v47.m128i_i32[1] = 2 * v19;
          v10 = (struct tagRECT)v47;
        }
        else
        {
          v10 = (struct tagRECT)v47;
        }
      }
    }
    memset_0(v51, 0, 0x48uLL);
    InitializeMonitorInfo((__int64)v51, a5, v48, 0LL);
    gfade[12] &= ~8u;
    if ( (a4 & 0x100) != 0 )
    {
      memset_0(v52, 0, 0x88uLL);
      v25 = (struct tagMINIWINDOWINFO *)v52;
      a4 &= ~0x100u;
      v52[0] = v10;
      v52[1] = v10;
      v53 = ***(_QWORD ***)(grpdeskRitInput + 8LL);
    }
    else
    {
      v25 = 0LL;
    }
    Sprite = (HSPRITE)GreCreateSprite(*(Gre::Base **)(gpDispInfo + 40LL), 0LL, a2, v25, 0x9900u, 1, 1, 0, 0, 0, v45);
    *(_QWORD *)gfade = Sprite;
    if ( *(_QWORD *)gfade )
      GreDwmNotifySpriteMonitorChange(v26, 0LL, Sprite);
  }
  if ( !*(_QWORD *)gfade )
    return 0LL;
  v41 = a2->right - a2->left;
  v42 = a2->bottom - a2->top;
  *(_QWORD *)&gfade[4] = GreCreateCompatibleBitmapInternal(*(_QWORD *)(gpDispInfo + 56LL), v41, v42, 0, 0LL, v45);
  v43 = *(_QWORD *)&gfade[4];
  if ( !v43 )
  {
    DeleteFadeSprite();
    return 0LL;
  }
  GreSelectBitmap(*(_QWORD *)&gfade[2], v43);
  if ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
      GreSetLayout(*(_QWORD *)&gfade[2], 0xFFFFFFFFLL, 1LL);
  }
  GreSetDCOwnerEx(*(_QWORD *)&gfade[2], 2147483650LL, 0LL, 1LL);
  gfade[6] = a2->left;
  gfade[7] = a2->top;
  gfade[8] = v41;
  gfade[9] = v42;
  gfade[10] = a3;
  gfade[12] |= a4;
  gfade[13] = (gfade[12] & 0x40) != 0 ? 0xFF00FF : 0;
  return *(HDC *)&gfade[2];
}
