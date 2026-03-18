/*
 * XREFs of ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1402080A0
 * Callers:
 *     NtUserStopAndEndInertia @ 0x1401BDF90 (NtUserStopAndEndInertia.c)
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D3998 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6360 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x14020EE28 (-EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::StopAndEndInertia(PERESOURCE *this, int a2, void *a3)
{
  char v5; // bl
  char v6; // di
  bool v7; // bp
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  PERESOURCE Blink; // rcx
  char *v12; // rsi
  unsigned int i; // edx
  __int64 v14; // rdi
  char v15; // di
  bool v16; // si
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rax
  bool v21; // di
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  int v26; // edx
  int v27; // r8d
  PERESOURCE *v28[8]; // [rsp+50h] [rbp-58h] BYREF

  v5 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(this);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      4,
      308,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids,
      a2);
  }
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v28, this + 4, 0LL);
  Blink = this[7];
  v12 = (char *)(this + 6);
LABEL_14:
  if ( Blink == (PERESOURCE)v12 )
    goto LABEL_45;
  for ( i = 0; ; ++i )
  {
    if ( i >= LODWORD(Blink->ExclusiveWaiters) )
    {
      Blink = (PERESOURCE)Blink->SystemResourcesList.Blink;
      goto LABEL_14;
    }
    v14 = *(_QWORD *)&Blink[2].ActiveCount + 480LL * i;
    if ( *(unsigned __int16 *)(v14 + 172) == a2 )
      break;
  }
  if ( !v14 )
  {
LABEL_45:
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v15 = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v15;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(v17 + 69400),
        2,
        4,
        309,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    }
    UserSetLastError(1168);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v26) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v26) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v5 = 0;
    if ( (_BYTE)v26 || v5 )
    {
      LOBYTE(v27) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v26,
        v27,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        310,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    }
  }
  else
  {
    v20 = W32GetUserSessionState(Blink);
    if ( (unsigned __int8)CInertiaManager::EndInertiaAtPoint(
                            v20 + 16920,
                            *(_QWORD *)(v14 + 200),
                            *(_QWORD *)(v14 + 208),
                            3LL) )
    {
      CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v28);
      return 1LL;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v5 = 0;
    }
    v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v23) = v21;
      LOBYTE(v24) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v23,
        *(_QWORD *)(v22 + 69400),
        2,
        4,
        311,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    }
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v28);
  return 0LL;
}
