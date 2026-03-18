/*
 * XREFs of ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x140055404
 * Callers:
 *     ACPIRootInitialize @ 0x1400A67CC (ACPIRootInitialize.c)
 * Callees:
 *     CreateObjectHandle @ 0x14001A7CC (CreateObjectHandle.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1400205DC (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 */

__int64 ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice()
{
  ULONG_PTR v0; // rsi
  __int64 v1; // rdx
  __int64 v2; // rdi
  __int64 ObjectHandle; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  __int128 v11; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+40h] [rbp-20h]
  struct _KEVENT Event; // [rsp+48h] [rbp-18h] BYREF

  v0 = RootDeviceExtension;
  v12 = 0LL;
  v11 = 0LL;
  v1 = 0LL;
  v2 = 5LL;
  memset(&Event, 0, sizeof(Event));
  do
  {
    ObjectHandle = CreateObjectHandle(*(__int64 *)((char *)AmliGlobalPreDefinedRootObjects + v1));
    *(__int64 *)((char *)AcpiAmliPreDefinedRootAcpiObjects + v4) = ObjectHandle;
    v1 = v4 + 8;
  }
  while ( v5 != 1 );
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6 = 0LL;
  do
  {
    v7 = AcpiAmliPreDefinedRootAcpiObjects[v6];
    if ( v7 == *(_QWORD *)(v0 + 760) )
    {
      v8 = *(_QWORD *)(v0 + 944);
LABEL_10:
      AcpiAmliPreDefinedRootNativeHandles[v6] = v8;
      goto LABEL_11;
    }
    *(_QWORD *)&v11 = 0LL;
    *((_QWORD *)&v11 + 1) = &Event;
    v12 = 3221225473LL;
    v9 = AcpiNotifyPlExtDiscoverDeviceAsync(v7, (__int64)ACPIRootDeviceDiscoverDeviceCompletion, (__int64)&v11);
    if ( v9 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v9 = v12;
    }
    if ( v9 >= 0 )
    {
      v8 = v11;
      if ( (_QWORD)v11 )
        goto LABEL_10;
    }
LABEL_11:
    ++v6;
    --v2;
  }
  while ( v2 );
  return 0LL;
}
