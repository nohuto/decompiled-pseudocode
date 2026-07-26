/*
 * XREFs of ?ndisInvokeBindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAXPEAU_NDIS_BIND_PARAMETERS@@@Z @ 0x14015F1A0
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x14015FDF0 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisInvokeBindAdapter(struct _NDIS_PROTOCOL_BLOCK *a1, void *a2, struct _NDIS_BIND_PARAMETERS *a3)
{
  void *v4; // rsi
  __int64 result; // rax
  unsigned int v7; // edi
  char v8[4]; // [rsp+30h] [rbp-18h]

  v4 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      91,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)a1);
  }
  result = ((__int64 (__fastcall *)(void *, void *, struct _NDIS_BIND_PARAMETERS *))a1->BindAdapterHandlerEx)(
             a1->ProtocolDriverContext,
             v4,
             a3);
  v7 = result;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = result;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x5Cu,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)a1,
      *(_DWORD *)v8);
    return v7;
  }
  return result;
}
