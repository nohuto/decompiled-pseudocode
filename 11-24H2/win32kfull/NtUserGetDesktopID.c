/*
 * XREFs of NtUserGetDesktopID @ 0x1401951D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x14019552C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetDesktopID(int a1, void *a2)
{
  int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi
  int v9; // edi
  __int64 Src; // [rsp+70h] [rbp+18h] BYREF
  char v12; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  Src = 0LL;
  v5 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v12, 1LL);
  if ( (unsigned int)IsCurrentProcessDwm() )
  {
    v8 = a1 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 2 )
          v5 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 63016);
      }
      else
      {
        v5 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 62880);
      }
    }
    else
    {
      v5 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19200);
    }
    if ( v5 )
    {
      Src = ***(_QWORD ***)(v5 + 8);
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(a2, &Src, 8uLL);
      v4 = 1;
    }
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}
