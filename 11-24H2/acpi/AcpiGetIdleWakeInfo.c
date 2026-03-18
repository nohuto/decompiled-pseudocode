/*
 * XREFs of AcpiGetIdleWakeInfo @ 0x1400B9C10
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilitiesForFilters @ 0x140045B00 (ACPISystemPowerUpdateWakeCapabilitiesForFilters.c)
 *     ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x140049B90 (ACPISystemPowerUpdateWakeCapabilitiesForPDOs.c)
 *     AcpiGetD3ColdCapability @ 0x1400BDF80 (AcpiGetD3ColdCapability.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x140014164 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     AMLIFreeDataBuffs @ 0x140040074 (AMLIFreeDataBuffs.c)
 */

__int64 __fastcall AcpiGetIdleWakeInfo(__int64 a1, int a2, _DWORD *a3)
{
  __int64 *v5; // rax
  __int64 v6; // rbp
  int v8; // edi
  int v9; // eax
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( (unsigned int)(a2 - 1) > 4 )
    return 3221225712LL;
  if ( (*(_DWORD *)(a1 + 8) & 0x10000) == 0 )
    return 3221226021LL;
  v5 = AMLIGetNamedChild(*(__int64 **)(a1 + 760), *(_DWORD *)&aS0wS1wS2wS3wS4[4 * a2 - 4]);
  v6 = (__int64)v5;
  if ( v5 )
  {
    v8 = AMLIEvalNameSpaceObject(v5, (__int64)&v10, 0, 0LL);
    AMLIDereferenceHandleEx(v6);
    if ( v8 >= 0 )
    {
      if ( WORD1(v10) == 1 )
      {
        if ( (unsigned int)v11 < 5 )
        {
          v9 = v11 + 1;
          *a3 = v11 + 1;
          if ( v9 == 5 && (*(_DWORD *)(a1 + 1120) & 0x800LL) == 0 )
            *a3 = 4;
        }
        else
        {
          *a3 = 0;
        }
      }
      else
      {
        v8 = -1073741436;
      }
      AMLIFreeDataBuffs((__int64)&v10);
    }
    return (unsigned int)v8;
  }
  else
  {
    if ( !_bittest64((const signed __int64 *)(a1 + 1120), 0x20u) )
      return 3221226021LL;
    *a3 = 4;
    return 0LL;
  }
}
