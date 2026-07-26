/*
 * XREFs of ??1_NDIS_PROTOCOL_BLOCK@@QEAA@XZ @ 0x14008DAF0
 * Callers:
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1400565A0 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     NdisRegisterProtocol @ 0x1400B8C40 (NdisRegisterProtocol.c)
 *     NdisRegisterProtocolDriver @ 0x1400B9070 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x14015E250 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 */

void __fastcall _NDIS_PROTOCOL_BLOCK::~_NDIS_PROTOCOL_BLOCK(_NDIS_PROTOCOL_BLOCK *this, __int64 a2, __int64 a3)
{
  TriageData *value; // rdi

  value = this->Triage.__ptr_.__value_;
  this->Triage.__ptr_.__value_ = 0LL;
  if ( value )
  {
    ((void (__fastcall *)(TriageData *, _QWORD))value->~TriageData)(value, 0LL);
    ExFreePoolWithTag(value, 0);
  }
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&this->Bind, a2, a3);
}
