/*
 * XREFs of xxxTranslateAccelerator @ 0x1C000C884
 * Callers:
 *     NtUserTranslateAccelerator @ 0x1C000C720 (NtUserTranslateAccelerator.c)
 * Callees:
 *     SystoChar @ 0x1C000C9D4 (SystoChar.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxLoadSysDesktopMenu @ 0x1C008DA54 (xxxLoadSysDesktopMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxSetSysMenu @ 0x1C02219A4 (xxxSetSysMenu.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C022FAAC (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 */

__int64 __fastcall xxxTranslateAccelerator(_QWORD *BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  unsigned int v5; // r13d
  int v6; // eax
  __int64 v7; // r15
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 v10; // rcx
  int v11; // ebx
  __int16 KeyState; // ax
  unsigned __int8 v13; // di
  __int16 v14; // ax
  __int64 v15; // rcx
  unsigned __int8 v16; // dl
  char v17; // r14
  int v19; // eax
  int v20; // eax
  BOOL v21; // edi
  int v22; // ebx
  __int64 v23; // r13
  __int64 v24; // rcx
  __int64 SysDesktopMenu; // rbx
  __int64 *v26; // rcx
  char v27; // cl
  unsigned __int8 v28; // [rsp+50h] [rbp-39h]
  __int64 v29; // [rsp+60h] [rbp-29h]
  __int128 v30; // [rsp+68h] [rbp-21h] BYREF
  __int64 v31; // [rsp+78h] [rbp-11h]
  _BYTE v32[16]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v33; // [rsp+90h] [rbp+7h]
  _BYTE v34[16]; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v35; // [rsp+A8h] [rbp+1Fh]

  v31 = 0LL;
  v30 = 0LL;
  if ( (gfInNumpadHexInput & 2) != 0 )
    return 0LL;
  v4 = a2 + 28;
  v5 = 0;
  v6 = SystoChar(*(unsigned int *)(a3 + 8), *(_QWORD *)(a3 + 24)) - 256;
  if ( !v6 )
  {
LABEL_3:
    v7 = 1LL;
    v29 = 1LL;
    goto LABEL_4;
  }
  v19 = v6 - 2;
  if ( v19 )
  {
    v20 = v19 - 2;
    if ( !v20 )
      goto LABEL_3;
    if ( v20 != 2 )
      return 0LL;
  }
  v7 = 0LL;
  v29 = 0LL;
LABEL_4:
  v8 = *(_QWORD *)(gptiCurrent + 440LL);
  if ( v8
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 32LL) + 80LL) & 1) != 0
    && (_GetKeyState(165LL) & 0x8000) != 0 )
  {
    v10 = 163LL;
    v9 = 164;
  }
  else
  {
    v9 = 18;
    v10 = 17LL;
  }
  v11 = ((unsigned __int16)_GetKeyState(v10) >> 12) & 8;
  KeyState = _GetKeyState(v9);
  v13 = v11 | 0x10;
  if ( KeyState >= 0 )
    v13 = v11;
  v14 = _GetKeyState(16LL);
  v15 = a3;
  v16 = v13 | 4;
  if ( v14 >= 0 )
    v16 = v13;
  v28 = v16;
  do
  {
    v17 = *(_BYTE *)v4;
    if ( *(unsigned __int16 *)(v4 + 2) == *(_QWORD *)(v15 + 16)
      && (_DWORD)v7 == (v17 & 1)
      && (!v7 || (((unsigned __int8)v17 ^ v16) & 0xC) == 0)
      && (((unsigned __int8)v17 ^ v16) & 0x10) == 0 )
    {
      v5 = 1;
      v21 = 0;
      v22 = 0;
      if ( *(_WORD *)(v4 + 4) )
      {
        v23 = BugCheckParameter2[21];
        if ( (*(_BYTE *)(BugCheckParameter2[5] + 31LL) & 0x40) == 0 )
        {
          ThreadLock(BugCheckParameter2[21], &v30);
          SmartObjStackRefBase<tagMENU>::Init(v32, v23);
          v33 = 0LL;
          v22 = xxxTA_AccelerateMenu((ULONG_PTR)BugCheckParameter2);
          SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v32);
          ThreadUnlock1();
        }
        v24 = BugCheckParameter2[5];
        if ( (*(_BYTE *)(v24 + 31) & 0x40) != 0 || !v22 )
        {
          SysDesktopMenu = BugCheckParameter2[20];
          if ( SysDesktopMenu || (*(_BYTE *)(v24 + 30) & 8) == 0 )
          {
            ThreadLock(BugCheckParameter2[20], &v30);
          }
          else
          {
            v26 = (__int64 *)(BugCheckParameter2[3] + 56LL);
            SysDesktopMenu = *v26;
            if ( !*v26 )
              SysDesktopMenu = xxxLoadSysDesktopMenu(v26, 16LL);
            ThreadLock(SysDesktopMenu, &v30);
            xxxSetSysMenu(BugCheckParameter2);
          }
          SmartObjStackRefBase<tagMENU>::Init(v34, SysDesktopMenu);
          v35 = 0LL;
          v22 = xxxTA_AccelerateMenu((ULONG_PTR)BugCheckParameter2);
          v21 = v22 != 0;
          SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v34);
          ThreadUnlock1();
        }
        v5 = 1;
      }
      v27 = *(_BYTE *)(BugCheckParameter2[5] + 31LL);
      if ( (v22 & 1) == 0
        && (!v22
         || ((v27 & 0x20) == 0 || v21) && !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) && (v27 & 8) == 0) )
      {
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout((ULONG_PTR)BugCheckParameter2, 0, 0, 0LL, 1, !v21);
        v17 = 0x80;
      }
      v16 = v28;
      v15 = a3;
    }
    v4 += 6LL;
    if ( v17 < 0 )
      break;
    v7 = v29;
  }
  while ( !v5 );
  return v5;
}
