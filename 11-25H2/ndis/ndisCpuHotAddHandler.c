/*
 * XREFs of ndisCpuHotAddHandler @ 0x1400AACB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x14006D370 (WPP_RECORDER_SF_D_ea_14006D370.c)
 *     WPP_RECORDER_SF_Ld @ 0x140072CB0 (WPP_RECORDER_SF_Ld.c)
 *     ?ndisPeriodicReceivesAddCpu@@YAXK@Z @ 0x1400C9170 (-ndisPeriodicReceivesAddCpu@@YAXK@Z.c)
 *     ?ndisStackExpansionAddProcessor@@YAXK@Z @ 0x1400CBAE4 (-ndisStackExpansionAddProcessor@@YAXK@Z.c)
 *     ?ndisDmaAddCpuNotify@@YAJEKJ@Z @ 0x1400E1124 (-ndisDmaAddCpuNotify@@YAJEKJ@Z.c)
 */

void __fastcall ndisCpuHotAddHandler(
        PVOID CallbackContext,
        PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT ChangeContext,
        PNTSTATUS OperationStatus)
{
  KE_PROCESSOR_CHANGE_NOTIFY_STATE State; // ecx
  __int32 v6; // ecx
  unsigned int v7; // edx
  unsigned __int8 v8; // cl
  int v9; // r8d
  int v10; // eax
  NTSTATUS v11; // edi
  __int64 v12; // [rsp+28h] [rbp-20h]

  State = ChangeContext->State;
  if ( ChangeContext->State )
  {
    v6 = State - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            1u,
            0xEu,
            (struct _GUID *)&WPP_a7d85ed11c3633f8d00c12d0f3cbd601_Traceguids,
            *OperationStatus);
        ndisDmaAddCpuNotify(v6, (unsigned int)ChangeContext, (int)OperationStatus);
      }
    }
    else
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0xDu,
          (struct _GUID *)&WPP_a7d85ed11c3633f8d00c12d0f3cbd601_Traceguids,
          *OperationStatus);
      ndisPeriodicReceivesAddCpu(ChangeContext->NtNumber);
      ndisDmaAddCpuNotify(v8, v7, v9);
      ndisStackExpansionAddProcessor((PVOID)ChangeContext->NtNumber);
    }
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ld(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xBu,
        (struct _GUID *)&WPP_a7d85ed11c3633f8d00c12d0f3cbd601_Traceguids,
        *OperationStatus,
        ChangeContext->NtNumber);
    v10 = ndisDmaAddCpuNotify(State, (unsigned int)ChangeContext, (int)OperationStatus);
    v11 = v10;
    if ( v10 < 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v12) = v10;
        WPP_RECORDER_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          1u,
          0xCu,
          (struct _GUID *)&WPP_a7d85ed11c3633f8d00c12d0f3cbd601_Traceguids,
          v12);
      }
      *OperationStatus = v11;
    }
  }
}
