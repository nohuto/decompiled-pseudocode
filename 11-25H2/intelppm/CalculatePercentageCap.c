/*
 * XREFs of CalculatePercentageCap @ 0x14004531C
 * Callers:
 *     InitPerfStatesInternal @ 0x1400372A8 (InitPerfStatesInternal.c)
 *     RegisterKernelCap @ 0x140045220 (RegisterKernelCap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalculatePercentageCap(__int64 a1, unsigned int a2, int a3)
{
  int v3; // r9d

  v3 = *(_DWORD *)(a1 + 68);
  if ( v3 )
  {
    if ( a2 != v3 - 1 )
      return *(unsigned __int8 *)(32LL * a2 + *(_QWORD *)(a1 + 56) + 24);
  }
  else
  {
    a2 = 0;
  }
  if ( *(_DWORD *)(a1 + 72) )
    a2 = v3 + a3;
  return *(unsigned __int8 *)(32LL * a2 + *(_QWORD *)(a1 + 56) + 24);
}
