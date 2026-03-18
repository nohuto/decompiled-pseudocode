/*
 * XREFs of RootHub_Create @ 0x14007DE10
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x140079910 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qq @ 0x14003749C (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

__int64 __fastcall RootHub_Create(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 v5; // rdx
  int v6; // edx
  int v7; // edi
  __int64 *v8; // rbx
  _QWORD v10[6]; // [rsp+48h] [rbp-C0h] BYREF
  void *v11; // [rsp+78h] [rbp-90h]
  _QWORD v12[20]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v13; // [rsp+148h] [rbp+40h] BYREF

  v13 = 0LL;
  HIDWORD(v10[0]) = 0;
  memset(v12, 0, sizeof(v12));
  v12[1] = RootHub_UcxEvtClearHubFeature;
  v12[0] = 0x1000000A0LL;
  v12[2] = RootHub_UcxEvtClearPortFeature;
  v12[3] = RootHub_UcxEvtGetHubStatus;
  v12[4] = RootHub_UcxEvtGetPortStatus;
  v12[5] = RootHub_UcxEvtSetHubFeature;
  v12[6] = RootHub_UcxEvtSetPortFeature;
  v12[7] = RootHub_UcxEvtGetPortErrorCount;
  v12[9] = RootHub_UcxEvtInterruptTransfer;
  v12[10] = RootHub_UcxEvtGetInfo;
  v12[11] = RootHub_UcxEvtGet20PortInfo;
  v12[12] = RootHub_UcxEvtGet30PortInfo;
  memset(&v12[13], 0, 56);
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v12[13]) = -1;
    else
      LODWORD(v12[13]) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v12[13]) = 56;
  }
  v12[19] = off_14006AE88;
  v12[16] = 0x100000001LL;
  v11 = 0LL;
  memset(v10, 0, sizeof(v10));
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v10[0]) = -1;
    else
      LODWORD(v10[0]) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v10[0]) = 56;
  }
  v5 = *(_QWORD *)(a2 + 8);
  v11 = off_14006B0B0;
  v10[3] = 0x100000001LL;
  v7 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _QWORD *, __int64 *))qword_14006BDA8)(
         UcxDriverGlobals,
         v5,
         v12,
         v10,
         &v13);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 72), v6, 11, 11, (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids, v7);
    }
  }
  else
  {
    v8 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                      WdfDriverGlobals,
                      v13,
                      off_14006B0B0);
    *v8 = v13;
    v8[1] = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *(_QWORD *)(a2 + 72),
        4u,
        0xBu,
        0xAu,
        (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
        v13,
        v8);
    *a3 = v8;
  }
  return (unsigned int)v7;
}
