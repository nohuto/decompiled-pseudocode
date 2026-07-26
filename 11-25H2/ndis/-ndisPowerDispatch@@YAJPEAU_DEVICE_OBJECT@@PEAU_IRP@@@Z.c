/*
 * XREFs of ?ndisPowerDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1400558D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisQueuePowerIrp@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140055810 (-ndisQueuePowerIrp@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055C40 (-ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14017FF00 (-ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPowerDispatch(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  void *DeviceExtension; // rbx
  char v3; // si
  struct _IRP *v4; // rdi
  _DEVICE_OBJECT *v5; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  int MinorFunction; // ecx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // r8d
  unsigned int Power; // eax
  int v13; // edx
  unsigned int v14; // esi
  _IO_STACK_LOCATION *v16; // rax
  _IO_STACK_LOCATION *v17; // rax
  _IO_STACK_LOCATION *v18; // rax
  char v19[8]; // [rsp+30h] [rbp-28h]

  DeviceExtension = a1->DeviceExtension;
  v3 = (char)a1;
  v4 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x6Cu,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)DeviceExtension,
      a2);
  if ( *(_BYTE *)DeviceExtension == 17 )
  {
    v5 = (_DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 480);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        14,
        110,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)DeviceExtension);
    }
    CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
    MinorFunction = CurrentStackLocation->MinorFunction;
    if ( MinorFunction == 2 )
    {
      if ( !KeGetCurrentIrql() )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v13,
            14,
            114,
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            (char)DeviceExtension);
        }
        Power = ndisSetPower(v4, CurrentStackLocation, (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
        goto LABEL_18;
      }
      goto LABEL_25;
    }
    v8 = CurrentStackLocation->MinorFunction;
    if ( CurrentStackLocation->MinorFunction )
    {
      v9 = MinorFunction - 1;
      if ( MinorFunction == 1 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v9,
            14,
            111,
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            (char)DeviceExtension);
        }
        v18 = v4->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v18[-1].MajorFunction = *(_OWORD *)&v18->MajorFunction;
        *(_OWORD *)&v18[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v18->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)&v18[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v18->Parameters.ReadWriteConfig.Length;
        v18[-1].FileObject = v18->FileObject;
        v18[-1].Control = 0;
        v14 = IoSynchronousCallDriver(v5, v4);
        v4->IoStatus.Status = v14;
        IofCompleteRequest(v4, 0);
      }
      else
      {
        if ( MinorFunction == 3 )
        {
          if ( !KeGetCurrentIrql() )
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v10) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v10,
                14,
                113,
                (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
                (char)DeviceExtension);
            }
            Power = ndisQueryPower(v4, CurrentStackLocation, (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
LABEL_18:
            v14 = Power;
            goto LABEL_19;
          }
LABEL_25:
          ndisQueuePowerIrp((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, v4, v11);
          v14 = 259;
          goto LABEL_19;
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v19 = CurrentStackLocation->MinorFunction;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0x73u,
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            (char)DeviceExtension,
            *(_QWORD *)v19);
        }
        ++v4->CurrentLocation;
        ++v4->Tail.Overlay.CurrentStackLocation;
        v14 = IofCallDriver(v5, v4);
      }
    }
    else
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v8,
          14,
          112,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)DeviceExtension);
      }
      CurrentStackLocation->Parameters.Read.Length = *((_DWORD *)DeviceExtension + 333);
      v16 = v4->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v16[-1].MajorFunction = *(_OWORD *)&v16->MajorFunction;
      *(_OWORD *)&v16[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v16->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&v16[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v16->Parameters.ReadWriteConfig.Length;
      v16[-1].FileObject = v16->FileObject;
      v16[-1].Control = 0;
      v17 = v4->Tail.Overlay.CurrentStackLocation;
      v17[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisWaitWakeIoCompletion;
      v17[-1].Context = DeviceExtension;
      v17[-1].Control = -32;
      v14 = IofCallDriver(v5, v4);
    }
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x6Du,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        v3,
        v4);
    v14 = -1073741808;
    v4->IoStatus.Status = -1073741808;
    IofCompleteRequest(v4, 0);
  }
LABEL_19:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v19 = v14;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x74u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)DeviceExtension,
      *(_QWORD *)v19);
  }
  return v14;
}
