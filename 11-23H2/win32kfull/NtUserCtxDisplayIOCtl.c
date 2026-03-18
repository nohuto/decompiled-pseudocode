/*
 * XREFs of NtUserCtxDisplayIOCtl @ 0x1C01CD950
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00E0550 (PopAndFreeAlwaysW32ThreadLock.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     CtxDisplayIOCtl @ 0x1C02026CC (CtxDisplayIOCtl.c)
 */

__int64 __fastcall NtUserCtxDisplayIOCtl(unsigned int a1, volatile void *a2, unsigned int a3)
{
  SIZE_T v3; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned int v14; // edi
  __int64 v15; // rax
  void *v16; // rbx
  __int128 v18; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-18h]

  v3 = a3;
  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 0LL);
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8);
  v13 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    ProbeForRead(a2, v3, 1u);
    v15 = Win32AllocPoolWithQuotaZInit(v3, 1950643029LL);
    v16 = (void *)v15;
    if ( !v15 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v15, &v18, (__int64)Win32FreePool);
    memmove(v16, (const void *)a2, v3);
    v14 = CtxDisplayIOCtl(a1, v16, (unsigned int)v3);
    if ( v16 )
      PopAndFreeAlwaysW32ThreadLock((__int64)&v18);
  }
  else
  {
    v14 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v11, v10, v13, v12);
  return v14;
}
