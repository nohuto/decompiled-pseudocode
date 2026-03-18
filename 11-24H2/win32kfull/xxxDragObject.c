/*
 * XREFs of xxxDragObject @ 0x1402DF924
 * Callers:
 *     NtUserDragObject @ 0x140293D50 (NtUserDragObject.c)
 * Callees:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1400322B0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032E40 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140040808 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14004083C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1400759F4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxReleaseCapture @ 0x140089E6C (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x140089F18 (xxxSetCapture.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x140092F08 (-zzzShowCursor@@YAH_N@Z.c)
 *     xxxInternalGetMessage @ 0x140107C10 (xxxInternalGetMessage.c)
 *     xxxSleepThread @ 0x14010A09C (xxxSleepThread.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1402DF7A8 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 */

__int64 __fastcall xxxDragObject(struct tagWND *a1, struct tagWND *a2, int a3, __int64 a4, struct tagCURSOR *a5)
{
  unsigned int v5; // ebx
  struct tagCURSOR *v6; // rdi
  struct tagTHREADINFO *v10; // r13
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rdx
  struct tagTHREADINFO *v16; // rcx
  __int64 v17; // rax
  struct tagCURSOR *v18; // r12
  struct tagTHREADINFO *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct tagWND *i; // r15
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // r15d
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct tagWND *v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  int v37; // r15d
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  struct tagCURSOR *DropObject; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  struct tagWND *v47; // r12
  unsigned int v48; // edx
  __int64 UserSessionState; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  struct tagWND *v59; // rdi
  unsigned int v60; // edi
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rdx
  unsigned __int64 v70; // [rsp+28h] [rbp-A1h]
  int v71; // [rsp+38h] [rbp-91h]
  struct tagWND *v72; // [rsp+40h] [rbp-89h]
  struct tagCURSOR *v73; // [rsp+48h] [rbp-81h]
  ULONG_PTR v74[2]; // [rsp+50h] [rbp-79h] BYREF
  ULONG_PTR v75[2]; // [rsp+60h] [rbp-69h] BYREF
  __int128 v76; // [rsp+70h] [rbp-59h] BYREF
  __int128 v77; // [rsp+80h] [rbp-49h]
  __int128 v78; // [rsp+90h] [rbp-39h]
  _QWORD v79[3]; // [rsp+A0h] [rbp-29h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+B8h] [rbp-11h] BYREF
  _OWORD v81[3]; // [rsp+C8h] [rbp-1h] BYREF

  v71 = 1;
  v5 = 0;
  v76 = 0LL;
  LODWORD(v75[0]) = 0;
  v6 = 0LL;
  v77 = 0LL;
  v72 = 0LL;
  v78 = 0LL;
  memset(v81, 0, sizeof(v81));
  v10 = PtiCurrent((__int64)a1, (__int64)a2);
  result = Win32AllocPoolWithQuotaZInit(96LL, 1935962965LL);
  v14 = result;
  if ( !result )
    return result;
  v16 = PtiCurrent(v13, v12);
  v79[0] = *((_QWORD *)v16 + 48);
  *((_QWORD *)v16 + 48) = v79;
  v79[2] = Win32FreePool;
  v17 = 0LL;
  v79[1] = v14;
  if ( a2 )
    v17 = *(_QWORD *)a2;
  *(_QWORD *)v14 = v17;
  *(_DWORD *)(v14 + 16) = a3;
  *(_QWORD *)(v14 + 24) = a4;
  if ( a5 )
    v18 = zzzSetCursor(a5, v15);
  else
    v18 = *(struct tagCURSOR **)(*((_QWORD *)v10 + 59) + 424LL);
  v73 = v18;
  v19 = PtiCurrent((__int64)v16, v15);
  Win32HM_LockIntoThread<1>((__int64)v19, (__int64)v18, (__int64 *)BugCheckParameter3);
  if ( a2 )
  {
    for ( i = a2; (*(_BYTE *)(*((_QWORD *)i + 5) + 31LL) & 0xC0) == 0x40; i = (struct tagWND *)*((_QWORD *)i + 13) )
      ;
    Win32HM_LockIntoThread<1>((__int64)v10, (__int64)i, (__int64 *)v74);
    xxxInternalUpdateWindow(i, 1u);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v74, v23);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v21, v20) + 18944) )
  {
    v27 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 18944);
    if ( *(_QWORD *)(v27 + 120) )
    {
      v29 = *(_QWORD *)(W32GetUserSessionState(v27, v26) + 18944);
      if ( v29 == *((_QWORD *)v10 + 59) )
      {
        v31 = 33;
        if ( *(struct tagTHREADINFO **)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v29, v28) + 18944) + 120LL) + 16LL) != v10 )
          v31 = 49;
        v33 = *(_QWORD *)(W32GetUserSessionState(49LL, v30) + 18944);
        if ( *(struct tagTHREADINFO **)(*(_QWORD *)(v33 + 120) + 16LL) == v10 )
          v34 = a2;
        else
          v34 = *(struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v33, v32) + 18944) + 120LL);
        xxxWindowEvent(0x80000004, v34, 0, 3u, v31);
      }
    }
  }
  xxxWindowEvent(0xEu, a2, 0, 0, 0);
  xxxSetCapture(a2, v35);
  zzzShowCursor(1);
  Win32HM_LockIntoThread<1>((__int64)v10, 0LL, (__int64 *)v74);
  v37 = 1;
  while ( v37 && *(struct tagWND **)(*((_QWORD *)v10 + 59) + 112LL) == a2 )
  {
    while ( 1 )
    {
      LODWORD(v70) = 1;
      if ( (unsigned int)xxxInternalGetMessage((__int64)&v76, 0LL, 512, 526, v70, 0) )
        break;
      LODWORD(v70) = 1;
      if ( (unsigned int)xxxInternalGetMessage((__int64)&v76, 0LL, 35, 35, v70, 0) )
        break;
      LODWORD(v70) = 1;
      if ( (unsigned int)xxxInternalGetMessage((__int64)&v76, 0LL, 256, 265, v70, 0) )
        break;
      if ( !(unsigned int)xxxSleepThread(7LL, 0LL, 1, 0) )
      {
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v74, v38);
        goto LABEL_64;
      }
    }
    do
      LODWORD(v70) = 1;
    while ( (unsigned int)xxxInternalGetMessage((__int64)v81, 0LL, 256, 265, v70, 0) );
    if ( *(struct tagWND **)(*((_QWORD *)v10 + 59) + 112LL) != a2 || DWORD2(v76) == 256 && (_QWORD)v77 == 27LL )
    {
      UserSessionState = W32GetUserSessionState(v41, v40);
      v6 = *(struct tagCURSOR **)(UserSessionState + 27456);
      if ( v6 )
        zzzSetCursor(*(struct tagCURSOR **)(UserSessionState + 27456), v36);
      break;
    }
    v42 = *(_OWORD *)(v14 + 16);
    *(_OWORD *)(v14 + 48) = *(_OWORD *)v14;
    v43 = *(_OWORD *)(v14 + 32);
    *(_OWORD *)(v14 + 64) = v42;
    *(_OWORD *)(v14 + 80) = v43;
    *(_QWORD *)(v14 + 32) = *(_QWORD *)((char *)&v78 + 4);
    DropObject = xxxQueryDropObject(a1, (struct tagDROPSTRUCT *)v14);
    v6 = DropObject;
    if ( !DropObject )
    {
      v6 = *(struct tagCURSOR **)(W32GetUserSessionState(v46, v45) + 27456);
      *(_QWORD *)(v14 + 8) = 0LL;
      goto LABEL_36;
    }
    if ( DropObject == (struct tagCURSOR *)1 )
    {
      v6 = a5;
LABEL_36:
      if ( !v6 )
        goto LABEL_38;
    }
    zzzSetCursor(v6, v45);
