/*
 * XREFs of IoWMICompleteRequest @ 0x140A377CC
 * Callers:
 *     IoWMISystemControl @ 0x140A373A4 (IoWMISystemControl.c)
 *     WmipQueryWmiDataBlock @ 0x140A37640 (WmipQueryWmiDataBlock.c)
 * Callees:
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 */

__int64 __fastcall IoWMICompleteRequest(__int64 a1, __int64 a2, IRP *a3, int a4, int a5)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r10
  unsigned int v6; // ebx
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // rdx
  unsigned int CompletionMode; // r11d
  unsigned int v10; // r8d
  __int64 MaximumInstances; // rdi
  bool v12; // zf
  unsigned int *p_OutboundQuota; // r10
  int v15; // edx
  __int64 v16; // rcx
  int v17; // r11d

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v6 = a4;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( CurrentStackLocation->MinorFunction )
  {
    if ( CurrentStackLocation->MinorFunction == 1 )
    {
      v10 = Parameters[1].InboundQuota + a5;
      if ( a4 >= 0 )
      {
        Parameters->NamedPipeType = v10;
        *(_QWORD *)&Parameters->InboundQuota = MEMORY[0xFFFFF78000000014];
        goto LABEL_9;
      }
    }
    else
    {
      if ( CurrentStackLocation->MinorFunction != 9 )
      {
LABEL_8:
        v10 = 0;
        goto LABEL_9;
      }
      v10 = a5 + Parameters[1].OutboundQuota;
      if ( a4 >= 0 )
      {
        Parameters->NamedPipeType = v10;
        *(_QWORD *)&Parameters->InboundQuota = MEMORY[0xFFFFF78000000014];
        Parameters[1].DefaultTimeout.LowPart = a5;
        goto LABEL_9;
      }
    }
    v12 = a4 == -1073741789;
LABEL_4:
    if ( v12 )
      goto LABEL_11;
    goto LABEL_8;
  }
  CompletionMode = Parameters[1].CompletionMode;
  v10 = CompletionMode + a5;
  MaximumInstances = Parameters[1].MaximumInstances;
  if ( a4 < 0 )
  {
    v12 = a4 == -1073741789;
    goto LABEL_4;
  }
  if ( v10 > CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
LABEL_11:
    Parameters[1].CompletionMode = v10;
    Parameters->NamedPipeType = 56;
    v10 = 56;
    Parameters[1].ReadMode = 32;
    v6 = 0;
    goto LABEL_9;
  }
  p_OutboundQuota = &Parameters[1].OutboundQuota;
  *(_QWORD *)&Parameters->InboundQuota = MEMORY[0xFFFFF78000000014];
  Parameters->NamedPipeType = v10;
  v15 = MaximumInstances;
  if ( (_DWORD)MaximumInstances )
  {
    do
    {
      --v15;
      p_OutboundQuota[2 * v15 + 1] = p_OutboundQuota[v15];
    }
    while ( v15 );
    v16 = MaximumInstances;
    do
    {
      *p_OutboundQuota = CompletionMode;
      v17 = p_OutboundQuota[1] + CompletionMode + 7;
      p_OutboundQuota += 2;
      CompletionMode = v17 & 0xFFFFFFF8;
      --v16;
    }
    while ( v16 );
  }
LABEL_9:
  a3->IoStatus.Information = v10;
  a3->IoStatus.Status = v6;
  IofCompleteRequest(a3, 0);
  return v6;
}
