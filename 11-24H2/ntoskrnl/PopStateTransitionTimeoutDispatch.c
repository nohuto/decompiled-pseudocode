/*
 * XREFs of PopStateTransitionTimeoutDispatch @ 0x1405D39E0
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopQueryLastStateTransitionInfo @ 0x140B5F2A4 (PopQueryLastStateTransitionInfo.c)
 */

void __noreturn PopStateTransitionTimeoutDispatch()
{
  ULONG_PTR v0; // rdi
  struct _KTHREAD *BugCheckParameter4; // rbx
  __int64 v2; // r8
  __int64 v3; // r9
  ULONG_PTR BugCheckParameter1[2]; // [rsp+30h] [rbp-19h] BYREF
  __int128 v5; // [rsp+40h] [rbp-9h]
  __int128 v6; // [rsp+50h] [rbp+7h]
  _OWORD v7[3]; // [rsp+60h] [rbp+17h] BYREF

  memset(v7, 0, sizeof(v7));
  *(_OWORD *)BugCheckParameter1 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( dword_140F0B2B4 == 1 )
  {
    v0 = 240LL;
  }
  else
  {
    v0 = 15LL;
    if ( dword_140F0B2B4 == 2 )
      v0 = 241LL;
  }
  BugCheckParameter4 = KeGetCurrentThread();
  if ( (unsigned int)(dword_140F0B2B4 - 1) <= 1 && (int)PopQueryLastStateTransitionInfo(BugCheckParameter1) >= 0 )
  {
    if ( *((_QWORD *)&v6 + 1) )
    {
      if ( (_DWORD)v6 == 1 )
      {
        guard_dispatch_icall_no_overrides(
          (unsigned int)dword_140F0B2C0,
          &BugCheckParameter1[1],
          BugCheckParameter1,
          *((_QWORD *)&v5 + 1));
      }
      else if ( (_DWORD)v6 == 2 )
      {
        guard_dispatch_icall_no_overrides((unsigned int)dword_140F0B2C0, *((_QWORD *)&v5 + 1), v2, v3);
      }
    }
    if ( BugCheckParameter1[1] && (*(_DWORD *)(BugCheckParameter1[1] + 1532) & 0x1000) == 0 )
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1[1], 0, (__int64)v7);
    if ( BugCheckParameter1[0] )
      BugCheckParameter4 = (struct _KTHREAD *)BugCheckParameter1[0];
  }
  KeBugCheckEx(0xA0u, v0, dword_140F0B12C, PopSleepCheckpoint, (ULONG_PTR)BugCheckParameter4);
}
