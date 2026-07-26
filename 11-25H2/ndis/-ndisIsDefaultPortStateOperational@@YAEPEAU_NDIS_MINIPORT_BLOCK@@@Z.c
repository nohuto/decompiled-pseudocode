/*
 * XREFs of ?ndisIsDefaultPortStateOperational@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140059E40
 * Callers:
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140059960 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisIsDefaultPortStateOperational(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned __int8 v2; // di

  v2 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      23,
      44,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1);
  if ( (a1->Flags & 0x10000) != 0
    && (a1->DefaultPortSendControlState != NdisPortControlStateControlled
     || ((a1->DefaultPortSendAuthorizationState - 1) & 0xFFFFFFFD) == 0)
    && (a1->DefaultPortRcvControlState != NdisPortControlStateControlled
     || ((a1->DefaultPortRcvAuthorizationState - 1) & 0xFFFFFFFD) == 0) )
  {
    v2 = 1;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      23,
      45,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1);
  return v2;
}
