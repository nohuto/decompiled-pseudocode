/*
 * XREFs of ?CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z @ 0x14005EE18
 * Callers:
 *     ?_ExecuteMethod@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x14005E030 (-_ExecuteMethod@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 *     ?_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x14005E680 (-_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 *     ?_QuerySingleInstance@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x14007C590 (-_QuerySingleInstance@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@.c)
 *     ?_ChangeSingleInstance@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x14008DF10 (-_ChangeSingleInstance@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@.c)
 *     ?_ChangeSingleItem@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x14008DFD0 (-_ChangeSingleItem@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_dd @ 0x1400076CC (WPP_IFR_SF_dd.c)
 *     ?CompleteWmiQuerySingleInstanceRequest@FxWmiIrpHandler@@AEAAXPEAU_IRP@@JK@Z @ 0x14007DF0C (-CompleteWmiQuerySingleInstanceRequest@FxWmiIrpHandler@@AEAAXPEAU_IRP@@JK@Z.c)
 *     ?CompleteWmiExecuteMethodRequest@FxWmiIrpHandler@@AEAAXPEAU_IRP@@JK@Z @ 0x14008441C (-CompleteWmiExecuteMethodRequest@FxWmiIrpHandler@@AEAAXPEAU_IRP@@JK@Z.c)
 */

__int64 __fastcall FxWmiIrpHandler::CompleteWmiRequest(
        FxWmiIrpHandler *this,
        _IRP *Irp,
        int Status,
        unsigned int BufferUsed)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r10
  int v5; // ebx
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rdx
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = Status;
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 0u:
      Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
      v8 = BufferUsed + Parameters[1].CompletionMode;
      if ( Status >= 0 )
      {
        if ( v8 <= CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
        {
          *(_QWORD *)&Parameters->InboundQuota = MEMORY[0xFFFFF78000000014];
          Parameters->NamedPipeType = v8;
          goto LABEL_5;
        }
      }
      else if ( Status != -1073741789 )
      {
        v8 = 0;
        goto LABEL_5;
      }
      Parameters[1].CompletionMode = v8;
      Parameters->NamedPipeType = 56;
      v8 = 56;
      Parameters[1].ReadMode = 32;
      v5 = 0;
LABEL_5:
      Irp->IoStatus.Information = v8;
      goto LABEL_6;
    case 1u:
      FxWmiIrpHandler::CompleteWmiQuerySingleInstanceRequest(this, Irp, Status, BufferUsed);
      goto LABEL_7;
    case 2u:
    case 3u:
      if ( Status == -1073741789 )
      {
        m_Globals = this->m_Globals;
        v5 = -1073741113;
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_dd(m_Globals, 5u, 0xCu, 0x18u, WPP_FxWmiIrpHandler_cpp_Traceguids, -1073741789, -1073741113);
      }
      break;
    case 9u:
      FxWmiIrpHandler::CompleteWmiExecuteMethodRequest(this, Irp, Status, BufferUsed);
      goto LABEL_7;
  }
  Irp->IoStatus.Information = 0LL;
LABEL_6:
  Irp->IoStatus.Status = v5;
LABEL_7:
  v9 = Irp->IoStatus.Status;
  IofCompleteRequest(Irp, 0);
  return v9;
}
