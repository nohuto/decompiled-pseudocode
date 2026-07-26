/*
 * XREFs of ?ndisSetSystemPowerNotificationHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z @ 0x1400A8CD8
 * Callers:
 *     NdisSetOptionalHandlers @ 0x1400942B0 (NdisSetOptionalHandlers.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall ndisSetSystemPowerNotificationHandlers(_BYTE *a1, struct _NDIS_DRIVER_OPTIONAL_HANDLERS *a2)
{
  __int64 v2; // rax
  _UNKNOWN **v3; // rdx

  if ( *a1 != 2 || a1[24] <= 6u && (a1[24] != 6 || a1[25] < 0x1Eu) )
    return 3221225659LL;
  if ( a2->Header.Revision != 1 )
    return 3221225485LL;
  if ( a2->Header.Size < 0x10u )
    return 3221225485LL;
  if ( a2[1] )
    return 3221225485LL;
  v2 = *(_QWORD *)&a2[2].Header.Type;
  if ( !v2 )
    return 3221225485LL;
  *((_QWORD *)a1 + 103) = v2;
  v3 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v3,
      14,
      10,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1,
      v2);
  }
  return 0LL;
}
