/*
 * XREFs of NtUserAttachThreadInput @ 0x1401E1D30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     zzzAttachThreadInput @ 0x1401E1E5C (zzzAttachThreadInput.c)
 *     DisassociateShellFrameAppThreads2 @ 0x1402881D8 (DisassociateShellFrameAppThreads2.c)
 */

__int64 __fastcall NtUserAttachThreadInput(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  ULONG v14; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx

  EnterCrit(0LL, 0LL);
  v6 = PtiFromThreadId(a1);
  v7 = 0LL;
  v8 = v6;
  if ( !v6 )
    goto LABEL_11;
  v9 = PtiFromThreadId(a2);
  v10 = v9;
  if ( !v9 || !*(_QWORD *)(v8 + 496) || !*(_QWORD *)(v9 + 496) )
    goto LABEL_11;
  v11 = *(_DWORD *)(v8 + 1360) & 0x40000LL;
  if ( !a3 )
  {
    if ( !v11 )
    {
      if ( (*(_DWORD *)(v10 + 1360) & 0x40000) == 0 )
        goto LABEL_8;
      v16 = v8;
      v17 = v10;
      goto LABEL_17;
    }
    if ( (*(_DWORD *)(v10 + 1360) & 0x40000) == 0 )
    {
      v16 = v10;
      v17 = v8;
LABEL_17:
      DisassociateShellFrameAppThreads2(v17, v16);
      goto LABEL_8;
    }
LABEL_11:
    v14 = 87;
LABEL_12:
    UserSetLastError(v14);
    goto LABEL_13;
  }
  if ( v11 || (*(_DWORD *)(v10 + 1360) & 0x40000) != 0 )
  {
    v14 = 5;
    goto LABEL_12;
  }
LABEL_8:
  v12 = zzzAttachThreadInput(v8, v10, a3 != 0);
  if ( v12 < 0 )
  {
    v14 = RtlNtStatusToDosError(v12);
    goto LABEL_12;
  }
  v7 = 1LL;
LABEL_13:
  UserSessionSwitchLeaveCrit(v13);
  return v7;
}
