/*
 * XREFs of ndisWMIDispatch @ 0x14002BA20
 * Callers:
 *     ?ndisWMIIrpDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14002BA00 (-ndisWMIIrpDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x14002B200 (-ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_IN.c)
 *     ndisWmiRegister @ 0x14002C080 (ndisWmiRegister.c)
 *     ndisWmiEnableEvents @ 0x14002C3B0 (ndisWmiEnableEvents.c)
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x14002C670 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x14002CA50 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z @ 0x14002D480 (-ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z.c)
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x14002D500 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall ndisWMIDispatch(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2, _IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  unsigned int v4; // r14d
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
  int v18; // r9d
  int v19; // edx
  unsigned int Flags; // eax
  char v21[8]; // [rsp+30h] [rbp-48h]
  unsigned int v22; // [rsp+88h] [rbp+10h] BYREF
  struct _NDIS_GUID *v23; // [rsp+90h] [rbp+18h] BYREF

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  FileName = (struct _GUID *)CurrentStackLocation->Parameters.QueryDirectory.FileName;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Parameters = (struct tagWNODE_ALL_DATA *)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v22 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x49u,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a2,
      a3);
  if ( a2->Header.Type == 17 )
  {
    if ( CurrentStackLocation->Parameters.WMI.ProviderId == a1 )
    {
      MinorFunction = CurrentStackLocation->MinorFunction;
      switch ( CurrentStackLocation->MinorFunction )
      {
        case 0u:
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(MinorFunction) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              MinorFunction,
              18,
              75,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)a2);
          }
          v12 = ndisWmiQueryAllData(a2, 0LL, FileName, Parameters, LowPart, &v22);
          goto LABEL_9;
        case 1u:
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(MinorFunction) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              MinorFunction,
              18,
              76,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)a2);
          }
          v12 = ndisWmiQuerySingleInstance(a2, 0LL, (struct tagWNODE_SINGLE_INSTANCE *)Parameters, LowPart, &v22);
          goto LABEL_9;
        case 2u:
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(MinorFunction) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              MinorFunction,
              18,
              77,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)a2);
          }
          v12 = ndisWmiChangeSingleInstance(a2, 0LL, (struct tagWNODE_SINGLE_INSTANCE *const)Parameters);
          goto LABEL_9;
        case 3u:
          if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_30;
          v18 = 78;
          goto LABEL_29;
        case 4u:
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(MinorFunction) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              MinorFunction,
              18,
              80,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)a2);
          }
          v12 = ndisWmiEnableEvents((char)a2);
          goto LABEL_9;
        case 5u:
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(MinorFunction) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              MinorFunction,
              18,
              81,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)a2);
          }
          v23 = 0LL;
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(MinorFunction) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              MinorFunction,
              18,
              70,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)a2);
          }
          ndisWmiGetGuid(&v23, a2, FileName, 0);
          if ( v23 )
          {
            Flags = v23->Flags;
            if ( (Flags & 2) != 0 )
            {
              v13 = 0;
              v23->Flags = Flags & 0x7FFFFFFF;
            }
            else
            {
              v13 = -1073741808;
            }
          }
          else
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v19) = 2;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v19,
                18,
                71,
                (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
                (char)a2);
            }
            v13 = -1073741811;
          }
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            *(_DWORD *)v21 = v13;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x12u,
              0x48u,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)a2,
              *(_QWORD *)v21);
          }
          goto LABEL_10;
        case 6u:
          if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_30;
          v18 = 82;
          goto LABEL_29;
        case 7u:
          if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_30;
          v18 = 83;
LABEL_29:
          LOBYTE(MinorFunction) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            MinorFunction,
            18,
            v18,
            (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
            (char)a2);
LABEL_30:
          v13 = -1073741637;
          a3->IoStatus.Status = -1073741637;
          goto LABEL_59;
        case 8u:
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(MinorFunction) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              MinorFunction,
              18,
              74,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)a2);
          }
          v12 = ndisWmiRegister((char)a2, (__int64)&v22);
          goto LABEL_9;
        case 9u:
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(MinorFunction) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              MinorFunction,
              18,
              79,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)a2);
          }
          v12 = ndisWmiExecuteMethod(a2, 0LL, (struct tagWNODE_METHOD_ITEM *)Parameters, LowPart, &v22);
LABEL_9:
          v13 = v12;
LABEL_10:
          a3->IoStatus.Status = v13;
          if ( v13 == -1073741789 )
          {
            v14 = v22;
          }
          else
          {
            if ( v13 >= 0 )
              v4 = v22;
LABEL_59:
            v14 = v4;
          }
          a3->IoStatus.Information = v14;
          IofCompleteRequest(a3, 0);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            *(_DWORD *)v21 = v13;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x12u,
              0x55u,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)a2,
              *(_QWORD *)v21);
          }
          result = v13;
          break;
        default:
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            *(_DWORD *)v21 = CurrentStackLocation->MinorFunction;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x12u,
              0x54u,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              (char)a2,
              *(_QWORD *)v21);
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
      return IofCallDriver(a2->NextDeviceObject, a3);
    }
    return result;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Bu,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      a1,
      a3);
  v16 = a3->Tail.Overlay.CurrentStackLocation;
  if ( a2->Header.Type == 17 )
  {
    if ( v16->MajorFunction != 18 )
      v4 = -1073741637;
    goto LABEL_65;
  }
  if ( a2->Header.Type != 9
    || (v17 = (__int64 (__fastcall *)(__int64, _IRP *))*((_QWORD *)&a2->Reserved28 + v16->MajorFunction)) == 0LL )
  {
    v4 = -1073741637;
LABEL_65:
    a3->IoStatus.Status = v4;
    IofCompleteRequest(a3, 2);
    goto LABEL_21;
  }
  v4 = v17(a1, a3);
LABEL_21:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Cu,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      a1,
      a3);
  return v4;
}
