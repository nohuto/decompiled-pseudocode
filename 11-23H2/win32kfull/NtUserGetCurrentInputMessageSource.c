/*
 * XREFs of NtUserGetCurrentInputMessageSource @ 0x1C007F340
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C007F424 (-_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetCurrentInputMessageSource(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  _BYTE *v5; // rdx
  ULONG64 v6; // rcx
  int CurrentInputMessageSource; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h]

  v4 = 0LL;
  v13 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  if ( a1 )
  {
    CurrentInputMessageSource = _GetCurrentInputMessageSource(0, (struct tagINPUT_MESSAGE_SOURCE *)&v13);
    if ( CurrentInputMessageSource )
    {
      v10 = (unsigned int)v13;
      v11 = (unsigned int)(v13 - 18);
      if ( (v11 & 0xFFFFFFEF) == 0 )
        v10 = 2LL;
      LODWORD(v13) = v10;
      if ( PsGetCurrentProcessWow64Process(v11, v10, v8) )
      {
        v14 = 1LL;
      }
      else
      {
        v14 = 4LL;
        v4 = 3LL;
      }
      if ( (v4 & a1) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = MmUserProbeAddress;
      v5 = (_BYTE *)a1;
      if ( a1 >= MmUserProbeAddress )
        v5 = (_BYTE *)MmUserProbeAddress;
      *v5 = *v5;
      v5[7] = v5[7];
      *(_QWORD *)a1 = v13;
    }
  }
  else
  {
    UserSetLastError(87LL);
    CurrentInputMessageSource = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return CurrentInputMessageSource;
}
