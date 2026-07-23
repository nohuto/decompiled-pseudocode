/*
 * XREFs of HalpIvtReserveDomainIds @ 0x140575E7C
 * Callers:
 *     HalpIvtLegacyProcessDrhdEntry @ 0x140574DF8 (HalpIvtLegacyProcessDrhdEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x140575658 (HalpIvtProcessDrhdEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpIvtReserveDomainIds(unsigned int *a1, char a2, int *a3, _DWORD *a4, int *a5, int *a6, int *a7)
{
  char v8; // cl
  int v9; // eax
  int v10; // ecx
  __int64 result; // rax
  int v12; // ecx

  v8 = 2 * a2 + 4;
  *a7 = 1 << v8;
  if ( a6 )
  {
    v9 = (1 << v8) - 1;
    *a7 = v9;
    *a6 = v9;
  }
  v10 = --*a7;
  *a5 = *a7;
  result = *a1;
  v12 = v10 - result;
  *a7 = v12;
  *a3 = v12;
  *a4 = result;
  return result;
}
