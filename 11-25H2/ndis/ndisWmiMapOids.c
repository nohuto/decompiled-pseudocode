/*
 * XREFs of ndisWmiMapOids @ 0x14002ECF0
 * Callers:
 *     ndisQuerySupportedGuidToOidList @ 0x14002E140 (ndisQuerySupportedGuidToOidList.c)
 *     ?ndisWdfGetGuidToOidList@@YAXPEBKGPEAU_NDIS_GUID@@PEAG@Z @ 0x1400B8000 (-ndisWdfGetGuidToOidList@@YAXPEBKGPEAU_NDIS_GUID@@PEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisWmiMapOids(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned __int16 i; // r11
  unsigned __int16 v9; // ax
  __int64 v10; // r8
  int v11; // edx
  __int64 v12; // rdx

  for ( i = 0; i < a6; ++i )
  {
    v9 = 0;
    v10 = a5 + 28LL * i;
    while ( v9 < a4 )
    {
      v11 = *(_DWORD *)(v10 + 16);
      if ( v11 && v11 == *(_DWORD *)(a3 + 4LL * v9) )
      {
        if ( a1 )
        {
          v12 = 28LL * a2;
          *(_OWORD *)(v12 + a1) = *(_OWORD *)v10;
          *(_QWORD *)(v12 + a1 + 16) = *(_QWORD *)(v10 + 16);
          *(_DWORD *)(v12 + a1 + 24) = *(_DWORD *)(v10 + 24);
        }
        ++a2;
        break;
      }
      ++v9;
    }
  }
  return a2;
}
