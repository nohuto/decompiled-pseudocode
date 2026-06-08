/*
 * XREFs of IsValidAcpiGenericAddress @ 0x14002EF64
 * Callers:
 *     InitAcpi1CStates @ 0x1400248E0 (InitAcpi1CStates.c)
 *     ValidateAcpiCStates @ 0x14002F468 (ValidateAcpiCStates.c)
 *     ValidateLpiState @ 0x1400307E8 (ValidateLpiState.c)
 *     InitAcpi1ThrottleStates @ 0x140036FCC (InitAcpi1ThrottleStates.c)
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
