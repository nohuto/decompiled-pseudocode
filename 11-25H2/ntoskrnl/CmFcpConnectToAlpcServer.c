/*
 * XREFs of CmFcpConnectToAlpcServer @ 0x140A8FB5C
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140A8F960 (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     _filwbuf_s @ 0x1404B9BEC (_filwbuf_s.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwAlpcConnectPortEx @ 0x14069C0C0 (ZwAlpcConnectPortEx.c)
 */

__int64 __fastcall CmFcpConnectToAlpcServer(HANDLE *a1, char a2)
{
  unsigned int v4; // edi
  ULONG_PTR v5; // rdx
  NTSTATUS v6; // eax
  int v7; // ebx
  HANDLE PortHandle; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER Timeout; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR BufferLength; // [rsp+70h] [rbp-90h] BYREF
  LARGE_INTEGER Interval; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ClientPortObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ConnectionPortObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE ConnectionMessage[48]; // [rsp+F0h] [rbp-10h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+120h] [rbp+20h] BYREF

  *(&ConnectionPortObjectAttributes.Length + 1) = 0;
  *(&ConnectionPortObjectAttributes.Attributes + 1) = 0;
  *(&ClientPortObjectAttributes.Length + 1) = 0;
  *(&ClientPortObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  *(_WORD *)(&PortAttributes.SecurityQos.EffectiveOnly + 1) = 0;
  PortAttributes.Reserved = 0;
  RtlInitUnicodeString(&DestinationString, L"\\RPC Control\\FconAlpcPort");
  PortHandle = 0LL;
  Timeout.QuadPart = -50000000LL;
  ConnectionPortObjectAttributes.Length = 48;
  ConnectionPortObjectAttributes.Attributes = 512;
  memset(ConnectionMessage, 0, sizeof(ConnectionMessage));
  ConnectionPortObjectAttributes.ObjectName = &DestinationString;
  v4 = 0;
  ClientPortObjectAttributes.Length = 48;
  ClientPortObjectAttributes.Attributes = 512;
  *(_OWORD *)&ConnectionPortObjectAttributes.SecurityDescriptor = 0LL;
  Interval.QuadPart = -10000000LL;
  *(_OWORD *)&ClientPortObjectAttributes.SecurityDescriptor = 0LL;
  ConnectionPortObjectAttributes.RootDirectory = 0LL;
  ClientPortObjectAttributes.RootDirectory = 0LL;
  ClientPortObjectAttributes.ObjectName = 0LL;
  PortAttributes.Flags = 1179648;
  PortAttributes.MaxMessageLength = filwbuf_s();
  PortAttributes.MaxPoolUsage = 0xFFFFFFFFLL;
  PortAttributes.MaxSectionSize = 0xFFFFFFFFLL;
  PortAttributes.MaxTotalSectionSize = 0xFFFFFFFFLL;
  PortAttributes.MaxViewSize = 0xFFFFFFFFLL;
  *(_WORD *)ConnectionMessage = v5 - 40;
  PortAttributes.DupObjectTypes = 0;
  PortAttributes.MemoryBandwidth = 0LL;
  *(_QWORD *)&PortAttributes.SecurityQos.Length = 12LL;
  *(_WORD *)&PortAttributes.SecurityQos.ContextTrackingMode = 1;
  *(_DWORD *)&ConnectionMessage[2] = -2147483600;
  *(_DWORD *)&ConnectionMessage[40] = 1;
  BufferLength = v5;
  do
  {
    v6 = ZwAlpcConnectPortEx(
           &PortHandle,
           &ConnectionPortObjectAttributes,
           &ClientPortObjectAttributes,
           &PortAttributes,
           0x20000u,
           0LL,
           (PPORT_MESSAGE)ConnectionMessage,
           &BufferLength,
           0LL,
           0LL,
           &Timeout);
    v7 = v6;
    if ( !a2 || v6 != -1073741772 && v6 != -1073740031 )
      break;
    ++v4;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  while ( v4 < 0xA );
  if ( v7 >= 0 )
    *a1 = PortHandle;
  return (unsigned int)v7;
}
