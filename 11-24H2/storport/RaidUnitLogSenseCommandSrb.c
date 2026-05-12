/*
 * XREFs of RaidUnitLogSenseCommandSrb @ 0x14009F72C
 * Callers:
 *     RaidUnitLogSenseTemperatureSrb @ 0x14009FA80 (RaidUnitLogSenseTemperatureSrb.c)
 *     StorpTelemetrySendUnitScsiDiagnostics @ 0x1400BBFC8 (StorpTelemetrySendUnitScsiDiagnostics.c)
 * Callees:
 *     StorBuildSynchronousScsiRequest @ 0x14000C61C (StorBuildSynchronousScsiRequest.c)
 *     StorFreeSynchronousScsiRequest @ 0x14000D344 (StorFreeSynchronousScsiRequest.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x14000D390 (PortSrbTranslateSrbToNtStatus.c)
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidAllocateSrb @ 0x14000EB90 (RaidAllocateSrb.c)
 *     RaSendIrpSynchronous @ 0x140015550 (RaSendIrpSynchronous.c)
 */

__int64 __fastcall RaidUnitLogSenseCommandSrb(__int64 a1, __int64 a2, char a3, char a4, char *a5, _BYTE *a6)
{
  _DWORD *v6; // rax
  _BYTE *v9; // rsi
  char *v10; // r12
  __int64 v11; // r15
  _BYTE *Srb; // rdi
  int Status; // ebx
  __int64 v14; // r8
  char v15; // al
  unsigned int LockArray_high; // eax
  __int64 v17; // rdx
  char *v18; // r14
  _BYTE *v19; // r13
  __int64 v20; // rcx
  char *v21; // rcx
  IRP *v22; // rax
  IRP *v23; // rbp
  unsigned int v24; // ecx
  PVOID P; // [rsp+20h] [rbp-58h]
  _IO_STATUS_BLOCK v27; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int16 v28; // [rsp+80h] [rbp+8h]

  v27 = 0LL;
  v6 = *(_DWORD **)(a1 + 24);
  v9 = 0LL;
  v10 = 0LL;
  if ( *v6 == 1314275652 )
  {
    v11 = (__int64)v6 + 274;
  }
  else
  {
    v11 = (__int64)v6 + 482;
    if ( *v6 != 1094997074 )
      v11 = 98LL;
  }
  Srb = (_BYTE *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)v11, 1);
  if ( !Srb )
    return (unsigned int)-1073741801;
  P = (PVOID)RaidAllocatePool(64LL, 255LL, 1314087250LL, *(_QWORD *)(a1 + 8));
  if ( P )
  {
    v15 = *(_BYTE *)v11;
    Srb[3] = 0;
    if ( v15 == 1 )
    {
      *((_DWORD *)Srb + 5) = 0;
      v9 = Srb;
      *((_DWORD *)Srb + 6) = 524626;
      v14 = *(_QWORD *)(a1 + 24);
      if ( *(_DWORD *)v14 == 1094997074 && (*(_BYTE *)(v14 + 111) & 4) != 0 )
      {
        LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
        _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(v14 + 6168) + 8LL * LockArray_high));
        v17 = **(_QWORD **)(*(_QWORD *)(v14 + 6168) + 8LL * LockArray_high);
        *((_DWORD *)Srb + 11) = HIDWORD(v17);
      }
      else
      {
        LODWORD(v17) = -1;
      }
      v18 = a5;
      v19 = a6;
      *((_DWORD *)Srb + 8) = v17;
      v20 = *((unsigned int *)Srb + 13);
      *((_QWORD *)Srb + 8) = a6;
      *((_DWORD *)Srb + 15) = *(_DWORD *)a5;
      *((_QWORD *)Srb + 10) = a2;
      *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 1392);
      Srb[v20 + 8] = *(_BYTE *)(a1 + 104);
      Srb[v20 + 9] = *(_BYTE *)(a1 + 105);
      Srb[v20 + 10] = *(_BYTE *)(a1 + 106);
      v10 = &Srb[*((unsigned int *)Srb + 30)];
      *(_DWORD *)v10 = 64;
      v21 = v10 + 24;
      *((_DWORD *)v10 + 1) = 32;
      *((_WORD *)v10 + 4) = -256;
      *((_QWORD *)v10 + 2) = P;
      v10[10] = 10;
    }
    else
    {
      v19 = a6;
      v21 = Srb + 72;
      Srb[2] = 0;
      v18 = a5;
      *(_WORD *)Srb = 88;
      *((_DWORD *)Srb + 3) = 524626;
      Srb[5] = *(_BYTE *)(a1 + 104);
      Srb[6] = *(_BYTE *)(a1 + 105);
      Srb[7] = *(_BYTE *)(a1 + 106);
      Srb[8] = -1;
      *((_QWORD *)Srb + 3) = a6;
      *((_DWORD *)Srb + 4) = *(_DWORD *)a5;
      *((_QWORD *)Srb + 6) = a2;
      *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 1392);
      *((_WORD *)Srb + 5) = -246;
      *((_QWORD *)Srb + 4) = P;
    }
    if ( Srb[2] == 40 )
      *((_WORD *)Srb + 19) = 32;
    else
      Srb[9] = 32;
    *(_WORD *)(v21 + 5) = 0;
    v21[3] = a4;
    *v21 = 77;
    v21[2] = a3 & 0x3F;
    v21[8] = *v18;
    v21[7] = v18[1];
    v22 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), (unsigned __int64)Srb, v14, &v27);
    v23 = v22;
    if ( !v22 )
    {
      Status = -1073741801;
LABEL_34:
      ExFreePoolWithTag(P, 0x4E536152u);
      goto LABEL_35;
    }
    Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v22);
    if ( Status >= 0 )
    {
      Status = v23->IoStatus.Status;
      if ( Status >= 0 )
        Status = PortSrbTranslateSrbToNtStatus(Srb[3]);
    }
    if ( Status == -2147483643 )
    {
      if ( *((_DWORD *)Srb + 4) <= *(_DWORD *)v18 )
      {
        Status = 0;
        Srb[3] = 1;
      }
    }
    else if ( Status < 0 )
    {
LABEL_33:
      StorFreeSynchronousScsiRequest(v23);
      goto LABEL_34;
    }
    if ( *((_DWORD *)Srb + 4) >= 4u && (HIBYTE(v28) = v19[2], LOBYTE(v28) = v19[3], v24 = v28 + 4, (*v19 & 0x3F) == a3) )
    {
      if ( v24 < *(_DWORD *)v18 )
        *(_DWORD *)v18 = v24;
    }
    else
    {
      Status = -1073741668;
    }
    goto LABEL_33;
  }
  Status = -1073741801;
LABEL_35:
  if ( *(_BYTE *)v11 == 1 )
  {
    if ( !v9 )
      v9 = Srb;
    *((_QWORD *)v9 + 10) = 0LL;
    *((_QWORD *)v9 + 13) = 0LL;
    if ( v10 )
      *((_QWORD *)v10 + 2) = 0LL;
  }
  else
  {
    *((_QWORD *)Srb + 6) = 0LL;
    *((_QWORD *)Srb + 7) = 0LL;
    *((_QWORD *)Srb + 4) = 0LL;
  }
  ExFreePoolWithTag(Srb, 0x72536152u);
  return (unsigned int)Status;
}
