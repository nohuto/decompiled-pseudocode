/*
 * XREFs of StorpAdapterTopologyWorkItemRoutine @ 0x140038BD0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall StorpAdapterTopologyWorkItemRoutine(__int64 DeviceObject, struct _IO_WORKITEM *Context)
{
  void *v2; // rdi
  _DWORD *OutputBuffer; // rbx
  char v6; // r12
  __int64 OutputBufferLength; // rsi
  PIRP v8; // rax
  unsigned int v9; // eax
  struct _KEVENT Event; // [rsp+50h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+Fh] BYREF
  __int64 InputBuffer; // [rsp+78h] [rbp+1Fh] BYREF
  int v13; // [rsp+80h] [rbp+27h]

  v2 = *(void **)(DeviceObject + 64);
  InputBuffer = 0LL;
  IoStatusBlock = 0LL;
  v13 = 0;
  memset(&Event, 0, sizeof(Event));
  OutputBuffer = 0LL;
  v6 = 0;
  if ( !KeGetCurrentIrql() && (*((_BYTE *)v2 + 104) & 1) != 0 )
  {
    OutputBufferLength = 18768LL;
    while ( 1 )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      OutputBuffer = (_DWORD *)RaidAllocatePool(64LL, OutputBufferLength, 1700028754LL, DeviceObject);
      if ( !OutputBuffer )
        break;
      InputBuffer = 53LL;
      v8 = IoBuildDeviceIoControlRequest(
             0x2D1400u,
             *((PDEVICE_OBJECT *)v2 + 1),
             &InputBuffer,
             0xCu,
             OutputBuffer,
             OutputBufferLength,
             0,
             &Event,
             &IoStatusBlock);
      if ( !v8 )
        break;
      v8->IoStatus.Status = -1073741637;
      if ( IofCallDriver(*((PDEVICE_OBJECT *)v2 + 1), v8) == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v9 = OutputBuffer[1];
      if ( v9 <= (unsigned int)OutputBufferLength || v6 )
        break;
      OutputBufferLength = v9;
      ExFreePoolWithTag(OutputBuffer, 0x65546152u);
      v6 = 1;
    }
  }
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)v2 + 42));
  if ( OutputBuffer )
    ExFreePoolWithTag(OutputBuffer, 0x65546152u);
  if ( Context )
    IoFreeWorkItem(Context);
}
