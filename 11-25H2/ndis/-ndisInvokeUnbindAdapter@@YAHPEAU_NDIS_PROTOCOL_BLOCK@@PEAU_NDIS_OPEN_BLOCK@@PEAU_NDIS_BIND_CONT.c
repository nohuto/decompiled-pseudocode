/*
 * XREFs of ?ndisInvokeUnbindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_BIND_CONTEXT@@@Z @ 0x140171010
 * Callers:
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14017F560 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqD @ 0x140026FA0 (WPP_RECORDER_SF_qqD.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisInvokeUnbindAdapter(
        struct _NDIS_PROTOCOL_BLOCK *a1,
        struct _NDIS_OPEN_BLOCK *a2,
        struct _NDIS_BIND_CONTEXT *a3)
{
  __int64 result; // rax
  unsigned int v7; // esi
  char v8[4]; // [rsp+38h] [rbp-10h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x5Du,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)a1,
      a2);
  result = ((__int64 (__fastcall *)(struct _NDIS_BIND_CONTEXT *, void *))a1->UnbindAdapterHandlerEx)(
             a3,
             a2->ProtocolBindingContext);
  v7 = result;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = result;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x5Eu,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)a1,
      (char)a2,
      *(_DWORD *)v8);
    return v7;
  }
  return result;
}
