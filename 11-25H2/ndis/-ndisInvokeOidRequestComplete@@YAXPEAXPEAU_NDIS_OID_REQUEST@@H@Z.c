/*
 * XREFs of ?ndisInvokeOidRequestComplete@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H@Z @ 0x14006EA30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDqd @ 0x140025370 (WPP_RECORDER_SF_qDqd.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisInvokeOidRequestComplete(_QWORD *a1, struct _NDIS_OID_REQUEST *a2, unsigned int a3)
{
  __int64 v3; // rbp

  v3 = a1[3];
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      a3,
      0x67u,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)a1,
      a2->DATA.QUERY_INFORMATION.Oid,
      (char)a2,
      a3);
  (*(void (__fastcall **)(_QWORD, struct _NDIS_OID_REQUEST *, _QWORD))(v3 + 320))(a1[4], a2, a3);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x68u,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)a1,
      a2);
}
