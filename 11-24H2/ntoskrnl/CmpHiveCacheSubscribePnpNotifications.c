/*
 * XREFs of CmpHiveCacheSubscribePnpNotifications @ 0x1407D939C
 * Callers:
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407E5F40 (CmpHiveCachePopulateHiveEntryThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     SetFailureLocation @ 0x14045B110 (SetFailureLocation.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     IoRegisterPlugPlayNotification @ 0x1409EB2A0 (IoRegisterPlugPlayNotification.c)
 */

__int64 __fastcall CmpHiveCacheSubscribePnpNotifications(void **a1, __int64 a2, __int64 a3)
{
  void *v4; // rcx
  NTSTATUS v6; // eax
  PVOID v7; // r14
  NTSTATUS v8; // edi
  int v9; // eax
  struct _DRIVER_OBJECT *v10; // r9
  PVOID v11; // r8
  PVOID EventCategoryData; // [rsp+78h] [rbp+20h] BYREF

  v4 = *a1;
  EventCategoryData = 0LL;
  v6 = ObReferenceObjectByHandle(v4, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &EventCategoryData, 0LL);
  v7 = EventCategoryData;
  v8 = v6;
  if ( v6 < 0 )
  {
    v9 = 16;
LABEL_5:
    SetFailureLocation(a3, 0, 39, v8, v9);
    ObfDereferenceObject(v7);
    return (unsigned int)v8;
  }
  v10 = CmpHiveCacheDriverObject;
  v11 = EventCategoryData;
  *(_QWORD *)(a2 + 352) = EventCategoryData;
  v8 = IoRegisterPlugPlayNotification(
         EventCategoryTargetDeviceChange,
         0,
         v11,
         v10,
         CmpHiveCachePnpNotificationCallback,
         (PVOID)a2,
         (PVOID *)(a2 + 344));
  if ( v8 < 0 )
  {
    v9 = 32;
    goto LABEL_5;
  }
  return (unsigned int)v8;
}
