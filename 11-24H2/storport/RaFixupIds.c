/*
 * XREFs of RaFixupIds @ 0x1401BCFD0
 * Callers:
 *     RaidUnitGetCompatibleIds @ 0x14009E318 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetDeviceId @ 0x14009E9BC (RaidUnitGetDeviceId.c)
 *     RaidUnitGetHardwareIds @ 0x14009EB24 (RaidUnitGetHardwareIds.c)
 *     NvmeNamespaceGetCompatibleIds @ 0x140103A48 (NvmeNamespaceGetCompatibleIds.c)
 *     NvmeNamespaceGetDeviceId @ 0x140103C30 (NvmeNamespaceGetDeviceId.c)
 *     NvmeNamespaceGetDeviceIdEx @ 0x140103D18 (NvmeNamespaceGetDeviceIdEx.c)
 *     NvmeNamespaceGetHardwareIds @ 0x140103F20 (NvmeNamespaceGetHardwareIds.c)
 *     NvmeNamespaceGetHardwareIdsEx @ 0x14010434C (NvmeNamespaceGetHardwareIdsEx.c)
 *     NvmeNamespaceGetInstanceId @ 0x1401045F8 (NvmeNamespaceGetInstanceId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaFixupIds(_WORD *a1, char a2, unsigned int a3)
{
  unsigned int i; // ecx
  int v5; // edx
  __int64 result; // rax
  unsigned int v7; // edx
  unsigned int v8; // r8d
  int v9; // ecx

  if ( a2 )
  {
    v7 = 0;
    v8 = a3 - 1;
    if ( v8 )
    {
      do
      {
        v9 = (unsigned __int16)a1[v7];
        if ( (_WORD)v9 )
        {
          result = (unsigned int)(v9 - 33);
          if ( (unsigned __int16)(v9 - 33) > 0x5Eu || (_WORD)v9 == 44 )
            a1[v7] = 95;
        }
        else
        {
          result = v7 + 1;
          if ( !a1[result] )
            return result;
        }
        ++v7;
      }
      while ( v7 < v8 );
    }
  }
  else
  {
    for ( i = 0; i < a3; ++a1 )
    {
      v5 = (unsigned __int16)*a1;
      if ( !(_WORD)v5 )
        break;
      result = (unsigned int)(v5 - 33);
      if ( (unsigned __int16)(v5 - 33) > 0x5Eu || (_WORD)v5 == 44 )
        *a1 = 95;
      ++i;
    }
  }
  return result;
}
