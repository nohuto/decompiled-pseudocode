/*
 * XREFs of NtUserNotifyProcessCreate @ 0x140243F90
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x140287CFC (-xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z.c)
 */

__int64 __fastcall NtUserNotifyProcessCreate(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  _BYTE v12[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h]

  if ( (a4 & 0xFFFFFFCF) == 0 )
    return 0LL;
  EnterCrit(0LL, 0LL);
  v8 = *(_QWORD *)(W32GetUserGdiSessionState(v7) + 40);
  if ( PsGetCurrentProcess(v9) == v8 )
  {
    v13 = 0LL;
    v12[0] = 0;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v12);
    v11 = xxxUserNotifyProcessCreate(a1, a4);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v12);
  }
  else
  {
    v11 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v10);
  return v11;
}
