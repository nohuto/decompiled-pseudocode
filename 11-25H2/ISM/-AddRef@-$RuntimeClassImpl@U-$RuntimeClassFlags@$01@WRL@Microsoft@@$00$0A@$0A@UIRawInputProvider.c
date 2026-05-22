/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180064C60
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1801B9F10 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRaw_ea_1801B9F10.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1801B9F20 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRaw_ea_1801B9F20.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1801B9F30 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRaw_ea_1801B9F30.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1801B9F40 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRaw_ea_1801B9F40.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x1801B9F50 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRaw_ea_1801B9F50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::AddRef(
        __int64 a1)
{
  unsigned int v1; // r9d
  signed __int32 v2; // r8d

  v1 = 0x7FFFFFFF;
  while ( 1 )
  {
    v2 = *(_DWORD *)(a1 + 3676);
    if ( v2 == 0x7FFFFFFF )
      break;
    if ( v2 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3676), v2 + 1, v2) )
      return (unsigned int)(v2 + 1);
  }
  return v1;
}
