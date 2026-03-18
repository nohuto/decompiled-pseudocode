/*
 * XREFs of xxxTranslateAccelerator @ 0x14009CDF0
 * Callers:
 *     NtUserTranslateAccelerator @ 0x14009CCF0 (NtUserTranslateAccelerator.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x140046AF8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140046B4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x14006E488 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     xxxSetSysMenu @ 0x14006F958 (xxxSetSysMenu.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     SystoChar @ 0x14009D1D8 (SystoChar.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x14009D240 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     xxxLoadSysDesktopMenu @ 0x1401A8EE8 (xxxLoadSysDesktopMenu.c)
 */

__int64 __fastcall xxxTranslateAccelerator(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r13
  unsigned int v7; // r12d
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // rcx
  int v18; // ebx
  __int16 KeyState; // ax
  unsigned int v20; // edi
  __int16 v21; // ax
  __int64 v22; // rcx
  __int64 v23; // rdx
  char v24; // r14
  unsigned __int64 v26; // r12
  BOOL v27; // edi
  int v28; // ebx
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 SysDesktopMenu; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct tagTHREADINFO *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // r15d
  __int64 *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  struct tagTHREADINFO *v42; // rax
  unsigned int v43; // [rsp+50h] [rbp-29h]
  __int64 v44; // [rsp+58h] [rbp-21h] BYREF
  __int64 v45; // [rsp+60h] [rbp-19h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+68h] [rbp-11h] BYREF
  ULONG_PTR v47[2]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v48[9]; // [rsp+88h] [rbp+Fh] BYREF

  v44 = 0LL;
  if ( (*(_BYTE *)(W32GetUserSessionState(a1, a2) + 14704) & 2) != 0 )
    return 0LL;
  v6 = a2 + 28;
  v7 = 0;
  v8 = SystoChar(*(unsigned int *)(a3 + 8), *(_QWORD *)(a3 + 24)) - 256;
  if ( !v8 )
  {
LABEL_5:
    v13 = 1LL;
    v45 = 1LL;
    goto LABEL_6;
  }
  v11 = v8 - 2;
  if ( v11 )
  {
    v12 = v11 - 2;
    if ( !v12 )
      goto LABEL_5;
    if ( v12 != 2 )
      return 0LL;
  }
  v13 = 0LL;
  v45 = 0LL;
LABEL_6:
  if ( *((_QWORD *)PtiCurrent(v10, v9) + 60)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v15, v14) + 60) + 48LL) + 32LL) + 80LL) & 1) != 0
    && (_GetKeyState(165LL) & 0x8000u) != 0LL )
  {
    v17 = 163LL;
    v16 = 164;
  }
  else
  {
    v16 = 18;
    v17 = 17LL;
  }
  v18 = ((__int16)_GetKeyState(v17) >> 31) & 8;
  KeyState = _GetKeyState(v16);
  v20 = v18 | 0x10;
  if ( KeyState >= 0 )
    v20 = v18;
  v21 = _GetKeyState(16LL);
  v22 = a3;
  v23 = v20 | 4;
  if ( v21 >= 0 )
    v23 = v20;
  v43 = v23;
  do
  {
    v24 = *(_BYTE *)v6;
    if ( *(unsigned __int16 *)(v6 + 2) == *(_QWORD *)(v22 + 16)
      && (_DWORD)v13 == (v24 & 1)
      && (!v13 || (((unsigned __int8)v24 ^ (unsigned __int8)v23) & 0xC) == 0)
      && (((unsigned __int8)v24 ^ (unsigned __int8)v23) & 0x10) == 0 )
    {
      v26 = *(unsigned __int16 *)(v6 + 4);
      v27 = 0;
      v28 = 0;
      if ( *(_WORD *)(v6 + 4) )
      {
        v29 = *((_QWORD *)a1 + 21);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
        {
          Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v47, *((_QWORD *)a1 + 21));
          SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v48, v29);
          v28 = xxxTA_AccelerateMenu(a1, v48, (unsigned int)v26, &v44);
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v48, v39);
          v42 = PtiCurrent(v41, v40);
          Win32HM_UnlockFromThread<1>((ULONG_PTR)v42, v47);
        }
        v30 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v30 + 31) & 0x40) != 0 || !v28 )
        {
          SysDesktopMenu = *((_QWORD *)a1 + 20);
          BugCheckParameter3[0] = -1LL;
          BugCheckParameter3[1] = 0LL;
          if ( SysDesktopMenu || (*(_BYTE *)(v30 + 30) & 8) == 0 )
          {
            Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)BugCheckParameter3, SysDesktopMenu);
          }
          else
          {
            v38 = (__int64 *)(*((_QWORD *)a1 + 3) + 56LL);
            SysDesktopMenu = *v38;
            if ( !*v38 )
              SysDesktopMenu = xxxLoadSysDesktopMenu(v38, 16LL);
            Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)BugCheckParameter3, SysDesktopMenu);
            xxxSetSysMenu(a1);
          }
          SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v48, SysDesktopMenu);
          v28 = xxxTA_AccelerateMenu(a1, v48, (unsigned int)v26, &v44);
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v48, v32);
          v27 = v28 != 0;
          if ( BugCheckParameter3[0] != -1LL )
          {
            v34 = PtiCurrent(v33, v23);
            Win32HM_UnlockFromThread<1>((ULONG_PTR)v34, BugCheckParameter3);
          }
        }
      }
      v35 = *((_QWORD *)a1 + 5);
      v36 = *(unsigned __int8 *)(v35 + 31);
      v37 = *(_BYTE *)(v35 + 31) & 8;
      if ( (v28 & 1) == 0
        && (!v28 || ((v36 & 0x20) == 0 || v27) && !*(_QWORD *)(*((_QWORD *)PtiCurrent(v36, v23) + 59) + 112LL) && !v37) )
      {
        if ( v27 )
          xxxSendTransformableMessageTimeout(
            (struct tagTHREADINFO **)a1,
            274LL,
            v26,
            (struct tagDRAWITEMSTRUCT *)0x10000,
            0,
            0,
            0LL,
            1,
            0);
        else
          xxxSendMessage(a1, 0x111u);
        v24 = 0x80;
      }
      if ( v44 )
      {
        xxxSendMessage(a1, 0x125u);
        v44 = 0LL;
      }
      v23 = v43;
      v22 = a3;
      v7 = 1;
    }
    v6 += 6LL;
    if ( v24 < 0 )
      break;
    v13 = v45;
  }
  while ( !v7 );
  return v7;
}
