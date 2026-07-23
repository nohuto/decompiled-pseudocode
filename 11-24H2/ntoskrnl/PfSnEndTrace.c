/*
 * XREFs of PfSnEndTrace @ 0x14095A268
 * Callers:
 *     PfSnEndTraceWorkerThreadRoutine @ 0x14095A250 (PfSnEndTraceWorkerThreadRoutine.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PfpPartitionDereferenceParent @ 0x14022A25C (PfpPartitionDereferenceParent.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1402B92A8 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PfSnDeactivateTrace @ 0x1402BC3D4 (PfSnDeactivateTrace.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PfpPartitionReferenceParentSafeByProcess @ 0x140418850 (PfpPartitionReferenceParentSafeByProcess.c)
 *     PfFbBufferListFlushStandby @ 0x140473B84 (PfFbBufferListFlushStandby.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PfSnBuildDumpFromTrace @ 0x14095A5E0 (PfSnBuildDumpFromTrace.c)
 *     PfSnLogEndTrace @ 0x14095A830 (PfSnLogEndTrace.c)
 *     PfSnCleanupTrace @ 0x14095A93C (PfSnCleanupTrace.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnEndTrace(char *P)
{
  __int128 v1; // xmm0
  char v2; // di
  __int128 v3; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  char PreviousMode; // r12
  int v8; // edx
  int v9; // ecx
  __int64 v10; // rax
  int v11; // eax
  int v12; // esi
  _QWORD *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r15
  _QWORD *v16; // rax
  unsigned int v18; // eax
  PVOID v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // r9d
  int v24; // r10d
  char v25; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+34h] [rbp-CCh] BYREF
  int v27; // [rsp+38h] [rbp-C8h] BYREF
  PVOID Pa; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v31[3]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v32; // [rsp+90h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR v33[2]; // [rsp+A0h] [rbp-60h] BYREF
  int *v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+CCh] [rbp-34h]
  _BYTE v37[16]; // [rsp+D0h] [rbp-30h] BYREF
  int *v38; // [rsp+E0h] [rbp-20h]
  int v39; // [rsp+E8h] [rbp-18h]
  int v40; // [rsp+ECh] [rbp-14h]
  int *v41; // [rsp+F0h] [rbp-10h]
  int v42; // [rsp+F8h] [rbp-8h]
  int v43; // [rsp+FCh] [rbp-4h]
  char *v44; // [rsp+100h] [rbp+0h]
  int v45; // [rsp+108h] [rbp+8h]
  int v46; // [rsp+10Ch] [rbp+Ch]

  v1 = *(_OWORD *)(P + 24);
  Pa = 0LL;
  v2 = 1;
  v3 = *(_OWORD *)(P + 40);
  v29 = 0LL;
  v31[0] = v1;
  v5 = *(_OWORD *)(P + 56);
  v31[1] = v3;
  v6 = *(_OWORD *)(P + 72);
  v31[2] = v5;
  v32 = v6;
  if ( (unsigned int)dword_140E074B8 > 4 && (byte_140E074C8 & 1) != 0 && (qword_140E074D0 & 1) == qword_140E074D0 )
  {
    v22 = *((_QWORD *)P + 44);
    v36 = 0;
    v30 = v22;
    v34 = (int *)&v30;
    v35 = 8;
    tlgCreate1Sz_wchar_t((__int64)v37, (const wchar_t *)v31);
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v38 = &v26;
    v27 = *((_DWORD *)P + 100);
    v41 = &v27;
    v25 = P[88];
    v44 = &v25;
    v26 = HIDWORD(v32);
    v39 = v23;
    v42 = v23;
    v45 = 1;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E074B8, (unsigned __int8 *)byte_1400486BB, 0LL, 0LL, 7u, v33);
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  KeGetCurrentThread()->PreviousMode = 0;
  PfSnDeactivateTrace((__int64)P);
  PfSnLogEndTrace(P);
  v8 = *((_DWORD *)P + 81);
  v9 = *((_DWORD *)P + 83);
  if ( v8 > v9 )
  {
    *((_DWORD *)P + 81) = v9;
    v8 = v9;
  }
  v10 = *((int *)P + 82);
  if ( (int)v10 >= dword_140E66FA4 )
  {
    if ( (int)v10 > 10 )
    {
      *((_DWORD *)P + 82) = 10;
      LODWORD(v10) = 10;
    }
    if ( v8 != v9 )
      *(_DWORD *)&P[4 * (int)v10 + 280] += v9 - v8;
  }
  else
  {
    *(_DWORD *)&P[4 * v10 + 284] = v9 - v8;
    v11 = *((_DWORD *)P + 83);
    ++*((_DWORD *)P + 82);
    *((_DWORD *)P + 81) = v11;
  }
  if ( *((_DWORD *)P + 22) != 1 || *((_DWORD *)P + 100) == 8 )
    v12 = PfSnBuildDumpFromTrace(&Pa, P);
  else
    v12 = -2147483614;
  v13 = Pa;
  v14 = *((_QWORD *)P + 44);
  *((_QWORD *)P + 56) = Pa;
  *((_DWORD *)P + 114) = v12;
  v15 = PfpPartitionReferenceParentSafeByProcess(&v29, v14);
  PfSnCleanupTrace(P);
  ExFreePoolWithTag(P, 0);
  if ( v12 >= 0 )
  {
    if ( v15 && v29 && *(_DWORD *)(v29 + 608) < *(_DWORD *)(v29 + 612) )
      PfFbBufferListFlushStandby(v29, v29 + 288);
    ExAcquireFastMutex(&stru_140E67178);
    if ( dword_140E671B4 == 1 )
    {
      KeReleaseGuardedMutex(&stru_140E67178);
      ExFreePoolWithTag(v13, 0);
    }
    else
    {
      v16 = qword_140E67170;
      if ( *(PVOID **)qword_140E67170 != &qword_140E67168 )
LABEL_12:
        __fastfail(3u);
      v13[1] = qword_140E67170;
      *v13 = &qword_140E67168;
      *v16 = v13;
      v18 = dword_140E671B0 + 1;
      qword_140E67170 = v13;
      while ( 1 )
      {
        dword_140E671B0 = v18;
        if ( v18 <= dword_140E66E3C )
          break;
        v20 = qword_140E67168;
        if ( qword_140E67168 == &qword_140E67168 )
          break;
        if ( *((PVOID **)qword_140E67168 + 1) != &qword_140E67168 )
          goto LABEL_12;
        v21 = *(_QWORD *)qword_140E67168;
        if ( *(PVOID *)(*(_QWORD *)qword_140E67168 + 8LL) != qword_140E67168 )
          goto LABEL_12;
        qword_140E67168 = *(PVOID *)qword_140E67168;
        *(_QWORD *)(v21 + 8) = &qword_140E67168;
        ExFreePoolWithTag(v20, 0);
        v18 = dword_140E671B0 - 1;
      }
      KeReleaseGuardedMutex(&stru_140E67178);
      if ( qword_140E671B8 )
        KeSetEvent(qword_140E671B8, 0, 0);
      v12 = 0;
    }
  }
  if ( v15 )
    PfpPartitionDereferenceParent(v15);
  KeGetCurrentThread()->PreviousMode = PreviousMode;
  if ( (unsigned int)dword_140E074B8 > 4 )
  {
    if ( (byte_140E074C8 & 1) == 0 || (qword_140E074D0 & 1) != qword_140E074D0 )
      v2 = 0;
    if ( v2 )
    {
      v36 = 0;
      v34 = &v27;
      v27 = v12;
      v35 = 4;
      tlgCreate1Sz_wchar_t((__int64)v37, (const wchar_t *)v31);
      v40 = 0;
      v38 = &v26;
      v26 = HIDWORD(v32);
      v39 = v24;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E074B8,
        (unsigned __int8 *)&word_14004867E,
        0LL,
        0LL,
        5u,
        v33);
    }
  }
  return (unsigned int)v12;
}
