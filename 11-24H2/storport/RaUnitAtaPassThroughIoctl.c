/*
 * XREFs of RaUnitAtaPassThroughIoctl @ 0x14004D8C4
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidAllocateSrb @ 0x14000EB90 (RaidAllocateSrb.c)
 *     RaSendIrpSynchronous @ 0x140015550 (RaSendIrpSynchronous.c)
 *     PortPassThroughBuildIrpEx @ 0x140032938 (PortPassThroughBuildIrpEx.c)
 *     RaUnitAtaPassThroughMarshalResults @ 0x1400334A4 (RaUnitAtaPassThroughMarshalResults.c)
 *     RaUnitAtaPassThroughValidateInput @ 0x140035D90 (RaUnitAtaPassThroughValidateInput.c)
 *     RaUnitSetAtaPassThroughCdb @ 0x14003668C (RaUnitSetAtaPassThroughCdb.c)
 *     PortPassThroughFreeIrpEx @ 0x1400378D4 (PortPassThroughFreeIrpEx.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     Feature_Servicing_AtaOutOfBoundAccessFix__private_IsEnabledDeviceUsageNoInline @ 0x14009043C (Feature_Servicing_AtaOutOfBoundAccessFix__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitAtaPassThroughIoctl(__int64 a1, IRP *a2, char a3)
{
  __int64 v3; // rax
  _BYTE *v4; // r13
  _IRP *v6; // r14
  __int64 v7; // rcx
  int Status; // edi
  _IRP *MasterIrp; // rdi
  _IRP *v12; // rbx
  _IRP *v13; // rcx
  __int128 v14; // xmm0
  __int64 v15; // xmm1_8
  __int64 MdlAddress_low; // rdx
  __int64 v17; // rcx
  unsigned int v18; // eax
  ULONG *p_MdlAddress; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned int v22; // eax
  KPROCESSOR_MODE AccessMode; // al
  PIRP v24; // r12
  _BYTE *Srb; // rbx
  char v26; // cl
  int v27; // ecx
  __int64 v28; // rcx
  char *v29; // rax
  _BYTE *v30; // rdx
  int v31; // ecx
  int MdlAddress; // eax
  _IRP *v33; // rcx
  __int64 v34; // rcx
  PVOID P; // [rsp+58h] [rbp-31h]
  __int128 v38; // [rsp+60h] [rbp-29h] BYREF
  __int128 v39; // [rsp+70h] [rbp-19h] BYREF
  __int128 v40; // [rsp+80h] [rbp-9h]
  __int128 v41; // [rsp+90h] [rbp+7h]

  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0LL;
  P = 0LL;
  *(_QWORD *)&v38 = 0LL;
  v6 = 0LL;
  v7 = *(_QWORD *)(v3 + 608);
  v39 = 0LL;
  LODWORD(v3) = *(_DWORD *)(v7 + 184);
  v40 = 0LL;
  v41 = 0LL;
  if ( (v3 & 2) == 0 && (*(_BYTE *)(a1 + 506) & 0x10) == 0 )
  {
    Status = -1073741808;
    goto LABEL_72;
  }
  Status = RaUnitAtaPassThroughValidateInput(a1, a2, a3);
  if ( Status < 0 )
    goto LABEL_72;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v12 = MasterIrp;
  if ( IoIs32bitProcess(a2) )
  {
    v13 = a2->AssociatedIrp.MasterIrp;
    MasterIrp = (_IRP *)&v39;
    v14 = *(_OWORD *)&v13->Type;
    *((_QWORD *)&v41 + 1) = v13->ThreadListEntry.Flink;
    v15 = *(_QWORD *)&v13->Flags;
    *(_QWORD *)&v41 = v13->AssociatedIrp.MasterIrp;
    *((_QWORD *)&v40 + 1) = *(&v13->Flags + 1);
    v39 = v14;
    *(_QWORD *)&v40 = v15;
  }
  if ( DisableIEEE1667
    && ((BYTE6(MasterIrp->ThreadListEntry.Blink) - 92) & 0xFD) == 0
    && LOBYTE(MasterIrp->ThreadListEntry.Blink) == 0xEE )
  {
    Status = -1073741637;
    goto LABEL_72;
  }
  if ( (unsigned int)Feature_Servicing_AtaOutOfBoundAccessFix__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (MasterIrp->Size & 6) != 0 )
    {
      MdlAddress_low = LODWORD(MasterIrp->MdlAddress);
      if ( (_DWORD)MdlAddress_low )
      {
        v6 = MasterIrp->AssociatedIrp.MasterIrp;
        if ( !a3 )
          v6 = (_IRP *)((char *)v6 + (_QWORD)v12);
        v17 = *(_QWORD *)(a1 + 24);
        if ( *(_BYTE *)(v17 + 4370) )
        {
          v18 = *(_DWORD *)(v17 + 892);
          if ( *(_DWORD *)(v17 + 412) < v18 )
            v18 = *(_DWORD *)(v17 + 412);
        }
        else
        {
          v18 = *(_DWORD *)(v17 + 412);
        }
        if ( (unsigned int)MdlAddress_low > *(_DWORD *)(v17 + 408)
          || (unsigned int)((MdlAddress_low + (unsigned __int64)((unsigned __int16)v6 & 0xFFF) + 4095) >> 12) > v18 )
        {
LABEL_23:
          Status = -1073741811;
          goto LABEL_72;
        }
      }
    }
    p_MdlAddress = (ULONG *)&MasterIrp->MdlAddress;
  }
  else
  {
    p_MdlAddress = (ULONG *)&MasterIrp->MdlAddress;
    v20 = LODWORD(MasterIrp->MdlAddress);
    if ( (_DWORD)v20 )
    {
      v6 = MasterIrp->AssociatedIrp.MasterIrp;
      if ( !a3 )
        v6 = (_IRP *)((char *)v6 + (_QWORD)v12);
      v21 = *(_QWORD *)(a1 + 24);
      if ( *(_BYTE *)(v21 + 4370) )
      {
        v22 = *(_DWORD *)(v21 + 892);
        if ( *(_DWORD *)(v21 + 412) < v22 )
          v22 = *(_DWORD *)(v21 + 412);
      }
      else
      {
        v22 = *(_DWORD *)(v21 + 412);
      }
      if ( (unsigned int)v20 > *(_DWORD *)(v21 + 408)
        || (unsigned int)((v20 + (unsigned __int64)((unsigned __int16)v6 & 0xFFF) + 4095) >> 12) > v22 )
      {
        goto LABEL_23;
      }
    }
  }
  if ( a3 )
    AccessMode = a2->RequestorMode;
  else
    AccessMode = 0;
  v24 = PortPassThroughBuildIrpEx(
          *(_QWORD *)(a1 + 8),
          v6,
          *p_MdlAddress,
          MasterIrp->Size & 2,
          AccessMode,
          a2,
          0,
          0LL,
          0,
          0LL);
  if ( v24 )
  {
    Srb = (_BYTE *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)(*(_QWORD *)(a1 + 24) + 482LL), 1);
    if ( Srb && (P = (PVOID)RaidAllocatePool(64LL, 79LL, 1314087250LL, *(_QWORD *)(a1 + 8))) != 0LL )
    {
      v26 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 482LL);
      Srb[3] = 0;
      if ( v26 == 1 )
      {
        *((_DWORD *)Srb + 5) = 0;
        v4 = Srb;
        if ( (MasterIrp->Size & 2) != 0 )
          *((_DWORD *)Srb + 6) |= 0x40u;
        if ( (MasterIrp->Size & 4) != 0 )
          *((_DWORD *)Srb + 6) |= 0x80u;
        v27 = *((_DWORD *)Srb + 6) | 0x100;
        *((_DWORD *)Srb + 6) = v27;
        if ( (*(_BYTE *)(a1 + 505) & 0x10) == 0 )
          v27 |= 0x80000u;
        *((_DWORD *)Srb + 6) = v27 | 0x2000000;
        v28 = *((unsigned int *)Srb + 13);
        *((_DWORD *)Srb + 15) = MasterIrp->MdlAddress;
        *((_QWORD *)Srb + 8) = v6;
        *((_QWORD *)Srb + 10) = v24;
        *((_DWORD *)Srb + 10) = HIDWORD(MasterIrp->MdlAddress);
        Srb[v28 + 8] = *((_BYTE *)&MasterIrp->Size + 2);
        Srb[v28 + 9] = *((_BYTE *)&MasterIrp->Size + 3);
        Srb[v28 + 10] = *((_BYTE *)&MasterIrp->Size + 4);
        v29 = &Srb[*((unsigned int *)Srb + 30)];
        *(_QWORD *)&v38 = v29;
        *((_QWORD *)v29 + 2) = P;
        v30 = v29 + 24;
        *(_DWORD *)v29 = 64;
        *((_DWORD *)v29 + 1) = 32;
        *(_WORD *)(v29 + 9) = 4175;
      }
      else
      {
        *(_WORD *)Srb = 88;
        Srb[2] = 0;
        Srb[5] = *((_BYTE *)&MasterIrp->Size + 2);
        Srb[6] = *((_BYTE *)&MasterIrp->Size + 3);
        Srb[7] = *((_BYTE *)&MasterIrp->Size + 4);
        Srb[10] = 16;
        if ( (MasterIrp->Size & 2) != 0 )
          *((_DWORD *)Srb + 3) |= 0x40u;
        if ( (MasterIrp->Size & 4) != 0 )
          *((_DWORD *)Srb + 3) |= 0x80u;
        v31 = *((_DWORD *)Srb + 3) | 0x100;
        *((_DWORD *)Srb + 3) = v31;
        if ( (*(_BYTE *)(a1 + 505) & 0x10) == 0 )
          v31 |= 0x80000u;
        *((_DWORD *)Srb + 3) = v31 | 0x2000000;
        MdlAddress = (int)MasterIrp->MdlAddress;
        *((_QWORD *)Srb + 4) = P;
        v30 = Srb + 72;
        *((_DWORD *)Srb + 4) = MdlAddress;
        *((_QWORD *)Srb + 3) = v6;
        Srb[11] = 79;
        *((_QWORD *)Srb + 6) = v24;
        *((_DWORD *)Srb + 5) = HIDWORD(MasterIrp->MdlAddress);
      }
      RaUnitSetAtaPassThroughCdb((__int64)MasterIrp, v30);
      v24->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Srb;
      RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v24);
      RaUnitAtaPassThroughMarshalResults((__int64)Srb, (unsigned __int16 *)MasterIrp, a3, (__int64)&a2->IoStatus);
      if ( IoIs32bitProcess(a2) )
      {
        v33 = a2->AssociatedIrp.MasterIrp;
        *(_OWORD *)&v33->Type = *(_OWORD *)&MasterIrp->Type;
        *(_QWORD *)&v33->Flags = *(_QWORD *)&MasterIrp->Flags;
        v33->ThreadListEntry.Flink = MasterIrp->ThreadListEntry.Blink;
        v33->AssociatedIrp.MasterIrp = (_IRP *)MasterIrp->ThreadListEntry.Flink;
      }
      Status = a2->IoStatus.Status;
    }
    else
    {
      Status = -1073741801;
    }
    PortPassThroughFreeIrpEx(v24);
    if ( Srb )
    {
      if ( P )
        ExFreePoolWithTag(P, 0x4E536152u);
      if ( Srb[2] == 40 )
      {
        if ( !v4 )
          v4 = Srb;
        if ( (_QWORD)v38 )
          *(_QWORD *)(v38 + 16) = 0LL;
        *((_QWORD *)v4 + 10) = 0LL;
        *((_QWORD *)v4 + 13) = 0LL;
      }
      else
      {
        *((_QWORD *)Srb + 4) = 0LL;
        *((_QWORD *)Srb + 6) = 0LL;
        *((_QWORD *)Srb + 7) = 0LL;
      }
      ExFreePoolWithTag(Srb, 0x72536152u);
    }
  }
  else
  {
    Status = -1073741801;
  }
LABEL_72:
  if ( StorEtwLoggingEnabled )
  {
    v38 = 0LL;
    IoGetActivityIdIrp(a2, &v38);
    if ( (byte_140171462 & 8) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v34, &EventNonReadWriteRequestComplete, &v38, a2, Status);
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
