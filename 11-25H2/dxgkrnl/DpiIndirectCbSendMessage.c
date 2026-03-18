/*
 * XREFs of DpiIndirectCbSendMessage @ 0x1403DC590
 * Callers:
 *     <none>
 * Callees:
 *     ?DpiIndirectSendAsyncUserModeRequest@@YAJPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@KPEAXK2KP6AX2PEAU_IO_STATUS_BLOCK@@@Z2PEA_NPEAPEAU_IRP@@@Z @ 0x1403DC698 (-DpiIndirectSendAsyncUserModeRequest@@YAJPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@KPEAXK2KP6AX2PEAU.c)
 *     DpiFdoGetDeviceFileObject @ 0x1403DC908 (DpiFdoGetDeviceFileObject.c)
 */

__int64 __fastcall DpiIndirectCbSendMessage(
        __int64 a1,
        int a2,
        void *a3,
        unsigned int a4,
        void *a5,
        void (*a6)(void *, struct _IO_STATUS_BLOCK *),
        void *a7)
{
  __int64 v10; // rcx
  struct _FILE_OBJECT *DeviceFileObject; // rax
  struct _FILE_OBJECT *v12; // rdi
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  unsigned int v14; // r8d
  unsigned int v15; // ebx
  size_t Size; // [rsp+20h] [rbp-48h]
  bool *v18; // [rsp+48h] [rbp-20h]
  struct _IRP **v19; // [rsp+50h] [rbp-18h]

  if ( a1 )
  {
    v10 = *(_QWORD *)(a1 + 64);
    if ( v10 )
    {
      if ( *(_DWORD *)(v10 + 16) == 1953656900 && *(_DWORD *)(v10 + 20) == 2 && *(_BYTE *)(v10 + 1158) )
      {
        DeviceFileObject = (struct _FILE_OBJECT *)DpiFdoGetDeviceFileObject();
        v12 = DeviceFileObject;
        if ( DeviceFileObject )
        {
          RelatedDeviceObject = IoGetRelatedDeviceObject(DeviceFileObject);
          LODWORD(Size) = a2;
          v15 = DpiIndirectSendAsyncUserModeRequest(v12, RelatedDeviceObject, v14, a3, Size, a5, a4, a6, a7, v18, v19);
          ObfDereferenceObject(v12);
          return v15;
        }
        WdLogSingleEntry1(2LL, -1073741811LL);
        WdLogGlobalForLineNumber = 869;
      }
    }
  }
  return 3221225485LL;
}
