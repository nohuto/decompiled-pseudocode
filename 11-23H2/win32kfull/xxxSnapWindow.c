/*
 * XREFs of xxxSnapWindow @ 0x1C0227938
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012BAE0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     xxxCloseClipboard @ 0x1C0011310 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C00113BC (_OpenClipboard.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0024FB0 (GreCreateCompatibleBitmapInternal.c)
 *     ReferenceWindowStation @ 0x1C0068460 (ReferenceWindowStation.c)
 *     xxxPlayEventSound @ 0x1C0085A20 (xxxPlayEventSound.c)
 *     xxxEmptyClipboard @ 0x1C009AC2C (xxxEmptyClipboard.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AD580 (PopAndFreeW32ThreadLock.c)
 *     IntersectRect @ 0x1C00AEB30 (IntersectRect.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00B4B3C (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     NtGdiBitBltInternal @ 0x1C0105030 (NtGdiBitBltInternal.c)
 *     _SetClipboardData @ 0x1C01FD39C (_SetClipboardData.c)
 *     ClientNoMemoryPopup @ 0x1C0205490 (ClientNoMemoryPopup.c)
 *     CreateScreenPalette @ 0x1C02277D8 (CreateScreenPalette.c)
 *     GreEnableAppContainerRestriction @ 0x1C026B4FC (GreEnableAppContainerRestriction.c)
 *     DwmAsyncSnapshotWindow @ 0x1C026D2EC (DwmAsyncSnapshotWindow.c)
 */

