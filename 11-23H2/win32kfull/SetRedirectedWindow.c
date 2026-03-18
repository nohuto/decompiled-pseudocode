/*
 * XREFs of SetRedirectedWindow @ 0x1C00B4DF0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     _SetLayeredWindowAttributes @ 0x1C00B4BD0 (_SetLayeredWindowAttributes.c)
 *     xxxSetWindowStyle @ 0x1C00EF138 (xxxSetWindowStyle.c)
 *     xxxPrintWindow @ 0x1C01BC7E4 (xxxPrintWindow.c)
 * Callees:
 *     IncrementCompositedCount @ 0x1C0005ADC (IncrementCompositedCount.c)
 *     RedirectDCEs @ 0x1C0022304 (RedirectDCEs.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C002433C (DeleteOrSetRedirectionBitmap.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0024A64 (CreateOrGetRedirectionBitmap.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     FillRect @ 0x1C004579C (FillRect.c)
 *     xxxInternalInvalidate @ 0x1C004FB80 (xxxInternalInvalidate.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005C068 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     HintSpriteShape @ 0x1C00B2ED8 (HintSpriteShape.c)
 *     UpdateWindowSpriteMonitor @ 0x1C00B32C0 (UpdateWindowSpriteMonitor.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00B4B3C (IsToplevelWindowDesktopComposed.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C00B4B74 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C00B51AC (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     GetRedirectionBitmap @ 0x1C011E440 (GetRedirectionBitmap.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     _IsTopLevelWindow @ 0x1C0122A20 (_IsTopLevelWindow.c)
 */

__int64 __fastcall SetRedirectedWindow(struct tagWND *a1, int a2)
{
  __int64 ThreadWin32Thread; // rax
  int v5; // r12d
  int v6; // r13d
  unsigned int v7; // r14d
  __int64 v8; // rsi
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 Prop; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  HBRUSH v19; // r12
  __int64 v20; // rcx
  __m128i v21; // xmm0
  __int64 v22; // r13
  __int64 RedirectionBitmap; // rax
  __int64 SolidBrush; // rax
  BOOL v25; // esi
  HBITMAP v26; // [rsp+20h] [rbp-30h] BYREF
  __int64 v27; // [rsp+28h] [rbp-28h] BYREF
  __int64 v28; // [rsp+30h] [rbp-20h] BYREF
  RECT v29; // [rsp+38h] [rbp-18h] BYREF
  char v30; // [rsp+98h] [rbp+48h] BYREF
  int v31; // [rsp+A0h] [rbp+50h]

  v26 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v27 = gSmartObjNullRef;
  v5 = a2 & 0x10;
  v6 = 0;
  v7 = a2 & 0xFFFFFFEF;
  v28 = *(_QWORD *)(ThreadWin32Thread + 1512);
  *(_QWORD *)(ThreadWin32Thread + 1512) = &v28;
  v31 = v5;
  if ( GetRedirectionBitmap(a1) )
  {
    if ( v7 == 1 )
    {
      RedirectionBitmap = GetRedirectionBitmap(a1);
      HintSpriteShape(*(_QWORD *)(gpDispInfo + 40LL), a1, RedirectionBitmap, 0);
    }
LABEL_18:
    if ( !v5 )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v30);
      xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v30, v13, v14);
    }
    Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
    *(_DWORD *)(Prop + 32) |= v7;
    v9 = 0;
    goto LABEL_21;
  }
  v8 = *((_QWORD *)a1 + 17);
  if ( v8 != *(_QWORD *)v27 )
  {
    if ( v27 != gSmartObjNullRef && !--*(_DWORD *)(v27 + 8) )
    {
      if ( *(_BYTE *)(v27 + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v27);
    }
    if ( v8 )
    {
      v27 = *(_QWORD *)(v8 + 128);
      ++*(_DWORD *)(v27 + 8);
    }
    else
    {
      v27 = gSmartObjNullRef;
    }
  }
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)v27 + 8LL) + 8LL) < 0
    || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v27 + 8LL) + 8LL) & 0x40) != 0 )
  {
    v25 = 0;
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      v25 = v7 == 1;
    if ( ((unsigned int)IsTopLevelWindow(a1)
       || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v27 + 8LL) + 8LL) & 0x40) != 0
       || v7 != 1)
      && !v25 )
    {
      v9 = -2143420411;
      goto LABEL_21;
    }
  }
  v9 = CreateOrGetRedirectionBitmap((__int64)a1, 0, 0, (HSURF *)&v26);
  if ( v9 >= 0 )
  {
    if ( !(unsigned int)SetRedirectionBitmap(a1, v26, 0) )
    {
      DeleteOrSetRedirectionBitmap((__int64)a1, (HSURF)v26, 0);
      v9 = -1073741801;
      goto LABEL_21;
    }
    SetOrClrWF(1LL, a1, 2848LL, 1LL);
    v10 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    UpdateWindowSpriteMonitor(a1, v10);
    if ( v7 == 2 )
    {
      IncrementCompositedCount((__int64)a1);
    }
    else if ( v7 == 1 )
    {
      v11 = *((_QWORD *)a1 + 5);
      v12 = *(_QWORD *)(v11 + 88) - *(_QWORD *)(v11 + 104);
      if ( !v12 )
        v12 = *(_QWORD *)(v11 + 96) - *(_QWORD *)(v11 + 112);
      if ( (v12 || *(_QWORD *)(v11 + 168)) && !IsRectEmptyInl((const struct tagRECT *)(v11 + 88)) )
      {
        v18 = 0LL;
        v19 = *(HBRUSH *)(gpsi + 4736LL);
        v20 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 1108LL);
        if ( (_DWORD)v20 )
        {
          SolidBrush = GreCreateSolidBrush(v20);
          v17 = *((_QWORD *)a1 + 5);
          v18 = SolidBrush;
          if ( SolidBrush )
            v19 = (HBRUSH)SolidBrush;
        }
        v21 = *(__m128i *)(v17 + 88);
        v29.bottom = v21.m128i_i32[3] - v21.m128i_i32[1];
        v29.top = 0;
        v29.right = v21.m128i_i32[2] - _mm_cvtsi128_si32(v21);
        v29.left = 0;
        v22 = GreSelectBitmap(ghdcMem, v26);
        FillRect(ghdcMem, &v29, v19);
        if ( v18 )
          GreDeleteObject(v18);
        GreSelectBitmap(ghdcMem, v22);
        v5 = v31;
        v6 = 1;
      }
      HintSpriteShape(*(_QWORD *)(gpDispInfo + 40LL), a1, (__int64)v26, v6);
    }
    RedirectDCEs((__int64)a1);
    goto LABEL_18;
  }
LABEL_21:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64)&v27);
  return (unsigned int)v9;
}
