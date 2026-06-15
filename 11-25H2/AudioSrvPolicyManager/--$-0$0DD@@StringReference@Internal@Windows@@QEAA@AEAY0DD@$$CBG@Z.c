/*
 * XREFs of ??$?0$0DD@@StringReference@Internal@Windows@@QEAA@AEAY0DD@$$CBG@Z @ 0x180031F44
 * Callers:
 *     ?RpcCheckDataFlowAccess@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEAH@Z @ 0x180017E60 (-RpcCheckDataFlowAccess@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEAH@Z.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::StringReference::StringReference(
        HSTRING *string,
        const unsigned __int16 (*a2)[51])
{
  if ( WindowsCreateStringReference(
         L"Windows.Internal.CapabilityAccess.CapabilityAccess",
         0x32u,
         (HSTRING_HEADER *)(string + 1),
         string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
