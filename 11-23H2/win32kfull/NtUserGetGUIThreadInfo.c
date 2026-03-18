/*
 * XREFs of NtUserGetGUIThreadInfo @ 0x1C00788C0
 * Callers:
 *     <none>
 * Callees:
 *     _GetGUIThreadInfo @ 0x1C00789F8 (_GetGUIThreadInfo.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall NtUserGetGUIThreadInfo(unsigned int a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rax
  _BYTE *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int GUIThreadInfo; // ebx
  __int64 v16; // r8
  __int64 v17; // r9
  _OWORD v19[4]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v20; // [rsp+90h] [rbp-18h]

  memset_0(v19, 0, 0x48uLL);
  EnterSharedCrit(v5, v4, v6);
  if ( a1 )
  {
    v10 = PtiFromThreadId(a1);
    if ( !v10 )
    {
      UserSetLastError(87LL);
      GUIThreadInfo = 0;
      goto LABEL_12;
    }
  }
  else
  {
    v10 = 0LL;
  }
  if ( PsGetCurrentProcessWow64Process(v8, v7, v9) )
    v11 = 0LL;
  else
    v11 = 3LL;
  if ( (v11 & a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = (_BYTE *)a2;
  if ( a2 >= MmUserProbeAddress )
    v12 = (_BYTE *)MmUserProbeAddress;
  *v12 = *v12;
  v12[71] = v12[71];
  LODWORD(v19[0]) = *(_DWORD *)a2;
  GUIThreadInfo = GetGUIThreadInfo(v10, v19);
  if ( GUIThreadInfo )
  {
    *(_OWORD *)a2 = v19[0];
    *(_OWORD *)(a2 + 16) = v19[1];
    *(_OWORD *)(a2 + 32) = v19[2];
    *(_OWORD *)(a2 + 48) = v19[3];
    *(_QWORD *)(a2 + 64) = v20;
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v14, v13, v16, v17);
  return GUIThreadInfo;
}
