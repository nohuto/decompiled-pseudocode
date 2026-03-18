/*
 * XREFs of AcpiDeviceResetCompleteResetWorker @ 0x14005D700
 * Callers:
 *     <none>
 * Callees:
 *     AcpiDeviceResetDereference @ 0x14004E720 (AcpiDeviceResetDereference.c)
 *     AcpiResetDeviceAlreadyProcessed @ 0x14005DCB4 (AcpiResetDeviceAlreadyProcessed.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

void __fastcall AcpiDeviceResetCompleteResetWorker(volatile signed __int32 *P)
{
  volatile signed __int32 *v1; // rdi
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbp
  _QWORD *v5; // rsi
  _QWORD *v6; // r15
  char v7; // bl
  KIRQL v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  PIRP Irp; // rax
  IRP *v12; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _QWORD *v14; // rsi
  _QWORD *v15; // rbx
  __int64 v16; // rdx
  _QWORD *v17; // rbp
  __int64 v18; // rcx
  __int128 v19; // [rsp+20h] [rbp-58h] BYREF
  __int128 v20; // [rsp+30h] [rbp-48h]
  void (__fastcall *v21)(_QWORD); // [rsp+40h] [rbp-38h]

  v19 = 0LL;
  v1 = P;
  v20 = 0LL;
  v21 = 0LL;
  _InterlockedAdd(P, 1u);
  LOBYTE(v3) = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v4 = *((_QWORD *)v1 + 9);
  if ( !*((_BYTE *)v1 + 18) )
  {
    v5 = *(_QWORD **)(v4 + 48);
    if ( v5 != (_QWORD *)(v4 + 48) )
    {
      do
      {
        v6 = v5 - 5;
        v5 = (_QWORD *)*v5;
        v7 = AcpiResetDeviceAlreadyProcessed(v4, v6, v2, v3, v19);
        KeReleaseSpinLock(&AcpiPowerLock, v8);
        if ( !v7 )
        {
          v9 = v6[4];
          if ( v9 )
          {
            v10 = *(_QWORD *)(v9 + 768);
            if ( v10 )
            {
              Irp = IoAllocateIrp(*(_BYTE *)(v10 + 76), 0);
              v12 = Irp;
              if ( Irp )
              {
                Irp->IoStatus.Information = 0LL;
                CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
                Irp->IoStatus.Status = -1073741637;
                CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
                CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)&v19;
                CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_REENUMERATE_SELF_INTERFACE_STANDARD;
                *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
                CurrentStackLocation[-1].Parameters.Create.Options = 65576;
                if ( (int)IoSynchronousCallDriver(*(_QWORD *)(v6[4] + 768LL), Irp) >= 0 )
                {
                  v21(*((_QWORD *)&v19 + 1));
                  (*((void (__fastcall **)(_QWORD))&v20 + 1))(*((_QWORD *)&v19 + 1));
                }
                IoFreeIrp(v12);
              }
            }
          }
        }
        LOBYTE(v3) = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      }
      while ( v5 != (_QWORD *)(v4 + 48) );
      v1 = P;
    }
  }
  v14 = (_QWORD *)(v4 + 48);
  v15 = *(_QWORD **)(v4 + 48);
  while ( v15 != v14 )
  {
    v16 = *(v15 - 1);
    v15 = (_QWORD *)*v15;
    v17 = *(_QWORD **)(v16 + 952);
    *(_QWORD *)(v16 + 952) = 0LL;
    KeReleaseSpinLock(&AcpiPowerLock, v3);
    if ( v17 )
      AcpiDeviceResetDereference(v17);
    LOBYTE(v3) = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  }
  KeReleaseSpinLock(&AcpiPowerLock, v3);
  v18 = *((_QWORD *)v1 + 3);
  if ( v18 )
  {
    *(_DWORD *)(v18 + 48) = *((_DWORD *)v1 + 8);
    IofCompleteRequest(*((PIRP *)v1 + 3), 0);
  }
  *((_QWORD *)v1 + 3) = 0LL;
  _InterlockedAnd(v1 + 22, 0);
  AcpiDeviceResetDereference(v1);
}
