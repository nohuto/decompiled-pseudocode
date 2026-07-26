/*
 * XREFs of ?ndisInvokeOidRequestComplete@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H@Z @ 0x140052EC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDqd @ 0x140015CC0 (WPP_RECORDER_SF_qDqd_ea_140015CC0.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisInvokeOidRequestComplete(_QWORD *a1, struct _NDIS_OID_REQUEST *a2, unsigned int a3)
{
  __int64 v3; // rbp
  int v7; // edx

  v3 = a1[3];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      a3,
      0x6Au,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)a1,
      a2->DATA.QUERY_INFORMATION.Oid,
      (char)a2,
      a3);
  (*(void (__fastcall **)(_QWORD, struct _NDIS_OID_REQUEST *, _QWORD))(v3 + 320))(a1[4], a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      11,
      107,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)a1,
      (char)a2);
  }
}
