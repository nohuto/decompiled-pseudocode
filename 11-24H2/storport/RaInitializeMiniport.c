/*
 * XREFs of RaInitializeMiniport @ 0x140184AC8
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1400430C0 (RaidAdapterStartMiniport.c)
 *     NvmeAdapterStartMiniport @ 0x1400D8B80 (NvmeAdapterStartMiniport.c)
 * Callees:
 *     RaAssignConfigurationResources @ 0x140184B20 (RaAssignConfigurationResources.c)
 */

__int64 __fastcall RaInitializeMiniport(__int64 a1, _DWORD *a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // r8d

  v4 = 0;
  if ( *a2 == 176 || *a2 == 208 && (a2[46] & 1) != 0 )
    *(_BYTE *)(a1 + 248) |= 8u;
  if ( a4 && *a4 )
    return (unsigned int)RaAssignConfigurationResources(a1 + 8, *a4, (unsigned int)a2[19]);
  return v4;
}
