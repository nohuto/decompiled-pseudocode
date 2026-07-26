/*
 * XREFs of NdisMQueryInformationComplete @ 0x14007A800
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z @ 0x14007A8C0 (-ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z.c)
 */

void __fastcall NdisMQueryInformationComplete(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  int v4; // edx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x20u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)a1,
      a2);
  if ( a1->MajorNdisVersion >= 6u )
  {
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      a1->pAdapterInstanceName,
      "NDIS 6 Miniport calling NDIS 5 API");
    KeBugCheckEx(0x7Cu, 0x15uLL, (ULONG_PTR)a1, 0LL, 0LL);
  }
  ndisCompleteLegacyRequest(a1, a2, 0LL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      11,
      33,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)a1);
  }
}
