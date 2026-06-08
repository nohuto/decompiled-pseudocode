/*
 * XREFs of ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x140005514
 * Callers:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x140005188 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 * Callees:
 *     FxGetNextClassBindInfo @ 0x1400055D0 (FxGetNextClassBindInfo.c)
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 */

void __fastcall FxStubUnbindClasses(struct _WDF_BIND_INFO *a1)
{
  char *v1; // rbx
  char *v2; // rdi
  unsigned __int64 NextClassBindInfo; // rax
  unsigned int *v4; // rbx
  void (__fastcall *v5)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, unsigned int *); // rax

  v1 = (char *)&__KMDF_CLASS_BIND_END;
  if ( off_140015298 != &__KMDF_CLASS_BIND_START )
  {
    v2 = (char *)off_140015298 + 80;
    while ( 1 )
    {
      NextClassBindInfo = FxGetNextClassBindInfo(v1, v2);
      v4 = (unsigned int *)NextClassBindInfo;
      if ( !NextClassBindInfo )
        break;
      if ( NextClassBindInfo >= (unsigned __int64)v2 )
        return;
      v5 = *(void (__fastcall **)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, unsigned int *))(NextClassBindInfo + 64);
      if ( v5 )
        v5(WdfVersionUnbindClass, &WdfBindInfo, WdfDriverGlobals, v4);
      else
        WdfVersionUnbindClass(&WdfBindInfo, WdfDriverGlobals, v4);
      v1 = (char *)v4 + *v4;
    }
    DbgPrintEx((ULONG)77, (ULONG)0, "FxGetNextClassBindInfo failed\n");
  }
}
