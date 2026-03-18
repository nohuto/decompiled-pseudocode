/*
 * XREFs of xxxEnumDisplayMonitors @ 0x1C00595A0
 * Callers:
 *     NtUserEnumDisplayMonitors @ 0x1C005C570 (NtUserEnumDisplayMonitors.c)
 * Callees:
 *     GreGetClipBox @ 0x1C00389B0 (GreGetClipBox.c)
 *     GreIntersectClipRect @ 0x1C003ADF0 (GreIntersectClipRect.c)
 *     GreGetDCPoint @ 0x1C003B970 (GreGetDCPoint.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ThreadUnlock1 @ 0x1C0045EE0 (ThreadUnlock1.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ReleaseCacheDC @ 0x1C004C160 (ReleaseCacheDC.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C004D320 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreLockVisRgn @ 0x1C0051080 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0051170 (GreUnlockVisRgn.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C0059A30 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly.c)
 *     IntersectRect @ 0x1C0059BB8 (IntersectRect.c)
 *     LookupDC @ 0x1C005B3A0 (LookupDC.c)
 *     GetMonitorDC @ 0x1C005B3E8 (GetMonitorDC.c)
 *     GetMonitorRect @ 0x1C005BE7C (GetMonitorRect.c)
 *     GetCurrentThreadCompositedDpi @ 0x1C005C500 (GetCurrentThreadCompositedDpi.c)
 *     GetScreenRectForDpi @ 0x1C005CB2C (GetScreenRectForDpi.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C005CCDC (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C005CD00 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0062C80 (TransformRectBetweenCoordinateSpaces.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C00BC138 (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxEnumDisplayMonitors(
        HDC a1,
        __int64 a2,
        __int64 (__fastcall *a3)(struct tagMONITOR *, HDC, struct tagRECT *, __int64),
        __int64 a4,
        int a5)
{
  unsigned int v5; // ebx
  __int64 v8; // r13
  __int64 v9; // rdi
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  unsigned int v11; // r15d
  struct tagMONITOR *i; // rdi
  HDC MonitorDC; // r12
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // r13
  __int64 v25; // rax
  bool v26; // zf
  __int64 v27; // r12
  int v28; // ecx
  int v29; // edx
  struct tagMONITOR *v30; // rax
  __int64 v31; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+38h] [rbp-C8h]
  __int64 (__fastcall *v33)(struct tagMONITOR *, HDC, struct tagRECT *, __int64); // [rsp+40h] [rbp-C0h]
  __int64 v34; // [rsp+48h] [rbp-B8h]
  __int64 v35; // [rsp+50h] [rbp-B0h]
  struct tagTHREADINFO *v36; // [rsp+58h] [rbp-A8h]
  __int128 v37; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+70h] [rbp-90h]
  __int128 v39; // [rsp+80h] [rbp-80h] BYREF
  __int128 v40; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v41[16]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v42; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v43; // [rsp+C0h] [rbp-40h] BYREF
  PERESOURCE *v44; // [rsp+D0h] [rbp-30h] BYREF
  char v45; // [rsp+F8h] [rbp-8h]
  char v46; // [rsp+100h] [rbp+0h]

  v34 = a4;
  v33 = a3;
  v5 = 0;
  v42 = 0LL;
  v31 = 0LL;
  v43 = 0LL;
  v38 = 0LL;
  v37 = 0LL;
  v36 = PtiCurrentShared();
  v8 = 0LL;
  v32 = 0LL;
  v9 = 0LL;
  v35 = 0LL;
  if ( !a1 )
  {
    CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
    GetScreenRectForDpi(&v39, CurrentThreadCompositedDpi);
    v42 = v39;
    if ( a2 && !(unsigned int)IntersectRect(&v42, &v42, a2) )
      return 1LL;
    goto LABEL_3;
  }
  GreLockVisRgn(*((_QWORD *)gpDispInfo + 5));
  v25 = LookupDC(a1, 1LL);
  v32 = v25;
  v8 = v25;
  if ( !v25 )
  {
LABEL_61:
    GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
    return v5;
  }
  v26 = (*(_DWORD *)(v25 + 64) & 0x4000) == 0;
  v27 = *(_QWORD *)(v25 + 16);
  v35 = v27;
  if ( !v26 && qword_1C0295AC0 )
    v9 = qword_1C0295AC0(v27, 2848LL);
  if ( (unsigned int)GreGetClipBox(a1, (int *)&v42, 0) == 1 )
    goto LABEL_60;
  if ( v9
    && (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF) == 0x29D
    && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
  {
    TransformRectBetweenCoordinateSpaces(&v42, &v42, 0LL, v9);
  }
  if ( a2 && !(unsigned int)IntersectRect(&v42, &v42, a2) )
  {
LABEL_60:
    v5 = 1;
    goto LABEL_61;
  }
  if ( v9 )
  {
    if ( (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF) != 0x29D )
    {
      GreGetDCPoint(a1, 32, (__int64)&v31);
      v28 = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 88LL) + v31;
      LODWORD(v31) = v28;
      v29 = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 92LL) + HIDWORD(v31);
      HIDWORD(v31) = v29;
      goto LABEL_48;
    }
  }
  else
  {
    GreGetDCPoint(a1, 32, (__int64)&v31);
  }
  v28 = v31;
  v29 = HIDWORD(v31);
LABEL_48:
  LODWORD(v42) = v28 + v42;
  DWORD2(v42) += v28;
  HIDWORD(v42) += v29;
  DWORD1(v42) += v29;
LABEL_3:
  v11 = 1;
  for ( i = (struct tagMONITOR *)*((_QWORD *)gpDispInfo + 13); i; i = (struct tagMONITOR *)*((_QWORD *)i + 7) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)i + 5) + 24LL) & 1) == 0 )
      continue;
    v40 = *(_OWORD *)GetMonitorRect(v41, i);
    if ( !(unsigned int)IntersectRect(&v43, &v42, &v40) )
      continue;
    if ( a1 )
    {
      v30 = AdjustDisplayMonitor(i, &v43);
      MonitorDC = (HDC)GetMonitorDC(v8, v30, v30 != i);
      if ( !MonitorDC )
        goto LABEL_61;
      v43.top -= HIDWORD(v31);
      v43.left -= v31;
      v43.bottom -= HIDWORD(v31);
      v43.right -= v31;
      GreIntersectClipRect(MonitorDC, v43.left, v43.top, v43.right, v43.bottom);
    }
    else
    {
      MonitorDC = 0LL;
    }
    *(_QWORD *)&v37 = *((_QWORD *)v36 + 52);
    *((_QWORD *)v36 + 52) = &v37;
    *((_QWORD *)&v37 + 1) = i;
    _InterlockedAdd((volatile signed __int32 *)i + 2, 1u);
    if ( a1 )
      GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
    if ( a5 )
    {
      v14 = v33(i, MonitorDC, &v43, v34);
      goto LABEL_16;
    }
    if ( !qword_1C0295B18 || (int)qword_1C0295B18() < 0 )
      goto LABEL_17;
    if ( qword_1C0295B20 )
    {
      v14 = qword_1C0295B20(*(_QWORD *)i, MonitorDC, &v43, v34, v33);
LABEL_16:
      v11 = v14;
      goto LABEL_17;
    }
    v11 = 0;
LABEL_17:
    SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(&v44);
    if ( !gbInDestroyHandleTableObjects
      && !IS_USERCRIT_OWNED_EXCLUSIVE(v16, v15, v17, v18)
      && (!IS_USERCRIT_OWNED_AT_ALL(v20, v19, v21, v22)
       || !tagDomLock::IsLockedExclusive((tagDomLock *)&gDomainHandleManagerLock)
       && !tagDomLock::IsLockedShared((tagDomLock *)&gDomainHandleManagerLock)) )
    {
      __int2c();
    }
    v23 = *((_BYTE *)qword_1C028FE68 + dword_1C028FE70 * (unsigned int)(unsigned __int16)*(_DWORD *)i + 25) & 1;
    if ( v46 && v45 && v44 )
      ExReleaseResourceAndLeaveCriticalRegion(*v44);
    if ( !ThreadUnlock1() || v23 )
      v11 = 0;
    if ( MonitorDC )
      ReleaseCacheDC((__int64)MonitorDC, 0);
    if ( !v11 )
      return 0LL;
    if ( a1 )
    {
      GreLockVisRgn(*((_QWORD *)gpDispInfo + 5));
      v32 = LookupDC(a1, 1LL);
      v8 = v32;
      if ( !v32 || *(_QWORD *)(v32 + 16) != v35 )
        goto LABEL_61;
    }
    else
    {
      v8 = v32;
    }
  }
  if ( a1 )
    GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
  return v11;
}
