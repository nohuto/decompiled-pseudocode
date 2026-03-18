/*
 * XREFs of NtUserIsTouchWindow @ 0x140218B80
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserIsTouchWindow(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rdx
  unsigned int *v4; // rcx
  __int64 v5; // rbx
  __int64 UserSessionState; // rax
  int Prop; // eax
  _DWORD *v8; // rdx
  char v11; // [rsp+68h] [rbp+20h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v11, 1LL);
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    UserSessionState = W32GetUserSessionState(v4, v3);
    Prop = GetProp(v5, *(unsigned __int16 *)(UserSessionState + 41410), 1u);
    LODWORD(v5) = (Prop & 0x10000) != 0;
    if ( (Prop & 0x10000) != 0 )
    {
      v4 = a2;
      if ( a2 )
      {
        v8 = a2;
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          v8 = (_DWORD *)MmUserProbeAddress;
        *v8 = *v8;
        v4 = a2;
        *a2 = Prop & 0xFFFEFFFF;
      }
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return (int)v5;
}
