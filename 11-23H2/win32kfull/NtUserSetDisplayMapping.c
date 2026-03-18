/*
 * XREFs of NtUserSetDisplayMapping @ 0x1C01DAFF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     _SetDisplayMapping @ 0x1C01C3080 (_SetDisplayMapping.c)
 */

__int64 __fastcall NtUserSetDisplayMapping(__int64 a1, __int64 a2)
{
  int v4; // ebx
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  char v16; // [rsp+40h] [rbp+18h] BYREF
  int v17; // [rsp+48h] [rbp+20h] BYREF
  int v18; // [rsp+4Ch] [rbp+24h]

  v18 = -1;
  v17 = 0x2000;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v16);
  v4 = 0;
  if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 896LL, &v17) )
  {
    EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 424LL), 0LL, 10LL);
LABEL_3:
    v5 = 5;
LABEL_4:
    UserSetLastError(v5);
    goto LABEL_5;
  }
  v13 = HMValidateHandle(a1, 0x13u);
  v14 = v13;
  if ( !v13 || (*(_DWORD *)(v13 + 200) & 0x80u) == 0 )
  {
    UserSetLastError(6);
    v5 = 6;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v13 + 184) & 0x2000) != 0 )
  {
    UserSetLastError(5);
    goto LABEL_3;
  }
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v13 + 472) + 24LL) - 6) <= 1 )
    goto LABEL_3;
  v15 = ValidateHmonitor(a2);
  if ( v15 )
  {
    v4 = 1;
    if ( ValidateHmonitorNoRip(*(_QWORD *)(v14 + 1344)) != v15 )
      v4 = SetDisplayMapping(*(_QWORD *)(v14 + 472), v15);
    *(_DWORD *)(v14 + 1352) = 1;
  }
LABEL_5:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v16, v6, v7);
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v4;
}
