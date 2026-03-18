/*
 * XREFs of NtUserRegisterRawInputDevices @ 0x1C003A240
 * Callers:
 *     <none>
 * Callees:
 *     _RegisterRawInputDevices @ 0x1C0037EE8 (_RegisterRawInputDevices.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00E0550 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 */

__int64 __fastcall NtUserRegisterRawInputDevices(void *Src, unsigned int a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // r13
  SIZE_T v8; // r14
  unsigned int v9; // ebx
  __int64 v10; // rax
  unsigned int *v11; // rdi
  unsigned int v12; // ebx
  unsigned int *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int128 v19; // [rsp+78h] [rbp-40h] BYREF
  __int64 v20; // [rsp+88h] [rbp-30h]
  char v21; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+20h]

  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v21);
  PsGetCurrentProcessWin32Process(v6);
  v22 = gptiCurrent;
  if ( Src && a2 && a3 == 16 && (v7 = a2, v8 = 16LL * a2, ProbeForRead(Src, v8, 8u), v8 <= 0xFFFFFFFF) )
  {
    v9 = v8;
    v10 = Win32AllocPoolWithQuotaZInit((unsigned int)v8, 1769108309LL);
    v11 = (unsigned int *)v10;
    if ( !v10 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v10, &v19, Win32FreePool);
    if ( (unsigned int)v8 >= v8 )
      v9 = 16 * a2;
    memmove(v11, Src, v9);
    v12 = RegisterRawInputDevices((__int64)v11, a2, 0);
    v13 = v11 + 1;
    do
    {
      EtwTraceAuditApiRegisterRawInputDevices(
        v12,
        *((unsigned __int16 *)v13 - 2),
        *((unsigned __int16 *)v13 - 1),
        *v13,
        *(_QWORD *)(v13 + 1),
        v22,
        *(_QWORD *)(*(_QWORD *)v22 + 1312LL),
        *(_QWORD *)(*(_QWORD *)v22 + 1152LL),
        *(_DWORD *)(*(_QWORD *)v22 + 1232LL));
      v13 += 4;
      --v7;
    }
    while ( v7 );
    if ( v11 )
      PopAndFreeAlwaysW32ThreadLock(&v19);
  }
  else
  {
    v12 = 0;
    UserSetLastError(87LL);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v21);
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  return (int)v12;
}
