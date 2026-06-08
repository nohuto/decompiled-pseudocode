/*
 * XREFs of InitAcpiCpc @ 0x1400266B8
 * Callers:
 *     ProcLibDeviceStart @ 0x14002EDF4 (ProcLibDeviceStart.c)
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x140001BA0 (WriteGenAddrMaybeHiddenEx.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1400025A4 (ReadGenAddrMaybeHiddenEx.c)
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     CpcRegisterIsSupportedEx @ 0x140006644 (CpcRegisterIsSupportedEx.c)
 *     EnableCpcResourcePriorityRegisters @ 0x1400067A4 (EnableCpcResourcePriorityRegisters.c)
 *     GetCpcRegisterDefinitionTable @ 0x140006890 (GetCpcRegisterDefinitionTable.c)
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 *     CpcInitRegisterAddresses @ 0x140026484 (CpcInitRegisterAddresses.c)
 *     ExecutePccCommand @ 0x140027E24 (ExecutePccCommand.c)
 *     StartPccCommand @ 0x140028138 (StartPccCommand.c)
 *     AcpiEval_CPC @ 0x14002874C (AcpiEval_CPC.c)
 *     Display_CPC @ 0x14002CCA0 (Display_CPC.c)
 *     ValidateAcpiCPC @ 0x1400302D4 (ValidateAcpiCPC.c)
 */

__int64 __fastcall InitAcpiCpc(__int64 a1)
{
  _QWORD *v1; // r14
  __int64 v2; // rdx
  void (__fastcall *v4)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  int v5; // eax
  int inited; // ebx
  _QWORD *v7; // rdx
  int v8; // r9d
  __int64 v9; // rsi
  int v10; // edx
  int v11; // r9d
  unsigned int i; // ebp
  unsigned int *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // xmm1_8
  char v16; // bp
  __int64 v17; // rcx
  unsigned int *v18; // rdx
  int v19; // eax
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  char v23; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v24; // [rsp+68h] [rbp+10h] BYREF
  __int64 v25; // [rsp+70h] [rbp+18h] BYREF

  v1 = (_QWORD *)(a1 + 208);
  v2 = *(_QWORD *)(a1 + 208);
  v25 = 0LL;
  v4 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v24 = 0;
  v4(WdfDriverGlobals, v2, 0LL);
  v5 = AcpiEval_CPC(a1, a1 + 592);
  inited = v5;
  if ( v5 >= 0 )
  {
    v9 = *(_QWORD *)(a1 + 592);
    inited = ValidateAcpiCPC(v9, *(_QWORD *)(a1 + 64));
    if ( inited < 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x40000u);
      v7 = v1;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v8 = 12;
LABEL_8:
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v7,
        3,
        v8,
        (__int64)&WPP_3811e805137834c013381b794b6128cc_Traceguids,
        inited);
      goto LABEL_5;
    }
    Display_CPC(v9);
    GetCpcRegisterDefinitionTable(v9, &v25, &v24);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400155D8,
      0LL);
    v23 = 0;
    inited = CpcInitRegisterAddresses(a1, v9, v25, v24, &v23);
    if ( inited >= 0 )
    {
      if ( *(_QWORD *)(v9 + 536) )
      {
        for ( i = 0; ; ++i )
        {
          v13 = *(unsigned int **)(v9 + 536);
          if ( i >= *v13 )
            break;
          inited = CpcInitRegisterAddresses(
                     a1,
                     (__int64)&v13[26 * i + 2],
                     (__int64)&CpcResourcePrioritiesRegisterTable,
                     4u,
                     &v23);
          if ( inited < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_46;
            v11 = 14;
            goto LABEL_15;
          }
        }
      }
      if ( !CpcRegisterIsSupportedEx(v9 + 440) || *(_BYTE *)v14 == 126 && !*(_QWORD *)(v9 + 444) )
      {
        v15 = *(_QWORD *)(v9 + 48);
        *(_OWORD *)v14 = *(_OWORD *)(v9 + 32);
        *(_QWORD *)(v14 + 16) = v15;
      }
      v16 = v23;
      if ( v23 )
      {
        inited = StartPccCommand(*(_QWORD *)(a1 + 256));
        if ( inited < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_46;
          v11 = 15;
          goto LABEL_15;
        }
      }
      if ( CpcRegisterIsSupportedEx(v9 + 344) )
        WriteGenAddrMaybeHiddenEx(a1, v17, 1LL);
      v18 = *(unsigned int **)(v9 + 536);
      if ( v18 )
        EnableCpcResourcePriorityRegisters(a1, v18);
      if ( !v16 )
        goto LABEL_41;
      v19 = ExecutePccCommand(*(_QWORD *)(a1 + 256), 0LL);
      inited = 0;
      if ( v19 != -1073741435 )
        inited = v19;
      if ( inited >= 0 )
      {
LABEL_41:
        *(_QWORD *)(a1 + 384) = ReadGenAddrMaybeHiddenEx(a1, v9 + 8);
        *(_QWORD *)(a1 + 392) = ReadGenAddrMaybeHiddenEx(a1, v9 + 32);
        *(_QWORD *)(a1 + 400) = ReadGenAddrMaybeHiddenEx(a1, v9 + 56);
        if ( CpcRegisterIsSupportedEx(v9 + 488) )
          *(_QWORD *)(a1 + 416) = ReadGenAddrMaybeHiddenEx(a1, v20);
        v21 = *(_QWORD *)(a1 + 392);
        if ( *(_QWORD *)(a1 + 400) > v21 )
          *(_QWORD *)(a1 + 400) = v21;
        *(_QWORD *)(a1 + 408) = ReadGenAddrMaybeHiddenEx(a1, v9 + 80);
        goto LABEL_46;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = 16;
        goto LABEL_15;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 13;
LABEL_15:
      LOBYTE(v10) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        3,
        v11,
        (__int64)&WPP_3811e805137834c013381b794b6128cc_Traceguids,
        inited);
    }
LABEL_46:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1400155D8);
    v7 = (_QWORD *)(a1 + 208);
    goto LABEL_47;
  }
  if ( v5 != -1073741772 )
  {
    v7 = v1;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_47;
    v8 = 11;
    goto LABEL_8;
  }
  v7 = v1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v7,
      2,
      10,
      (__int64)&WPP_3811e805137834c013381b794b6128cc_Traceguids);
LABEL_5:
    v7 = v1;
  }
LABEL_47:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, *v7);
  return (unsigned int)inited;
}
