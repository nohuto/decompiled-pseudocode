/*
 * XREFs of PiIommuAllocateExtension @ 0x140733CE4
 * Callers:
 *     PipDmgInitializeIommuExtension @ 0x14072FD98 (PipDmgInitializeIommuExtension.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PnpTraceIommuDeviceProperties @ 0x140730960 (PnpTraceIommuDeviceProperties.c)
 *     PiIommuFreeExtension @ 0x140733EB8 (PiIommuFreeExtension.c)
 *     PipIommuRetrieveDeviceId @ 0x140733FE8 (PipIommuRetrieveDeviceId.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiIommuAllocateExtension(__int64 a1, ULONG_PTR a2, _QWORD *a3)
{
  _QWORD *Pool2; // rbx
  int DeviceId; // edi
  char v7; // cl
  char v8; // al
  char v9; // cl
  char v10; // al
  char v11; // dl
  char v12; // cl
  char v14; // [rsp+60h] [rbp+40h] BYREF
  int v15; // [rsp+68h] [rbp+48h] BYREF

  v15 = 0;
  v14 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x18uLL, 0x64706E50u);
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
  DeviceId = guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 8), &v15);
  if ( DeviceId < 0 )
  {
LABEL_13:
    PiIommuFreeExtension(Pool2);
    Pool2 = 0LL;
    goto LABEL_14;
  }
  v7 = Pool2[2] & 0xF7 | (8 * ((v15 & 2) != 0));
  *((_BYTE *)Pool2 + 16) = v7;
  v8 = v7 & 0xFB | (4 * (v15 & 1));
  *((_BYTE *)Pool2 + 16) = v8;
  v9 = v8 & 0xDF | (32 * ((v15 & 8) != 0));
  v10 = *((_BYTE *)Pool2 + 17);
  *((_BYTE *)Pool2 + 16) = v9;
  v11 = v9 & 0xEF | (16 * ((v15 & 4) != 0));
  *((_BYTE *)Pool2 + 16) = v11;
  *((_BYTE *)Pool2 + 17) = v10 & 0xFD | (2 * ((v15 & 0x10) != 0));
  if ( (v11 & 0x24) != 0 )
    PnpTraceIommuDeviceProperties();
  DeviceId = guard_dispatch_icall_no_overrides(*Pool2, &v14);
  if ( DeviceId < 0 )
  {
    DeviceId = 0;
  }
  else
  {
    v12 = Pool2[2] & 0xBF | (32 * (v14 & 2));
    *((_BYTE *)Pool2 + 16) = v12;
    *((_BYTE *)Pool2 + 16) = (v14 << 7) | v12 & 0x7F;
  }
  *((_DWORD *)Pool2 + 5) = 2;
LABEL_14:
  *a3 = Pool2;
  return (unsigned int)DeviceId;
}
