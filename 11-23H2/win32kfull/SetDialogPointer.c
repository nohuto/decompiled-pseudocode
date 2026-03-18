/*
 * XREFs of SetDialogPointer @ 0x1C008CC54
 * Callers:
 *     NtUserSetDialogPointer @ 0x1C008CB90 (NtUserSetDialogPointer.c)
 * Callees:
 *     unsafe_cast_fnid_zero_to_PDIALOG @ 0x1C008CD58 (unsafe_cast_fnid_zero_to_PDIALOG.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall SetDialogPointer(__int64 a1, __int64 a2)
{
  __int64 *v4; // rsi
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx

  v4 = (__int64 *)(a1 + 40);
  v5 = *(_QWORD *)(a1 + 40);
  if ( *(int *)(v5 + 200) >= 30 && (*(_BYTE *)(v5 + 18) & 4) == 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v7 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v7 == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) )
    {
      v8 = *v4;
      if ( (*(_DWORD *)(*v4 + 232) & 0x10) == 0 )
      {
        if ( !*(_DWORD *)(v8 + 248) || *(_WORD *)(v8 + 42) )
        {
          v9 = unsafe_cast_fnid_zero_to_PDIALOG(a1);
          if ( v9 )
          {
            *(_QWORD *)(v9 + 8) = a2;
            v10 = *v4;
            if ( a2 )
            {
              if ( !*(_WORD *)(v10 + 42) )
                *(_WORD *)(v10 + 42) = 676;
              v11 = 1LL;
            }
            else
            {
              *(_WORD *)(v10 + 42) |= 0x4000u;
              v11 = 0LL;
            }
            SetOrClrWF(v11, a1, 513LL, 1LL);
          }
        }
        else
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 67LL);
        }
      }
    }
  }
  return 1LL;
}
