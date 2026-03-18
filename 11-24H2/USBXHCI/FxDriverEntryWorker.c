/*
 * XREFs of FxDriverEntryWorker @ 0x140055B64
 * Callers:
 *     FxDriverEntry @ 0x140055B30 (FxDriverEntry.c)
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x140055AF0 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x140055D24 (-FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z.c)
 *     ?FxStubInitTypes@@YAJXZ @ 0x140055FA0 (-FxStubInitTypes@@YAJXZ.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     DriverEntry @ 0x14007A810 (DriverEntry.c)
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
  DestinationString.Buffer = (wchar_t *)&unk_14006BA10;
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
        qword_14006BC18 = (__int64)DriverObject->DriverUnload;
      DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))FxStubDriverUnload;
    }
    return 0;
  }
  return result;
}
