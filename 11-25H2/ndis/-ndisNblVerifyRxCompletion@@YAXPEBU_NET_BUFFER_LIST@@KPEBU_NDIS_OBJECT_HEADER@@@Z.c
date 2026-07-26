/*
 * XREFs of ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x14001F1B0
 * Callers:
 *     NdisReturnNetBufferLists @ 0x14001BA20 (NdisReturnNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x14001E7D0 (NdisFReturnNetBufferLists.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1400AA400 (datapathVerifierReportProblem.c)
 *     verifySingleRxNbl @ 0x1400AA838 (verifySingleRxNbl.c)
 */

void __fastcall ndisNblVerifyRxCompletion(
        const struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        const struct _NDIS_OBJECT_HEADER *a3)
{
  unsigned __int64 v3; // rbx
  KIRQL CurrentIrql; // al
  __int16 v7; // si
  const struct _NET_BUFFER_LIST *Alignment; // r14
  __int16 i; // r15
  __int16 v10; // ax

  v3 = a2;
  if ( (a2 & 1) != 0 && KeGetCurrentIrql() != 2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    datapathVerifierReportProblem(0x20uLL, (unsigned __int64)a3, CurrentIrql);
  }
  if ( (v3 & 0xFFFFFFF8) != 0 )
    datapathVerifierReportProblem(1uLL, (unsigned __int64)a3, v3);
  v7 = 0;
  Alignment = a1;
  for ( i = 0; Alignment; i |= ~v10 )
  {
    verifySingleRxNbl(Alignment, a3);
    v10 = WORD1(Alignment->NetBufferListInfo[14]);
    Alignment = (const struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    v7 |= v10;
  }
  if ( (v3 & 2) != 0 && v7 != ~i )
    datapathVerifierReportProblem(0x23uLL, (unsigned __int64)a3, (unsigned __int64)a1);
}
