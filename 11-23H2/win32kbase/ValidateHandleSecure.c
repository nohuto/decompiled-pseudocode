/*
 * XREFs of ValidateHandleSecure @ 0x1C004F140
 * Callers:
 *     HMValidateHandle @ 0x1C0052938 (HMValidateHandle.c)
 *     HMValidateCatHandleNoRip @ 0x1C0208374 (HMValidateCatHandleNoRip.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C007476C (EtwTraceUIPIHandleValidationError.c)
 *     IsHandleEntrySecure @ 0x1C00CA4D4 (IsHandleEntrySecure.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall ValidateHandleSecure(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bp
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int16 v8; // ax
  char *v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rbp
  __int64 v15; // rsi
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v17; // r10
  __int16 v18; // ax
  __int64 v19; // rdx
  unsigned int v20; // eax
  int v21; // eax
  int v22; // ecx
  __int64 v24; // rdx

  v3 = a2;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v5 = dword_1C028FE70 * (unsigned int)(unsigned __int16)a1;
    v6 = a1 >> 16;
    v7 = 0x7FFFLL;
    v8 = v6 & 0x7FFF;
    v9 = (char *)qword_1C028FE68 + (unsigned int)v5;
    if ( v8 == *((_WORD *)v9 + 13) || v8 == 0x7FFF || !v8 && PsGetCurrentProcessWow64Process() )
    {
      v10 = 1;
      if ( v9[24] && ((v3 & 1) == 0 || (unsigned int)IsHandleEntrySecure(a1, v9)) && (v3 & 2) != 0 )
      {
        if ( !IS_USERCRIT_OWNED_AT_ALL(v7, a2, a3, v5) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
        v11 = 0LL;
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( ThreadWin32Thread )
          v11 = *ThreadWin32Thread;
        if ( !*(_DWORD *)(v11 + 1548) )
          return v10;
        v14 = gpKernelHandleTable;
        v15 = 3LL * (unsigned int)((v9 - (char *)qword_1C028FE68) >> 5);
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v13);
        v17 = CurrentProcessWin32Process;
        if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
          return v10;
        v18 = *((_WORD *)&unk_1C024292C + 12 * (unsigned __int8)v9[24]);
        if ( (v18 & 2) != 0 )
        {
          v19 = v14[v15 + 1];
        }
        else
        {
          if ( (v18 & 1) == 0 )
            return v10;
          v24 = v14[v15 + 1];
          if ( !v24 )
            return v10;
          v19 = *(_QWORD *)(v24 + 424);
        }
        if ( v19 )
        {
          if ( *(PVOID *)v19 != gpepCSRSS && UIPrivelegeIsolation::fEnforce )
          {
            v20 = *((_DWORD *)v17 + 224);
            if ( v20 <= *(_DWORD *)(v19 + 896) )
            {
              if ( v20 != *(_DWORD *)(v19 + 896)
                || (v21 = *((_DWORD *)v17 + 225), v22 = *(_DWORD *)(v19 + 900), v21 != v22) && v21 != -1 && v22 != -1 )
              {
                EtwTraceUIPIHandleValidationError((struct tagPROCESSINFO *)v17);
                UserSetLastError(5LL);
                return 0;
              }
            }
          }
        }
        return v10;
      }
    }
  }
  return 0LL;
}
