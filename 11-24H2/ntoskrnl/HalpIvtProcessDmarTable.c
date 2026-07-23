/*
 * XREFs of HalpIvtProcessDmarTable @ 0x14057558C
 * Callers:
 *     HalpIommuRegisterBuiltinPlugins @ 0x14056511C (HalpIommuRegisterBuiltinPlugins.c)
 * Callees:
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x140539A0C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpIvtLegacyProcessDrhdEntry @ 0x140574DF8 (HalpIvtLegacyProcessDrhdEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x140575658 (HalpIvtProcessDrhdEntry.c)
 *     DmrEnumerateSatcDevices @ 0x140576A70 (DmrEnumerateSatcDevices.c)
 *     DmrGetNextRemappingStructure @ 0x140576C18 (DmrGetNextRemappingStructure.c)
 */

__int64 __fastcall HalpIvtProcessDmarTable(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // r11
  __int64 v3; // rbx
  int v4; // r10d
  bool v5; // zf
  _WORD *v6; // rdx
  _WORD *NextRemappingStructure; // rax
  __int64 i; // rdx
  int v9; // eax
  _WORD *v10; // rax
  __int64 v11; // rdi

  v2 = a2;
  v3 = a1;
  v4 = 0;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 4) >= 0x40u )
    {
      v5 = (*(_BYTE *)(a1 + 37) & 4) == 0;
      qword_140E65B10 = a1;
      if ( !v5 )
      {
        v6 = 0LL;
        while ( 1 )
        {
          NextRemappingStructure = (_WORD *)DmrGetNextRemappingStructure(a1, v6);
          if ( !NextRemappingStructure )
            break;
          if ( *NextRemappingStructure == 4 )
          {
            LOBYTE(v4) = 0;
            break;
          }
          v6 = NextRemappingStructure;
          a1 = v3;
        }
      }
      *v2 = v4;
      v4 = DmrEnumerateSatcDevices(v3);
      if ( v4 >= 0 )
      {
        for ( i = 0LL; ; i = v11 )
        {
          v10 = (_WORD *)DmrGetNextRemappingStructure(v3, i);
          v11 = (__int64)v10;
          if ( !v10 )
            break;
          if ( !*v10 )
          {
            v9 = (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline()
               ? HalpIvtProcessDrhdEntry(v3, v11)
               : HalpIvtLegacyProcessDrhdEntry(v3, v11);
            v4 = v9;
            if ( v9 < 0 )
              break;
          }
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v4;
}
