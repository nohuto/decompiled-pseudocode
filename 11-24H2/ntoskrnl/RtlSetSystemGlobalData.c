/*
 * XREFs of RtlSetSystemGlobalData @ 0x140420C20
 * Callers:
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1403BC1A4 (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpTscFallback @ 0x140546DD0 (HalpTscFallback.c)
 *     HalpTimerConfigureQpcBypass @ 0x140547F3C (HalpTimerConfigureQpcBypass.c)
 *     ExpRefreshTimeZoneInformation @ 0x140A7981C (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 */

DWORD __cdecl RtlSetSystemGlobalData(RTL_SYSTEM_GLOBAL_DATA_ID DataId, PVOID Buffer, DWORD Size)
{
  __int32 v5; // ecx
  __int32 v6; // ecx
  __int32 v7; // ecx
  __int32 v8; // ecx
  __int32 v9; // ecx
  __int32 v10; // ecx
  __int32 v11; // ecx
  __int32 v12; // ecx
  int v13; // ecx

  if ( DataId > GlobalDataIdLastSystemRITEventTickCount )
  {
    v5 = DataId - 14;
    if ( !v5 )
    {
      if ( Size == 4 )
      {
        v13 = *(_DWORD *)Buffer;
        if ( (*(_DWORD *)Buffer & 0x40000000) != 0 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), v13 & 0xBFFFFFFF);
          return 0;
        }
        if ( v13 < 0 )
        {
          _interlockedbittestandreset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), v13 & 0x7FFFFFFF);
          return 0;
        }
      }
      return -1073741306;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      if ( Size == 2 )
      {
        *(_WORD *)(MmWriteableSharedUserData + 48) = *(_WORD *)Buffer;
        return 0;
      }
      return -1073741306;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      if ( Size == 1 )
      {
        *(_BYTE *)(MmWriteableSharedUserData + 966) = *(_BYTE *)Buffer;
        return 0;
      }
      return -1073741306;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      if ( Size == 2 )
      {
        *(_WORD *)(MmWriteableSharedUserData + 966) = *(_WORD *)Buffer;
        return 0;
      }
      return -1073741306;
    }
    if ( v8 == 1 )
    {
      if ( Size == 8 )
      {
        *(_QWORD *)(MmWriteableSharedUserData + 952) = *(_QWORD *)Buffer;
        return 0;
      }
      return -1073741306;
    }
    return -1073741811;
  }
  if ( DataId == GlobalDataIdLastSystemRITEventTickCount )
  {
    if ( Size == 4 )
    {
      *(_DWORD *)(MmWriteableSharedUserData + 740) = *(_DWORD *)Buffer;
      return 0;
    }
    return -1073741306;
  }
  v9 = DataId - 1;
  if ( !v9 )
  {
    if ( Size == 8 )
    {
      *(_QWORD *)(MmWriteableSharedUserData + 592) = *(_QWORD *)Buffer;
      return 0;
    }
    return -1073741306;
  }
  v10 = v9 - 3;
  if ( !v10 )
  {
    if ( Size == 2 )
    {
      *(_WORD *)(MmWriteableSharedUserData + 44) = *(_WORD *)Buffer;
      return 0;
    }
    return -1073741306;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( Size == 2 )
    {
      *(_WORD *)(MmWriteableSharedUserData + 46) = *(_WORD *)Buffer;
      return 0;
    }
    return -1073741306;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    if ( v12 == 4 )
    {
      if ( Size == 1 )
      {
        *(_BYTE *)(MmWriteableSharedUserData + 724) = *(_BYTE *)Buffer;
        return 0;
      }
      return -1073741306;
    }
    return -1073741811;
  }
  if ( Size == 4 )
  {
    if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
      LODWORD(PsGetCurrentServerSiloGlobals()[80].Blink[36].Blink) = *(_DWORD *)Buffer;
    else
      *(_DWORD *)(MmWriteableSharedUserData + 576) = *(_DWORD *)Buffer;
    return 0;
  }
  return -1073741306;
}
