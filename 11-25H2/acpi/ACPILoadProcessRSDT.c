/*
 * XREFs of ACPILoadProcessRSDT @ 0x1400C9308
 * Callers:
 *     ACPIInitialize @ 0x1400C4008 (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140017C78 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1400232C0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     ACPIPccInitialize @ 0x14009F858 (ACPIPccInitialize.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1400B6E24 (ACPIRegReadAMLRegistryEntry.c)
 *     ACPILoadAddDynamicDataBlockTable @ 0x1400C742C (ACPILoadAddDynamicDataBlockTable.c)
 *     ACPILoadProcessFADT @ 0x1400C7770 (ACPILoadProcessFADT.c)
 *     ACPIRegDumpAcpiTables @ 0x1400C7898 (ACPIRegDumpAcpiTables.c)
 */

__int64 ACPILoadProcessRSDT()
{
  char v0; // r12
  char v1; // r13
  int v2; // ebx
  unsigned int *v3; // rax
  int v4; // edx
  unsigned int *v5; // r15
  unsigned int v6; // r14d
  __int64 i; // rbp
  _OWORD *v8; // rsi
  int v9; // eax
  _OWORD *Pool2; // rax
  int v11; // edx
  int v12; // eax
  int v13; // r9d
  _DWORD *v14; // rax
  PVOID v15; // rsi
  __int64 v17; // [rsp+28h] [rbp-40h]
  PVOID v18; // [rsp+70h] [rbp+8h] BYREF
  PVOID P; // [rsp+78h] [rbp+10h] BYREF

  v0 = 0;
  v1 = 0;
  LOBYTE(v18) = 0;
  v2 = 0;
  v3 = (unsigned int *)(*(__int64 (**)(void))(PmHalDispatchTable + 112))();
  v5 = v3;
  if ( !v3 || (v6 = *v3) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1072431079;
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      6,
      18,
      (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
LABEL_58:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        6,
        26,
        (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
    }
    return (unsigned int)-1072431079;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x13u,
      (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
      *v3);
  for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
  {
    v8 = *(_OWORD **)&v5[2 * i + 2];
    v9 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 == 1414742611 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          6u,
          0x14u,
          (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
          *(_QWORD *)&v5[2 * i + 2]);
      continue;
    }
    if ( v9 != 1346584902 && v9 != 1413763923 && v9 != 1413763920 && v9 != 1128878145 && v9 != 1413694288 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = *(_DWORD *)v8;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          6u,
          0x15u,
          (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
          v17);
      }
      continue;
    }
    Pool2 = (_OWORD *)ExAllocatePool2(64LL, 36LL, 1953522497LL);
    P = Pool2;
    if ( !Pool2 )
      goto LABEL_43;
    *Pool2 = *v8;
    Pool2[1] = v8[1];
    *((_DWORD *)Pool2 + 8) = *((_DWORD *)v8 + 8);
    *((_DWORD *)Pool2 + 1) = 36;
    if ( ACPIRegReadAMLRegistryEntry((const void **)&P, v11) )
      v8 = P;
    else
      ExFreePoolWithTag(P, 0);
    v11 = *(_DWORD *)v8 - 1128878145;
    if ( *(_DWORD *)v8 == 1128878145 )
    {
      if ( !v1 )
      {
        v1 = 1;
        *((_QWORD *)AcpiInformation + 4) = v8;
        goto LABEL_41;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 23;
        goto LABEL_40;
      }
    }
    else
    {
      v11 = *(_DWORD *)v8 - 1346584902;
      if ( *(_DWORD *)v8 == 1346584902 )
      {
        if ( !v0 )
        {
          v0 = 1;
          *((_QWORD *)AcpiInformation + 1) = v8;
          v12 = ACPILoadProcessFADT();
          goto LABEL_27;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v13 = 22;
          goto LABEL_40;
        }
      }
      else
      {
        v11 = *(_DWORD *)v8 - 1413694288;
        if ( *(_DWORD *)v8 == 1413694288 )
        {
          if ( !(_BYTE)v18 )
          {
            LOBYTE(v18) = 1;
            v12 = ACPIPccInitialize((__int64)v8);
            goto LABEL_27;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v13 = 24;
LABEL_40:
            LOBYTE(v11) = 4;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v11,
              6,
              v13,
              (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
          }
        }
        else
        {
          v11 = *(_DWORD *)v8 - 1413763920;
          if ( *(_DWORD *)v8 == 1413763920 || *(_DWORD *)v8 == 1413763923 )
          {
            v12 = ACPILoadAddDynamicDataBlockTable((__int64)v8, 0);
LABEL_27:
            v2 = v12;
          }
        }
      }
    }
LABEL_41:
    if ( v2 < 0 )
      goto LABEL_54;
  }
  if ( g_SimulatorCallbackObject || AcpiLoadSimulatorTable )
  {
    v14 = (_DWORD *)ExAllocatePool2(64LL, 36LL, 1953522497LL);
    v18 = v14;
    if ( !v14 )
    {
LABEL_43:
      v2 = -1073741670;
      goto LABEL_54;
    }
    *v14 = 1413763923;
    v14[1] = 36;
    *((_WORD *)v14 + 4) = 1;
    v14[6] = 1;
    v14[8] = 1;
    *(_DWORD *)((char *)v14 + 10) = 1413894989;
    *((_QWORD *)v14 + 2) = 0x7274616C756D6973LL;
    v14[7] = 1413894989;
    if ( ACPIRegReadAMLRegistryEntry((const void **)&v18, 77) )
    {
      v15 = v18;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          6u,
          0x19u,
          (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
          v18);
      v2 = ACPILoadAddDynamicDataBlockTable((__int64)v15, 0);
      if ( v2 < 0 )
      {
        ExFreePoolWithTag(v15, 0);
        goto LABEL_54;
      }
    }
    else
    {
      ExFreePoolWithTag(v18, 0);
    }
  }
  ACPIRegDumpAcpiTables();
LABEL_54:
  if ( !v0 )
    goto LABEL_58;
  return (unsigned int)v2;
}
