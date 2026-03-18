/*
 * XREFs of NtUserQueryInputContext @ 0x1C0088E10
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

HANDLE __fastcall NtUserQueryInputContext(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  HANDLE v10; // rbx
  int v11; // edi
  HANDLE ThreadProcessId; // rax
  int v14; // edi
  HANDLE *v15; // rax

  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120LL);
    v10 = 0LL;
    goto LABEL_7;
  }
  v5 = HMValidateHandle(a1, 0x11u);
  v10 = 0LL;
  if ( v5 )
  {
    v7 = *(_QWORD *)(v5 + 16);
    if ( !v3 )
    {
      ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v7);
      goto LABEL_6;
    }
    v11 = v3 - 1;
    if ( !v11 )
    {
      ThreadProcessId = PsGetThreadId(*(PETHREAD *)v7);
LABEL_6:
      v10 = ThreadProcessId;
      goto LABEL_7;
    }
    v14 = v11 - 1;
    if ( v14 )
    {
      if ( v14 != 1 )
      {
        UserSetLastError(87LL);
        goto LABEL_7;
      }
      v15 = *(HANDLE **)(v7 + 792);
    }
    else
    {
      v15 = *(HANDLE **)(v7 + 784);
    }
    if ( v15 )
      v10 = *v15;
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v10;
}
