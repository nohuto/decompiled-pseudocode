/*
 * XREFs of ?ndisMFakeOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x140006860
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDd @ 0x140008220 (WPP_RECORDER_SF_qDd_ea_140008220.c)
 */

__int64 __fastcall ndisMFakeOidRequest(_QWORD *a1, struct _NDIS_OID_REQUEST *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  char Oid; // [rsp+30h] [rbp-18h]

  v2 = a1[2];
  v3 = -1073741823;
  if ( v2 )
    v3 = *(_DWORD *)(v2 + 540);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    Oid = a2->DATA.QUERY_INFORMATION.Oid;
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_qDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      (int)a1,
      88,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      Oid,
      v3);
  }
  return v3;
}
