/*
 * XREFs of ndisCpuHotAddHandler @ 0x1400A2B00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1400527F0 (WPP_RECORDER_SF_D_ea_1400527F0.c)
 *     WPP_RECORDER_SF_Ld @ 0x140058010 (WPP_RECORDER_SF_Ld.c)
 *     ?ndisPeriodicReceivesAddCpu@@YAXK@Z @ 0x1400C1F40 (-ndisPeriodicReceivesAddCpu@@YAXK@Z.c)
 *     ?ndisStackExpansionAddProcessor@@YAXK@Z @ 0x1400C49BC (-ndisStackExpansionAddProcessor@@YAXK@Z.c)
 *     ?ndisDmaAddCpuNotify@@YAJEKJ@Z @ 0x1400D9F28 (-ndisDmaAddCpuNotify@@YAJEKJ@Z.c)
 */

void __fastcall ndisCpuHotAddHandler(
        PVOID CallbackContext,
        PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT ChangeContext,
        PNTSTATUS OperationStatus)
{
  KE_PROCESSOR_CHANGE_NOTIFY_STATE State; // ecx
  PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT v5; // rdi
  __int32 v6; // ecx
  unsigned int v7; // edx
  unsigned __int8 v8; // cl
  int v9; // r8d
  int v10; // eax
  int v11; // edx
  NTSTATUS v12; // edi

  State = ChangeContext->State;
  v5 = ChangeContext;
  if ( ChangeContext->State )
  {
    v6 = State - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(ChangeContext) = 4;
          WPP_RECORDER_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)ChangeContext,
            1,
            14,
            (struct _GUID *)&WPP_a7d85ed11c3633f8d00c12d0f3cbd601_Traceguids,
            *OperationStatus);
        }
        ndisDmaAddCpuNotify(v6, (unsigned int)ChangeContext, (int)OperationStatus);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(ChangeContext) = 4;
        WPP_RECORDER_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)ChangeContext,
          1,
          13,
          (struct _GUID *)&WPP_a7d85ed11c3633f8d00c12d0f3cbd601_Traceguids,
          *OperationStatus);
      }
      ndisPeriodicReceivesAddCpu(v5->NtNumber);
      ndisDmaAddCpuNotify(v8, v7, v9);
      ndisStackExpansionAddProcessor((PVOID)v5->NtNumber);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ld(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xBu,
        (struct _GUID *)&WPP_a7d85ed11c3633f8d00c12d0f3cbd601_Traceguids,
        *OperationStatus,
        ChangeContext->NtNumber);
    v10 = ndisDmaAddCpuNotify(State, (unsigned int)ChangeContext, (int)OperationStatus);
    v12 = v10;
    if ( v10 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 3;
        WPP_RECORDER_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v11,
          1,
          12,
          (struct _GUID *)&WPP_a7d85ed11c3633f8d00c12d0f3cbd601_Traceguids,
          v10);
      }
      *OperationStatus = v12;
    }
  }
}
