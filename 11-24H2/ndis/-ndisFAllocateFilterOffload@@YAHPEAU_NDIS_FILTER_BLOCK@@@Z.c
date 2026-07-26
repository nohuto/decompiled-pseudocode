/*
 * XREFs of ?ndisFAllocateFilterOffload@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400338A0
 * Callers:
 *     ?ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z @ 0x140032910 (-ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z.c)
 *     ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140033D30 (-ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisFAllocateFilterOffload(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_FILTER_TASK_OFFLOAD *Pool2; // rax
  unsigned int v3; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      15,
      (struct _GUID *)&WPP_f6ad9d2418363d9c6bf307c7a58137f6_Traceguids,
      (char)a1);
  Pool2 = (_NDIS_FILTER_TASK_OFFLOAD *)ExAllocatePool2(64LL, 220LL, 1718568014LL);
  a1->Offload = Pool2;
  v3 = 0;
  if ( !Pool2 )
    v3 = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      16,
      (struct _GUID *)&WPP_f6ad9d2418363d9c6bf307c7a58137f6_Traceguids,
      (char)Pool2);
  return v3;
}
