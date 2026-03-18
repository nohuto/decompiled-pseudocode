/*
 * XREFs of NtUserGetRawInputDeviceList @ 0x1400A3680
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400A3E80 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400A3FC0 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetRawInputDeviceList(volatile void *a1, unsigned int *a2, int a3)
{
  unsigned int v5; // r15d
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  struct W32_PUSH_LOCK *Lock; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  struct DEVICEINFO *i; // rax
  unsigned int v15; // r14d
  unsigned int *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DEVICEINFO *j; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  char v23[16]; // [rsp+50h] [rbp-58h] BYREF
  CBaseInput *v24; // [rsp+60h] [rbp-48h]
  _BYTE v25[56]; // [rsp+70h] [rbp-38h] BYREF

  v5 = 0;
  v6 = -1;
  EnterLeaveCritShared::EnterLeaveCritShared(v23, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v25);
  if ( a3 == 16 )
  {
    UserSessionState = W32GetUserSessionState(v8, v7);
    Lock = CBaseInput::TmpGetLock(*(CBaseInput **)(UserSessionState + 16840));
    W32AcquirePushLockSharedEx(Lock, 0);
    v13 = W32GetUserSessionState(v12, v11);
    for ( i = CBaseInput::TmpGetDeviceList(*(CBaseInput **)(v13 + 16840)); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
      ++v5;
    if ( a1 )
    {
      v15 = 0;
      v16 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v16 = (unsigned int *)MmUserProbeAddress;
      if ( *v16 < v5 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (unsigned int *)MmUserProbeAddress;
        *a2 = v5;
        UserSetLastError(122);
      }
      else
      {
        ProbeForWrite(a1, 16LL * v5, 8u);
        v24 = *(CBaseInput **)(W32GetUserSessionState(v18, v17) + 16840);
        for ( j = CBaseInput::TmpGetDeviceList(v24); j; j = (struct DEVICEINFO *)*((_QWORD *)j + 7) )
        {
          v20 = 2LL * v15;
          *((_QWORD *)a1 + v20) = *(_QWORD *)j;
          *((_DWORD *)a1 + 2 * v20 + 2) = *((_DWORD *)j + 12);
          if ( ++v15 >= v5 )
            break;
        }
        v6 = v15;
      }
    }
    else
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (unsigned int *)MmUserProbeAddress;
      *a2 = v5;
      v6 = 0;
    }
    W32ReleasePushLockSharedEx(Lock, 0);
  }
  else
  {
    UserSetLastError(87);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v25);
  UserSessionSwitchLeaveCrit(v21);
  return v6;
}
