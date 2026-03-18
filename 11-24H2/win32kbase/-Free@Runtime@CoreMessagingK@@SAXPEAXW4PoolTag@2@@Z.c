/*
 * XREFs of ?Free@Runtime@CoreMessagingK@@SAXPEAXW4PoolTag@2@@Z @ 0x1400FC5B8
 * Callers:
 *     ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x140049348 (-Free@BufferCache@CoreMessagingK@@SAXPEAX@Z.c)
 *     ?UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z @ 0x1400FBF84 (-UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z.c)
 *     ?InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z @ 0x1400FC070 (-InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z.c)
 *     CoreMsgUninitialize @ 0x1400FC290 (CoreMsgUninitialize.c)
 *     ?Connect@RegistrarClient@CoreMessagingK@@CAJXZ @ 0x1400FC354 (-Connect@RegistrarClient@CoreMessagingK@@CAJXZ.c)
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1400FDFC8 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CoreMessagingK::Runtime::Free(void *a1, ULONG a2)
{
  if ( a1 )
    ExFreePoolWithTag(a1, a2);
}
