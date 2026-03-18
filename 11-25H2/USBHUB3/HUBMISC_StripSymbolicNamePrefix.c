/*
 * XREFs of HUBMISC_StripSymbolicNamePrefix @ 0x1400338C0
 * Callers:
 *     HUBPDO_GetHubName @ 0x140018BA0 (HUBPDO_GetHubName.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x14007E524 (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x14007EFB4 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     WMI_AcquireHubName @ 0x14008F94C (WMI_AcquireHubName.c)
 *     WMI_FireNotification @ 0x14008FB20 (WMI_FireNotification.c)
 * Callees:
 *     <none>
 */

__int16 *__fastcall HUBMISC_StripSymbolicNamePrefix(unsigned __int16 *a1, _QWORD *a2)
{
  __int16 *result; // rax
  __int64 v3; // r9
  __int64 v4; // r8
  __int16 v6; // cx
  __int16 v7; // dx

  result = (__int16 *)*((_QWORD *)a1 + 1);
  v3 = 0LL;
  v4 = *a1;
  if ( result )
  {
    if ( *result == 92 )
    {
      ++result;
      v4 -= 2LL;
      v6 = *result;
      if ( *result )
      {
        v7 = *result;
        do
        {
          v6 = v7;
          if ( v7 == 92 )
            break;
          ++result;
          v4 -= 2LL;
          v6 = *result;
          v7 = *result;
        }
        while ( *result );
      }
      if ( v6 == 92 )
      {
        ++result;
        v4 -= 2LL;
      }
    }
    v3 = v4;
  }
  *a2 = v3;
  return result;
}
