/*
 * XREFs of PsQueryCpuQuotaInformation @ 0x1405E4E1C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     PsQuitNextSession @ 0x140A0B390 (PsQuitNextSession.c)
 *     PsGetSessionSchedulingGroupByProcess @ 0x140A57A48 (PsGetSessionSchedulingGroupByProcess.c)
 *     PsGetNextSession @ 0x140AA4550 (PsGetNextSession.c)
 */

__int64 __fastcall PsQueryCpuQuotaInformation(_DWORD *Address, SIZE_T Length, KPROCESSOR_MODE PreviousMode, _DWORD *a4)
{
  SIZE_T v6; // rbx
  unsigned int v9; // r14d
  __int64 v10; // rdi
  void *i; // rcx
  __int64 NextSession; // rax
  void *v13; // rsi
  __int64 v14; // rcx
  unsigned __int16 *SessionSchedulingGroupByProcess; // r12

  v6 = (unsigned int)Length;
  if ( !PsCpuFairShareEnabled )
    return 3221225897LL;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
    return 3221225569LL;
  if ( (_DWORD)v6 )
  {
    if ( (((_BYTE)v6 - 4) & 7) != 0 || (unsigned int)v6 < 4 )
      return 3221225476LL;
    v9 = (unsigned int)(v6 - 4) >> 3;
    if ( PreviousMode == 1 )
      ProbeForWrite(Address, v6, 4u);
  }
  else
  {
    v9 = 0;
    Address = 0LL;
  }
  v10 = 0LL;
  for ( i = 0LL; ; i = v13 )
  {
    NextSession = PsGetNextSession(i);
    v13 = (void *)NextSession;
    if ( !NextSession )
      break;
    SessionSchedulingGroupByProcess = (unsigned __int16 *)PsGetSessionSchedulingGroupByProcess(NextSession);
    if ( SessionSchedulingGroupByProcess )
    {
      if ( (unsigned int)v10 < v9 )
      {
        Address[2 * v10 + 1] = PsGetSessionIdEx(v14);
        Address[2 * v10 + 2] = *SessionSchedulingGroupByProcess;
      }
      v10 = (unsigned int)(v10 + 1);
    }
  }
  if ( Address )
    *Address = v10;
  *a4 = 8 * v10 + 4;
  return v9 < (unsigned int)v10 ? 0xC0000023 : 0;
}
