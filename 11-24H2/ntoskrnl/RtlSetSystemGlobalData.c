/*
 * XREFs of RtlSetSystemGlobalData @ 0x14042EEF0
 * Callers:
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1403D6B54 (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpTscFallback @ 0x140549510 (HalpTscFallback.c)
 *     HalpTimerConfigureQpcBypass @ 0x14054A67C (HalpTimerConfigureQpcBypass.c)
 *     ExpRefreshTimeZoneInformation @ 0x1409DC59C (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 */

__int64 __fastcall RtlSetSystemGlobalData(int a1, int *a2, int a3)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx

  if ( a1 > 13 )
  {
    v5 = a1 - 14;
    if ( !v5 )
    {
      if ( a3 == 4 )
      {
        v13 = *a2;
        if ( (*a2 & 0x40000000) != 0 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), v13 & 0xBFFFFFFF);
          return 0LL;
        }
        if ( v13 < 0 )
        {
          _interlockedbittestandreset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), v13 & 0x7FFFFFFF);
          return 0LL;
        }
      }
      return 3221225990LL;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      if ( a3 == 2 )
      {
        *(_WORD *)(MmWriteableSharedUserData + 48) = *(_WORD *)a2;
        return 0LL;
      }
      return 3221225990LL;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      if ( a3 == 1 )
      {
        *(_BYTE *)(MmWriteableSharedUserData + 966) = *(_BYTE *)a2;
        return 0LL;
      }
      return 3221225990LL;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      if ( a3 == 2 )
      {
        *(_WORD *)(MmWriteableSharedUserData + 966) = *(_WORD *)a2;
        return 0LL;
      }
      return 3221225990LL;
    }
    if ( v8 == 1 )
    {
      if ( a3 == 8 )
      {
        *(_QWORD *)(MmWriteableSharedUserData + 952) = *(_QWORD *)a2;
        return 0LL;
      }
      return 3221225990LL;
    }
    return 3221225485LL;
  }
  if ( a1 == 13 )
  {
    if ( a3 == 4 )
    {
      *(_DWORD *)(MmWriteableSharedUserData + 740) = *a2;
      return 0LL;
    }
    return 3221225990LL;
  }
  v9 = a1 - 1;
  if ( !v9 )
  {
    if ( a3 == 8 )
    {
      *(_QWORD *)(MmWriteableSharedUserData + 592) = *(_QWORD *)a2;
      return 0LL;
    }
    return 3221225990LL;
  }
  v10 = v9 - 3;
  if ( !v10 )
  {
    if ( a3 == 2 )
    {
      *(_WORD *)(MmWriteableSharedUserData + 44) = *(_WORD *)a2;
      return 0LL;
    }
    return 3221225990LL;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a3 == 2 )
    {
      *(_WORD *)(MmWriteableSharedUserData + 46) = *(_WORD *)a2;
      return 0LL;
    }
    return 3221225990LL;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    if ( v12 == 4 )
    {
      if ( a3 == 1 )
      {
        *(_BYTE *)(MmWriteableSharedUserData + 724) = *(_BYTE *)a2;
        return 0LL;
      }
      return 3221225990LL;
    }
    return 3221225485LL;
  }
  if ( a3 == 4 )
  {
    if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
      LODWORD(PsGetCurrentServerSiloGlobals()[80].Blink[36].Blink) = *a2;
    else
      *(_DWORD *)(MmWriteableSharedUserData + 576) = *a2;
    return 0LL;
  }
  return 3221225990LL;
}
