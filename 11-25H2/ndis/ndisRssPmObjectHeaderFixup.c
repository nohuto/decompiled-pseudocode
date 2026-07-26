/*
 * XREFs of ndisRssPmObjectHeaderFixup @ 0x14005AF80
 * Callers:
 *     ndisMSetPowerManagementCapabilities @ 0x14005AC10 (ndisMSetPowerManagementCapabilities.c)
 *     ?ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z @ 0x14008F1F0 (-ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qsDDs @ 0x1400A9234 (WPP_RECORDER_SF_qsDDs.c)
 */

char __fastcall ndisRssPmObjectHeaderFixup(
        __int64 a1,
        unsigned __int8 *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int16 a5)
{
  int v7; // edx
  char result; // al

  v7 = *a2;
  result = 0;
  if ( (_BYTE)v7 != a3 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qsDDs(*((_QWORD *)WPP_GLOBAL_Control + 8), v7, a3, 121);
    *a2 = a3;
    result = 1;
  }
  if ( a2[1] != a4 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qsDDs(*((_QWORD *)WPP_GLOBAL_Control + 8), v7, a3, 122);
    a2[1] = a4;
    result = 1;
  }
  if ( *((_WORD *)a2 + 1) < a5 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qsDDs(*((_QWORD *)WPP_GLOBAL_Control + 8), v7, a3, 123);
    *((_WORD *)a2 + 1) = a5;
    return 1;
  }
  return result;
}
