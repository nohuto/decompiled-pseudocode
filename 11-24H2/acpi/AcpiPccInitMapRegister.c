/*
 * XREFs of AcpiPccInitMapRegister @ 0x1400A010C
 * Callers:
 *     AcpiPccInitDoorbell @ 0x1400A0018 (AcpiPccInitDoorbell.c)
 *     AcpiPccInitPlatformInterruptAck @ 0x1400A02BC (AcpiPccInitPlatformInterruptAck.c)
 *     AcpiPccInitType34Subspace @ 0x1400A0780 (AcpiPccInitType34Subspace.c)
 * Callees:
 *     AcpiTranslateAccessSize @ 0x14009AB74 (AcpiTranslateAccessSize.c)
 */

__int64 __fastcall AcpiPccInitMapRegister(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  unsigned __int8 v5; // al
  char v6; // r10
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rax
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v11 = 0;
  if ( !a1 || !a2 || (unsigned __int8)RtlIsZeroMemory(a1, 12LL) )
    return (unsigned int)-1073741811;
  if ( *(_BYTE *)a1 >= 2u )
    return (unsigned int)-1073741637;
  v5 = AcpiTranslateAccessSize(*(_BYTE *)(a1 + 3), *(_BYTE *)(a1 + 1), *(_BYTE *)(a1 + 2));
  *(_BYTE *)(a1 + 3) = v5;
  if ( v6 == 1 )
  {
    if ( v5 <= 0x20u )
      return v2;
    return (unsigned int)-1073741811;
  }
  if ( !v6 )
  {
    if ( (int)HalGetMemoryCachingRequirements(*(_QWORD *)(a1 + 4), (unsigned __int64)v5 >> 3, &v11) >= 0 )
    {
      v8 = v11;
    }
    else
    {
      v8 = 0;
      v11 = 0;
    }
    v9 = 516LL;
    *a2 = *(_QWORD *)(a1 + 4);
    if ( v8 == 1 )
      v9 = 4LL;
    v10 = MmMapIoSpaceEx(*(_QWORD *)(a1 + 4), (unsigned __int64)*(unsigned __int8 *)(a1 + 3) >> 3, v9);
    *(_QWORD *)(a1 + 4) = v10;
    if ( !v10 )
      return (unsigned int)-1073741670;
  }
  return v2;
}
