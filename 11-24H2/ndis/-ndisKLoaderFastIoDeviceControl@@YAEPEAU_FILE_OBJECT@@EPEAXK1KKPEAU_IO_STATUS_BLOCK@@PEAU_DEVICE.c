/*
 * XREFs of ?ndisKLoaderFastIoDeviceControl@@YAEPEAU_FILE_OBJECT@@EPEAXK1KKPEAU_IO_STATUS_BLOCK@@PEAU_DEVICE_OBJECT@@@Z @ 0x1400DCA04
 * Callers:
 *     ndisFastIoDeviceControl @ 0x140052E00 (ndisFastIoDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall ndisKLoaderFastIoDeviceControl(struct _FILE_OBJECT *a1, __int64 a2, void *a3)
{
  _QWORD *FsContext; // rax
  __int64 v4; // rax

  FsContext = a1->FsContext;
  if ( FsContext && *(_DWORD *)FsContext == 183160574 && (v4 = *(_QWORD *)(*(_QWORD *)(FsContext[2] + 8LL) + 80LL)) != 0 )
    return (*(__int64 (__fastcall **)(struct _FILE_OBJECT *, __int64, void *))(v4 + 80))(a1, a2, a3);
  else
    return 0;
}
