/*
 * XREFs of PortReadStorageBusType @ 0x1401810C8
 * Callers:
 *     RaDriverAddDevice @ 0x140045960 (RaDriverAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     PortpReadBusType @ 0x1401B37C0 (PortpReadBusType.c)
 *     PortpOpenParametersKey @ 0x1401B99DC (PortpOpenParametersKey.c)
 */

char PortReadStorageBusType()
{
  void *v0; // rax
  void *v1; // rdi
  char BusType; // bl
  _BYTE KeyValueInformation[512]; // [rsp+20h] [rbp-218h] BYREF

  v0 = (void *)PortpOpenParametersKey();
  v1 = v0;
  if ( v0 )
  {
    BusType = PortpReadBusType(v0, KeyValueInformation);
    ZwClose(v1);
    LOBYTE(v0) = BusType;
  }
  return (char)v0;
}
