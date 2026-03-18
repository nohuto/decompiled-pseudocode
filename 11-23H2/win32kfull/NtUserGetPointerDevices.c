/*
 * XREFs of NtUserGetPointerDevices @ 0x1C0089D10
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     _GetPointerDeviceInfoProperties @ 0x1C0152600 (_GetPointerDeviceInfoProperties.c)
 */

__int64 __fastcall NtUserGetPointerDevices(unsigned int *a1, char *a2, __int64 a3)
{
  unsigned int *v4; // rsi
  int v5; // edi
  unsigned int v6; // r15d
  __int64 v7; // rcx
  __int64 v8; // rax
  CInpPushLock *Lock; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  struct DEVICEINFO *i; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int *v18; // rax
  unsigned int v19; // eax
  int v20; // r12d
  __int64 v21; // rcx
  struct DEVICEINFO *j; // r14
  CBaseInput *v23; // [rsp+60h] [rbp-48h]
  char v24; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v25; // [rsp+C0h] [rbp+18h]
  int v26; // [rsp+C8h] [rbp+20h]

  v4 = a1;
  v5 = 0;
  v6 = 0;
  v26 = 0;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v24);
  if ( v4 )
  {
    v8 = SGDGetUserSessionState(v7);
    Lock = CBaseInput::TmpGetLock(*(CBaseInput **)(v8 + 16840));
    CInpPushLock::LockShared(Lock);
    v11 = SGDGetUserSessionState(v10);
    for ( i = CBaseInput::TmpGetDeviceList(*(CBaseInput **)(v11 + 16840)); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    {
      if ( (*((_DWORD *)i + 50) & 0x80u) != 0 )
      {
        if ( (unsigned int)IsPointerDeviceAccessible(*((_QWORD *)i + 59)) )
          ++v6;
      }
    }
    if ( a2 )
    {
      v18 = v4;
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v18 = (unsigned int *)MmUserProbeAddress;
      v19 = *v18;
      v25 = v19;
      if ( v19 < v6 )
      {
        if ( (unsigned __int64)v4 >= MmUserProbeAddress )
          v4 = (unsigned int *)MmUserProbeAddress;
        *v4 = v6;
        UserSetLastError(122LL);
      }
      else if ( v19 && v6 )
      {
        ProbeForWrite(a2, 1080LL * v6, 8u);
        v20 = v6 - 1;
        v23 = *(CBaseInput **)(SGDGetUserSessionState(v21) + 16840);
        for ( j = CBaseInput::TmpGetDeviceList(v23); j && v20 >= 0; j = (struct DEVICEINFO *)*((_QWORD *)j + 7) )
        {
          if ( (*((_DWORD *)j + 50) & 0x80u) != 0 && (unsigned int)IsPointerDeviceAccessible(*((_QWORD *)j + 59)) )
            GetPointerDeviceInfoProperties(&a2[1080 * v20--], *((_QWORD *)j + 59));
        }
        v5 = 1;
        if ( (unsigned __int64)v4 >= MmUserProbeAddress )
          v4 = (unsigned int *)MmUserProbeAddress;
        *v4 = v6;
      }
      else
      {
        UserSetLastError(15299LL);
      }
    }
    else
    {
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (unsigned int *)MmUserProbeAddress;
      *v4 = v6;
      v5 = 1;
    }
    CInpPushLock::UnLockShared(Lock);
  }
  else
  {
    UserSetLastError(87LL);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v24);
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v5;
}
