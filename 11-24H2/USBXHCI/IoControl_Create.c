/*
 * XREFs of IoControl_Create @ 0x14007CC9C
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x140079620 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x14002C6F8 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall IoControl_Create(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ebx
  int v9; // edx
  _QWORD *v10; // rdi
  __int128 v12; // [rsp+30h] [rbp-59h] BYREF
  __int128 v13; // [rsp+40h] [rbp-49h]
  __int128 v14; // [rsp+50h] [rbp-39h]
  void *v15; // [rsp+60h] [rbp-29h]
  _QWORD v16[12]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v17; // [rsp+108h] [rbp+7Fh] BYREF

  v17 = 0LL;
  DWORD1(v12) = 0;
  memset(v16, 0, sizeof(v16));
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x21 )
      LODWORD(v16[0]) = -1;
    else
      LODWORD(v16[0]) = *(_DWORD *)(WdfStructures + 264);
  }
  else
  {
    LODWORD(v16[0]) = 96;
  }
  LODWORD(v16[1]) = 2;
  v16[5] = IoControl_WdfEvtIoDeviceControl;
  BYTE5(v16[1]) = 1;
  HIDWORD(v16[0]) = 1;
  v15 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v12) = -1;
    else
      LODWORD(v12) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v12) = 56;
  }
  v15 = off_14006AF70;
  *((_QWORD *)&v13 + 1) = 0x100000001LL;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int128 *, __int64 *))(WdfFunctions_01033
                                                                                                + 1216))(
         WdfDriverGlobals,
         a1,
         v16,
         &v12,
         &v17);
  v8 = v6;
  if ( v6 >= 0 )
  {
    v10 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                      WdfDriverGlobals,
                      v17,
                      off_14006AF70);
    *v10 = v17;
    v10[1] = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_q(*(_QWORD *)(a2 + 72), v9, 5, 11, (__int64)&WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids, v17);
    }
    *a3 = v10;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 72), v7, 5, 10, (__int64)&WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids, v6);
  }
  return v8;
}
