/*
 * XREFs of ?ndisInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x140169330
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1400B9070 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisInvokeSetOptions(
        struct _NDIS_PROTOCOL_BLOCK *a1,
        struct _NDIS_PROTOCOL_DRIVER_CHARACTERISTICS *a2)
{
  struct _NDIS_PROTOCOL_DRIVER_CHARACTERISTICS *v2; // rdi
  __int64 result; // rax
  unsigned int v5; // edi
  char v6[4]; // [rsp+30h] [rbp-18h]

  v2 = a2;
  if ( a2->SetOptionsHandler )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        1,
        91,
        (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
        (char)a1);
    }
    result = ((__int64 (__fastcall *)(struct _NDIS_PROTOCOL_BLOCK *, void *))v2->SetOptionsHandler)(
               a1,
               a1->ProtocolDriverContext);
    v5 = result;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v6 = result;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x5Cu,
        (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
        (char)a1,
        *(_DWORD *)v6);
      return v5;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        1,
        93,
        (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
        (char)a1);
    }
    return 0LL;
  }
  return result;
}
