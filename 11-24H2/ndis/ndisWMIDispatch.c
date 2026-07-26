/*
 * XREFs of ndisWMIDispatch @ 0x14002EAB0
 * Callers:
 *     ?ndisWMIIrpDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14002EA90 (-ndisWMIIrpDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x14002E290 (-ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_IN.c)
 *     ndisWmiRegister @ 0x14002F110 (ndisWmiRegister.c)
 *     ndisWmiEnableEvents @ 0x14002F440 (ndisWmiEnableEvents.c)
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x14002F700 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x14002FEF0 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z @ 0x1400309A0 (-ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z.c)
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x140030A20 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall ndisWMIDispatch(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2, _IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  unsigned int v4; // r14d
  struct _NDIS_MINIPORT_BLOCK *v6; // rsi
  struct _GUID *FileName; // r15
  unsigned int LowPart; // r13d
  struct tagWNODE_ALL_DATA *Parameters; // r12
  int MinorFunction; // edx
  int v12; // eax
  int v13; // ebx
  unsigned __int64 v14; // rax
  NTSTATUS result; // eax
  _IO_STACK_LOCATION *v16; // rcx
  __int64 (__fastcall *v17)(__int64, _IRP *); // rax
  int v18; // edx
  int v19; // r9d
  int v20; // edx
  unsigned int Flags; // eax
  char v22[8]; // [rsp+30h] [rbp-48h]
  unsigned int v23; // [rsp+88h] [rbp+10h] BYREF
  struct _NDIS_GUID *v24; // [rsp+90h] [rbp+18h] BYREF

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  v6 = a2;
  FileName = (struct _GUID *)CurrentStackLocation->Parameters.QueryDirectory.FileName;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Parameters = (struct tagWNODE_ALL_DATA *)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v23 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      18,
      73,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)v6,
      (char)a3);
  }
  if ( v6->Header.Type == 17 )
  {
    if ( CurrentStackLocation->Parameters.WMI.ProviderId == a1 )
    {
      MinorFunction = CurrentStackLocation->MinorFunction;
      switch ( CurrentStackLocation->MinorFunction )
      {
        case 0u:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(MinorFunction) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              MinorFunction,
              18,
              75,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)v6);
          }
          v12 = ndisWmiQueryAllData(v6, 0LL, FileName, Parameters, LowPart, &v23);
          goto LABEL_9;
        case 1u:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(MinorFunction) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              MinorFunction,
              18,
              76,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)v6);
          }
          v12 = ndisWmiQuerySingleInstance(v6, 0LL, (struct tagWNODE_SINGLE_INSTANCE *)Parameters, LowPart, &v23);
          goto LABEL_9;
        case 2u:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(MinorFunction) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              MinorFunction,
              18,
              77,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)v6);
          }
          v12 = ndisWmiChangeSingleInstance(v6, 0LL, (struct tagWNODE_SINGLE_INSTANCE *const)Parameters);
          goto LABEL_9;
        case 3u:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_30;
          v19 = 78;
          goto LABEL_29;
        case 4u:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(MinorFunction) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              MinorFunction,
              18,
              80,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)v6);
          }
          v12 = ndisWmiEnableEvents((char)v6);
          goto LABEL_9;
        case 5u:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(MinorFunction) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              MinorFunction,
              18,
              81,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)v6);
          }
          v24 = 0LL;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(MinorFunction) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              MinorFunction,
              18,
              70,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)v6);
          }
          ndisWmiGetGuid(&v24, v6, FileName, 0);
          if ( v24 )
          {
            Flags = v24->Flags;
            if ( (Flags & 2) != 0 )
            {
              v13 = 0;
              v24->Flags = Flags & 0x7FFFFFFF;
            }
            else
            {
              v13 = -1073741808;
            }
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v20) = 2;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v20,
                18,
                71,
                (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
                (char)v6);
            }
            v13 = -1073741811;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            *(_DWORD *)v22 = v13;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x12u,
              0x48u,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)v6,
              *(_QWORD *)v22);
          }
          goto LABEL_10;
        case 6u:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_30;
          v19 = 82;
          goto LABEL_29;
        case 7u:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_30;
          v19 = 83;
LABEL_29:
          LOBYTE(MinorFunction) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            MinorFunction,
            18,
            v19,
            (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
            (char)v6);
LABEL_30:
          v13 = -1073741637;
          a3->IoStatus.Status = -1073741637;
          goto LABEL_59;
        case 8u:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(MinorFunction) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              MinorFunction,
              18,
              74,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)v6);
          }
          v12 = ndisWmiRegister((char)v6, (__int64)&v23);
          goto LABEL_9;
        case 9u:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(MinorFunction) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              MinorFunction,
              18,
              79,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)v6);
          }
          v12 = ndisWmiExecuteMethod(v6, 0LL, (struct tagWNODE_METHOD_ITEM *)Parameters, LowPart, &v23);
LABEL_9:
          v13 = v12;
LABEL_10:
          a3->IoStatus.Status = v13;
          if ( v13 == -1073741789 )
          {
            v14 = v23;
          }
          else
          {
            if ( v13 >= 0 )
              v4 = v23;
LABEL_59:
            v14 = v4;
          }
          a3->IoStatus.Information = v14;
          IofCompleteRequest(a3, 0);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            *(_DWORD *)v22 = v13;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x12u,
              0x55u,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)v6,
              *(_QWORD *)v22);
          }
          result = v13;
          break;
        default:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            *(_DWORD *)v22 = CurrentStackLocation->MinorFunction;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x12u,
              0x54u,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)v6,
              *(_QWORD *)v22);
          }
          v13 = -1073741808;
          a3->IoStatus.Status = -1073741808;
          goto LABEL_59;
      }
    }
    else
    {
      ++a3->CurrentLocation;
      ++a3->Tail.Overlay.CurrentStackLocation;
      return IofCallDriver(v6->NextDeviceObject, a3);
    }
    return result;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      32,
      (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
      a1,
      (char)a3);
  }
  v16 = a3->Tail.Overlay.CurrentStackLocation;
  if ( v6->Header.Type == 17 )
  {
    if ( v16->MajorFunction != 18 )
      v4 = -1073741637;
    goto LABEL_65;
  }
  if ( v6->Header.Type != 9
    || (v17 = (__int64 (__fastcall *)(__int64, _IRP *))*((_QWORD *)&v6->Reserved28 + v16->MajorFunction)) == 0LL )
  {
    v4 = -1073741637;
LABEL_65:
    a3->IoStatus.Status = v4;
    IofCompleteRequest(a3, 2);
    goto LABEL_21;
  }
  v4 = v17(a1, a3);
LABEL_21:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v18,
      11,
      33,
      (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
      a1,
      (char)a3);
  }
  return v4;
}
