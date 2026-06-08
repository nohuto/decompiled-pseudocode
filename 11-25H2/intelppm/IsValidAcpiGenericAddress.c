/*
 * XREFs of IsValidAcpiGenericAddress @ 0x14002DACC
 * Callers:
 *     InitAcpi1CStates @ 0x14002D824 (InitAcpi1CStates.c)
 *     ValidateLpiState @ 0x14002EFB4 (ValidateLpiState.c)
 *     InitAcpi1ThrottleStates @ 0x140038F04 (InitAcpi1ThrottleStates.c)
 *     ValidateAcpiCStates @ 0x14003FB70 (ValidateAcpiCStates.c)
 *     DecodeMWaitIdleState @ 0x140044C40 (DecodeMWaitIdleState.c)
 * Callees:
 *     <none>
 */

char __fastcall IsValidAcpiGenericAddress(__int64 a1)
{
  char v1; // r9
  int v2; // eax
  int v3; // eax

  v1 = 1;
  if ( !*(_BYTE *)a1 )
    goto LABEL_12;
  if ( *(_BYTE *)a1 == 1 )
  {
    if ( *(_DWORD *)(a1 + 8) )
      return 0;
    v2 = *(_DWORD *)(a1 + 4);
    if ( (v2 & 0xFFFF0000) != 0 || !v2 )
      return 0;
LABEL_12:
    v3 = *(unsigned __int8 *)(a1 + 1);
    if ( !(_BYTE)v3 || v3 + (unsigned int)*(unsigned __int8 *)(a1 + 2) > *(unsigned __int8 *)(a1 + 3) )
      return 0;
    return v1;
  }
  if ( *(_BYTE *)a1 != 2 && *(_BYTE *)a1 != 3 && *(_BYTE *)a1 != 4 && *(_BYTE *)a1 != 10 && *(_BYTE *)a1 != 127 )
    return 0;
  return v1;
}
