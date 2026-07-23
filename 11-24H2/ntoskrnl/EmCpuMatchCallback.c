/*
 * XREFs of EmCpuMatchCallback @ 0x140AA5B90
 * Callers:
 *     <none>
 * Callees:
 *     EmpCheckOperator @ 0x140707B30 (EmpCheckOperator.c)
 */

__int64 __fastcall EmCpuMatchCallback(__int64 a1, __int64 a2, _BYTE **a3, int a4, unsigned int *a5, int a6)
{
  unsigned int v6; // ebx
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int8 *VendorString; // rcx
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx

  v6 = 0;
  if ( !a3 || !a5 || a6 != 4 || a4 != 4 )
    return 1LL;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( **a3 == 42 )
    goto LABEL_17;
  VendorString = CurrentPrcb->VendorString;
  v10 = *a3 - CurrentPrcb->VendorString;
  do
  {
    v11 = VendorString[v10];
    v12 = *VendorString - v11;
    if ( v12 )
      break;
    ++VendorString;
  }
  while ( v11 );
  if ( !v12 )
  {
LABEL_17:
    if ( (unsigned int)EmpCheckOperator(a3[1], CurrentPrcb->CpuType, a5[1]) )
    {
      if ( (unsigned int)EmpCheckOperator(a3[2], CurrentPrcb->CpuModel, a5[2]) )
        return (unsigned int)EmpCheckOperator(a3[3], CurrentPrcb->CpuStepping, a5[3]) != 0 ? 2 : 0;
    }
  }
  return v6;
}
