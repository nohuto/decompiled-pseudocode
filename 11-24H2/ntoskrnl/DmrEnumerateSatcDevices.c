/*
 * XREFs of DmrEnumerateSatcDevices @ 0x140576A70
 * Callers:
 *     HalpIvtProcessDmarTable @ 0x14057558C (HalpIvtProcessDmarTable.c)
 * Callees:
 *     ExtEnvAllocateMemory @ 0x14055D660 (ExtEnvAllocateMemory.c)
 *     DmrGetNextDeviceScope @ 0x140576BD0 (DmrGetNextDeviceScope.c)
 *     DmrGetNextRemappingStructure @ 0x140576C18 (DmrGetNextRemappingStructure.c)
 */

__int64 __fastcall DmrEnumerateSatcDevices(__int64 a1, __int64 a2)
{
  _WORD *NextRemappingStructure; // rax
  unsigned int v4; // ebx
  _WORD *v5; // rdi
  char *v6; // r15
  _BYTE *v7; // r8
  _BYTE *NextDeviceScope; // rax
  _BYTE *v9; // rsi
  __int64 v10; // rcx
  __int16 v11; // bp
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = a2;
  NextRemappingStructure = (_WORD *)DmrGetNextRemappingStructure(a1, 0LL);
  v4 = 0;
  while ( 1 )
  {
    v5 = NextRemappingStructure;
    if ( !NextRemappingStructure )
      return v4;
    if ( *NextRemappingStructure == 5 )
    {
      v6 = (char *)NextRemappingStructure + (unsigned __int16)NextRemappingStructure[1];
      v7 = 0LL;
      while ( 2 )
      {
        NextDeviceScope = (_BYTE *)DmrGetNextDeviceScope(v5 + 4, v6, v7);
        v9 = NextDeviceScope;
        if ( NextDeviceScope )
        {
          if ( *NextDeviceScope == 1 && NextDeviceScope[1] == 8 )
          {
            v10 = HalpIommuAtsDeviceList;
            v11 = (unsigned __int8)NextDeviceScope[7] | (unsigned __int16)(8
                                                                         * ((unsigned __int8)NextDeviceScope[6] | (unsigned __int16)(32 * (unsigned __int8)NextDeviceScope[5])));
            while ( (__int64 *)v10 != &HalpIommuAtsDeviceList )
            {
              if ( *(_WORD *)(v10 + 24) == v5[3] && *(_WORD *)(v10 + 28) == v11 )
                goto LABEL_16;
              v10 = *(_QWORD *)v10;
            }
            v15 = 0LL;
            ExtEnvAllocateMemory(v10, 0x30u, &v15);
            v12 = v15;
            if ( v15 )
            {
              *(_DWORD *)(v15 + 16) = 1;
              *(_WORD *)(v12 + 28) = v11;
              *(_WORD *)(v12 + 24) = v5[3];
              *(_DWORD *)(v12 + 40) = *((unsigned __int8 *)v5 + 4);
              v13 = (__int64 *)qword_140FC0DA8;
              if ( *(__int64 **)qword_140FC0DA8 != &HalpIommuAtsDeviceList )
                __fastfail(3u);
              *(_QWORD *)v12 = &HalpIommuAtsDeviceList;
              *(_QWORD *)(v12 + 8) = v13;
              *v13 = v12;
              qword_140FC0DA8 = v12;
LABEL_16:
              v7 = v9;
              continue;
            }
            return (unsigned int)-1073741670;
          }
          else
          {
            return (unsigned int)-1073741637;
          }
        }
        break;
      }
    }
    NextRemappingStructure = (_WORD *)DmrGetNextRemappingStructure(a1, v5);
  }
}
