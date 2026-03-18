/*
 * XREFs of NtUserGetGUIThreadInfo @ 0x14018CB10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     _GetGUIThreadInfo @ 0x14018CC58 (_GetGUIThreadInfo.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtUserGetGUIThreadInfo(unsigned int a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  _BYTE *v10; // rdx
  _OWORD v12[4]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v13; // [rsp+90h] [rbp-18h]
  char v15; // [rsp+C8h] [rbp+20h] BYREF

  memset_0(v12, 0, 0x48uLL);
  EnterLeaveCritShared::EnterLeaveCritShared(&v15, 1LL);
  if ( a1 )
  {
    v7 = PtiFromThreadId(a1);
    if ( !v7 )
    {
      UserSetLastError(87);
      goto LABEL_11;
    }
  }
  else
  {
    v7 = 0LL;
  }
  v9 = -PsGetCurrentProcessWow64Process(v5, v4, v6);
  v10 = (_BYTE *)a2;
  if ( ((v9 != 0 ? 0 : 3) & (unsigned int)a2) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a2 >= MmUserProbeAddress )
    v10 = (_BYTE *)MmUserProbeAddress;
  *v10 = *v10;
  v10[71] = v10[71];
  LODWORD(v12[0]) = *(_DWORD *)a2;
  LODWORD(v7) = GetGUIThreadInfo(v7, v12);
  if ( (_DWORD)v7 )
  {
    *(_OWORD *)a2 = v12[0];
    *(_OWORD *)(a2 + 16) = v12[1];
    *(_OWORD *)(a2 + 32) = v12[2];
    *(_OWORD *)(a2 + 48) = v12[3];
    *(_QWORD *)(a2 + 64) = v13;
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v8);
  return (int)v7;
}
