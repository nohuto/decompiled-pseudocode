/*
 * XREFs of ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x140172D30
 * Callers:
 *     NdisEnumerateFilterModules @ 0x14002DDA0 (NdisEnumerateFilterModules.c)
 *     ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x14002E290 (-ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_IN.c)
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x14002F700 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x14002FEF0 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x140030A20 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 *     ?ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009C708 (-ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisHandleBindNotification @ 0x140138F3C (ndisHandleBindNotification.c)
 *     ndisHandleLegacyBindIoctl @ 0x1401390A8 (ndisHandleLegacyBindIoctl.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z @ 0x140032700 (-ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z.c)
 *     WPP_RECORDER_SF_Z @ 0x1400511B0 (WPP_RECORDER_SF_Z.c)
 */

void __fastcall ndisReferenceMiniportByName(
        const struct _UNICODE_STRING *a1,
        struct _NDIS_MINIPORT_BLOCK **a2,
        char a3,
        unsigned __int8 a4)
{
  unsigned int Number; // ebp
  KIRQL v9; // al
  struct _NDIS_M_DRIVER_BLOCK *v10; // rdi
  KIRQL v11; // r13
  struct _NDIS_MINIPORT_BLOCK *i; // rbx
  int v13; // eax
  _NDIS_BIND_PATHS *BindPaths; // rdx
  int v15; // edx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  Number = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xAu,
      (struct _GUID *)&WPP_3046af50312d39676cde585a7c547f92_Traceguids,
      &a1->Length);
  *a2 = 0LL;
  DestinationString.Length = a1->Length;
  DestinationString.MaximumLength = DestinationString.Length + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePool2(
                                          66LL,
                                          (unsigned __int16)(DestinationString.Length + 2),
                                          1953711182LL);
  if ( DestinationString.Buffer )
  {
    RtlUpcaseUnicodeString(&DestinationString, a1, 0);
    v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v10 = ndisMiniDriverList;
    v11 = v9;
    if ( !ndisMiniDriverList )
      goto LABEL_18;
    while ( 1 )
    {
      KeAcquireSpinLockAtDpcLevel(&v10->Ref.SpinLock);
      for ( i = v10->MiniportQueue; ; i = i->NextMiniport )
      {
        if ( !i )
          goto LABEL_17;
        v13 = i->PnPFlags & 0x2000000;
        if ( a3 )
          break;
        if ( !v13 )
        {
          BindPaths = i->BindPaths;
          if ( BindPaths )
          {
            if ( BindPaths->Number >= Number
              && ndisEqualUnicodeStringDispatchLevel(&DestinationString, BindPaths->Paths) )
            {
              if ( *a2 )
              {
                ndisDereferenceMiniport(*a2, a4);
                *a2 = 0LL;
              }
              Number = i->BindPaths->Number;
              if ( (unsigned __int8)ndisReferenceMiniport(i, a4) )
                goto LABEL_16;
              goto LABEL_17;
            }
          }
        }
LABEL_12:
        ;
      }
      if ( v13 || !ndisEqualUnicodeStringDispatchLevel(&DestinationString, &i->MiniportName) )
        goto LABEL_12;
      if ( (unsigned __int8)ndisReferenceMiniport(i, a4) )
LABEL_16:
        *a2 = i;
LABEL_17:
      KeReleaseSpinLockFromDpcLevel(&v10->Ref.SpinLock);
      v10 = v10->NextDriver;
      if ( !v10 )
      {
LABEL_18:
        KeReleaseSpinLock(&ndisMiniDriverListLock, v11);
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v15) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v15,
            13,
            11,
            (struct _GUID *)&WPP_3046af50312d39676cde585a7c547f92_Traceguids,
            (char)*a2);
        }
        return;
      }
    }
  }
}
