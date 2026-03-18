/*
 * XREFs of xxxDrawMenuBarUnderlines @ 0x1401FF370
 * Callers:
 *     xxxEndMenuLoop @ 0x1402517D0 (xxxEndMenuLoop.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 * Callees:
 *     GreSelectFont @ 0x1400377A0 (GreSelectFont.c)
 *     xxxPSMGetTextExtent @ 0x14003D240 (xxxPSMGetTextExtent.c)
 *     GetPrefixCount @ 0x14003D38C (GetPrefixCount.c)
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetAppCompatFlags2 @ 0x140049EF0 (GetAppCompatFlags2.c)
 *     ?MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x14006B148 (-MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     MNGetpItemFromIndex @ 0x14006B178 (MNGetpItemFromIndex.c)
 *     MNIspItemValid @ 0x14006B1A4 (MNIspItemValid.c)
 *     MNIsFlatMenu @ 0x14006B254 (MNIsFlatMenu.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x14006B284 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GreSetTextColor @ 0x14007A278 (GreSetTextColor.c)
 *     GetOemBitmapInfo @ 0x14007B520 (GetOemBitmapInfo.c)
 *     ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x14007C360 (-CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z.c)
 *     GetNonChildAncestor @ 0x140091F0C (GetNonChildAncestor.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x140116D40 (--$ManualLock@X@-$Win32RawLockedItemBase@G$1-Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEA.c)
 *     ??1Win32HMThreadLockAlwaysMenuNoModify@@QEAA@XZ @ 0x1401B1700 (--1Win32HMThreadLockAlwaysMenuNoModify@@QEAA@XZ.c)
 *     GreSetViewportOrg @ 0x1401DA5E8 (GreSetViewportOrg.c)
 *     ??0Win32HMThreadLockAlwaysMenuNoModify@@QEAA@PEAUtagTHREADINFO@@PEAUtagMENU@@@Z @ 0x1401E0DB0 (--0Win32HMThreadLockAlwaysMenuNoModify@@QEAA@PEAUtagTHREADINFO@@PEAUtagMENU@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1402E9060 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1402ECC34 (xxxPSMTextOut.c)
 *     GetDpiMetricsForCurrentThread @ 0x1402F1688 (GetDpiMetricsForCurrentThread.c)
 *     GetDpiMetricsForWindow @ 0x1402F1798 (GetDpiMetricsForWindow.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

_QWORD *__fastcall xxxDrawMenuBarUnderlines(__int64 a1, __int64 a2)
{
  int v3; // r12d
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 NonChildAncestor; // rax
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  BOOL v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 DCEx; // rax
  struct tagMENU *v22; // r8
  HDC v23; // rsi
  unsigned int v24; // edx
  __int64 v25; // rcx
  struct tagMENU *v26; // r10
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // ebx
  __int64 DpiMetricsForWindow; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 DpiMetricsForCurrentThread; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  _DWORD *v38; // rax
  _DWORD *v39; // r8
  int v40; // r15d
  unsigned int v41; // r12d
  __int64 v42; // rcx
  int v43; // ebx
  __int64 v44; // rdx
  __int64 v45; // rcx
  _DWORD *v46; // rcx
  int v47; // edx
  int v48; // ebx
  __int64 v49; // rcx
  __int64 v50; // rax
  unsigned int v51; // eax
  ULONG_PTR v52; // rax
  __int64 v53; // rdx
  char *v54; // rbx
  unsigned __int16 PrefixCount; // ax
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned int v58; // edx
  __int64 v59; // rax
  __int64 *v61[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v62; // [rsp+58h] [rbp-B0h]
  int v63; // [rsp+60h] [rbp-A8h]
  int v64; // [rsp+64h] [rbp-A4h]
  __int64 v65; // [rsp+68h] [rbp-A0h]
  WCHAR *v66; // [rsp+70h] [rbp-98h]
  __int64 v67; // [rsp+78h] [rbp-90h] BYREF
  struct tagTHREADINFO *v68; // [rsp+80h] [rbp-88h]
  __int64 v69; // [rsp+88h] [rbp-80h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v71; // [rsp+A0h] [rbp-68h]
  _BYTE v72[32]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v73; // [rsp+C8h] [rbp-40h]
  char v74; // [rsp+D8h] [rbp-30h] BYREF

  v63 = a2;
  v3 = a2;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v61, a2);
  v6 = PtiCurrent(v5, v4);
  v67 = 0LL;
  v68 = v6;
  if ( (*(_DWORD *)(W32GetUserSessionState(v8, v7) + 67056) & 0x20000) == 0 )
  {
    v9 = *(unsigned int *)(W32GetUserSessionState(v10, v9) + 67060);
    if ( (v9 & 0x20) == 0
      && *(int *)(W32GetUserSessionState(v11, v9) + 67060) < 0
      && (GetAppCompatFlags2(1024LL, v9) & 2) == 0 )
    {
      NonChildAncestor = GetNonChildAncestor(a1);
      v13 = NonChildAncestor;
      if ( NonChildAncestor )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 16LL) & 1) != 0 )
        {
          v14 = *(_QWORD *)(NonChildAncestor + 168);
          v62 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=((__int64)v61, v14);
          if ( v62 || *v61[0] )
          {
            v16 = MNIsFlatMenu(v15, v9) && (*(_DWORD *)(*(_QWORD *)(*v61[0] + 40) + 40LL) & 1) == 0;
            v17 = *(unsigned int *)(*(_QWORD *)(*v61[0] + 40) + 40LL);
            if ( v3 )
            {
              if ( (v17 & 4) != 0 )
                return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v61, v9);
              v18 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v17, v9) + 19928) + 4752LL);
              *(_DWORD *)(*(_QWORD *)(*v61[0] + 40) + 40LL) |= 4u;
            }
            else
            {
              if ( (v17 & 4) == 0 )
                return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v61, v9);
              if ( *(_QWORD *)(*(_QWORD *)(*v61[0] + 40) + 24LL) )
              {
                v18 = *(_QWORD *)(*(_QWORD *)(*v61[0] + 40) + 24LL);
              }
              else
              {
                v19 = *(_QWORD *)(W32GetUserSessionState(*v61[0], v9) + 19928);
                if ( v16 )
                  v18 = *(_QWORD *)(v19 + 4936);
                else
                  v18 = *(_QWORD *)(v19 + 4728);
              }
              *(_DWORD *)(*(_QWORD *)(*v61[0] + 40) + 40LL) &= ~4u;
            }
            v65 = v18;
            v20 = *(_QWORD *)(*v61[0] + 88);
            DCEx = _GetDCEx(v13, 0LL, 65539LL);
            v22 = (struct tagMENU *)v62;
            v23 = (HDC)DCEx;
            if ( !v62 )
              v22 = (struct tagMENU *)*v61[0];
            Win32HMThreadLockAlwaysMenuNoModify::Win32HMThreadLockAlwaysMenuNoModify(
              (Win32HMThreadLockAlwaysMenuNoModify *)v72,
              v68,
              v22);
            v24 = 0;
            v64 = 0;
            while ( v24 < *(_DWORD *)(*(_QWORD *)(*v61[0] + 40) + 44LL) )
            {
              v25 = v62 ? v62 : *v61[0];
              if ( !MNIspItemValid(v25, v20) )
                break;
              if ( !v26 )
                v26 = (struct tagMENU *)*v61[0];
              v29 = MNIsOwnerDrawItem(v26, (struct tagITEM *)v20);
              v69 = *(_QWORD *)(v20 + 88);
              v66 = *(WCHAR **)(v20 + 24);
              if ( v66 || v29 )
              {
                if ( v29 )
                {
                  DpiMetricsForWindow = GetDpiMetricsForWindow(v13);
                  GreSelectFont(v23, *(HFONT *)(DpiMetricsForWindow + 8));
                  GreSetViewportOrg(v23, 0, 0);
                }
                else
                {
                  DpiMetricsForCurrentThread = GetDpiMetricsForCurrentThread(v28, v27);
                  GreSelectFont(v23, *(HFONT *)(DpiMetricsForCurrentThread + 8));
                  GreSetViewportOrg(v23, *(_DWORD *)(*(_QWORD *)v20 + 64LL), *(_DWORD *)(*(_QWORD *)v20 + 68LL));
                }
                if ( v3 && (*(_DWORD *)(*(_QWORD *)v20 + 4LL) & 0x100) != 0 )
                  v35 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v32, v31) + 19928) + 4904LL);
                else
                  v35 = v18;
                GreSelectBrush(v23, v35, v33);
                if ( v29 )
                {
                  xxxSendMenuDrawItemMessage((__int64)v23, 1, v61, (struct tagMENU ***)v20, 0, 0, 0LL);
                }
                else
                {
                  v38 = (_DWORD *)GetDpiMetricsForCurrentThread(v37, v36);
                  v39 = *(_DWORD **)v20;
                  v40 = v38[7];
                  if ( *(_DWORD *)(*(_QWORD *)v20 + 76LL) - v38[5] - v40 != 1 )
                    v40 += (unsigned int)(*(_DWORD *)(*(_QWORD *)v20 + 76LL) - v38[5] - v40 - 1) >> 1;
                  v41 = v38[4];
                  if ( (*v39 & 0x2000) != 0 )
                  {
                    xxxPSMGetTextExtent(v23, v66, v39[12], &v67);
                    v42 = v62;
                    if ( !v62 )
                      v42 = *v61[0];
                    if ( !MNIspItemValid(v42, v20) || v69 != *(_QWORD *)(v20 + 88) )
                      break;
                    v43 = *(_DWORD *)(*(_QWORD *)v20 + 72LL);
                    v41 = v43 - *(__int16 *)(GetOemBitmapInfo(63LL) + 4) - v67 + v41 - 2;
                  }
                  if ( (unsigned int)CALL_LPK(v68) )
                  {
                    v46 = *(_DWORD **)(W32GetUserSessionState(v45, v44) + 19928);
                    if ( v63 )
                    {
                      v47 = v46[1149];
                    }
                    else if ( v16 )
                    {
                      v47 = v46[1172];
                    }
                    else
                    {
                      v47 = v46[1146];
                    }
                    v48 = GreSetTextColor(v23, v47);
                    xxxPSMTextOut(v23, *(_DWORD *)(*(_QWORD *)v20 + 48LL), 0x200000);
                    v49 = v62;
                    if ( !v62 )
                      v49 = *v61[0];
                    if ( !MNIspItemValid(v49, v20) || v69 != *(_QWORD *)(v20 + 88) )
                      break;
                    GreSetTextColor(v23, v48);
                  }
                  else
                  {
                    v73 = 0LL;
                    v50 = *(_QWORD *)v20;
                    *(_OWORD *)BugCheckParameter2 = 0LL;
                    v71 = -1LL;
                    v51 = *(_DWORD *)(v50 + 48);
                    if ( v51 < 0xFF )
                    {
                      v54 = &v74;
                    }
                    else
                    {
                      v52 = Win32AllocPoolZInit(2LL * (v51 + 1), 1953657685LL);
                      v54 = (char *)v52;
                      if ( !v52 )
                      {
                        if ( v71 != -1 )
                          PopAndFreeW32ThreadLock((__int64)BugCheckParameter2, v53);
                        break;
                      }
                      Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
                        BugCheckParameter2,
                        v52,
                        (__int64)Win32FreePool);
                    }
                    PrefixCount = GetPrefixCount(
                                    (__int16 *)v66,
                                    *(_DWORD *)(*(_QWORD *)v20 + 48LL),
                                    (__int64)v54,
                                    *(_DWORD *)(*(_QWORD *)v20 + 48LL));
                    xxxDrawItemUnderline(v61, v20, v23, v41, v40, v54, PrefixCount);
                    if ( v71 != -1 )
                      PopAndFreeW32ThreadLock((__int64)BugCheckParameter2, v56);
                  }
                  v3 = v63;
                }
              }
              v57 = v62;
              v58 = ++v64;
              if ( !v62 )
                v57 = *v61[0];
              v59 = MNGetpItemFromIndex(v57, v58);
              v18 = v65;
              v20 = v59;
            }
            _ReleaseDC(v23);
            Win32HMThreadLockAlwaysMenuNoModify::~Win32HMThreadLockAlwaysMenuNoModify((Win32HMThreadLockAlwaysMenuNoModify *)v72);
          }
        }
      }
    }
  }
  return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v61, v9);
}
