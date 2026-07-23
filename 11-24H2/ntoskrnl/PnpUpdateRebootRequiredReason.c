/*
 * XREFs of PnpUpdateRebootRequiredReason @ 0x140721558
 * Callers:
 *     PnpReallocateResources @ 0x140732604 (PnpReallocateResources.c)
 *     PipProcessRestartPhase2 @ 0x140734598 (PipProcessRestartPhase2.c)
 *     PipProcessStartPhase2 @ 0x1408AFCBC (PipProcessStartPhase2.c)
 *     PiDevCfgProcessDevice @ 0x1409C9598 (PiDevCfgProcessDevice.c)
 * Callees:
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall PnpUpdateRebootRequiredReason(int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  _QWORD v8[2]; // [rsp+60h] [rbp-10h] BYREF
  int v9; // [rsp+A8h] [rbp+38h] BYREF
  int v10; // [rsp+ACh] [rbp+3Ch]
  int v11; // [rsp+B0h] [rbp+40h] BYREF
  char v12; // [rsp+B8h] [rbp+48h] BYREF

  v10 = HIDWORD(a2);
  v3 = 0;
  v12 = 0;
  v11 = 0;
  v9 = 0;
  v8[0] = 0LL;
  if ( (int)PnpGetObjectProperty(
              PiPnpRtlCtx,
              a1,
              1,
              0,
              0LL,
              (__int64)&DEVPKEY_Device_IsRebootRequired,
              (__int64)&v9,
              (__int64)&v12,
              1,
              (__int64)&v11,
              0) >= 0
    && v9 == 17
    && v11 == 1
    && v12 == -1
    && ((int)PnpGetObjectProperty(
               PiPnpRtlCtx,
               a1,
               1,
               0,
               0LL,
               (__int64)DEVPKEY_Device_RebootRequiredReason,
               (__int64)&v9,
               (__int64)v8,
               8,
               (__int64)&v11,
               0) < 0
     || v9 != 9
     || v11 != 8) )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = v8[0];
  }
  v8[0] = a3 | v6;
  if ( a3 | v6 )
    return (unsigned int)PnpSetObjectProperty(
                           PiPnpRtlCtx,
                           a1,
                           1,
                           0LL,
                           (__int64)DEVPKEY_Device_RebootRequiredReason,
                           9,
                           (__int64)v8,
                           8,
                           0);
  else
    PnpSetObjectProperty(PiPnpRtlCtx, a1, 1, 0LL, (__int64)DEVPKEY_Device_RebootRequiredReason, 0, 0LL, 0, 0);
  return v3;
}
