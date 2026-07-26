/*
 * XREFs of ndisRssPmObjectHeaderFixup @ 0x1400618E0
 * Callers:
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14007EC60 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 * Callees:
 *     WPP_RECORDER_SF_qsDDs @ 0x1400A0DC8 (WPP_RECORDER_SF_qsDDs.c)
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
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qsDDs(*((_QWORD *)WPP_GLOBAL_Control + 8), v7, a3, 121);
    *a2 = a3;
    result = 1;
  }
  if ( a2[1] != a4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qsDDs(*((_QWORD *)WPP_GLOBAL_Control + 8), v7, a3, 122);
    a2[1] = a4;
    result = 1;
  }
  if ( *((_WORD *)a2 + 1) < a5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qsDDs(*((_QWORD *)WPP_GLOBAL_Control + 8), v7, a3, 123);
    *((_WORD *)a2 + 1) = a5;
    return 1;
  }
  return result;
}
