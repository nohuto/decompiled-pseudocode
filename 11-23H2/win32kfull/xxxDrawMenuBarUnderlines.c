/*
 * XREFs of xxxDrawMenuBarUnderlines @ 0x1C00A3B00
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C02133A0 (xxxEndMenuLoop.c)
 * Callees:
 *     GreSetTextColor @ 0x1C0042038 (GreSetTextColor.c)
 *     GetOemBitmapInfoForDpi @ 0x1C007684C (GetOemBitmapInfoForDpi.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C007A800 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     GetNonChildAncestor @ 0x1C00A70E4 (GetNonChildAncestor.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     GetDPIMetrics @ 0x1C00D8D88 (GetDPIMetrics.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00E0550 (PopAndFreeAlwaysW32ThreadLock.c)
 *     MNGetpItemFromIndex @ 0x1C00E40B0 (MNGetpItemFromIndex.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00E4A98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     MNGetpItemIndex @ 0x1C00E5540 (MNGetpItemIndex.c)
 *     GetDpiForSystem @ 0x1C00EB100 (GetDpiForSystem.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreSelectFontInternal @ 0x1C011A874 (GreSelectFontInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ThreadUnlockMenuNoModify @ 0x1C01FF114 (ThreadUnlockMenuNoModify.c)
 *     CALL_LPK @ 0x1C0225724 (CALL_LPK.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z @ 0x1C0232F10 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0233580 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0233958 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     MNIsOwnerDrawItem @ 0x1C023421C (MNIsOwnerDrawItem.c)
 *     xxxPSMTextOut @ 0x1C0240F14 (xxxPSMTextOut.c)
 *     GetPrefixCount @ 0x1C024CBC8 (GetPrefixCount.c)
 *     xxxPSMGetTextExtent @ 0x1C024E610 (xxxPSMGetTextExtent.c)
 *     GreSetViewportOrg @ 0x1C02CFAD4 (GreSetViewportOrg.c)
 */

