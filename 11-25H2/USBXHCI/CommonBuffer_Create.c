/*
 * XREFs of CommonBuffer_Create @ 0x1400826C8
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x140079ED0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x14002CE68 (WPP_RECORDER_SF_q.c)
 *     Controller_IsSecureDevice @ 0x140034338 (Controller_IsSecureDevice.c)
 *     XilCoreCommonBuffer_Create @ 0x140057018 (XilCoreCommonBuffer_Create.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     Counter_CreateCommonBufferInstance @ 0x14007F04C (Counter_CreateCommonBufferInstance.c)
 */

__int64 __fastcall CommonBuffer_Create(__int64 a1, char a2, __int64 *a3)
{
  int v6; // eax
  int v7; // edx
  unsigned int v8; // edi
  int v9; // edx
  __int64 v10; // rbx
  int v11; // eax
  int v12; // edx
  __int128 v14; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+40h] [rbp-40h]
  __int128 v16; // [rsp+48h] [rbp-38h] BYREF
  __int128 v17; // [rsp+58h] [rbp-28h]
  __int128 v18; // [rsp+68h] [rbp-18h]
  void *v19; // [rsp+78h] [rbp-8h]
  __int64 v20; // [rsp+B0h] [rbp+30h] BYREF

  v20 = 0LL;
  DWORD1(v16) = 0;
  *(_QWORD *)&v17 = 0LL;
  *((_QWORD *)&v18 + 1) = 0LL;
  v14 = 0LL;
  LODWORD(v15) = 0;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v16) = -1;
    else
      LODWORD(v16) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v16) = 56;
  }
  *((_QWORD *)&v17 + 1) = 0x100000001LL;
  v19 = off_14006B100;
  *(_QWORD *)&v18 = *(_QWORD *)(a1 + 8);
  *((_QWORD *)&v16 + 1) = CommonBuffer_WdfEvtCleanupCallback;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64 *))(WdfFunctions_01033 + 1656))(
         WdfDriverGlobals,
         &v16,
         &v20);
  v8 = v6;
  if ( v6 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            v20,
            off_14006B100);
    *(_QWORD *)v10 = a1;
    *(_BYTE *)(v10 + 80) = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_q(*(_QWORD *)(a1 + 72), v9, 8, 11, (__int64)&WPP_ab4b74589bd330f105f5531a87063139_Traceguids, v20);
    }
    KeInitializeSpinLock((PKSPIN_LOCK)(v10 + 48));
    *(_QWORD *)(v10 + 64) = v10 + 56;
    *(_QWORD *)(v10 + 56) = v10 + 56;
    XilCoreCommonBuffer_Create(a1, v10, v10 + 88);
    KeInitializeEvent((PRKEVENT)(v10 + 24), NotificationEvent, 1u);
    if ( !Controller_IsSecureDevice(a1) )
    {
      v19 = 0LL;
      v16 = 0LL;
      v17 = 0LL;
      v18 = 0LL;
      if ( WdfClientVersionHigherThanFramework )
        LODWORD(v16) = (unsigned int)WdfStructureCount <= 0x26 ? -1 : *(_DWORD *)(WdfStructures + 304);
      else
        LODWORD(v16) = 56;
      *(_QWORD *)&v18 = v20;
      *((_QWORD *)&v17 + 1) = 0x100000001LL;
      v15 = 0LL;
      v14 = 0LL;
      if ( WdfClientVersionHigherThanFramework )
        LODWORD(v14) = (unsigned int)WdfStructureCount <= 0x43 ? -1 : *(_DWORD *)(WdfStructures + 536);
      else
        LODWORD(v14) = 24;
      *((_QWORD *)&v14 + 1) = CommonBuffer_RebalanceResourcesWorkItem;
      LOBYTE(v15) = 1;
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 3032))(
              WdfDriverGlobals,
              &v14,
              &v16,
              v10 + 72);
      v8 = v11;
      if ( v11 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 72),
          v12,
          8,
          12,
          (__int64)&WPP_ab4b74589bd330f105f5531a87063139_Traceguids,
          v11);
      }
    }
    *(_QWORD *)(v10 + 8) = v10 + 288;
    Counter_CreateCommonBufferInstance((PPCW_INSTANCE *)v10);
    *a3 = v10;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), v7, 8, 10, (__int64)&WPP_ab4b74589bd330f105f5531a87063139_Traceguids, v6);
  }
  return v8;
}
