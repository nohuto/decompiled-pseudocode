/*
 * XREFs of ?ndisSetDevicePowerNotificationHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z @ 0x140149C9C
 * Callers:
 *     NdisSetOptionalHandlers @ 0x14009DED0 (NdisSetOptionalHandlers.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisSetDevicePowerNotificationHandlers(_QWORD *a1, struct _NDIS_DRIVER_OPTIONAL_HANDLERS *a2)
{
  struct _NDIS_DRIVER_OPTIONAL_HANDLERS *v2; // rbx
  __int64 v5; // rax

  v2 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      14,
      158,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1);
  }
  if ( *(_BYTE *)a1 != 2 )
    return 3221225659LL;
  if ( v2->Header.Revision != 1 )
    return 3221225485LL;
  if ( v2->Header.Size < 0x10u )
    return 3221225485LL;
  if ( v2[1] )
    return 3221225485LL;
  v5 = *(_QWORD *)&v2[2].Header.Type;
  if ( !v5 )
    return 3221225485LL;
  a1[106] = v5;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      14,
      159,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1);
  }
  return 0LL;
}