__int64 __fastcall xxxDrawMenuBarUnderlines(__int64 a1, int a2)
{
  int v2; // r12d
  struct tagTHREADINFO *v4; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 NonChildAncestor; // rax
  const struct tagWND *v9; // r13
  __int64 v11; // rdx
  BOOL v12; // r14d
  int v13; // ecx
  __int64 v14; // r15
  _QWORD *v15; // rdi
  __int64 DCEx; // rax
  __int64 v17; // rcx
  HDC v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  __int64 v23; // rdx
  _DWORD *v24; // rax
  int v25; // r15d
  unsigned int v26; // r12d
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // ebx
  unsigned int DpiForSystem; // eax
  int v32; // edx
  int v33; // ebx
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // eax
  __int64 v37; // rax
  _BYTE *v38; // rbx
  unsigned __int16 PrefixCount; // ax
  __int64 v40; // rax
  unsigned int v41; // edx
  _QWORD v43[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A8h]
  __int64 v45; // [rsp+68h] [rbp-A0h]
  __int64 v46; // [rsp+70h] [rbp-98h]
  __int64 v47; // [rsp+78h] [rbp-90h]
  __int64 v48; // [rsp+80h] [rbp-88h]
  __int64 v49; // [rsp+88h] [rbp-80h]
  struct tagTHREADINFO *v50; // [rsp+90h] [rbp-78h]
  __int128 v51; // [rsp+98h] [rbp-70h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-60h]
  __int128 v53; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-48h]
  _BYTE v55[512]; // [rsp+C8h] [rbp-40h] BYREF

  v2 = a2;
  SmartObjStackRefBase<tagMENU>::Init(v43, 0LL);
  v44 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v4 = PtiCurrentShared();
  v48 = 0LL;
  v50 = v4;
  if ( (gdwPUDFlags & 0x20000) == 0 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) == 0x80000000 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( *(_DWORD *)(ThreadWin32Thread + 632) > 0x400u || (*(_DWORD *)(ThreadWin32Thread + 648) & 2) == 0 )
    {
      NonChildAncestor = GetNonChildAncestor(a1, v6, v7);
      v9 = (const struct tagWND *)NonChildAncestor;
      if ( NonChildAncestor )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 16LL) & 1) != 0 )
        {
          v11 = *(_QWORD *)(NonChildAncestor + 168);
          v44 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v43, v11);
          if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v43) )
          {
            v12 = ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000
               && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v43[0] + 40LL) + 40LL) & 1) == 0;
            v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v43[0] + 40LL) + 40LL);
            if ( v2 )
            {
              if ( (v13 & 4) != 0 )
                return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v43);
              v14 = *(_QWORD *)(gpsi + 4752LL);
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v43[0] + 40LL) + 40LL) |= 4u;
            }
            else
            {
              if ( (v13 & 4) == 0 )
                return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v43);
              if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v43[0] + 40LL) + 24LL) )
              {
                v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v43[0] + 40LL) + 24LL);
              }
              else if ( v12 )
              {
                v14 = *(_QWORD *)(gpsi + 4936LL);
              }
              else
              {
                v14 = *(_QWORD *)(gpsi + 4728LL);
              }
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v43[0] + 40LL) + 40LL) &= ~4u;
            }
            v46 = v14;
            v15 = *(_QWORD **)(*(_QWORD *)v43[0] + 88LL);
            DCEx = _GetDCEx(v9, 0LL, 65539LL);
            v17 = v44;
            v18 = (HDC)DCEx;
            if ( !v44 )
              v17 = *(_QWORD *)v43[0];
            *(_DWORD *)(*(_QWORD *)(v17 + 40) + 40LL) |= 0x200u;
            ThreadLock(v17, &v53);
            LODWORD(v45) = 0;
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v43[0] + 40LL) + 44LL) )
            {
              do
              {
                v19 = v44;
                if ( !v44 )
                  v19 = *(_QWORD *)v43[0];
                if ( (unsigned int)MNGetpItemIndex(v19, v15) == -1 )
                  break;
                v20 = v44;
                if ( !v44 )
                  v20 = *(_QWORD *)v43[0];
                v21 = MNIsOwnerDrawItem(v20, v15);
                v49 = v15[11];
                v47 = v15[3];
                if ( v47 || v21 )
                {
                  if ( v21 )
                    DPIMETRICS = GetDPIMETRICS(v9);
                  else
                    DPIMETRICS = (const struct tagDPIMETRICS *)GetDPIMetrics();
                  GreSelectFontInternal(v18, *(_QWORD *)DPIMETRICS, 1LL);
                  GreSetViewportOrg(v18);
                  if ( v2 && (*(_DWORD *)(*v15 + 4LL) & 0x100) != 0 )
                    v23 = *(_QWORD *)(gpsi + 4904LL);
                  else
                    v23 = v14;
                  GreSelectBrush(v18, v23);
                  if ( v21 )
                  {
                    xxxSendMenuDrawItemMessage((_DWORD)v18, 1, (unsigned int)v43, (_DWORD)v15, 0, 0, 0LL);
                  }
                  else
                  {
                    v24 = (_DWORD *)GetDPIMetrics();
                    v25 = v24[5];
                    if ( *(_DWORD *)(*v15 + 76LL) - v24[3] - v25 != 1 )
                      v25 += (unsigned int)(*(_DWORD *)(*v15 + 76LL) - v24[3] - v25 - 1) >> 1;
                    v26 = v24[2];
                    if ( (*(_DWORD *)*v15 & 0x2000) != 0 )
                    {
                      xxxPSMGetTextExtent(v18);
                      v27 = v44;
                      if ( !v44 )
                        v27 = *(_QWORD *)v43[0];
                      if ( (unsigned int)MNGetpItemIndex(v27, v15) == -1 || v49 != v15[11] )
                        break;
                      v30 = *(_DWORD *)(*v15 + 72LL);
                      DpiForSystem = GetDpiForSystem(v29, v28);
                      v26 = v30 - *((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 2) - v48 + v26 - 2;
                    }
                    if ( (unsigned int)CALL_LPK(v50) )
                    {
                      if ( a2 )
                      {
                        v32 = *(_DWORD *)(gpsi + 4596LL);
                      }
                      else if ( v12 )
                      {
                        v32 = *(_DWORD *)(gpsi + 4688LL);
                      }
                      else
                      {
                        v32 = *(_DWORD *)(gpsi + 4584LL);
                      }
                      v33 = GreSetTextColor((__int64)v18, v32);
                      xxxPSMTextOut(v18, *(_DWORD *)(*v15 + 48LL), 0x200000);
                      v34 = v44;
                      if ( !v44 )
                        v34 = *(_QWORD *)v43[0];
                      if ( (unsigned int)MNGetpItemIndex(v34, v15) == -1 || v49 != v15[11] )
                        break;
                      GreSetTextColor((__int64)v18, v33);
                    }
                    else
                    {
                      v52 = 0LL;
                      v35 = *v15;
                      v51 = 0LL;
                      v36 = *(_DWORD *)(v35 + 48);
                      if ( v36 < 0xFF )
                      {
                        v38 = v55;
                      }
                      else
                      {
                        v37 = Win32AllocPoolZInit(2LL * (v36 + 1), 1953657685LL);
                        v38 = (_BYTE *)v37;
                        if ( !v37 )
                          break;
                        PushW32ThreadLock(v37, &v51, Win32FreePool);
                      }
                      PrefixCount = GetPrefixCount(
                                      v47,
                                      *(unsigned int *)(*v15 + 48LL),
                                      v38,
                                      *(unsigned int *)(*v15 + 48LL));
                      xxxDrawItemUnderline(v43, v15, v18, v26, v25, v38, PrefixCount);
                      if ( v38 != v55 )
                        PopAndFreeAlwaysW32ThreadLock(&v51);
                    }
                    v2 = a2;
                  }
                }
                LODWORD(v45) = v45 + 1;
                v40 = MNGetpItemFromIndex();
                v14 = v46;
                v15 = (_QWORD *)v40;
              }
              while ( v41 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v43[0] + 40LL) + 44LL) );
            }
            ThreadUnlockMenuNoModify(&v53);
            _ReleaseDC(v18);
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v43);
}
