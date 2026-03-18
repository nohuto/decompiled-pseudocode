/*
 * XREFs of ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x140055E84
 * Callers:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x140055AF0 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 * Callees:
 *     FxGetNextClassBindInfo @ 0x140055F44 (FxGetNextClassBindInfo.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

void __fastcall FxStubUnbindClasses(struct _WDF_BIND_INFO *a1)
{
  char *v1; // rdi
  char *i; // rcx
  void (__fastcall *v3)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, unsigned int *); // rax
  unsigned __int64 NextClassBindInfo; // rax
  unsigned int *v5; // rbx

  if ( off_14006B838 != &__KMDF_CLASS_BIND_START )
  {
    v1 = (char *)off_14006B838 + 80;
    if ( *(_DWORD *)off_14006B838 == 120 )
      v1 = (char *)off_14006B838 + 120;
    for ( i = (char *)&Ucx_BIND_INFO; ; i = (char *)v5 + *v5 )
    {
      NextClassBindInfo = FxGetNextClassBindInfo(i, v1);
      v5 = (unsigned int *)NextClassBindInfo;
      if ( !NextClassBindInfo )
        break;
      if ( NextClassBindInfo >= (unsigned __int64)v1 )
        return;
      v3 = *(void (__fastcall **)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, unsigned int *))(NextClassBindInfo + 64);
      if ( v3 )
        v3(WdfVersionUnbindClass, &unk_14006B6B0, WdfDriverGlobals, v5);
      else
        WdfVersionUnbindClass(&unk_14006B6B0, WdfDriverGlobals, v5);
    }
    DbgPrintEx(0x4Du, 0, "FxGetNextClassBindInfo failed\n");
  }
}
