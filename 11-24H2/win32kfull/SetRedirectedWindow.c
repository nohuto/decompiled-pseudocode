/*
 * XREFs of SetRedirectedWindow @ 0x1400B67B4
 * Callers:
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     _SetLayeredWindowAttributes @ 0x14015DCB4 (_SetLayeredWindowAttributes.c)
 *     xxxPrintWindow @ 0x14023A30C (xxxPrintWindow.c)
 * Callees:
 *     UpdateWindowSpriteMonitor @ 0x140025828 (UpdateWindowSpriteMonitor.c)
 *     CreateOrGetRedirectionBitmap @ 0x14002CDD0 (CreateOrGetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x14002D5F8 (DeleteOrSetRedirectionBitmap.c)
 *     HintSpriteShape @ 0x14002D818 (HintSpriteShape.c)
 *     RedirectDCEs @ 0x14002F358 (RedirectDCEs.c)
 *     IncrementCompositedCount @ 0x14002FE3C (IncrementCompositedCount.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140032E18 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     FillRect @ 0x140038250 (FillRect.c)
 *     ?GetSpriteFillBrush@@YAPEAUHBRUSH__@@PEAUtagWND@@_NPEA_N@Z @ 0x140039E2C (-GetSpriteFillBrush@@YAPEAUHBRUSH__@@PEAUtagWND@@_NPEA_N@Z.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x14003A1C4 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     xxxInternalInvalidate @ 0x1400428C0 (xxxInternalInvalidate.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     GetRedirectionBitmap @ 0x140063BA0 (GetRedirectionBitmap.c)
 *     IsToplevelWindowDesktopComposed @ 0x140073A04 (IsToplevelWindowDesktopComposed.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1400B4D30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x1400B53E0 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 */

__int64 __fastcall SetRedirectedWindow(struct tagWND *a1, __int64 a2)
{
  int v2; // r14d
  struct tagTHREADINFO *v4; // rax
  int v5; // r12d
  int v6; // r15d
  unsigned int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // ebx
  HBITMAP v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // r8
  const struct tagRECT *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 Prop; // rax
  HBRUSH SpriteFillBrush; // r12
  __m128i v23; // xmm0
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  BOOL v33; // ebx
  HBITMAP RedirectionBitmap; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 UserSessionState; // rax
  RECT v38; // [rsp+20h] [rbp-30h] BYREF
  __int64 v39; // [rsp+30h] [rbp-20h] BYREF
  __int64 v40; // [rsp+38h] [rbp-18h] BYREF
  _BYTE v41[16]; // [rsp+40h] [rbp-10h] BYREF
  bool v42; // [rsp+98h] [rbp+48h] BYREF
  HBITMAP v43; // [rsp+A0h] [rbp+50h] BYREF

  v43 = 0LL;
  v2 = a2;
  v4 = PtiCurrent((__int64)a1, a2);
  v39 = gSmartObjNullRef;
  v5 = 0;
  v6 = v2 & 0x10;
  v7 = v2 & 0xFFFFFFEF;
  v40 = *((_QWORD *)v4 + 209);
  *((_QWORD *)v4 + 209) = &v40;
  if ( GetRedirectionBitmap((__int64)a1, v8) )
  {
    if ( v7 == 1 )
    {
      RedirectionBitmap = (HBITMAP)GetRedirectionBitmap((__int64)a1, v9);
      UserSessionState = W32GetUserSessionState(v36, v35);
      HintSpriteShape(*(HDEV *)(*(_QWORD *)(UserSessionState + 57008) + 48LL), a1, RedirectionBitmap, 0);
    }
LABEL_14:
    if ( !v6 )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v41);
      xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v41);
    }
    v19 = W32GetUserSessionState(v10, v9);
    Prop = GetProp((__int64)a1, *(unsigned __int16 *)(v19 + 41422), 1u);
    *(_DWORD *)(Prop + 32) |= v7;
    v12 = 0;
    goto LABEL_17;
  }
  SmartObjStackRefBase<tagCLS>::operator=(&v39, *((_QWORD *)a1 + 17));
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)v39 + 8LL) + 8LL) < 0
    || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v39 + 8LL) + 8LL) & 0x40) != 0 )
  {
    v33 = 0;
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      v33 = v7 == 1;
    if ( (IsTopLevelWindow((__int64)a1) || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v39 + 8LL) + 8LL) & 0x40) != 0 || v7 != 1)
      && !v33 )
    {
      v12 = -2143420411;
      goto LABEL_17;
    }
  }
  v12 = CreateOrGetRedirectionBitmap(a1, 0, 0, (HSURF *)&v43);
  if ( v12 >= 0 )
  {
    v13 = v43;
    if ( !(unsigned int)SetRedirectionBitmap((void **)a1, (Gre::Base *)v43, 0) )
    {
      DeleteOrSetRedirectionBitmap((__int64)a1, (HSURF)v13, 0);
      v12 = -1073741801;
      goto LABEL_17;
    }
    SetOrClrWF(1, a1, 0xB20u, 1);
    v14 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    UpdateWindowSpriteMonitor((__int64 *)a1, v14);
    if ( v7 == 2 )
    {
      IncrementCompositedCount((__int64)a1);
    }
    else if ( v7 == 1 )
    {
      v15 = (_QWORD *)*((_QWORD *)a1 + 5);
      v16 = (const struct tagRECT *)(v15 + 11);
      v17 = v15[11] - v15[13];
      if ( !v17 )
        v17 = v15[12] - v15[14];
      if ( (v17 || v15[21]) && !IsRectEmptyInl(v16) )
      {
        v42 = 0;
        LOBYTE(v17) = 1;
        SpriteFillBrush = (HBRUSH)GetSpriteFillBrush(a1, v17, &v42);
        v23 = *(__m128i *)(*((_QWORD *)a1 + 5) + 88LL);
        v24 = _mm_cvtsi128_si32(v23);
        v38.bottom = v23.m128i_i32[3] - v23.m128i_i32[1];
        v38.top = 0;
        v38.right = v23.m128i_i32[2] - v24;
        v38.left = 0;
        v25 = W32GetUserSessionState(0LL, (unsigned int)-v24);
        v26 = GreSelectBitmap(*(_QWORD *)(v25 + 43288), v13);
        v29 = W32GetUserSessionState(v28, v27);
        FillRect(*(HDC *)(v29 + 43288), &v38, SpriteFillBrush);
        if ( v42 )
          GreDeleteObject(SpriteFillBrush);
        v32 = W32GetUserSessionState(v31, v30);
        GreSelectBitmap(*(_QWORD *)(v32 + 43288), v26);
        v5 = 1;
      }
      v18 = W32GetUserSessionState(v16, v17);
      HintSpriteShape(*(HDEV *)(*(_QWORD *)(v18 + 57008) + 48LL), a1, v13, v5);
    }
    RedirectDCEs((__int64)a1);
    goto LABEL_14;
  }
LABEL_17:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v39, v11);
  return (unsigned int)v12;
}
