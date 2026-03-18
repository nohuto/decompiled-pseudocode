/*
 * XREFs of HmgIsProcessCleanupRequiredByW32Pid @ 0x1400F2DAC
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400150B4 (-vCleanupDCs@@YAXK@Z.c)
 *     HmgNextOwned @ 0x14001F530 (HmgNextOwned.c)
 * Callees:
 *     HmgIsProcessCleanupRequired @ 0x1400F2E68 (HmgIsProcessCleanupRequired.c)
 */

__int64 __fastcall HmgIsProcessCleanupRequiredByW32Pid(int a1)
{
  void *v1; // rbx
  unsigned int IsProcessCleanupRequired; // edi
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  PEPROCESS Process; // [rsp+38h] [rbp+10h] BYREF

  v1 = (void *)a1;
  IsProcessCleanupRequired = 1;
  if ( !a1 || a1 == -2147483630 )
    return IsProcessCleanupRequired;
  Process = 0LL;
  if ( a1 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    goto LABEL_5;
  }
  if ( PsLookupProcessByProcessId(v1, &Process) >= 0 )
  {
    CurrentProcessWin32Process = PsGetProcessWin32Process(Process);
LABEL_5:
    v5 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    goto LABEL_7;
  }
  v5 = 0LL;
LABEL_7:
  IsProcessCleanupRequired = HmgIsProcessCleanupRequired(v5);
  if ( Process )
    ObfDereferenceObject(Process);
  return IsProcessCleanupRequired;
}
