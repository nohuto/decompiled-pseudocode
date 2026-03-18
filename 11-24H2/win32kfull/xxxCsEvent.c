/*
 * XREFs of xxxCsEvent @ 0x1402DBB18
 * Callers:
 *     xxxChangeMonitorFlags @ 0x14015FB8C (xxxChangeMonitorFlags.c)
 *     NtUserEvent @ 0x140294DD0 (NtUserEvent.c)
 *     xxxMessageEvent @ 0x1402DBE70 (xxxMessageEvent.c)
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1?$Win32RawLockedItem@UtagEVENT_PACKET_TARGETS@@$0A@@@QEAA@XZ @ 0x140160900 (--1-$Win32RawLockedItem@UtagEVENT_PACKET_TARGETS@@$0A@@@QEAA@XZ.c)
 *     ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x1401646B0 (--0-$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXP.c)
 *     ??$?0X@?$Win32RawLockedItem@UtagEVENT_PACKET_TARGETS@@$0A@@@QEAA@PEAUtagEVENT_PACKET_TARGETS@@P6AX0@Z@Z @ 0x1402DBA64 (--$-0X@-$Win32RawLockedItem@UtagEVENT_PACKET_TARGETS@@$0A@@@QEAA@PEAUtagEVENT_PACKET_TARGETS@@P6.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall xxxCsEvent(const void *a1, __int64 a2)
{
  int v2; // esi
  struct tagTHREADINFO *v3; // r15
  _WORD *v4; // rax
  _WORD *v5; // rbx
  int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // edx
  _DWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _DWORD *v15; // rdi
  int v16; // r14d
  __int64 i; // rsi
  __int64 v18; // rdx
  int j; // esi
  _QWORD *v20; // rax
  __int64 v21; // rax
  struct tagTHREADINFO **v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rdx
  _QWORD v25[2]; // [rsp+60h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v27[3]; // [rsp+80h] [rbp-58h] BYREF
  _QWORD v28[8]; // [rsp+98h] [rbp-40h] BYREF

  v2 = (unsigned __int16)a2;
  v3 = PtiCurrent((__int64)a1, a2);
  v4 = (_WORD *)Win32AllocPoolWithQuotaZInit((unsigned int)(v2 + 8), 895775573LL);
  v5 = v4;
  if ( !v4 )
    return 16392LL;
  RtlCopyVolatileMemory(v4, a1, (unsigned int)(v2 + 8));
  v5[3] = v2;
  v7 = 0;
  v10 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 66936);
  if ( v10 )
  {
    v11 = *(_DWORD *)v5;
    do
    {
      if ( ((*(_DWORD *)(v10 + 40) & v11) == 0 || v5[2]) && ((*(_DWORD *)(v10 + 40) & v11) != 0 || !v5[2]) )
        ++v7;
      v10 = *(_QWORD *)(v10 + 24);
    }
    while ( v10 );
  }
  v12 = (_DWORD *)Win32AllocPoolWithQuotaZInit(8LL * v7 + 8, 912552789LL);
  v15 = v12;
  if ( !v12 )
  {
    Win32FreePool(v5);
    return 16392LL;
  }
  *v12 = v7;
  v16 = 0;
  for ( i = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 66936); i && v16 < *v15; i = *(_QWORD *)(i + 24) )
  {
    if ( ((*(_DWORD *)v5 & *(_DWORD *)(i + 40)) == 0 || v5[2]) && ((*(_DWORD *)v5 & *(_DWORD *)(i + 40)) != 0 || !v5[2]) )
    {
      v25[0] = &v15[2 * v16 + 2];
      v25[1] = *(_QWORD *)(i + 48);
      HMAssignmentLock(v25, 0LL);
      ++v16;
    }
  }
  Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
    v28,
    (__int64)v5,
    (__int64)Win32FreePool);
  Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>::Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>(v27, (__int64)v15);
  for ( j = 0; j < *v15; ++j )
  {
    v20 = (_QWORD *)HMAssignmentUnlock(&v15[2 * j + 2]);
    if ( v20 )
    {
      v21 = ValidateHwnd(*v20);
      v22 = (struct tagTHREADINFO **)v21;
      if ( v21 )
      {
        Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, (__int64)v3, v21);
        xxxSendTransformableMessageTimeout(v22, 60LL, 0LL, (struct tagDRAWITEMSTRUCT *)v5, 0, 0, 0LL, 1, 1);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v23);
      }
    }
  }
  Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>::~Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>((__int64)v27, v18);
  Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>::~Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>((__int64)v28, v24);
  return 0LL;
}
