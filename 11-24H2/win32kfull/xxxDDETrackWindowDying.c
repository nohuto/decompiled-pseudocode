/*
 * XREFs of xxxDDETrackWindowDying @ 0x1402B10D4
 * Callers:
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14002E080 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14004083C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetAppCompatFlags2 @ 0x140049EF0 (GetAppCompatFlags2.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140066508 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x140183234 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ??1?$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ @ 0x1401AA454 (--1-$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLockBase@UtagDDECONV@@$0A@$00@@QEAA@XZ @ 0x1402AF700 (--1-$Win32HMThreadLockBase@UtagDDECONV@@$0A@$00@@QEAA@XZ.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1402AFE6C (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     xxxFreeDdeConv @ 0x1402B1314 (xxxFreeDdeConv.c)
 */

void __fastcall xxxDDETrackWindowDying(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // r14
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // r8
  __int128 *v14; // rcx
  int v15; // ebx
  __int64 v16; // rsi
  struct tagTHREADINFO *v17; // rax
  struct tagTHREADINFO *v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  struct tagDDECONV *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  ULONG_PTR v26[2]; // [rsp+30h] [rbp-29h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-19h] BYREF
  __int128 v28; // [rsp+50h] [rbp-9h] BYREF
  __int64 v29; // [rsp+60h] [rbp+7h]
  __int128 v30; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v31; // [rsp+78h] [rbp+1Fh]

  if ( a2 )
  {
    v2 = a2;
    do
    {
      v3 = *(_QWORD *)(v2 + 24);
      v4 = 0LL;
      v5 = PtiCurrent(a1, a2);
      Win32HM_LockIntoThread<1>((__int64)v5, v3, (__int64 *)BugCheckParameter3);
      v8 = PtiCurrent(v7, v6);
      Win32HM_LockIntoThread<0>((__int64)v8, v2, v26);
      if ( (*(_DWORD *)(v2 + 80) & 2) == 0 )
      {
        if ( (GetAppCompatFlags2(1024LL, v9) & 0x20) == 0
          || (v10 = *(_QWORD *)(v2 + 48)) == 0
          || (v11 = *(_QWORD *)(v10 + 16), *(_DWORD *)(v11 + 672) > 0x400u)
          || (*(_DWORD *)(v11 + 688) & 0x20) == 0 )
        {
          v12 = *(unsigned __int64 **)(v2 + 40);
          if ( v12 )
            v13 = *v12;
          else
            v13 = 0LL;
          _PostTransformableMessageExtended(*(struct tagWND **)(v2 + 48), 0x3E1u, v13, 0LL, 0LL, 1);
        }
      }
      v14 = *(__int128 **)(v2 + 32);
      if ( v14 )
      {
        if ( (v14[5] & 0xA) != 0 )
        {
          v4 = *((_QWORD *)v14 + 9);
          v15 = 1;
          *((_QWORD *)v14 + 9) = 0LL;
        }
        else
        {
          v15 = 0;
        }
        *(_DWORD *)(*(_QWORD *)(v2 + 32) + 80LL) |= 6u;
      }
      else
      {
        v15 = 1;
      }
      v16 = *(_QWORD *)(v2 + 72);
      *(_QWORD *)(v2 + 72) = 0LL;
      v31 = -1LL;
      v30 = 0LL;
      if ( v16 )
      {
        v17 = PtiCurrent((__int64)v14, v9);
        *(_QWORD *)&v30 = *((_QWORD *)v17 + 48);
        v14 = &v30;
        *((_QWORD *)v17 + 48) = &v30;
        *((_QWORD *)&v30 + 1) = v16;
        v31 = (__int64)xxxFreeListFree;
      }
      v29 = -1LL;
      v28 = 0LL;
      if ( v4 )
      {
        v18 = PtiCurrent((__int64)v14, v9);
        *(_QWORD *)&v28 = *((_QWORD *)v18 + 48);
        *((_QWORD *)v18 + 48) = &v28;
        *((_QWORD *)&v28 + 1) = v4;
        v29 = (__int64)xxxFreeListFree;
      }
      v19 = *(_DWORD *)(v2 + 80);
      if ( (v19 & 2) != 0 && v15 || (v19 & 4) != 0 )
      {
        if ( (*(_BYTE *)(_HMPheFromObject(v2) + 25) & 1) == 0 )
          *(_QWORD *)(v2 + 32) = xxxFreeDdeConv(*(struct tagDDECONV **)(v2 + 32));
        v21 = (struct tagDDECONV *)Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(v26, v20);
        if ( v21 )
          xxxFreeDdeConv(v21);
      }
      else
      {
        UnlinkConv((struct tagDDECONV *)v2, v9);
        Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(v26, v23);
      }
      v2 = Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v22);
      if ( v29 != -1 )
      {
        PopAndFreeW32ThreadLock((__int64)&v28, v24);
        v29 = -1LL;
      }
      if ( v31 != -1 )
      {
        PopAndFreeW32ThreadLock((__int64)&v30, v24);
        v31 = -1LL;
      }
      Win32HMThreadLockBase<tagDDECONV,0,1>::~Win32HMThreadLockBase<tagDDECONV,0,1>(v26, v24);
      Win32HMThreadLockBase<tagMONITOR,1,1>::~Win32HMThreadLockBase<tagMONITOR,1,1>(BugCheckParameter3, v25);
    }
    while ( v2 );
  }
}
