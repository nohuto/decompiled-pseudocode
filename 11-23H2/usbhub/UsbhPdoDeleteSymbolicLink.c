/*
 * XREFs of UsbhPdoDeleteSymbolicLink @ 0x1C0054BC8
 * Callers:
 *     UsbhPdoRemoveCleanup @ 0x1C0056C34 (UsbhPdoRemoveCleanup.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 */

void __fastcall UsbhPdoDeleteSymbolicLink(__int64 a1)
{
  NTSTATUS v2; // edi
  _DWORD *v3; // rbx
  NTSTATUS v4; // eax
  void *v5; // rcx

  v2 = 0;
  v3 = PdoExt(a1);
  if ( (v3[355] & 8) != 0 )
  {
    v4 = IoSetDeviceInterfaceState((PUNICODE_STRING)v3 + 75, 0);
    v5 = (void *)*((_QWORD *)v3 + 151);
    v2 = v4;
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0);
      *((_QWORD *)v3 + 151) = 0LL;
    }
    v3[355] &= ~8u;
  }
  Log(*((_QWORD *)v3 + 148), 256, 1937337676, v2, a1);
}
