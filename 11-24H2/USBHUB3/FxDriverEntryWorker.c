/*
 * XREFs of FxDriverEntryWorker @ 0x140042984
 * Callers:
 *     FxDriverEntry @ 0x140042950 (FxDriverEntry.c)
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x14004284C (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x140042B44 (-FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z.c)
 *     ?FxStubInitTypes@@YAJXZ @ 0x140042CCC (-FxStubInitTypes@@YAJXZ.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     DriverEntry @ 0x14009603C (DriverEntry.c)
 */

NTSTATUS __fastcall FxDriverEntryWorker(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS result; // eax
  struct _WDF_BIND_INFO *v5; // rcx
  int inited; // ebx
  NTSTATUS v7; // eax
  GUID *v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+38h] [rbp-20h]
  _QWORD v10[3]; // [rsp+3Ch] [rbp-1Ch] BYREF

  if ( !DriverObject )
    return DriverEntry(0LL, RegistryPath);
  *(_DWORD *)&DestinationString.Length = 34078720;
  DestinationString.Buffer = (wchar_t *)&unk_14006FAA0;
  RtlCopyUnicodeString(&DestinationString, RegistryPath);
  result = WdfVersionBind(DriverObject, &DestinationString, &WdfBindInfo, &WdfDriverGlobals);
  if ( result >= 0 )
  {
    inited = FxStubBindClasses(v5);
    if ( inited < 0 || (inited = FxStubInitTypes(), inited < 0) )
    {
LABEL_10:
      FxStubDriverUnloadCommon();
      return inited;
    }
    v7 = DriverEntry(DriverObject, RegistryPath);
    inited = v7;
    if ( v7 < 0 )
    {
      DbgPrintEx(0x4Du, 0, "DriverEntry failed 0x%x for driver %wZ\n", (unsigned int)v7, &DestinationString);
      if ( off_14006F978 != &__KMDF_CLASS_BIND_START )
      {
        memset(v10, 0, 12);
        v8 = &GUID_WDF_LOADER_INTERFACE_DRIVER_ENTRY_FAILURE;
        v9 = 24;
        if ( (int)WdfLdrQueryInterface(&v8) >= 0 )
          (*(void (__fastcall **)(void *, PWDF_DRIVER_GLOBALS))((char *)v10 + 4))(&WdfBindInfo, WdfDriverGlobals);
      }
      goto LABEL_10;
    }
    if ( WdfDriverGlobals->DisplaceDriverUnload )
    {
      if ( DriverObject->DriverUnload )
        qword_14006FCA8 = (__int64)DriverObject->DriverUnload;
      DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))FxStubDriverUnload;
    }
    return 0;
  }
  return result;
}