LABEL_38:
    if ( a2 )
    {
      W32GetUserSessionState(v46, v45);
      xxxSendMessage(a2, 0x22Du);
    }
    LOBYTE(v45) = 1;
    v47 = v72;
    if ( v72 == (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(v14 + 8), v45) )
    {
      if ( !v72 )
        goto LABEL_48;
      v48 = 559;
      goto LABEL_47;
    }
    if ( v72 )
      xxxSendMessage(v72, 0x22Eu);
    LOBYTE(v36) = 1;
    v72 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(v14 + 8), v36);
    v47 = v72;
    Win32HM_ExchangeThreadLock<1>((__int64)v72, (__int64)v74);
    if ( v72 )
    {
      v48 = 558;
LABEL_47:
      xxxSendMessage(v47, v48);
    }
LABEL_48:
    if ( DWORD2(v76) != 162 )
    {
      v37 = v71;
      if ( DWORD2(v76) != 514 )
        continue;
    }
    v37 = 0;
    v71 = 0;
  }
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v74, v36);
  if ( v37 )
    v6 = *(struct tagCURSOR **)(W32GetUserSessionState(v51, v50) + 27456);
  xxxReleaseCapture(v51, v50);
  zzzShowCursor(0);
  zzzSetCursor(v73, v52);
  Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v53);
  if ( v6 == *(struct tagCURSOR **)(W32GetUserSessionState(v55, v54) + 27456)
    || (v58 = ValidateHwnd(*(_QWORD *)(v14 + 8)), (v59 = (struct tagWND *)v58) == 0LL) )
  {
    v60 = v75[0];
  }
  else
  {
    Win32HM_LockIntoThread<0>((__int64)v10, v58, v75);
    tagTHREADINFO::SetForegroundActivate(*((_QWORD *)v59 + 2), 4LL);
    v60 = xxxSendMessage(v59, 0x22Au);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v75, v61);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v57, v56) + 18944) )
  {
    v65 = *(_QWORD *)(W32GetUserSessionState(v63, v62) + 18944);
    if ( *(_QWORD *)(v65 + 120) )
    {
      v67 = *(_QWORD *)(W32GetUserSessionState(v65, v64) + 18944);
      if ( v67 == *((_QWORD *)v10 + 59) )
      {
        v68 = W32GetUserSessionState(v67, v66);
        xxxWindowEvent(0x80000005, *(struct tagWND **)(*(_QWORD *)(v68 + 18944) + 120LL), 0, 4u, 33);
      }
    }
  }
  xxxWindowEvent(0xFu, a2, 0, 0, 0);
  v5 = v60;
LABEL_64:
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v39);
  PopAndFreeW32ThreadLock((__int64)v79, v69);
  return v5;
}
