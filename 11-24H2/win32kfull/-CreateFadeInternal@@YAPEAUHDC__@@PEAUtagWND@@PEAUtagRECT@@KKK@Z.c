/*
 * XREFs of ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1401EDE40
 * Callers:
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x14026564C (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     zzzStartSonar @ 0x14028572C (zzzStartSonar.c)
 * Callees:
 *     GreCreateCompatibleBitmapEx @ 0x1400135CC (GreCreateCompatibleBitmapEx.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400255B0 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreDwmNotifySpriteMonitorChange @ 0x1400258BC (GreDwmNotifySpriteMonitorChange.c)
 *     InitializeMonitorInfo @ 0x1400259E8 (InitializeMonitorInfo.c)
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     GreCreateSprite @ 0x140030280 (GreCreateSprite.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400308A8 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxSetLayeredWindow @ 0x140090DC8 (xxxSetLayeredWindow.c)
 *     ScaleDPIRect @ 0x140098C18 (ScaleDPIRect.c)
 *     DeleteFadeSprite @ 0x1401EE600 (DeleteFadeSprite.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x14032066C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

HDC __fastcall CreateFadeInternal(struct tagWND *a1, struct tagRECT *a2, int a3, int a4, unsigned int a5)
{
  struct tagRECT *v6; // rsi
  __int64 UserSessionState; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebx
  int v18; // r12d
  __int64 v19; // rax
  HBITMAP CompatibleBitmap; // rax
  __m128i v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *v27; // rcx
  __int64 v28; // rdx
  Gre::Base *v29; // rcx
  HDEV v30; // rbx
  __int64 v31; // r12
  HSPRITE SpriteInternal; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 CompatibleDC; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int32 v43; // r10d
  __int32 v44; // r8d
  LONG top; // r9d
  __int32 v46; // edx
  INT left; // eax
  __int32 v48; // ecx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  LONG v54; // eax
  unsigned __int16 v55[4]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v56; // [rsp+68h] [rbp-98h] BYREF
  int v57; // [rsp+70h] [rbp-90h]
  _DWORD v58[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v59; // [rsp+80h] [rbp-80h]
  _BYTE v60[80]; // [rsp+90h] [rbp-70h] BYREF
  __m128i v61; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v62[3]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v63; // [rsp+120h] [rbp+20h]

  v57 = a3;
  v6 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v10 = UserSessionState;
  if ( *(_QWORD *)(UserSessionState + 43040) )
    return 0LL;
  if ( *(_QWORD *)(UserSessionState + 43032) )
  {
    GreCleanDC();
    GreSetLayout(*(_QWORD *)(v10 + 43032), 0xFFFFFFFFLL, 0LL);
  }
  else
  {
    v35 = W32GetUserSessionState(0LL, v9);
    CompatibleDC = GreCreateCompatibleDC(*(_QWORD *)(*(_QWORD *)(v35 + 57008) + 64LL));
    *(_QWORD *)(v10 + 43032) = CompatibleDC;
    if ( !CompatibleDC )
      return 0LL;
    GreSetDCOwnerEx(CompatibleDC, 0LL, 0LL, 0LL);
  }
  if ( a1 )
    v6 = (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  v55[0] = 96;
  if ( a1 )
  {
    *(_DWORD *)(v10 + 43072) |= 8u;
    *(_QWORD *)(v10 + 43024) = *(_QWORD *)a1;
    if ( PtiCurrent(v12, v11) )
    {
      if ( *((_QWORD *)PtiCurrent(v14, v13) + 62) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v50, v49) + 62) + 8LL) + 64LL) & 1) != 0 )
        {
          v51 = *((_QWORD *)a1 + 5);
          v52 = *(_DWORD *)(v51 + 288);
          if ( (v52 & 0xF) == 0 && (v52 & 0x40000000) != 0 )
          {
            v53 = *(unsigned __int16 *)(v51 + 284);
            if ( (_WORD)v53 != 96 )
              v55[0] = GreGetScaledLogPixels(v53);
          }
        }
      }
    }
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v61);
    xxxSetLayeredWindow(a1, 0, 0LL);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v61);
  }
  else
  {
    v22 = *(__m128i *)v6;
    v56 = 0LL;
    v61 = v22;
    if ( (a5 & 0xF) == 2 )
    {
      v56 = (_QWORD *)MonitorFromRect(&v6->left, 2u, a5);
    }
    else
    {
      v58[0] = 0;
      v58[1] = 0;
      LogicalToPhysicalDPIPoint(v58, v6, a5, &v56);
      v38 = v56[5];
      if ( *(_WORD *)(v38 + 60) != 96
        && PtiCurrent(v38, v37)
        && *((_QWORD *)PtiCurrent(v40, v39) + 62)
        && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v42, v41) + 62) + 8LL) + 64LL) & 1) != 0
        && (a5 & 0xF) == 0
        && (a5 & 0x40000000) != 0 )
      {
        v59 = 0LL;
        v55[0] = GreGetScaledLogPixels(*(unsigned __int16 *)(v56[5] + 60LL));
        ScaleDPIRect(&v61, &v61, v55[0], 0x60u, v59, v59);
        v43 = v61.m128i_i32[1];
        v44 = v61.m128i_i32[0];
        top = v6->top;
        v46 = v61.m128i_i32[1] - top;
        left = v6->left;
        v48 = v61.m128i_i32[0] - v6->left;
        v6->right += v48;
        v6->bottom += v46;
        v61.m128i_i32[2] += v44;
        v61.m128i_i32[3] += v43;
        v6->left = v48 + left;
        v6->top = top + v46;
        v61.m128i_i32[0] = 2 * v44;
        v61.m128i_i32[1] = 2 * v43;
      }
    }
    memset_0(v60, 0, 0x48uLL);
    InitializeMonitorInfo((__int64)v60, a5, v56, 0LL);
    *(_DWORD *)(v10 + 43072) &= ~8u;
    if ( (a4 & 0x100) != 0 )
    {
      memset_0(v62, 0, 0x88uLL);
      a4 &= ~0x100u;
      v62[0] = v61;
      v62[1] = v61;
      v27 = **(__int64 ***)(*(_QWORD *)(W32GetUserSessionState(v26, v25) + 19200) + 8LL);
      v63 = *v27;
      v29 = *(Gre::Base **)(W32GetUserSessionState(v27, v28) + 57008);
      v30 = (HDEV)*((_QWORD *)v29 + 6);
      v31 = *(_QWORD *)Gre::Base::Globals(v29) + 1144LL;
      GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
        (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
        v31);
      SpriteInternal = (HSPRITE)GreCreateSpriteInternal(
                                  v30,
                                  0LL,
                                  v6,
                                  (struct tagMINIWINDOWINFO *)v62,
                                  0x9900u,
                                  1,
                                  1,
                                  0,
                                  0,
                                  0,
                                  0,
                                  v55);
      if ( v31 )
        GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          v31);
    }
    else
    {
      v34 = W32GetUserSessionState(v24, v23);
      SpriteInternal = (HSPRITE)GreCreateSprite(
                                  *(Gre::Base **)(*(_QWORD *)(v34 + 57008) + 48LL),
                                  0LL,
                                  v6,
                                  0LL,
                                  0x9900u,
                                  1,
                                  1,
                                  0,
                                  0,
                                  0,
                                  0,
                                  v55);
    }
    *(_QWORD *)(v10 + 43024) = SpriteInternal;
    if ( SpriteInternal )
    {
      v33 = W32GetUserSessionState(v16, v15);
      GreDwmNotifySpriteMonitorChange(*(Gre::Base **)(*(_QWORD *)(v33 + 57008) + 48LL), 0LL, SpriteInternal);
    }
  }
  if ( !*(_QWORD *)(v10 + 43024) )
    return 0LL;
  v17 = v6->right - v6->left;
  v18 = v6->bottom - v6->top;
  v19 = W32GetUserSessionState(v16, v15);
  CompatibleBitmap = GreCreateCompatibleBitmapEx(*(HDC *)(*(_QWORD *)(v19 + 57008) + 64LL), v17, v18, 0, 0LL, v55);
  *(_QWORD *)(v10 + 43040) = CompatibleBitmap;
  if ( !CompatibleBitmap )
  {
    DeleteFadeSprite();
    return 0LL;
  }
  GreSelectBitmap(*(_QWORD *)(v10 + 43032), CompatibleBitmap);
  if ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
      GreSetLayout(*(_QWORD *)(v10 + 43032), 0xFFFFFFFFLL, 1LL);
  }
  GreSetDCOwnerEx(*(_QWORD *)(v10 + 43032), 2147483650LL, 0LL, 1LL);
  *(_DWORD *)(v10 + 43048) = v6->left;
  v54 = v6->top;
  *(_DWORD *)(v10 + 43072) |= a4;
  *(_DWORD *)(v10 + 43052) = v54;
  *(_DWORD *)(v10 + 43064) = v57;
  LOBYTE(v54) = *(_DWORD *)(v10 + 43072) & 0x40;
  *(_DWORD *)(v10 + 43056) = v17;
  *(_DWORD *)(v10 + 43060) = v18;
  *(_DWORD *)(v10 + 43076) = (_BYTE)v54 != 0 ? 0xFF00FF : 0;
  return *(HDC *)(v10 + 43032);
}
