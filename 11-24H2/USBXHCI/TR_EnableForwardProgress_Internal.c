/*
 * XREFs of TR_EnableForwardProgress_Internal @ 0x14004B0C8
 * Callers:
 *     Endpoint_UcxEvtEndpointEnableForwardProgress @ 0x140047CD0 (Endpoint_UcxEvtEndpointEnableForwardProgress.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_DDd @ 0x140049388 (WPP_RECORDER_SF_DDd.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TR_EnableForwardProgress_Internal(_QWORD *a1, ULONG a2)
{
  int v4; // edi
  struct _MDL *Mdl; // rsi
  __int64 v6; // rdx
  struct _MDL *v7; // rcx
  __int64 v9; // [rsp+40h] [rbp-38h] BYREF
  int v10; // [rsp+48h] [rbp-30h]
  int v11; // [rsp+4Ch] [rbp-2Ch]
  __int64 (__fastcall *v12)(); // [rsp+50h] [rbp-28h]
  __int128 v13; // [rsp+58h] [rbp-20h]

  v4 = (*(__int64 (**)(void))(a1[4] + 48LL))();
  if ( v4 >= 0 )
  {
    Mdl = IoAllocateMdl(0LL, a2, 0, 0, 0LL);
    if ( Mdl )
    {
      v11 = 0;
      v13 = 0LL;
      if ( WdfClientVersionHigherThanFramework )
      {
        if ( (unsigned int)WdfStructureCount <= 0x22 )
          LODWORD(v9) = -1;
        else
          LODWORD(v9) = *(_DWORD *)(WdfStructures + 272);
      }
      else
      {
        LODWORD(v9) = 40;
      }
      v6 = a1[9];
      v12 = TR_WdfEvtIoExamineIrpForForwardProgress;
      HIDWORD(v9) = 1;
      v10 = 2;
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01033 + 3120))(
             WdfDriverGlobals,
             v6,
             &v9);
      if ( v4 >= 0 )
      {
        v7 = (struct _MDL *)a1[15];
        if ( v7 )
          IoFreeMdl(v7);
        a1[15] = Mdl;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ddL(
            *(_QWORD *)(a1[5] + 72LL),
            4u,
            0xEu,
            0x15u,
            (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
            *(unsigned __int8 *)(a1[6] + 143LL),
            *(_DWORD *)(a1[7] + 152LL),
            a2,
            v9);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDd(
            *(_QWORD *)(a1[5] + 72LL),
            2u,
            0xEu,
            0x14u,
            (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
            *(unsigned __int8 *)(a1[6] + 143LL),
            *(_DWORD *)(a1[7] + 152LL),
            v4,
            v9);
        IoFreeMdl(Mdl);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(a1[5] + 72LL),
          2u,
          0xEu,
          0x13u,
          (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
          *(unsigned __int8 *)(a1[6] + 143LL),
          *(_DWORD *)(a1[7] + 152LL));
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}
