/*
 * XREFs of ?ndisFAllocateFilterOffload@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140057FB0
 * Callers:
 *     ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140058120 (-ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z @ 0x1400826A0 (-ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisFAllocateFilterOffload(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_FILTER_TASK_OFFLOAD *Pool2; // rax
  unsigned int v3; // ebx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      14,
      (struct _GUID *)&WPP_1a1a1e7a62063afe4bd31b60c3cc8d66_Traceguids,
      (char)a1);
  Pool2 = (_NDIS_FILTER_TASK_OFFLOAD *)ExAllocatePool2(64LL, 220LL, 1718568014);
  a1->Offload = Pool2;
  v3 = 0;
  if ( !Pool2 )
    v3 = -1073741670;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      15,
      (struct _GUID *)&WPP_1a1a1e7a62063afe4bd31b60c3cc8d66_Traceguids,
      (char)Pool2);
  return v3;
}
