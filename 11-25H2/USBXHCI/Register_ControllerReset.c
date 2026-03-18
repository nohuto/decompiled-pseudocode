/*
 * XREFs of Register_ControllerReset @ 0x14002D87C
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1400382B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x140038BB0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_InternalReset @ 0x140040D9C (Controller_InternalReset.c)
 *     Register_PrepareHardware @ 0x14007DAC8 (Register_PrepareHardware.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1400086E0 (Controller_IsControllerAccessible.c)
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x14000B858 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     Register_SetClearSSICPortUnused @ 0x14002DC58 (Register_SetClearSSICPortUnused.c)
 *     Etw_StartDeviceFail @ 0x14002DDDC (Etw_StartDeviceFail.c)
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x14002DF00 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     Register_DisableComplianceModeCapability @ 0x14002E0AC (Register_DisableComplianceModeCapability.c)
 *     Register_WaitForControllerReady @ 0x14002E138 (Register_WaitForControllerReady.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Register_ControllerReset(__int64 a1, char a2)
{
  __int64 *v4; // rsi
  unsigned int *v5; // r15
  int v6; // eax
  int v7; // edx
  unsigned int v8; // edi
  __int64 *v9; // rdi
  int v10; // ebp
  unsigned int v11; // r14d
  unsigned int v12; // edi
  __int64 v13; // rdx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // r9d
  void (*v20)(void); // rax
  char v21[8]; // [rsp+28h] [rbp-40h]
  char v22; // [rsp+28h] [rbp-40h]
  __int64 v23; // [rsp+30h] [rbp-38h]
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF

  Interval.QuadPart = 0LL;
  v4 = (__int64 *)(a1 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(*v4 + 72), 4, 6, 60, (__int64)&WPP_bcf525b88d61376d20a3150a437b01de_Traceguids);
  if ( !Controller_IsControllerAccessible(*v4) )
    return 0;
  v5 = *(unsigned int **)(a1 + 32);
  v6 = Register_WaitForControllerReady(a1);
  v8 = v6;
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v8;
    v18 = *v4;
    v19 = 61;
    v22 = v6;
    goto LABEL_34;
  }
  v9 = v4;
  if ( a2 )
  {
LABEL_6:
    Register_SetClearSSICPortUnused(a1, 0LL);
    XilRegister_WriteUlong(a1, v5, 2);
    v10 = 0;
    v11 = 1;
    if ( (*(_QWORD *)(*v4 + 744) & 2) != 0 )
    {
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      v10 = 1;
      v4 = v9;
      v11 = 2;
    }
    v12 = v10;
    while ( (XilRegister_ReadUlong(a1, v5) & 2) != 0 )
    {
      if ( v10 == 100 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = 1;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v13,
            6,
            65,
            (__int64)&WPP_bcf525b88d61376d20a3150a437b01de_Traceguids,
            v12);
        }
        Etw_StartDeviceFail(*(_QWORD *)(a1 + 8), v13, 3LL);
        return (unsigned int)-1073741823;
      }
      Interval.QuadPart = -10000LL * v11;
      KeDelayExecutionThread(0, 0, &Interval);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v23) = v11;
        *(_DWORD *)v21 = v10;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*v4 + 72),
          4u,
          6u,
          0x42u,
          (__int64)&WPP_bcf525b88d61376d20a3150a437b01de_Traceguids,
          *(_QWORD *)v21,
          v23);
      }
      v12 += v11;
      v17 = 2 * v11;
      ++v10;
      if ( v11 == 16 )
        v17 = 16;
      v11 = v17;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v13,
        6,
        63,
        (__int64)&WPP_bcf525b88d61376d20a3150a437b01de_Traceguids,
        v12);
    }
    if ( v12 > 0x32 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v13,
        6,
        64,
        (__int64)&WPP_bcf525b88d61376d20a3150a437b01de_Traceguids,
        v12);
    }
    v15 = Register_WaitForControllerReady(a1);
    v8 = v15;
    if ( v15 >= 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 752LL) & 0x10) != 0 )
      {
        Interval.QuadPart = -1000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 744LL) & 0x2000000LL) != 0 )
      {
        Interval.QuadPart = -1800000LL;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL);
      if ( v16 )
      {
        v20 = *(void (**)(void))(v16 + 32);
        if ( v20 )
          v20();
      }
      Register_RestoreRyzenFeatureBitsPostReset(a1);
      Register_DisableComplianceModeCapability(a1);
      return v8;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v8;
    v18 = *(_QWORD *)(a1 + 8);
    v19 = 67;
    v22 = v15;
LABEL_34:
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v18 + 72), v7, 6, v19, (__int64)&WPP_bcf525b88d61376d20a3150a437b01de_Traceguids, v22);
    return v8;
  }
  if ( (XilRegister_ReadUlong(a1, v5 + 1) & 1) != 0 )
  {
    v9 = (__int64 *)(a1 + 8);
    goto LABEL_6;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(*v4 + 72), 2, 6, 62, (__int64)&WPP_bcf525b88d61376d20a3150a437b01de_Traceguids);
  return (unsigned int)-1073741823;
}
