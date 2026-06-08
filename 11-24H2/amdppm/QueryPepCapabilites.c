/*
 * XREFs of QueryPepCapabilites @ 0x14003CDF8
 * Callers:
 *     ProcLibDeviceStart @ 0x14002EDF4 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 *     PepNotifyProcessorLpiStates @ 0x140038E78 (PepNotifyProcessorLpiStates.c)
 *     PepQueryVetoList @ 0x140039A84 (PepQueryVetoList.c)
 *     PepNotifyQueryCapabilities @ 0x14003CADC (PepNotifyQueryCapabilities.c)
 *     ProcLibTraceQueryCapabilities @ 0x14003EEFC (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1400409DC (ProcLibTraceGetPlatformIdleStates.c)
 */

__int64 __fastcall QueryPepCapabilites(__int64 a1)
{
  __int64 v2; // rdx
  int VetoList; // r14d
  void (__fastcall *v4)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  const signed __int64 *v5; // rsi
  __int64 v6; // rcx
  int v7; // edx
  _QWORD *v8; // r12
  _DWORD *v9; // rdi
  int v10; // edx
  int v11; // ecx
  int v13; // [rsp+30h] [rbp-10h] BYREF
  _DWORD v14[3]; // [rsp+34h] [rbp-Ch] BYREF
  char v15; // [rsp+80h] [rbp+40h] BYREF
  char v16; // [rsp+88h] [rbp+48h] BYREF
  char v17; // [rsp+90h] [rbp+50h] BYREF
  int v18; // [rsp+98h] [rbp+58h] BYREF

  v2 = *(_QWORD *)(a1 + 208);
  VetoList = 0;
  v13 = 0;
  v4 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v14[0] = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v4(WdfDriverGlobals, v2, 0LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1400155D8,
    0LL);
  v5 = (const signed __int64 *)(a1 + 280);
  if ( !PepPlatformStatesQueried )
  {
    if ( (*v5 & 0x200000200LL) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 1120);
      v18 = 0;
      if ( (int)PoFxProcessorNotification(v6, 16LL, &v18) >= 0 )
        dword_140015C6C = v18;
      ProcLibTraceGetPlatformIdleStates(0LL);
    }
    PepPlatformStatesQueried = 1;
    VetoList = PepQueryVetoList(a1);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1400155D8);
  if ( VetoList >= 0 )
  {
    v8 = (_QWORD *)(a1 + 280);
    if ( _bittest64(v5, 0x2Cu) )
    {
      PepNotifyProcessorLpiStates(a1);
      v8 = (_QWORD *)(a1 + 280);
    }
    VetoList = PepNotifyQueryCapabilities(a1, v14, &v17, &v13, &v16, &v15);
    if ( VetoList >= 0 )
    {
      v9 = (_DWORD *)(a1 + 1128);
      *(_BYTE *)(a1 + 1138) = v15;
      *(_BYTE *)(a1 + 1137) = v16;
      *(_DWORD *)(a1 + 1128) = v13;
      *(_DWORD *)(a1 + 1132) = v14[0];
      *(_BYTE *)(a1 + 1136) = v17;
      ProcLibTraceQueryCapabilities(a1, 0LL);
      v11 = *(_DWORD *)(a1 + 1132);
      if ( (*v5 & 0x100000000000LL) != 0 )
      {
        if ( v11 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = 2;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v10,
              1,
              15,
              (__int64)&WPP_1e2c66cd4e403eb679a1b1edce07a74a_Traceguids);
            v9 = (_DWORD *)(a1 + 1128);
          }
          *(_DWORD *)(a1 + 1132) = 0;
        }
      }
      else if ( !v11 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 4;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v10,
            2,
            16,
            (__int64)&WPP_1e2c66cd4e403eb679a1b1edce07a74a_Traceguids);
        }
        *v8 &= 0xFFFFFFFDFFFFFDFFuLL;
      }
      if ( !*(_BYTE *)(a1 + 1137) && !*v9 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 4;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v10,
            2,
            17,
            (__int64)&WPP_1e2c66cd4e403eb679a1b1edce07a74a_Traceguids);
        }
        *(_QWORD *)(a1 + 280) &= ~0x1000000000uLL;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 3;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      3,
      14,
      (__int64)&WPP_1e2c66cd4e403eb679a1b1edce07a74a_Traceguids,
      VetoList);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)VetoList;
}