__int64 __fastcall xxxSnapWindow(_QWORD *a1, int a2)
{
  __int64 CompatibleDC; // rdi
  char *v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned int v18; // r12d
  unsigned int v19; // r13d
  int v20; // edx
  int v21; // r8d
  int v22; // edx
  __int64 DCEx; // rax
  HDC v24; // r14
  __int64 Bitmap; // rax
  char *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // [rsp+60h] [rbp-59h]
  __int128 v40; // [rsp+68h] [rbp-51h] BYREF
  __int64 v41; // [rsp+78h] [rbp-41h]
  __int128 v42; // [rsp+80h] [rbp-39h] BYREF
  __int64 v43; // [rsp+90h] [rbp-29h]
  __int128 v44; // [rsp+98h] [rbp-21h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-11h]
  __int128 v46; // [rsp+B0h] [rbp-9h] BYREF
  __int128 v47; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v48; // [rsp+D0h] [rbp+17h]
  PVOID Object; // [rsp+130h] [rbp+77h] BYREF
  void *v51; // [rsp+138h] [rbp+7Fh] BYREF

  Object = 0LL;
  v43 = 0LL;
  CompatibleDC = 0LL;
  v45 = 0LL;
  v48 = 0LL;
  v42 = 0LL;
  v44 = 0LL;
  v47 = 0LL;
  v41 = gptiCurrent;
  if ( (PVOID)grpdeskRitInput != grpdeskLogon
    && ReferenceWindowStation(KeGetCurrentThread(), 0LL, 0x200u, &Object, 1) >= 0 )
  {
    v4 = (char *)Object;
    if ( (*((_DWORD *)Object + 16) & 4) == 0 && *(PVOID *)(a1[3] + 40LL) == Object )
    {
      while ( (*(_BYTE *)(a1[5] + 31LL) & 0x40) != 0 )
        a1 = (_QWORD *)a1[13];
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        v7 = (void *)ReferenceDwmApiPort(v6, v5);
        if ( (int)DwmAsyncSnapshotWindow(v7) < 0 )
          return 0;
        v11 = 1;
LABEL_48:
        xxxPlayEventSound(13LL, v8, v9, v10);
        return v11;
      }
      ThreadLock(a1, &v47);
      PushW32ThreadLock((__int64)v4, &v44, UserDereferenceObject);
      ObfReferenceObject(v4);
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
      *(_QWORD *)&v42 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v42;
      *((_QWORD *)&v42 + 1) = v12;
      if ( v12 )
        HMLockObject(v12);
      if ( (unsigned int)OpenClipboard(v12, 0LL) )
      {
        ThreadUnlock1(v14, v13, v15);
        xxxEmptyClipboard((void **)v4);
        v16 = a1[5];
        v17 = *gpDispInfo;
        v40 = *(_OWORD *)(v16 + 88);
        v46 = *(_OWORD *)(v17 + 24);
        if ( !(unsigned int)IntersectRect(&v40, (int *)&v40, (int *)&v46) )
        {
          v11 = 0;
          goto LABEL_45;
        }
        v18 = DWORD2(v40) - v40;
        v19 = HIDWORD(v40) - DWORD1(v40);
        LODWORD(v51) = DWORD1(v40);
        v39 = v40;
        if ( a1 != (_QWORD *)GetDesktopWindow((__int64)a1) )
        {
          v22 = v20 - *(_DWORD *)(v16 + 88);
          LODWORD(v51) = v21 - *(_DWORD *)(v16 + 92);
          v39 = v22;
        }
        DCEx = _GetDCEx(a1, 0LL, 65537LL);
        v24 = (HDC)DCEx;
        if ( DCEx
          && (CompatibleDC = GreCreateCompatibleDC(DCEx)) != 0
          && (!*(_DWORD *)(gpsi + 2220LL)
            ? (Bitmap = GreCreateBitmap(v18, v19, 1LL))
            : (Bitmap = GreCreateCompatibleBitmapInternal((__int64)v24, v18, v19, 0, 0LL, 0LL)),
              (v26 = (char *)Bitmap) != 0LL || (v26 = (char *)GreCreateBitmap(v18, v19, 1LL)) != 0LL) )
        {
          *(_QWORD *)&v40 = GreSelectBitmap(CompatibleDC, v26);
          if ( !a2
            && (v27 = *(_QWORD *)(v41 + 456), a1 == *(_QWORD **)(*(_QWORD *)(v27 + 8) + 24LL))
            && (unsigned int)UserIsCurrentProcessImmersiveAppContainer(v27) )
          {
            LOBYTE(Object) = 1;
            GreEnableAppContainerRestriction(0LL);
          }
          else
          {
            LOBYTE(Object) = 0;
          }
          if ( (unsigned int)IsWindowDesktopComposed(a1) )
          {
            UserSessionSwitchLeaveCrit(v29, v28, v30, v31);
            v11 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v18, v19, v24, v39, (int)v51, 1087111200, 0, 4);
            EnterCrit(1LL, 0LL);
          }
          else
          {
            v11 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v18, v19, v24, v39, (int)v51, 1087111200, 0, 0);
          }
          if ( (_BYTE)Object )
            GreEnableAppContainerRestriction(1LL);
          GreSelectBitmap(CompatibleDC, v40);
          if ( v11 )
          {
            SetClipboardData(2u, v26, 0, 1);
            if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 )
            {
              v51 = 0LL;
              Object = 0LL;
              if ( (int)CreateScreenPalette(v24, &v51, (__int64 *)&Object) >= 0 )
              {
                SetClipboardData(9u, (char *)Object, 0, 1);
                Win32FreePool(v51);
              }
            }
            v11 = 1;
          }
          else if ( v26 )
          {
            GreDeleteObject(v26);
          }
        }
        else
        {
          ClientNoMemoryPopup();
          v11 = 0;
          if ( !v24 )
            goto LABEL_45;
        }
        _ReleaseDC(v24);
LABEL_45:
        xxxCloseClipboard((struct tagWINDOWSTATION *)v4);
        HMAssignmentUnlock(v4 + 112);
        if ( CompatibleDC )
          GreDeleteDC(CompatibleDC);
        PopAndFreeW32ThreadLock((__int64)&v44);
        ThreadUnlock1(v33, v32, v34);
        if ( !v11 )
          return v11;
        goto LABEL_48;
      }
      ThreadUnlock1(v14, v13, v15);
      PopAndFreeW32ThreadLock((__int64)&v44);
      ThreadUnlock1(v37, v36, v38);
    }
  }
  return 0LL;
}
