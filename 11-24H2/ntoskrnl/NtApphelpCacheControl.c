/*
 * XREFs of NtApphelpCacheControl @ 0x1409502F0
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14025EEA0 (IoBuildDeviceIoControlRequest.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     ExGetPreviousMode @ 0x14043D9E0 (ExGetPreviousMode.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     AhcCacheQueryHwId @ 0x14082976C (AhcCacheQueryHwId.c)
 *     IoGetDeviceObjectPointer @ 0x1409504C0 (IoGetDeviceObjectPointer.c)
 */

__int64 __fastcall NtApphelpCacheControl(int a1, char *a2)
{
  ULONG v3; // edi
  unsigned int v4; // ebx
  PIRP v5; // rbx
  int v8; // ecx
  int v9; // ecx
  bool v10; // zf
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp+17h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp+27h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+C0h] [rbp+77h] BYREF
  PFILE_OBJECT FileObject; // [rsp+C8h] [rbp+7Fh] BYREF

  DestinationString = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( a1 >= 12 )
    return (unsigned int)-1073741811;
  FileObject = 0LL;
  DeviceObject = 0LL;
  v3 = (4 * a1) | 0x220003;
  if ( a1 == 9 )
    return (unsigned int)AhcCacheQueryHwId(a2);
  if ( a1 <= 5 )
  {
    if ( a1 != 5 )
    {
      if ( !a1 )
      {
LABEL_6:
        v4 = -1073741275;
        goto LABEL_7;
      }
      v8 = a1 - 1;
      if ( !v8 )
        goto LABEL_27;
      v9 = v8 - 1;
      if ( !v9 )
        goto LABEL_27;
      v11 = v9 - 1;
      v10 = v11 == 0;
      goto LABEL_28;
    }
LABEL_25:
    v4 = -1073741823;
    goto LABEL_7;
  }
  v12 = a1 - 6;
  if ( !v12 )
    goto LABEL_6;
  v13 = v12 - 1;
  if ( !v13 )
    goto LABEL_27;
  v14 = v13 - 1;
  if ( !v14 )
    goto LABEL_25;
  v11 = v14 - 2;
  v10 = v11 == 0;
LABEL_28:
  if ( !v10 )
  {
    if ( v11 == 1 )
      goto LABEL_25;
    return (unsigned int)-1073741811;
  }
LABEL_27:
  v4 = 0;
LABEL_7:
  if ( g_AhcDeviceObject )
  {
LABEL_8:
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v5 = IoBuildDeviceIoControlRequest(v3, g_AhcDeviceObject, a2, 0x188u, 0LL, 0, 0, &Event, &IoStatusBlock);
    if ( !v5 )
      return (unsigned int)-1073741823;
    v5->RequestorMode = ExGetPreviousMode();
    return (unsigned int)IofCallDriver(g_AhcDeviceObject, v5);
  }
  if ( RtlInitUnicodeStringEx(&DestinationString, L"\\Device\\ahcache") >= 0
    && IoGetDeviceObjectPointer(&DestinationString, 0xC0000000, &FileObject, &DeviceObject) >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&g_AhcDeviceObject, (signed __int64)DeviceObject, 0LL) )
      ObfDereferenceObject(FileObject);
    goto LABEL_8;
  }
  return v4;
}
