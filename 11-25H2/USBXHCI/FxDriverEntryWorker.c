/*
 * XREFs of FxDriverEntryWorker @ 0x140056704
 * Callers:
 *     FxDriverEntry @ 0x1400566D0 (FxDriverEntry.c)
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x140056690 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1400568C4 (-FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z.c)
 *     ?FxStubInitTypes@@YAJXZ @ 0x140056B40 (-FxStubInitTypes@@YAJXZ.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     DriverEntry @ 0x14007AA30 (DriverEntry.c)
 */

NTSTATUS __fastcall FxDriverEntryWorker(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS result; // eax
  struct _WDF_BIND_INFO *v5; // rcx
  struct _WDF_BIND_INFO *v6; // rcx
  int inited; // ebx
  NTSTATUS v8; // eax
  GUID *v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-20h]
  _QWORD v11[3]; // [rsp+3Ch] [rbp-1Ch] BYREF

  if ( !DriverObject )
    return DriverEntry(0LL, RegistryPath);
  *(_DWORD *)&DestinationString.Length = 34078720;
  DestinationString.Buffer = (wchar_t *)&unk_14006BA20;
  RtlCopyUnicodeString(&DestinationString, RegistryPath);
  result = WdfVersionBind(DriverObject, &DestinationString, &unk_14006B6B0, &WdfDriverGlobals);
  if ( result >= 0 )
  {
    inited = FxStubBindClasses(v5);
    if ( inited < 0 || (inited = FxStubInitTypes(), inited < 0) )
    {
LABEL_10:
      FxStubDriverUnloadCommon(v6);
      return inited;
    }
    v8 = DriverEntry(DriverObject, RegistryPath);
    inited = v8;
    if ( v8 < 0 )
    {
      DbgPrintEx(0x4Du, 0, "DriverEntry failed 0x%x for driver %wZ\n", (unsigned int)v8, &DestinationString);
      if ( off_14006B838 != &__KMDF_CLASS_BIND_START )
      {
        memset(v11, 0, 12);
        v9 = &GUID_WDF_LOADER_INTERFACE_DRIVER_ENTRY_FAILURE;
        v10 = 24;
        if ( (int)WdfLdrQueryInterface(&v9) >= 0 )
          (*(void (__fastcall **)(void *, PWDF_DRIVER_GLOBALS))((char *)v11 + 4))(&unk_14006B6B0, WdfDriverGlobals);
      }
      goto LABEL_10;
    }
    if ( WdfDriverGlobals->DisplaceDriverUnload )
    {
      if ( DriverObject->DriverUnload )
        qword_14006BC28 = (__int64)DriverObject->DriverUnload;
      DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))FxStubDriverUnload;
    }
    return 0;
  }
  return result;
}
