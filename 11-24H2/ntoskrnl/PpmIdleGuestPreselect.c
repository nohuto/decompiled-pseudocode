/*
 * XREFs of PpmIdleGuestPreselect @ 0x1405D8F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleGuestPreselect(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 *StatisticsPage; // rcx
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r11
  unsigned int HvTargetState; // r8d
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->PowerState.Hypervisor < ProcHypervisorPower )
  {
    v4 = *(_QWORD *)a2;
    v5 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    StatisticsPage = CurrentPrcb->StatisticsPage;
    v4 = StatisticsPage[(unsigned int)xmmword_140E3EE10];
    v5 = v4 - StatisticsPage[DWORD1(xmmword_140E3EE10)];
  }
  HvTargetState = *(_DWORD *)(a2 + 32);
  if ( HvTargetState == -1 )
  {
    if ( *(_BYTE *)(a2 + 42) && CurrentPrcb->PowerState.Hypervisor < ProcHypervisorPower )
      goto LABEL_6;
    v8 = *(unsigned __int8 *)(a2 + 41);
    if ( !(_BYTE)v8 )
      goto LABEL_6;
    v9 = *(unsigned __int8 *)(a2 + 40);
    if ( !(_BYTE)v9 )
      goto LABEL_6;
    v10 = v4 - CurrentPrcb->PowerState.HvIdleCheck.Time;
    HvTargetState = CurrentPrcb->PowerState.HvTargetState;
    if ( v10 < *(unsigned int *)(a2 + 36) )
      goto LABEL_8;
    v11 = v5 - CurrentPrcb->PowerState.HvIdleCheck.Idle;
    v12 = v10 * v9 / 0x64;
    if ( v11 < (unsigned int)(v10 * v8 / 0x64) && CurrentPrcb->PowerState.HvTargetState )
    {
      --HvTargetState;
    }
    else if ( v11 >= (unsigned int)v12 && HvTargetState + 1 < 2 )
    {
      ++HvTargetState;
    }
  }
  else if ( HvTargetState >= 2 )
  {
LABEL_6:
    HvTargetState = 1;
  }
  CurrentPrcb->PowerState.HvIdleCheck.Time = v4;
  CurrentPrcb->PowerState.HvIdleCheck.Idle = v5;
LABEL_8:
  result = HvTargetState;
  CurrentPrcb->PowerState.HvTargetState = HvTargetState;
  return result;
}
