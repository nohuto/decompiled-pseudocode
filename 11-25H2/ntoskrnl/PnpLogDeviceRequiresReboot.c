/*
 * XREFs of PnpLogDeviceRequiresReboot @ 0x14071727C
 * Callers:
 *     PiProcessSetDeviceProblem @ 0x1407180C8 (PiProcessSetDeviceProblem.c)
 *     PipSetDevNodeProblem @ 0x140831BCC (PipSetDevNodeProblem.c)
 * Callees:
 *     McTemplateK0zqdi_EtwWriteTransfer @ 0x1405A2180 (McTemplateK0zqdi_EtwWriteTransfer.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 */

void __fastcall PnpLogDeviceRequiresReboot(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // [rsp+70h] [rbp+8h] BYREF
  int v8; // [rsp+78h] [rbp+10h] BYREF
  __int64 v9; // [rsp+80h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v2 = 0;
  v8 = 0;
  v7 = 0;
  v9 = 0LL;
  if ( v1 && (byte_140EEFA6C & 8) != 0 )
  {
    if ( (int)PnpGetObjectProperty(
                PiPnpRtlCtx,
                v1,
                1,
                0,
                0LL,
                (__int64)&DEVPKEY_Device_RebootRequiredReason,
                (__int64)&v7,
                (__int64)&v9,
                8,
                (__int64)&v8,
                0) >= 0
      && v7 == 9
      && v8 == 8 )
    {
      v2 = v9;
    }
    else
    {
      v9 = 0LL;
    }
    if ( (byte_140EEFA6C & 8) != 0 )
      McTemplateK0zqdi_EtwWriteTransfer(
        v5,
        v4,
        v6,
        *(const wchar_t **)(a1 + 48),
        *(_DWORD *)(a1 + 404),
        *(_DWORD *)(a1 + 408),
        v2);
  }
}
