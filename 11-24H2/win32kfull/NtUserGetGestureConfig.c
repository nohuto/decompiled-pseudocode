/*
 * XREFs of NtUserGetGestureConfig @ 0x140242510
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     GetGestureConfigSettings @ 0x1401B290C (GetGestureConfigSettings.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtUserGetGestureConfig(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int *a4,
        volatile void *Address,
        int a6)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagWND *v11; // rsi
  int GestureConfigSettings; // ebx
  struct tagTHREADINFO *v13; // rax
  int v14; // ecx
  __int64 v15; // rax
  size_t v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  void *v19; // rdi
  __int64 v20; // r8
  __int64 CurrentProcessWow64Process; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned int v25; // [rsp+30h] [rbp-88h] BYREF
  void *v26; // [rsp+38h] [rbp-80h]
  _BYTE v27[16]; // [rsp+58h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter3[4]; // [rsp+68h] [rbp-50h] BYREF
  __int64 v29; // [rsp+88h] [rbp-30h] BYREF

  v26 = 0LL;
  v25 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v29, 1LL);
  v11 = (struct tagWND *)ValidateHwnd(a1);
  if ( v11 )
  {
    v13 = PtiCurrent(v10, v9);
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, (__int64)v13, (__int64)v11);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v27);
    if ( a6 == 12 )
    {
      if ( (a3 & 0xFFFFFFFE) != 0 )
      {
        UserSetLastError(1004);
        GestureConfigSettings = 0;
LABEL_20:
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v27);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v23);
        goto LABEL_21;
      }
      v15 = *((_QWORD *)v11 + 5);
      if ( *(char *)(v15 + 20) < 0 || *(char *)(v15 + 19) < 0 )
      {
        v14 = 1400;
        goto LABEL_19;
      }
      if ( Address )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (unsigned int *)MmUserProbeAddress;
        v25 = *a4;
        if ( v25 - 1 <= 0xFF )
        {
          v16 = 12 * v25;
          v19 = (void *)Win32AllocPoolWithQuotaZInit(v16, 1667724117LL);
          v26 = v19;
          if ( v19 )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v18, v17, v20);
            ProbeForWrite(Address, 12LL * v25, CurrentProcessWow64Process != 0 ? 1 : 4);
            memmove(v19, (const void *)Address, v16);
            GestureConfigSettings = GetGestureConfigSettings(v11, v22, a3, &v25, (__int64)v19);
            if ( GestureConfigSettings )
              memmove((void *)Address, v19, v16);
            Win32FreePool(v19);
            goto LABEL_20;
          }
          v14 = 8;
          goto LABEL_19;
        }
      }
    }
    v14 = 87;
LABEL_19:
    GestureConfigSettings = 0;
    UserSetLastError(v14);
    goto LABEL_20;
  }
  GestureConfigSettings = 0;
LABEL_21:
  UserSessionSwitchLeaveCrit(v10);
  return GestureConfigSettings;
}
