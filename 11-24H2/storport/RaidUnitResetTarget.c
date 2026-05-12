/*
 * XREFs of RaidUnitResetTarget @ 0x14009FE7C
 * Callers:
 *     RaidUnitHierarchicalReset @ 0x14009F474 (RaidUnitHierarchicalReset.c)
 * Callees:
 *     StorBuildSynchronousScsiRequest @ 0x14000C61C (StorBuildSynchronousScsiRequest.c)
 *     StorFreeSynchronousScsiRequest @ 0x14000D344 (StorFreeSynchronousScsiRequest.c)
 *     RaidAllocateSrb @ 0x14000EB90 (RaidAllocateSrb.c)
 *     RaSendIrpSynchronous @ 0x140015550 (RaSendIrpSynchronous.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     McTemplateK0quu_EtwWriteTransfer @ 0x1400904E4 (McTemplateK0quu_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitResetTarget(__int64 a1)
{
  __int64 v2; // rdi
  _DWORD *v3; // r15
  int v4; // ebx
  __int64 v5; // r15
  __int64 Srb; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rsi
  NTSTATUS Status; // r15d
  __int64 v10; // rcx
  unsigned int LockArray_high; // eax
  __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // eax
  IRP *v15; // rax
  IRP *v16; // r13
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int64 v20; // r9
  char v21; // r10
  unsigned __int8 i; // al
  char v23; // di
  __int64 v24; // rcx
  char v26; // [rsp+38h] [rbp-89h] BYREF
  char v27; // [rsp+39h] [rbp-88h] BYREF
  char v28; // [rsp+3Ah] [rbp-87h] BYREF
  int v29; // [rsp+3Ch] [rbp-85h]
  int v30; // [rsp+40h] [rbp-81h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-79h] BYREF
  _IO_STATUS_BLOCK v32; // [rsp+50h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+68h] [rbp-59h] BYREF
  __int64 v34; // [rsp+88h] [rbp-39h]
  __int64 v35; // [rsp+90h] [rbp-31h]
  int *v36; // [rsp+98h] [rbp-29h]
  __int64 v37; // [rsp+A0h] [rbp-21h]
  char *v38; // [rsp+A8h] [rbp-19h]
  __int64 v39; // [rsp+B0h] [rbp-11h]
  char *v40; // [rsp+B8h] [rbp-9h]
  __int64 v41; // [rsp+C0h] [rbp-1h]
  char *v42; // [rsp+C8h] [rbp+7h]
  __int64 v43; // [rsp+D0h] [rbp+Fh]
  unsigned __int64 *v44; // [rsp+D8h] [rbp+17h]
  __int64 v45; // [rsp+E0h] [rbp+1Fh]

  v32 = 0LL;
  v2 = MEMORY[0xFFFFF78000000014];
  v3 = *(_DWORD **)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 104);
  v29 = v4;
  if ( *v3 == 1314275652 )
  {
    v5 = (__int64)v3 + 274;
  }
  else if ( *v3 == 1094997074 )
  {
    v5 = (__int64)v3 + 482;
  }
  else
  {
    v5 = 98LL;
  }
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x13u, *(_BYTE *)v5, 0);
  v8 = Srb;
  if ( Srb )
  {
    if ( *(_BYTE *)v5 == 1 )
    {
      v10 = *(unsigned int *)(Srb + 52);
      *(_DWORD *)(Srb + 20) = 19;
      *(_BYTE *)(v10 + Srb + 8) = *(_BYTE *)(a1 + 104);
      *(_BYTE *)(v10 + Srb + 9) = *(_BYTE *)(a1 + 105);
      *(_BYTE *)(v10 + Srb + 10) = 0;
      *(_DWORD *)(Srb + 24) = 524560;
      v7 = *(_QWORD *)(a1 + 24);
      if ( *(_DWORD *)v7 == 1094997074 && (*(_BYTE *)(v7 + 111) & 4) != 0 )
      {
        LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
        _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(v7 + 6168) + 8LL * LockArray_high));
        v12 = **(_QWORD **)(*(_QWORD *)(v7 + 6168) + 8LL * LockArray_high);
        *(_DWORD *)(v8 + 44) = HIDWORD(v12);
      }
      else
      {
        LODWORD(v12) = -1;
      }
      *(_DWORD *)(v8 + 32) = v12;
      *(_QWORD *)(v8 + 64) = 0LL;
      *(_DWORD *)(v8 + 60) = 0;
      *(_QWORD *)(v8 + 80) = 0LL;
      if ( *(_BYTE *)(a1 + 3368) )
      {
        v13 = *(_DWORD *)(a1 + 3388);
      }
      else
      {
        v13 = *(_DWORD *)(a1 + 1392);
        if ( v13 < 0x1E )
          v13 = 30;
      }
      *(_DWORD *)(v8 + 40) = v13;
    }
    else
    {
      *(_WORD *)Srb = 88;
      *(_BYTE *)(Srb + 2) = 19;
      *(_BYTE *)(Srb + 5) = *(_BYTE *)(a1 + 104);
      *(_BYTE *)(Srb + 6) = *(_BYTE *)(a1 + 105);
      *(_WORD *)(Srb + 7) = -256;
      *(_QWORD *)(Srb + 12) = 524560LL;
      *(_QWORD *)(Srb + 24) = 0LL;
      *(_QWORD *)(Srb + 48) = 0LL;
      if ( *(_BYTE *)(a1 + 3368) )
      {
        v14 = *(_DWORD *)(a1 + 3388);
      }
      else
      {
        v14 = *(_DWORD *)(a1 + 1392);
        if ( v14 < 0x1E )
          v14 = 30;
      }
      *(_DWORD *)(v8 + 20) = v14;
    }
    v15 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), v8, v7, &v32);
    v16 = v15;
    if ( v15 )
    {
      Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v15);
      if ( Status >= 0 )
        Status = v16->IoStatus.Status;
      StorFreeSynchronousScsiRequest(v16);
      v19 = *(_QWORD *)(a1 + 24);
      v20 = MEMORY[0xFFFFF78000000014] - v2;
      v21 = *(_BYTE *)(v8 + 3);
      if ( v19 )
      {
        for ( i = 0; i < 5u; ++i )
        {
          v17 = i;
          v18 = (__int64)TraceLoggingResetLatencyBuckets;
          if ( v20 <= TraceLoggingResetLatencyBuckets[i] )
          {
            v18 = 3LL * i;
            ++*(_DWORD *)(v19 + 12LL * i + 5152);
            if ( (v21 & 0x3F) == 1 )
              ++*(_DWORD *)(v19 + 12LL * i + 5156);
            else
              *(_BYTE *)(v19 + 12LL * i + 5160) = v21;
            break;
          }
        }
      }
      v23 = BYTE1(v29);
      if ( (unsigned int)dword_140170178 > 5 )
      {
        v24 = *(_QWORD *)(a1 + 24);
        v35 = 16LL;
        v34 = v24 + 5064;
        v30 = *(_DWORD *)(v24 + 56);
        v36 = &v30;
        v38 = &v26;
        v40 = &v27;
        v37 = 4LL;
        v26 = v4;
        v39 = 1LL;
        v27 = BYTE1(v29);
        v41 = 1LL;
        v28 = *(_BYTE *)(v8 + 3);
        v42 = &v28;
        v44 = &v31;
        v43 = 1LL;
        v31 = v20;
        v45 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(8LL, (unsigned __int8 *)dword_14015E732, v18, v20, 8u, &v33);
      }
      if ( (Microsoft_Windows_StorPortEnableBits & 1) != 0 )
        McTemplateK0quu_EtwWriteTransfer(v19, v17, v18, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL), v4, v23);
    }
    else
    {
      Status = -1073741801;
    }
    ExFreePoolWithTag((PVOID)v8, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Status;
}
