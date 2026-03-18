/*
 * XREFs of xxxCancelTracking @ 0x1401195C8
 * Callers:
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1402337EC (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023413C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x14003D210 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14004B6E8 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140061700 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1Win32RawLockedW32Thread@@QEAA@XZ @ 0x1401197C0 (--1Win32RawLockedW32Thread@@QEAA@XZ.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x140154180 (-UnlockWorker@-$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x140183234 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ?ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z @ 0x1401D3C2C (-ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z.c)
 *     xxxCancelTrackingForThread @ 0x1402AAEF0 (xxxCancelTrackingForThread.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void xxxCancelTracking()
{
  __int64 v0; // rdi
  tagTLBLOCK::_unnamed_type_list_ *v1; // rbx
  __int64 v2; // rsi
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebp
  struct tagTHREADINFO *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD **v12; // r14
  _QWORD *i; // rsi
  _QWORD *v14; // r15
  int v15; // ebx
  __int64 v16; // rbx
  _QWORD *v17; // rsi
  Win32RawLockedW32Thread *v18; // rbx
  __int64 v19; // rbx
  struct tagTHREADINFO **v20; // r14
  _OWORD *v21; // rbp
  _QWORD *v22; // rsi
  struct tagTHREADINFO *v23; // rcx
  _QWORD v24[12]; // [rsp+20h] [rbp-278h] BYREF
  _QWORD v25[24]; // [rsp+80h] [rbp-218h] BYREF
  _QWORD v26[36]; // [rsp+140h] [rbp-158h] BYREF
  __int64 v27; // [rsp+260h] [rbp-38h] BYREF

  memset_0(v24, 0, sizeof(v24));
  v0 = 12LL;
  v1 = (tagTLBLOCK::_unnamed_type_list_ *)v26;
  v2 = 12LL;
  do
  {
    tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_(v1);
    v1 = (tagTLBLOCK::_unnamed_type_list_ *)((char *)v1 + 24);
    --v2;
  }
  while ( v2 );
  v3 = v25;
  v4 = 12LL;
  do
  {
    Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(v3);
    v3 += 2;
    --v4;
  }
  while ( v4 );
  v7 = 0;
  v8 = PtiCurrent(v6, v5);
  v12 = (_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19200) + 176LL);
  for ( i = *v12; i != v12; i = (_QWORD *)*i )
  {
    v14 = i - 97;
    if ( *(i - 8) )
    {
      if ( v7 < 0xC )
      {
        v19 = v7;
        Win32RawLockedW32Thread::ManualLock((ULONG_PTR)&v26[3 * v7], (ULONG_PTR)(i - 97));
        Win32HM_LockIntoThread<0>((__int64)v8, *(_QWORD *)(v14[89] + 16LL), &v25[2 * v7++]);
        v24[v19] = v14;
      }
    }
  }
  v15 = v7 - 1;
  if ( (int)(v7 - 1) >= 0 )
  {
    v20 = (struct tagTHREADINFO **)&v24[v15];
    v21 = &v25[2 * v15];
    v22 = &v26[3 * v15];
    do
    {
      v23 = *v20;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)*v20 + 132, 0, 0) & 1) == 0 )
        xxxCancelTrackingForThread(v23);
      Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>((ULONG_PTR)v21);
      Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)v22);
      --v21;
      v22 -= 3;
      --v20;
      --v15;
    }
    while ( v15 >= 0 );
  }
  v16 = 12LL;
  v17 = v26;
  do
  {
    v17 -= 2;
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(v17, v11);
    --v16;
  }
  while ( v16 );
  v18 = (Win32RawLockedW32Thread *)&v27;
  do
  {
    v18 = (Win32RawLockedW32Thread *)((char *)v18 - 24);
    Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v18);
    --v0;
  }
  while ( v0 );
}
