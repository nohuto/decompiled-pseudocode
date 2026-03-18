/*
 * XREFs of ?_EnableDisableEventsAndCollection@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x14007DCD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxWmiIrpHandler::_EnableDisableEventsAndCollection(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        unsigned __int64 Provider,
        FxWmiInstance *Instance)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int Status; // edi
  unsigned __int8 v8; // r8
  unsigned int v9; // esi
  unsigned __int8 v10; // r8
  unsigned int v11; // eax
  int (__fastcall *v12)(WDFWMIPROVIDER__ *, _WDF_WMI_PROVIDER_CONTROL, unsigned __int8); // r9
  unsigned __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // eax

  Irp->IoStatus.Information = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart < 0x30 )
  {
    Status = -1073741811;
    goto $Done_38;
  }
  if ( CurrentStackLocation->MinorFunction == 4 )
  {
    v10 = 1;
  }
  else
  {
    if ( CurrentStackLocation->MinorFunction != 5 )
    {
      if ( CurrentStackLocation->MinorFunction == 6 )
      {
        v8 = 1;
      }
      else
      {
        if ( CurrentStackLocation->MinorFunction != 7 )
        {
          Status = Irp->IoStatus.Status;
          goto $Done_38;
        }
        v8 = 0;
      }
      v9 = 2;
      *(_BYTE *)(Provider + 209) = v8;
      goto LABEL_15;
    }
    v10 = 0;
  }
  v11 = *(_DWORD *)(Provider + 196);
  v9 = 1;
  *(_BYTE *)(Provider + 208) = v10;
  if ( (v11 & 4) != 0 )
    *(_QWORD *)(Provider + 184) = *(_QWORD *)&CurrentStackLocation->Parameters.CreatePipe.Parameters->CompletionMode;
LABEL_15:
  v12 = *(int (__fastcall **)(WDFWMIPROVIDER__ *, _WDF_WMI_PROVIDER_CONTROL, unsigned __int8))(Provider + 200);
  if ( !v12 )
  {
    Status = 0;
    goto $Done_38;
  }
  v13 = Provider ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !*(_WORD *)(Provider + 10) )
    v13 = 0LL;
  v14 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD))v12)(v13, v9);
  Status = v14;
  if ( v14 == 259 )
  {
    Status = -1073741823;
  }
  else if ( v14 >= 0 )
  {
    goto $Done_38;
  }
  if ( v9 == 1 )
  {
    v15 = *(_DWORD *)(Provider + 196);
    *(_BYTE *)(Provider + 208) = 0;
    if ( (v15 & 4) != 0 )
      *(_QWORD *)(Provider + 184) = 0LL;
  }
  else
  {
    *(_BYTE *)(Provider + 209) = 0;
  }
$Done_38:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return Status;
}
