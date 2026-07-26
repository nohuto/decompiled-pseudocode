/*
 * XREFs of ?ndisAllocateOpenOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14008CDC0
 * Callers:
 *     ?ndisOidPreOpenSetEncapsulation@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x14008D750 (-ndisOidPreOpenSetEncapsulation@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisOidPreTaskOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400C3550 (-ndisOidPreTaskOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisAllocateOpenOffload(struct _NDIS_OPEN_BLOCK *a1)
{
  _NDIS_OPEN_OFFLOAD *Pool2; // rax
  unsigned int v3; // ebx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      84,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)a1);
  Pool2 = (_NDIS_OPEN_OFFLOAD *)ExAllocatePool2(64LL, 112LL, 1718568014);
  a1->Offload = Pool2;
  v3 = 0;
  if ( !Pool2 )
    v3 = -1073741670;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      85,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)Pool2);
  return v3;
}
