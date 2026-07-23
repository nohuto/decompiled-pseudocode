/*
 * XREFs of PiAuditDeviceStart @ 0x14097B680
 * Callers:
 *     PipProcessStartPhase3 @ 0x14097B0A4 (PipProcessStartPhase3.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     PiAuditDeviceOperation @ 0x140A68944 (PiAuditDeviceOperation.c)
 */

__int64 __fastcall PiAuditDeviceStart(__int64 a1)
{
  WCHAR *v1; // rdx
  __int64 result; // rax
  __int64 v4; // r8
  wchar_t v5; // [rsp+70h] [rbp+8h] BYREF
  int v6; // [rsp+78h] [rbp+10h] BYREF
  int v7; // [rsp+80h] [rbp+18h] BYREF

  v1 = *(WCHAR **)(a1 + 8);
  v6 = 0;
  LOBYTE(v5) = 0;
  v7 = 1;
  result = PnpGetObjectProperty(
             *(_QWORD **)&PiPnpRtlCtx,
             v1,
             1u,
             0LL,
             0LL,
             (__int64)&DEVPKEY_Device_InLocalMachineContainer,
             &v6,
             &v5,
             1u,
             (__int64)&v7,
             0);
  if ( (int)result >= 0 && v6 == 17 && v7 == 1 && (_BYTE)v5 != 0xFF )
  {
    LOBYTE(v4) = 1;
    return PiAuditDeviceOperation(a1, 0LL, v4);
  }
  return result;
}
