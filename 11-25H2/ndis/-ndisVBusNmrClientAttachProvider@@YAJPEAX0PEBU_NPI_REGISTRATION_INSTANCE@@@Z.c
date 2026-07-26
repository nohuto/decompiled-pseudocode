/*
 * XREFs of ?ndisVBusNmrClientAttachProvider@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@@Z @ 0x14014CC80
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisVBusUpdateDependentBindings@@YAXXZ @ 0x14014CD8C (-ndisVBusUpdateDependentBindings@@YAXXZ.c)
 */

__int64 __fastcall ndisVBusNmrClientAttachProvider(
        HANDLE NmrBindingHandle,
        void *a2,
        const struct _NPI_REGISTRATION_INSTANCE *a3)
{
  PNPIID NpiId; // rcx
  __int64 v5; // rax
  PNPI_MODULEID ModuleId; // rcx
  __int64 v7; // rax
  NTSTATUS v8; // ebx

  if ( *(_OWORD *)&WPP_MAIN_CB.DeviceQueue.Type != 0LL || a3->Version != 1 || a3->Size != 40 )
    return 3221226169LL;
  NpiId = a3->NpiId;
  v5 = *(_QWORD *)&NpiId->Data1 - NPI_NDIS_VBUS_INTERFACE_ID;
  if ( *(_QWORD *)&NpiId->Data1 == NPI_NDIS_VBUS_INTERFACE_ID )
    v5 = *(_QWORD *)NpiId->Data4 - 0x99E71279000ADABLL;
  if ( v5 )
    return 3221226169LL;
  ModuleId = a3->ModuleId;
  v7 = *(_QWORD *)&ModuleId->Length - NPI_MS_NDIS_VBUS_MODULEID;
  if ( *(_QWORD *)&ModuleId->Length == NPI_MS_NDIS_VBUS_MODULEID )
  {
    v7 = *(_QWORD *)&ModuleId->Guid.Data1 - 0x11D49B1AEB004A25LL;
    if ( *(_QWORD *)&ModuleId->Guid.Data1 == 0x11D49B1AEB004A25LL )
      v7 = *((_QWORD *)&ModuleId->IfLuid + 1) + 0x43A688FBAFFFDC6FLL;
  }
  if ( v7 || a3->Number || a3->NpiSpecificCharacteristics )
    return 3221226169LL;
  v8 = NmrClientAttachProvider(
         NmrBindingHandle,
         0LL,
         0LL,
         (PVOID *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink,
         (const void **)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink);
  if ( v8 >= 0 )
  {
    *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type = NmrBindingHandle;
    ExReInitializeRundownProtection((PEX_RUNDOWN_REF)&WPP_MAIN_CB.DeviceQueue.32);
    LOBYTE(WPP_MAIN_CB.DeviceQueue.Lock) = 1;
    ndisVBusUpdateDependentBindings();
  }
  return (unsigned int)v8;
}
