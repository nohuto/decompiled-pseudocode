/*
 * XREFs of IvtBuildScalableModePasidTableS1Entry @ 0x1404F322C
 * Callers:
 *     IvtUpdateScalableModePasidTablesForPasid @ 0x1404F2C14 (IvtUpdateScalableModePasidTablesForPasid.c)
 *     IvtInitializeScalableModePasidTables @ 0x14056C838 (IvtInitializeScalableModePasidTables.c)
 *     IvtLegacySetPasidAddressSpace @ 0x14056E0E0 (IvtLegacySetPasidAddressSpace.c)
 *     IvtSetPasidAddressSpace @ 0x14056E740 (IvtSetPasidAddressSpace.c)
 * Callees:
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x140539A0C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall IvtBuildScalableModePasidTableS1Entry(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int16 a6,
        unsigned __int64 *a7)
{
  unsigned __int64 result; // rax
  int v11; // edi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  int v14; // r9d
  unsigned int v15; // r8d
  unsigned __int64 v16; // rdx

  result = (unsigned __int64)memset_0(a7, 0, 0x40uLL);
  v11 = 0;
  if ( a3 )
  {
    v12 = ((unsigned __int64)(a2 & 7) << 6) | 1;
    *a7 = v12;
    *a7 = v12 | (4LL * (*(_DWORD *)(a1 + 248) & 7));
    if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
      *((_WORD *)a7 + 4) = a6;
    if ( (*(_BYTE *)(a1 + 230) & 1) != 0 )
      a7[1] |= 0x800000uLL;
    v13 = a5 & 1 ^ (a7[2] & 0xFFFFFFFFFFFFFFDCuLL | 0x20);
    if ( a5 )
      LOWORD(v13) = v13 | 0x50;
    a7[2] = (a3 << 12) | v13 & 0xFF3;
    result = *(unsigned int *)(a1 + 224);
    if ( (result & 0x2000000) != 0 )
    {
      result = __readmsr(0x277u);
      v14 = 0;
      v15 = 0;
      do
      {
        v16 = result >> v15;
        v15 += 8;
        LODWORD(v16) = (v16 & 0xF) << v14;
        v14 += 4;
        v11 |= v16;
      }
      while ( v15 < 0x40 );
      *((_DWORD *)a7 + 3) = v11;
    }
  }
  return result;
}
