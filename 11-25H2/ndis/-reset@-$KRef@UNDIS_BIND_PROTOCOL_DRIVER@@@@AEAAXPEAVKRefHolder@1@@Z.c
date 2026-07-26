/*
 * XREFs of ?reset@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x14016B120
 * Callers:
 *     NdisRegisterProtocol @ 0x1400BFF60 (NdisRegisterProtocol.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x14016B070 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_dele.c)
 * Callees:
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x14016B1A0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 */

__int64 __fastcall KRef<NDIS_BIND_PROTOCOL_DRIVER>::reset(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 != *a1 )
  {
    result = KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(a1, a2, a3);
    *a1 = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 64));
  }
  return result;
}
