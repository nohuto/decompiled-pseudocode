/*
 * XREFs of NtUserSetSysColors @ 0x1C00919E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     xxxSetSysColors @ 0x1C005F814 (xxxSetSysColors.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     CreateProfileUserName @ 0x1C0091D90 (CreateProfileUserName.c)
 *     CheckAccessEx @ 0x1C0091E70 (CheckAccessEx.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 */

__int64 __fastcall NtUserSetSysColors(
        __int64 a1,
        NSInstrumentation::CLeakTrackingAllocator *a2,
        NSInstrumentation::CLeakTrackingAllocator *a3,
        __int64 a4)
{
  __int64 v6; // r13
  char *v7; // rsi
  char *v8; // r14
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  char v13; // al
  __int64 *v14; // rbx
  int v15; // eax
  ULONG64 v16; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v17; // rcx
  __int64 v18; // rbx
  char *QuotaZInit; // rax
  unsigned __int64 v20; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v21; // rcx
  char *v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // r15d
  _DWORD v31[2]; // [rsp+40h] [rbp-98h] BYREF
  void *v32; // [rsp+48h] [rbp-90h]
  void *v33; // [rsp+50h] [rbp-88h]
  __int128 v34; // [rsp+60h] [rbp-78h] BYREF
  __int64 v35; // [rsp+70h] [rbp-68h]
  __int128 v36; // [rsp+78h] [rbp-60h] BYREF
  __int64 v37; // [rsp+88h] [rbp-50h]
  __int128 v38; // [rsp+90h] [rbp-48h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-38h]
  unsigned int v40; // [rsp+F8h] [rbp+20h]

  v40 = a4;
  v6 = (unsigned int)a1;
  v7 = 0LL;
  v32 = 0LL;
  v8 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v31[0] = 0x2000;
  v31[1] = -1;
  LOBYTE(a1) = 1;
  v9 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1, (__int64)a2, (__int64)a3, a4);
  gptiCurrent = v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
    v12 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v12 && (*(_DWORD *)(v12 + 12) & 0x8000) != 0 )
    {
      if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0 || (v13 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
        v13 = 0;
      if ( v13 )
      {
        while ( 1 )
        {
          v14 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v14[2] = 0LL;
          if ( !*(_DWORD *)(*v14 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          HMUnlockObject(*v14);
        }
      }
    }
  }
  if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
    v15 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 768LL) + 24LL) & 8;
  else
    v15 = 0;
  if ( v15 || !(unsigned __int8)CheckAccessEx(*((_QWORD *)gptiCurrent + 53) + 896LL, v31, 0LL) )
  {
    v29 = 0;
    UserSetLastError(5);
  }
  else
  {
    if ( (_DWORD)v6 )
    {
      v18 = 4 * v6;
      if ( 4 * v6 )
      {
        if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
          ExRaiseDatatypeMisalignment();
        v17 = (NSInstrumentation::CLeakTrackingAllocator *)((char *)a2 + v18);
        v16 = MmUserProbeAddress;
        if ( (unsigned __int64)a2 + v18 > MmUserProbeAddress || v17 < a2 )
          *(_BYTE *)MmUserProbeAddress = 0;
        if ( v18 )
        {
          if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
            ExRaiseDatatypeMisalignment();
          v17 = (NSInstrumentation::CLeakTrackingAllocator *)((char *)a3 + v18);
          v16 = MmUserProbeAddress;
          if ( (unsigned __int64)a3 + v18 > MmUserProbeAddress || v17 < a3 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
      }
      QuotaZInit = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v17, v16, 4 * v6, 0x72637355u);
      v7 = QuotaZInit;
      v32 = QuotaZInit;
      if ( !QuotaZInit )
        ExRaiseStatus(-1073741801);
      memmove(QuotaZInit, a2, 4 * v6);
      v22 = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v21, v20, 4 * v6, 0x76637355u);
      v8 = v22;
      v33 = v22;
      if ( !v22 )
        ExRaiseStatus(-1073741801);
      memmove(v22, a3, 4 * v6);
    }
    if ( qword_1C0295450 )
      qword_1C0295450(v7, &v38, Win32FreePool);
    if ( qword_1C0295450 )
      qword_1C0295450(v8, &v36, Win32FreePool);
    v23 = CreateProfileUserName(&v34);
    v29 = xxxSetSysColors(v24, v6, v7, v8, v40);
    if ( v23 && qword_1C0295558 )
      qword_1C0295558(&v34);
    if ( qword_1C0295460 )
      qword_1C0295460(&v36);
    if ( qword_1C0295460 )
      qword_1C0295460(&v38);
    if ( v7 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v7);
    if ( v8 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v8);
  }
  UserSessionSwitchLeaveCrit(v26, v25, v27, v28);
  return v29;
}
