/*
 * XREFs of PiIommuAllocateExtension @ 0x140729B24
 * Callers:
 *     PipDmgInitializeIommuExtension @ 0x140725B78 (PipDmgInitializeIommuExtension.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PnpTraceIommuDeviceProperties @ 0x140726740 (PnpTraceIommuDeviceProperties.c)
 *     PiIommuFreeExtension @ 0x140729CF8 (PiIommuFreeExtension.c)
 *     PipIommuRetrieveDeviceId @ 0x140729E28 (PipIommuRetrieveDeviceId.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiIommuAllocateExtension(__int64 a1, ULONG_PTR a2, _QWORD *a3)
{
  _QWORD *Pool2; // rbx
  int DeviceId; // edi
  char v7; // cl
  char v8; // al
  char v9; // cl

  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
  {
    DeviceId = -1073741670;
    goto LABEL_14;
  }
  DeviceId = PipIommuRetrieveDeviceId(a2);
  if ( DeviceId < 0 )
    goto LABEL_13;
  if ( !*(_QWORD *)(a2 + 56) )
  {
    DeviceId = -1073741637;
    goto LABEL_13;
  }
  DeviceId = guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 8));
  if ( DeviceId < 0 )
  {
LABEL_13:
    PiIommuFreeExtension(Pool2);
    Pool2 = 0LL;
    goto LABEL_14;
  }
  v7 = Pool2[2] & 0xF7;
  *((_BYTE *)Pool2 + 16) = v7;
  *((_BYTE *)Pool2 + 16) = v7 & 0xFB;
  v7 &= 0xDBu;
  v8 = *((_BYTE *)Pool2 + 17);
  *((_BYTE *)Pool2 + 16) = v7;
  *((_BYTE *)Pool2 + 16) = v7 & 0xEF;
  *((_BYTE *)Pool2 + 17) = v8 & 0xFD;
  if ( (v7 & 0x24) != 0 )
    PnpTraceIommuDeviceProperties();
  DeviceId = guard_dispatch_icall_no_overrides(*Pool2);
  if ( DeviceId < 0 )
  {
    DeviceId = 0;
  }
  else
  {
    v9 = Pool2[2] & 0xBF;
    *((_BYTE *)Pool2 + 16) = v9;
    *((_BYTE *)Pool2 + 16) = v9 & 0x7F;
  }
  *((_DWORD *)Pool2 + 5) = 2;
LABEL_14:
  *a3 = Pool2;
  return (unsigned int)DeviceId;
}
