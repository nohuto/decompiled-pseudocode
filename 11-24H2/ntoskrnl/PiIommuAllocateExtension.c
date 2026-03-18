/*
 * XREFs of PiIommuAllocateExtension @ 0x140735DB4
 * Callers:
 *     PipDmgInitializeIommuExtension @ 0x140731D88 (PipDmgInitializeIommuExtension.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpTraceIommuDeviceProperties @ 0x140732950 (PnpTraceIommuDeviceProperties.c)
 *     PiIommuFreeExtension @ 0x140735F88 (PiIommuFreeExtension.c)
 *     PipIommuRetrieveDeviceId @ 0x1407360B8 (PipIommuRetrieveDeviceId.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiIommuAllocateExtension(__int64 a1, ULONG_PTR a2, _QWORD *a3)
{
  _QWORD *Pool2; // rbx
  int DeviceId; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // cl
  char v12; // al
  char v13; // cl
  char v14; // al
  char v15; // dl
  char v16; // cl
  char v18; // [rsp+60h] [rbp+40h] BYREF
  int v19; // [rsp+68h] [rbp+48h] BYREF

  v19 = 0;
  v18 = 0;
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
  DeviceId = guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 8), &v19, v7, v8);
  if ( DeviceId < 0 )
  {
LABEL_13:
    PiIommuFreeExtension(Pool2);
    Pool2 = 0LL;
    goto LABEL_14;
  }
  LOBYTE(v9) = 1;
  v11 = Pool2[2] & 0xF7 | (8 * ((v19 & 2) != 0));
  *((_BYTE *)Pool2 + 16) = v11;
  v12 = v11 & 0xFB | (4 * (v19 & 1));
  *((_BYTE *)Pool2 + 16) = v12;
  v13 = v12 & 0xDF | (32 * ((v19 & 8) != 0));
  v14 = *((_BYTE *)Pool2 + 17);
  *((_BYTE *)Pool2 + 16) = v13;
  v15 = v13 & 0xEF | (16 * ((v19 & 4) != 0));
  *((_BYTE *)Pool2 + 16) = v15;
  *((_BYTE *)Pool2 + 17) = v14 & 0xFD | (2 * ((v19 & 0x10) != 0));
  if ( (v15 & 0x24) != 0 )
    PnpTraceIommuDeviceProperties();
  DeviceId = guard_dispatch_icall_no_overrides(*Pool2, &v18, v9, v10);
  if ( DeviceId < 0 )
  {
    DeviceId = 0;
  }
  else
  {
    v16 = Pool2[2] & 0xBF | (32 * (v18 & 2));
    *((_BYTE *)Pool2 + 16) = v16;
    *((_BYTE *)Pool2 + 16) = (v18 << 7) | v16 & 0x7F;
  }
  *((_DWORD *)Pool2 + 5) = 2;
LABEL_14:
  *a3 = Pool2;
  return (unsigned int)DeviceId;
}
