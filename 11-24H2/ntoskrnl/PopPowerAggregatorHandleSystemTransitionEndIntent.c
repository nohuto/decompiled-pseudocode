/*
 * XREFs of PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x140757C90
 * Callers:
 *     <none>
 * Callees:
 *     PopGetMostRecentWakeInfo @ 0x1404AE8BC (PopGetMostRecentWakeInfo.c)
 *     PopWakeInfoDereference @ 0x1404B735C (PopWakeInfoDereference.c)
 *     TtmIsEnabled @ 0x1409A2438 (TtmIsEnabled.c)
 *     PopIsMostRecentWakeAttended @ 0x140B6F3A8 (PopIsMostRecentWakeAttended.c)
 */

__int64 __fastcall PopPowerAggregatorHandleSystemTransitionEndIntent(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v6; // edi
  __int64 MostRecentWakeInfo; // rax
  char v8; // bl
  char v9; // bl
  __int64 v10; // rax

  if ( *(_DWORD *)(a1 + 16) == 3 )
  {
    v6 = 0;
    if ( (unsigned __int8)TtmIsEnabled() )
    {
      *(_DWORD *)a2 = 0;
    }
    else
    {
      MostRecentWakeInfo = PopGetMostRecentWakeInfo();
      if ( MostRecentWakeInfo )
      {
        v8 = *(_BYTE *)(MostRecentWakeInfo + 81);
        PopWakeInfoDereference(MostRecentWakeInfo);
        if ( v8 )
        {
          if ( !(unsigned __int8)PopIsMostRecentWakeAttended() && !dword_140F0B38C && *a4 == 5 )
            goto LABEL_10;
        }
      }
      v9 = 0;
      v10 = PopGetMostRecentWakeInfo();
      if ( v10 )
      {
        v9 = *(_BYTE *)(v10 + 82);
        PopWakeInfoDereference(v10);
      }
      if ( v9 )
      {
LABEL_10:
        *(_DWORD *)a2 = 1;
      }
      else
      {
        *(_DWORD *)a2 = 4;
        *(_DWORD *)(a2 + 28) = *a4;
      }
      *(_BYTE *)(a2 + 24) = 1;
    }
  }
  else
  {
    return (unsigned int)-1073700861;
  }
  return v6;
}
