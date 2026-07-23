/*
 * XREFs of DmrEnumerateRmrrDomains @ 0x140576D60
 * Callers:
 *     HalpIvtLegacyProcessDrhdEntry @ 0x140574DF8 (HalpIvtLegacyProcessDrhdEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x140575658 (HalpIvtProcessDrhdEntry.c)
 * Callees:
 *     DmrFindDrhdForDeviceScope @ 0x140576840 (DmrFindDrhdForDeviceScope.c)
 *     DmrCheckPathMatch @ 0x14057690C (DmrCheckPathMatch.c)
 *     DmrGetNextDeviceScope @ 0x140576BD0 (DmrGetNextDeviceScope.c)
 *     DmrGetNextRemappingStructure @ 0x140576C18 (DmrGetNextRemappingStructure.c)
 *     DmrFreeRmrrTree @ 0x140576EB8 (DmrFreeRmrrTree.c)
 *     DmrpRmrrTreeAddNewScope @ 0x140576F3C (DmrpRmrrTreeAddNewScope.c)
 *     DmrpRmrrTreeAddRegionToDevice @ 0x140576FDC (DmrpRmrrTreeAddRegionToDevice.c)
 */

__int64 __fastcall DmrEnumerateRmrrDomains(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD **v3; // r15
  __int64 v4; // rdi
  __int64 v6; // rdx
  _WORD *NextRemappingStructure; // rax
  __int64 v8; // r11
  _WORD *v9; // rbx
  unsigned __int64 v10; // r13
  unsigned __int64 i; // r8
  char *NextDeviceScope; // rax
  char *v13; // rsi
  char v14; // al
  __int64 DrhdForDeviceScope; // rax
  unsigned __int16 v16; // r12
  _QWORD *v17; // r14
  __int64 v18; // rdi
  bool v19; // zf
  int v20; // edi

  v3 = (_QWORD **)(a3 + 8);
  v4 = a2;
  *(_QWORD *)(a3 + 16) = a3 + 8;
  *(_QWORD *)(a3 + 8) = a3 + 8;
  *(_DWORD *)a3 = 0;
  v6 = 0LL;
  while ( 1 )
  {
    NextRemappingStructure = (_WORD *)DmrGetNextRemappingStructure(a1, v6);
    v9 = NextRemappingStructure;
    if ( !NextRemappingStructure )
      return 0;
    if ( *NextRemappingStructure == 1 )
    {
      v10 = (unsigned __int64)NextRemappingStructure + (unsigned __int16)NextRemappingStructure[1];
      for ( i = 0LL; ; i = (unsigned __int64)v13 )
      {
        NextDeviceScope = (char *)DmrGetNextDeviceScope((unsigned __int64)(v9 + 12), v10, i);
        v13 = NextDeviceScope;
        if ( !NextDeviceScope )
          break;
        v14 = *NextDeviceScope;
        if ( v14 == 1 )
        {
          if ( v4 )
          {
            DrhdForDeviceScope = DmrFindDrhdForDeviceScope(v8, v9[3], v13);
            if ( !DrhdForDeviceScope || DrhdForDeviceScope + 4 != v4 )
              continue;
            v14 = 1;
          }
          v16 = v9[3];
          v17 = *v3;
          while ( v17 != v3 )
          {
            v18 = (__int64)v17;
            v17 = (_QWORD *)*v17;
            if ( *(_WORD *)(v18 + 32) == v16 && v14 == *(_BYTE *)(v18 + 34) )
            {
              v19 = DmrCheckPathMatch(v13, (char *)(v18 + 34)) == 0;
              v14 = 1;
              if ( !v19 )
                goto LABEL_18;
            }
          }
          v18 = DmrpRmrrTreeAddNewScope(a3, v16, v13);
LABEL_18:
          if ( !v18 )
          {
            v20 = -1073741670;
LABEL_24:
            DmrFreeRmrrTree(a3);
            return (unsigned int)v20;
          }
          v20 = DmrpRmrrTreeAddRegionToDevice(v18, *((_QWORD *)v9 + 1), *((_QWORD *)v9 + 2));
          if ( v20 < 0 )
            goto LABEL_24;
          v4 = a2;
        }
      }
    }
    v6 = (__int64)v9;
    a1 = v8;
  }
}
